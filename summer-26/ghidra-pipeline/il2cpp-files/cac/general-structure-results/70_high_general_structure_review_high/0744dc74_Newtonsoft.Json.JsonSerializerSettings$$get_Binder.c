/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Binder
ENTRY_POINT: 0744dc74
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Binder(ulong param_1)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long *plVar6;
  long unaff_x23;
  ulong uVar7;
  
  if (in_NG == in_OV) {
    uVar7 = 0;
    do {
      if (param_1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      plVar6 = *(long **)(unaff_x23 + uVar7 * 8 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_0744dda8;
      iVar2 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,iVar2,*(undefined8 *)(*plVar6 + 400));
          if (unaff_x20 == 0) goto LAB_0744dda8;
          lVar5 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_0744dda8;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_03f86000();
          }
          else {
            FUN_056b08d0();
          }
          iVar2 = iVar2 + 1;
          iVar3 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
        } while (iVar2 < iVar3);
      }
      param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)*(uint *)(unaff_x23 + 0x18));
  }
  if (unaff_x20 != 0) {
    FUN_056b0ae0();
    FUN_056b23bc();
    return;
  }
LAB_0744dda8:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


