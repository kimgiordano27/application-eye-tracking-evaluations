/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ToDisplayStrings
ENTRY_POINT: 04e4fa7c
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  long *plVar4;
  
  while( true ) {
    thunk_FUN_03048534(param_1,param_2);
    unaff_w19 = unaff_w19 + 1;
    plVar4 = unaff_x25;
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = plVar4 + 4;
      if (unaff_x22 == unaff_x24) {
        return;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar1 = plVar4 + 1;
      plVar4 = unaff_x25;
    } while ((int)*plVar1 < 0);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    param_2 = *unaff_x25;
    if ((param_2 != 0) &&
       (lVar2 = thunk_FUN_03010710(param_2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0)) break;
    if (*(uint *)(unaff_x21 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    param_1 = unaff_x21 + (long)(int)unaff_w19 + 4;
    *param_1 = param_2;
  }
  uVar3 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                    ();
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar3,0);
}


