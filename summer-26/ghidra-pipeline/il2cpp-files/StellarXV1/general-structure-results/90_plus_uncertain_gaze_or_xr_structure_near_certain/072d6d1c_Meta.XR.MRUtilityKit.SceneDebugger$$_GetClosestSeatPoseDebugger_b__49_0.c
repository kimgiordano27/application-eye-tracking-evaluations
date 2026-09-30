/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSeatPoseDebugger>b__49_0
ENTRY_POINT: 072d6d1c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSeatPoseDebugger>b__49_0
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *plVar3;
  long unaff_x23;
  int unaff_w24;
  
  do {
    lVar1 = thunk_FUN_040b4e00(param_2,*(undefined8 *)(param_1 + 0x40));
    plVar3 = unaff_x22;
    param_2 = unaff_x23;
    if (lVar1 == 0) {
      uVar2 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar2,0);
    }
    do {
      if (*(uint *)(unaff_x20 + 3) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      unaff_x22 = plVar3 + 1;
      *plVar3 = param_2;
      thunk_FUN_040ec700(plVar3,param_2);
      unaff_x21 = unaff_x21 + 1;
      if ((long)(int)unaff_x20[3] <= (long)unaff_x21) {
        return;
      }
      if (unaff_w24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      (**(code **)(*unaff_x19 + 0x188))();
      param_2 = FUN_072d6110();
      plVar3 = unaff_x22;
    } while (param_2 == 0);
    param_1 = *unaff_x20;
    unaff_x23 = param_2;
  } while( true );
}


