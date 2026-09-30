/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 01d7e2b0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRelativePose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x22;
  long *unaff_x25;
  undefined8 uVar4;
  undefined8 *unaff_x27;
  undefined4 uStack000000000000001c;
  
  puVar2 = PTR_DAT_02358f60;
  puVar1 = PTR_DAT_023520f0;
                    /* try { // try from 01d7e2c8 to 01e7e2cb has its CatchHandler @ 01d7e32c */
  FUN_01d7db88();
  uVar4 = *unaff_x27;
                    /* try { // try from 01d7e2e0 to 01e7e2e7 has its CatchHandler @ 01d7e324 */
                    /* try { // try from 01d7e2e8 to 01e7e313 has its CatchHandler @ 01d7e24c */
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x25);
  }
  FUN_01d5e86c(uVar4,0);
                    /* try { // try from 01d7e314 to 01e7e317 has its CatchHandler @ 01d7e334 */
  FUN_01c9fb7c();
                    /* try { // try from 01d7e318 to 01e7e31f has its CatchHandler @ 01d7e24c */
                    /* try { // try from 01d7e320 to 01e7e323 has its CatchHandler @ 01d7e324 */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7e2e0 with catch @ 01d7e324
                       catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7e320 with catch @ 01d7e324
                       try { // try from 01d7e324 to 01e7e34f has its CatchHandler @ 01d7e24c */
  FUN_01d5e86c(*unaff_x27,0);
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7e264 with catch @ 01d7e328
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7e2c8 with catch @ 01d7e32c
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7e2ac with catch @ 01d7e330
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7e314 with catch @ 01d7e334
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7e288 with catch @ 01d7e338
                        */
  FUN_01c9fb7c();
  FUN_01d5e86c(*(undefined8 *)puVar1,0);
                    /* try { // try from 01d7e350 to 01e7e353 has its CatchHandler @ 01d7e360 */
                    /* catch() { ... } // from try @ 01d7e350 with catch @ 01d7e360 */
  FUN_01c9fb7c();
                    /* try { // try from 01d7e36c to 01e7e377 has its CatchHandler @ 01d7e38c */
  FUN_01d5e86c(*(undefined8 *)puVar2,0);
                    /* try { // try from 01d7e378 to 01e7e383 has its CatchHandler @ 01d7e24c */
                    /* try { // try from 01d7e384 to 01e7e38b has its CatchHandler @ 01d7e38c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01d7e36c with catch @ 01d7e38c
                       catch(type#2 @ 00000000) { ... } // from try @ 01d7e384 with catch @ 01d7e38c
                        */
                    /* try { // try from 01d7e390 to 01e7e42f has its CatchHandler @ 01d7e390
                       catch() { ... } // from try @ 01d7e390 with catch @ 01d7e390
                       catch() { ... } // from try @ 01d7e474 with catch @ 01d7e390
                       catch() { ... } // from try @ 01d7e514 with catch @ 01d7e390 */
  FUN_01c9fb7c();
  FUN_01d5e86c(*unaff_x27,0);
  FUN_01c9fb7c();
  FUN_01d5e86c(*unaff_x27,0);
  FUN_01c9fb7c();
  FUN_01d5e86c(*unaff_x27,0);
  FUN_01c9fb7c();
  uStack000000000000001c = *(undefined4 *)(unaff_x22 + 0x50);
  thunk_FUN_0103fd0c(*(undefined8 *)PTR_DAT_0234bb30,&stack0x0000001c);
  FUN_01d5e86c(*(undefined8 *)PTR_DAT_0234bd70,0);
  FUN_01c9fb7c();
  FUN_01ca0f60();
  FUN_01ca1298();
  FUN_01d5e86c(*unaff_x27,0);
  FUN_01c9fb7c();
  if ((*(long *)(unaff_x22 + 0x70) != 0) &&
     (uVar3 = FUN_01c9f9e4(*(long *)(unaff_x22 + 0x70),0), (uVar3 & 1) != 0)) {
    uVar4 = *(undefined8 *)PTR_DAT_02352ac8;
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01d5e86c(uVar4,0);
    FUN_01c9fb7c();
    if (*(long *)(unaff_x22 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    System_WeakReference__GetObjectData();
  }
  return;
}


