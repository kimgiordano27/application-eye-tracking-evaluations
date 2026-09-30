/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ReferenceResolverProvider
ENTRY_POINT: 0744dc5c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_ReferenceResolverProvider(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  FUN_056b0068();
  puVar2 = PTR_DAT_09131240;
  lVar9 = *(long *)(unaff_x19 + 0x18);
  if (lVar9 != 0) {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        plVar8 = *(long **)(lVar9 + uVar10 * 8 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_0744dda8;
        iVar3 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            uVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,iVar3,*(undefined8 *)(*plVar8 + 400));
            if (param_1 == 0) goto LAB_0744dda8;
            lVar6 = *(long *)(param_1 + 0x10);
            lVar7 = *(long *)puVar2;
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_0744dda8;
            uVar1 = *(uint *)(param_1 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(param_1 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
              thunk_FUN_03f86000();
            }
            else {
              FUN_056b08d0(param_1,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            iVar3 = iVar3 + 1;
            iVar4 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
          } while (iVar3 < iVar4);
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
    puVar2 = PTR_DAT_09131248;
    if (param_1 != 0) {
      FUN_056b0ae0(param_1,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_09131280);
      FUN_056b23bc(param_1,*(undefined8 *)puVar2);
      return;
    }
  }
LAB_0744dda8:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


