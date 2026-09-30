/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 02812910
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_2;
  if ((DAT_04125353 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbf088);
    DAT_04125353 = 1;
  }
  FUN_02815710(param_1,0x10,0);
  uVar2 = FUN_0282f8a8(*(undefined8 *)(param_1 + 0x50),0);
  if ((uVar2 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x208))
                (plVar4,*(undefined2 *)(param_1 + 0x80),*(undefined8 *)(*plVar4 + 0x210));
      plVar4 = *(long **)(param_1 + 0x68);
      FUN_02813c8c(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_03cbf088 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbf088);
      }
      uVar3 = FUN_0274e00c();
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x248))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x250));
        plVar4 = *(long **)(param_1 + 0x68);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x208))
                    (plVar4,*(undefined2 *)(param_1 + 0x80),*(undefined8 *)(*plVar4 + 0x210));
          return;
        }
      }
    }
  }
  else {
    uVar1 = FUN_02812a60(param_1,param_2,param_3);
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x028129a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x228))
                (plVar4,*(undefined8 *)(param_1 + 0x90),0,uVar1,*(undefined8 *)(*plVar4 + 0x230));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


