/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 05ff3304
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetOpenVRLocalPose(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float fVar4;
  float unaff_s8;
  float unaff_s11;
  
  do {
    uVar1 = FUN_05c86f74(param_1,param_2,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x58);
      if (lVar3 == 0) {
LAB_05ff3384:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) {
LAB_05ff3388:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      fVar4 = (float)FUN_06eec198(lVar3 + unaff_x23,0);
      unaff_s8 = unaff_s11 - fVar4;
      if (unaff_s8 <= 0.0) {
        unaff_s8 = 0.0;
      }
      uVar2 = 1;
LAB_05ff3358:
      *unaff_x19 = unaff_s8;
                    /* try { // try from 05ff3364 to 060f3367 has its CatchHandler @ 05ff3370 */
                    /* try { // try from 05ff3368 to 060f3393 has its CatchHandler @ 05ff30b8 */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff3364 with catch @ 05ff3370
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff32c4 with catch @ 05ff3374
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff3298 with catch @ 05ff3378
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05ff323c with catch @ 05ff337c
                        */
      return uVar2;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x2c;
    if (unaff_x24 == unaff_x22) {
      uVar2 = 0;
      goto LAB_05ff3358;
    }
    lVar3 = *(long *)(unaff_x20 + 0x58);
    if (lVar3 == 0) goto LAB_05ff3384;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) goto LAB_05ff3388;
    param_1 = *(undefined8 *)(unaff_x20 + 0x48);
    lVar3 = FUN_06eec0bc(lVar3 + unaff_x23,0);
    if (lVar3 == 0) goto LAB_05ff3384;
    param_2 = FUN_06e55774(lVar3,0);
  } while( true );
}


