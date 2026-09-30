/*
FUNCTION_NAME: ETD.PAM.MocapTennisPlayer$$GetPostHitDefaultPosition
ENTRY_POINT: 07f82de0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void ETD_PAM_MocapTennisPlayer__GetPostHitDefaultPosition(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x29;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_000003d0;
  undefined4 in_stack_000003d4;
  undefined4 in_stack_000003d8;
  undefined4 in_stack_000003dc;
  undefined4 in_stack_000003e0;
  undefined4 in_stack_000003e4;
  undefined4 in_stack_000003ec;
  undefined8 in_stack_00000400;
  byte in_stack_00000408;
  byte in_stack_00000409;
  
  lVar1 = thunk_FUN_04485110();
  if (lVar1 == 0) {
    uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,0);
  }
  if (*(uint *)(unaff_x25 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  unaff_x25[6] = unaff_x23;
  thunk_FUN_044bb4b4();
  lVar1 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x29 + 0x70),&stack0x00000338);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_04485110(lVar1,*(undefined8 *)(*unaff_x25 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,0);
  }
  if (*(uint *)(unaff_x25 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  unaff_x25[7] = lVar1;
  thunk_FUN_044bb4b4(unaff_x25 + 7,lVar1);
                    /* try { // try from 07f82e64 to 08082e6f has its CatchHandler @ 07f82e9c */
  uVar3 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f621f0);
                    /* try { // try from 07f82e74 to 08082e77 has its CatchHandler @ 07f82e90 */
                    /* try { // try from 07f82e7c to 08082e7f has its CatchHandler @ 07f82e8c */
                    /* try { // try from 07f82e80 to 08082eaf has its CatchHandler @ 07f82aa8 */
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07f82dd0 with catch @ 07f82e84
                        */
    thunk_FUN_044a54b4();
  }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07f82d78 with catch @ 07f82e88
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07f82e7c with catch @ 07f82e8c
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07f82e74 with catch @ 07f82e90
                        */
  FUN_094c652c(uVar3,0);
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07f82d6c with catch @ 07f82e94
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07f82d58 with catch @ 07f82e98
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07f82e64 with catch @ 07f82e9c
                        */
  lVar1 = *(long *)(unaff_x20 + 0x40);
                    /* try { // try from 07f82eb0 to 08082eb3 has its CatchHandler @ 07f82f4c */
                    /* try { // try from 07f82eb4 to 08082f5f has its CatchHandler @ 07f82aa8 */
  uStack0000000000000014 = in_stack_000003d8;
  uStack0000000000000034 = in_stack_000003d0;
  memcpy(&stack0x000002b0,&stack0x000003d0,0x78);
  if (lVar1 != 0) {
    FUN_07f30080(uStack0000000000000034,in_stack_000003d4,uStack0000000000000014,in_stack_000003dc,
                 in_stack_000003e0,in_stack_000003e4,lVar1,in_stack_00000400,in_stack_00000408 & 1,
                 in_stack_00000409 & 1,in_stack_000003ec,&stack0x00000270,0);
                    /* catch() { ... } // from try @ 07f82eb0 with catch @ 07f82f4c */
    if (*(char *)(unaff_x20 + 0x24) != '\0') {
                    /* try { // try from 07f82f60 to 08082f67 has its CatchHandler @ 07f82f7c */
      memcpy(&stack0x000001f8,&stack0x000003d0,0x78);
                    /* try { // try from 07f82f68 to 08082f73 has its CatchHandler @ 07f82aa8 */
      FUN_07f832dc();
    }
                    /* try { // try from 07f82f74 to 08082f7b has its CatchHandler @ 07f82f7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07f82f60 with catch @ 07f82f7c
                       catch(type#2 @ 00000000) { ... } // from try @ 07f82f74 with catch @ 07f82f7c
                        */
    FUN_07684810(&stack0x00000448,*(undefined8 *)PTR_DAT_09f621a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


