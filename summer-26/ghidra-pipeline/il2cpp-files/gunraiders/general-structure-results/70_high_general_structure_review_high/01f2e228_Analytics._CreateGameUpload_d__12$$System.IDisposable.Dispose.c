/*
FUNCTION_NAME: Analytics.<CreateGameUpload>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 01f2e228
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Analytics_<CreateGameUpload>d__12__System_IDisposable_Dispose(int param_1)

{
  bool in_ZR;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x21;
  
  if (in_ZR) {
    uVar1 = thunk_FUN_03152714();
    if ((uVar1 & 1) == 0) {
      return;
    }
    lVar2 = *unaff_x21;
    if (lVar2 == 0) goto LAB_01f2f114;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x230);
  }
  else {
    if ((param_1 != 0x41747bd4) || (uVar1 = thunk_FUN_03152714(), (uVar1 & 1) == 0)) {
      return;
    }
    lVar2 = *unaff_x21;
    if (lVar2 == 0) {
LAB_01f2f114:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x2a0);
  }
  FUN_03d1381c(lVar2,uVar3,0);
  return;
}


