/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.cctor
ENTRY_POINT: 04e4f444
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___cctor(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined4 *unaff_x26;
  undefined4 *puVar4;
  undefined8 in_stack_00000008;
  
  do {
    if ((param_1 != 0) &&
       (lVar2 = thunk_FUN_03010710(param_1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar3 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = param_1;
    thunk_FUN_03048534(unaff_x22 + (long)(int)unaff_w19 + 4,param_1);
    unaff_w19 = unaff_w19 + 1;
    puVar4 = unaff_x26;
    do {
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar4 + 6;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      piVar1 = puVar4 + 1;
      puVar4 = unaff_x26;
    } while (*piVar1 < 0);
    in_stack_00000008._4_4_ = *unaff_x26;
    param_1 = thunk_FUN_0301043c(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                                 (long)&stack0x00000008 + 4);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
  } while( true );
}


