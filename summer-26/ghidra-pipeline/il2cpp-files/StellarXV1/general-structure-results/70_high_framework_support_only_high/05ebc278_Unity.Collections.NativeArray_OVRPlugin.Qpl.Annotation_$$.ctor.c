/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 05ebc278
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(void)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  long unaff_x23;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x23 + 0xa4a) = 1;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar1 = FUN_069ab908();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_074e5d94();
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_074e4840(unaff_x19[0xc]);
      if ((uVar1 & 1) == 0) {
        unaff_x19[0xc] = unaff_x21;
        *(byte *)(unaff_x19 + 0xe) = *(byte *)(unaff_x19 + 0xe) | unaff_w20 & 1;
        thunk_FUN_040ec700(unaff_x19 + 0xc);
        (**(code **)(*unaff_x19 + 0x438))();
        uVar1 = (**(code **)(*unaff_x19 + 0x408))();
        if ((uVar1 & 1) != 0) {
          lVar2 = (**(code **)(*unaff_x19 + 0x3f8))();
          if (lVar2 != 0) {
            FUN_05ebc4b8();
            return;
          }
        }
      }
    }
    else if ((unaff_w20 & 1) != 0) {
      uVar1 = (**(code **)(*unaff_x19 + 0x408))();
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x05ebc2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x268))();
        return;
      }
    }
  }
  return;
}


