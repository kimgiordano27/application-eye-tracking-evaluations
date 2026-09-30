/*
FUNCTION_NAME: Best.HTTP.Request.Upload.JSonDataStream<object>$$set_Position
ENTRY_POINT: 03f65990
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Best_HTTP_Request_Upload_JSonDataStream<object>__set_Position
               (ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar2;
  
  if ((*param_1 & 1) == 0) {
    FUN_031c09d4(param_3);
  }
  lVar1 = thunk_FUN_031c3cac();
  if (lVar1 == 0) {
    uVar2 = **(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0593e698(uVar2,0);
    if (*(int *)(*(long *)PTR_DAT_070c2d18 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)PTR_DAT_070c2d18);
    }
    unaff_x22 = (long *)FUN_058aa01c();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
  }
  if (unaff_x22 != (long *)0x0) {
    if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_031c3ef0();
                    /* WARNING: Could not recover jumptable at 0x03f65a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 600))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03189058(unaff_x22);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


