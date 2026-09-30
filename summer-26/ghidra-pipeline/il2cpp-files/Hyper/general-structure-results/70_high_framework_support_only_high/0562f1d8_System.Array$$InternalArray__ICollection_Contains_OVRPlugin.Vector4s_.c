/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4s>
ENTRY_POINT: 0562f1d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4s>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  long unaff_x24;
  undefined *puVar4;
  
  if (-1 < unaff_w21) {
    if (unaff_w21 <= *(int *)(unaff_x24 + 0x18)) {
      if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x24 + 0x18) - unaff_w21)) {
        FUN_0564e7c4();
        return;
      }
      thunk_FUN_049ae08c(&DAT_0ae8ed80);
      uVar1 = thunk_FUN_04983f60();
      uVar2 = thunk_FUN_049ae08c(&DAT_0af58a10);
      puVar4 = &DAT_0af34090;
      goto LAB_0562f2b4;
    }
  }
  thunk_FUN_049ae08c(&DAT_0ae8ed80);
  uVar1 = thunk_FUN_04983f60();
  uVar2 = thunk_FUN_049ae08c(&DAT_0af62928);
  puVar4 = &DAT_0af3c008;
LAB_0562f2b4:
  uVar3 = thunk_FUN_049ae08c(puVar4);
  FUN_08cc1128(uVar1,uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar1);
}


