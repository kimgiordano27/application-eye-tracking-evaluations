/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$.ctor
ENTRY_POINT: 0744dc4c
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


void Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0___ctor(undefined8 *param_1)

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
  long unaff_x20;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  
  puVar9 = *(undefined8 **)(unaff_x20 + 0x250);
  lVar5 = thunk_FUN_03f4e68c(*param_1);
  FUN_056b0068(lVar5,*puVar9);
  puVar2 = PTR_DAT_09131240;
  lVar11 = *(long *)(unaff_x19 + 0x18);
  if (lVar11 != 0) {
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        plVar10 = *(long **)(lVar11 + uVar12 * 8 + 0x20);
        if (plVar10 == (long *)0x0) goto LAB_0744dda8;
        iVar3 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            uVar6 = (**(code **)(*plVar10 + 0x188))(plVar10,iVar3,*(undefined8 *)(*plVar10 + 400));
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
            iVar4 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          } while (iVar3 < iVar4);
        }
        uVar1 = *(uint *)(lVar11 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
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


