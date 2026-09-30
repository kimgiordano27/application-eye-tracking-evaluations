/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 09098b1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(ulong param_1)

{
  ulong uVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar2;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09788);
    *(undefined1 *)(unaff_x21 + 0x210) = 1;
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar1 = FUN_0a17cd28(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 09098b6c to 09198b6f has its CatchHandler @ 09098b8c */
                    /* try { // try from 09098b70 to 09198b73 has its CatchHandler @ 09098b88 */
    return;
  }
                    /* try { // try from 09098b74 to 09198bb7 has its CatchHandler @ 09098900 */
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 09098b70 with catch @ 09098b88
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 09098b6c with catch @ 09098b8c
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 09098acc with catch @ 09098b90
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 09098adc with catch @ 09098b94
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 09098a94 with catch @ 09098b98
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 09098a30 with catch @ 09098b9c
                        */
    FUN_09045d54(*(long *)(unaff_x19 + 0xd0),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


