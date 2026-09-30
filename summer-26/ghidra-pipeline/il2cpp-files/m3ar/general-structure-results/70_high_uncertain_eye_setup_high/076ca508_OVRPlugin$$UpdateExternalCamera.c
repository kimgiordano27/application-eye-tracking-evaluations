/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 076ca508
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__UpdateExternalCamera
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *plVar6;
  byte unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  long *in_stack_00000088;
  
  do {
    lVar3 = *unaff_x21;
                    /* try { // try from 076ca50c to 077ca50f has its CatchHandler @ 076ca564 */
                    /* try { // try from 076ca514 to 077ca517 has its CatchHandler @ 076ca560 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
                    /* try { // try from 076ca51c to 077ca51f has its CatchHandler @ 076ca550 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 076ca524 to 077ca527 has its CatchHandler @ 076ca544 */
                    /* try { // try from 076ca52c to 077ca52f has its CatchHandler @ 076ca53c */
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
                    /* catch() { ... } // from try @ 076ca354 with catch @ 076ca54c */
                    /* catch() { ... } // from try @ 076ca51c with catch @ 076ca550 */
                    /* catch() { ... } // from try @ 076ca398 with catch @ 076ca554 */
                    /* catch() { ... } // from try @ 076ca334 with catch @ 076ca558 */
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
          goto LAB_076ca55c;
        }
                    /* try { // try from 076ca530 to 077ca597 has its CatchHandler @ 076c9cf8 */
        uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 076ca440 with catch @ 076ca534 */
        piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 076ca424 with catch @ 076ca538 */
      } while (uVar4 != 0);
    }
                    /* catch() { ... } // from try @ 076ca52c with catch @ 076ca53c */
                    /* catch() { ... } // from try @ 076ca330 with catch @ 076ca540 */
                    /* catch() { ... } // from try @ 076ca524 with catch @ 076ca544 */
    puVar2 = (undefined8 *)FUN_0406ae20(unaff_x21,*unaff_x26,0x12);
                    /* catch() { ... } // from try @ 076ca364 with catch @ 076ca548 */
LAB_076ca55c:
                    /* catch() { ... } // from try @ 076ca37c with catch @ 076ca55c */
                    /* catch() { ... } // from try @ 076ca514 with catch @ 076ca560 */
                    /* catch() { ... } // from try @ 076ca50c with catch @ 076ca564 */
                    /* catch() { ... } // from try @ 076ca504 with catch @ 076ca568 */
    uVar4 = (*(code *)*puVar2)(unaff_x21,&stack0x00000068,puVar2[1]);
                    /* catch() { ... } // from try @ 076ca450 with catch @ 076ca56c */
    if ((uVar4 & 1) == 0) {
LAB_076ca6e4:
      unaff_w23 = 0;
      plVar6 = in_stack_00000088;
    }
    else {
                    /* catch() { ... } // from try @ 076ca2e4 with catch @ 076ca570 */
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
                    /* catch() { ... } // from try @ 076ca26c with catch @ 076ca574 */
      plVar6 = *(long **)(unaff_x19 + 0x28);
                    /* catch() { ... } // from try @ 076ca29c with catch @ 076ca578 */
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(param_4 + 0x14);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
                    /* try { // try from 076ca598 to 077ca59b has its CatchHandler @ 076ca5c8 */
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
                    /* try { // try from 076ca5c0 to 077ca5c3 has its CatchHandler @ 076ca5dc */
                    /* try { // try from 076ca5c4 to 077ca5cf has its CatchHandler @ 076c9cf8 */
                    /* catch() { ... } // from try @ 076ca598 with catch @ 076ca5c8 */
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
            goto LAB_076ca5d0;
          }
          uVar4 = uVar4 - 1;
                    /* try { // try from 076ca5a8 to 077ca5ab has its CatchHandler @ 076ca608 */
          piVar5 = piVar5 + 4;
                    /* try { // try from 076ca5ac to 077ca5af has its CatchHandler @ 076ca5fc */
        } while (uVar4 != 0);
      }
                    /* try { // try from 076ca5b0 to 077ca5b3 has its CatchHandler @ 076ca5f8 */
                    /* try { // try from 076ca5b4 to 077ca5b7 has its CatchHandler @ 076ca5e8 */
                    /* try { // try from 076ca5b8 to 077ca5bf has its CatchHandler @ 076ca5e4 */
      puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x26,9);
LAB_076ca5d0:
                    /* try { // try from 076ca5d0 to 077ca5d7 has its CatchHandler @ 076ca6e8 */
                    /* try { // try from 076ca5d8 to 077ca62f has its CatchHandler @ 076c9cf8 */
      uVar4 = (*(code *)*puVar2)(plVar6,uVar1,&stack0x00000048,puVar2[1]);
      if ((uVar4 & 1) == 0) goto LAB_076ca6e4;
      plVar6 = *(long **)(unaff_x19 + 0x38);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(param_4 + 0x14);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_076ca640;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x27,0);
LAB_076ca640:
      uVar4 = (*(code *)*puVar2)(plVar6,uVar1,&stack0x00000038,puVar2[1]);
      if ((uVar4 & 1) == 0) goto LAB_076ca6e4;
      fVar8 = fStack0000000000000074;
      fVar7 = (float)FUN_076ca834();
      fVar7 = fVar7 * fStack0000000000000038;
      fVar8 = fVar8 * fStack000000000000003c;
      fVar9 = param_3 * in_stack_00000040;
      if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_0706723c(*(long *)(unaff_x19 + 0x68),param_4,*unaff_x28);
      unaff_w23 = unaff_w23 & unaff_s8 < fVar9 + fVar7 + fVar8;
      plVar6 = in_stack_00000088;
    }
    in_stack_00000088 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076ca490;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x24,0);
LAB_076ca490:
    uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    plVar6 = in_stack_00000088;
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)*in_stack_00000030;
      if (plVar6 == (long *)0x0) goto LAB_076ca7e4;
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_076ca7bc;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *in_stack_00000088;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076ca4f4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000088,*unaff_x25,0);
LAB_076ca4f4:
    param_4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    unaff_x21 = *(long **)(unaff_x19 + 0x28);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_076ca7d8;
    }
  }
LAB_076ca7bc:
  puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f65868,0);
LAB_076ca7d8:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
LAB_076ca7e4:
  if (in_stack_00000028 == 0) {
    return unaff_w23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


