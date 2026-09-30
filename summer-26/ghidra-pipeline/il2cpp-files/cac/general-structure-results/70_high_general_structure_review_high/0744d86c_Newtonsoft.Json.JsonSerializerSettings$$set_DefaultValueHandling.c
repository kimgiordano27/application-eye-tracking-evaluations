/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DefaultValueHandling
ENTRY_POINT: 0744d86c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DefaultValueHandling(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w22;
  int iVar9;
  undefined1 unaff_w24;
  undefined8 *unaff_x25;
  
  FUN_056b0068();
  plVar3 = (long *)thunk_FUN_03f4e68c(*unaff_x25);
  FUN_0744d37c(plVar3,unaff_w22 + 2,unaff_w20 & 1);
  puVar2 = PTR_DAT_09131240;
  if (plVar3 == (long *)0x0) {
LAB_0744d944:
    *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
    if (param_1 == 0) {
LAB_0744d984:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
  }
  else {
    iVar9 = unaff_w22 + 3;
    do {
      uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      uVar5 = FUN_073dfe84(uVar4,0,0);
      if ((uVar5 & 1) == 0) goto LAB_0744d944;
      if (param_1 == 0) goto LAB_0744d984;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)puVar2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0744d984;
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar6 = (long)plVar3;
        thunk_FUN_03f86000(plVar6,plVar3);
      }
      else {
        FUN_056b08d0(param_1,plVar3,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      plVar3 = (long *)thunk_FUN_03f4e68c(*unaff_x25);
      FUN_0744d37c(plVar3,iVar9,unaff_w20 & 1);
      iVar9 = iVar9 + 1;
    } while (plVar3 != (long *)0x0);
    *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
  }
  uVar4 = FUN_056b23bc(param_1,*(undefined8 *)PTR_DAT_09131248);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
  thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x10),uVar4);
  return;
}


