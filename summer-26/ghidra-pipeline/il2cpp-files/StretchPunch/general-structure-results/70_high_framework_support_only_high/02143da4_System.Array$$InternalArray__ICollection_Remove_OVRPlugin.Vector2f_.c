/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector2f>
ENTRY_POINT: 02143da4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector2f>
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *in_x9;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x27;
  
  lVar1 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x420));
  if (unaff_x21 != (long *)0x0) {
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_01de26bc(lVar1,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0)) {
      uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar4,0);
    }
    if ((int)unaff_x21[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    unaff_x21[4] = lVar1;
    thunk_FUN_01e10808(unaff_x21 + 4,lVar1);
    if (unaff_x20 != (long *)0x0) {
      lVar1 = (**(code **)(*unaff_x20 + 0x3f8))();
      FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,0);
      if (lVar1 != 0) {
        lVar1 = FUN_03308a94(lVar1);
        lVar2 = *(long *)(*unaff_x27 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01dde7f8(lVar2);
        }
        if (lVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = thunk_FUN_01de26bc(lVar1,lVar2);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(lVar1,lVar2);
          }
        }
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


