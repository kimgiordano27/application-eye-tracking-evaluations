/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceResolverProvider
ENTRY_POINT: 0744dc54
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


void Newtonsoft_Json_JsonSerializerSettings__get_ReferenceResolverProvider(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  lVar5 = thunk_FUN_03f4e68c();
  FUN_056b0068(lVar5,*unaff_x20);
  puVar2 = PTR_DAT_09131240;
  lVar10 = *(long *)(unaff_x19 + 0x18);
  if (lVar10 != 0) {
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        plVar9 = *(long **)(lVar10 + uVar11 * 8 + 0x20);
        if (plVar9 == (long *)0x0) goto LAB_0744dda8;
        iVar3 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            uVar6 = (**(code **)(*plVar9 + 0x188))(plVar9,iVar3,*(undefined8 *)(*plVar9 + 400));
            if (lVar5 == 0) goto LAB_0744dda8;
            lVar7 = *(long *)(lVar5 + 0x10);
            lVar8 = *(long *)puVar2;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_0744dda8;
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
              thunk_FUN_03f86000();
            }
            else {
              FUN_056b08d0(lVar5,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            iVar3 = iVar3 + 1;
            iVar4 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
          } while (iVar3 < iVar4);
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar1);
    }
    puVar2 = PTR_DAT_09131248;
    if (lVar5 != 0) {
      FUN_056b0ae0(lVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_09131280);
      FUN_056b23bc(lVar5,*(undefined8 *)puVar2);
      return;
    }
  }
LAB_0744dda8:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


