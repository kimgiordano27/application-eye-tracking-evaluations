/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$CalculateRoomOutlineAndBounds
ENTRY_POINT: 07735610
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__CalculateRoomOutlineAndBounds(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  long unaff_x19;
  long lVar9;
  undefined8 *unaff_x20;
  long lVar10;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar11;
  long lVar12;
  long unaff_x27;
  ulong unaff_x28;
  undefined8 uVar13;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  do {
    while ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x23) {
LAB_0773570c:
      unaff_x28 = unaff_x28 + 1;
      if (*in_stack_00000040 == 0) goto LAB_07735a68;
      if ((long)*(int *)(*in_stack_00000040 + 0x18) <= (long)unaff_x28) {
        if (in_stack_00000038 != 0) {
          if ((int)*(ulong *)(in_stack_00000038 + 0x18) < 1) goto LAB_077359a0;
          uVar4 = 0;
          uVar6 = *(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff;
          lVar5 = (in_stack_00000010 >> 0x20) << 0x20;
          lVar12 = in_stack_00000038;
          goto LAB_07735750;
        }
        goto LAB_07735a68;
      }
      param_1 = *(long *)(unaff_x24 + 0x48);
      if (param_1 == 0) goto LAB_07735a68;
      unaff_x20 = (undefined8 *)(unaff_x19 + unaff_x28 * 8 + 0x20);
      unaff_x25 = 0x20;
      unaff_x23 = 0;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_x28) || (*(uint *)(param_1 + 0x18) <= unaff_x23))
    goto LAB_07735a64;
    uVar13 = *unaff_x20;
    uVar11 = *(undefined8 *)(param_1 + unaff_x23 * 8 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = FUN_0952c404(uVar13,uVar11,0);
    if ((uVar4 & 1) != 0) {
      if (unaff_x27 == 0) break;
      FUN_05b4c354(&stack0x000000d0);
      in_stack_00000118 = in_stack_000000d8;
      in_stack_00000110 = in_stack_000000d0;
      in_stack_00000128 = in_stack_000000e8;
      in_stack_00000120 = in_stack_000000e0;
      in_stack_00000138 = in_stack_000000f8;
      in_stack_00000130 = in_stack_000000f0;
      in_stack_00000148 = in_stack_00000108;
      in_stack_00000140 = in_stack_00000100;
      lVar5 = *(long *)(unaff_x24 + 0x50);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_07735a64;
      puVar1 = (undefined8 *)(lVar5 + unaff_x25);
      in_stack_00000058 = puVar1[1];
      in_stack_00000050 = *puVar1;
      in_stack_00000068 = puVar1[3];
      in_stack_00000060 = puVar1[2];
      in_stack_00000078 = puVar1[5];
      in_stack_00000070 = puVar1[4];
      in_stack_00000088 = puVar1[7];
      in_stack_00000080 = puVar1[6];
      in_stack_00000098 = in_stack_000000d8;
      in_stack_00000090 = in_stack_000000d0;
      in_stack_000000a8 = in_stack_000000e8;
      in_stack_000000a0 = in_stack_000000e0;
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c8 = in_stack_00000108;
      in_stack_000000c0 = in_stack_00000100;
      in_stack_000000d0 = in_stack_00000050;
      in_stack_000000d8 = in_stack_00000058;
      in_stack_000000e0 = in_stack_00000060;
      in_stack_000000e8 = in_stack_00000068;
      in_stack_000000f0 = in_stack_00000070;
      in_stack_000000f8 = in_stack_00000078;
      in_stack_00000100 = in_stack_00000080;
      in_stack_00000108 = in_stack_00000088;
      uVar4 = FUN_09513464(&stack0x00000090,&stack0x00000050,0);
      if ((uVar4 & 1) != 0) {
        if (in_stack_00000048 != 0) {
          if (unaff_x28 < *(uint *)(in_stack_00000048 + 0x18)) {
            *(int *)(in_stack_00000048 + unaff_x28 * 4 + 0x20) = (int)unaff_x23;
            goto LAB_0773570c;
          }
          goto LAB_07735a64;
        }
        break;
      }
    }
    param_1 = *(long *)(unaff_x24 + 0x48);
    unaff_x23 = unaff_x23 + 1;
    unaff_x25 = unaff_x25 + 0x40;
  } while (param_1 != 0);
  goto LAB_07735a68;
  while( true ) {
    if (uVar6 <= uVar4) goto LAB_07735a64;
                    /* try { // try from 07735764 to 07835923 has its CatchHandler @ 07735764
                       catch() { ... } // from try @ 07735764 with catch @ 07735764
                       catch() { ... } // from try @ 07735e84 with catch @ 07735764
                       catch() { ... } // from try @ 07735ee0 with catch @ 07735764
                       catch() { ... } // from try @ 07735f40 with catch @ 07735764
                       catch() { ... } // from try @ 07736064 with catch @ 07735764
                       catch() { ... } // from try @ 0773609c with catch @ 07735764
                       catch() { ... } // from try @ 077360b8 with catch @ 07735764
                       catch() { ... } // from try @ 07736114 with catch @ 07735764 */
    uVar3 = FUN_094fd900(lVar12,0);
    if (in_stack_00000048 == 0) goto LAB_07735a68;
    if ((*(uint *)(in_stack_00000048 + 0x18) <= uVar3) ||
       (uVar6 = (in_stack_00000010 >> 0x20) + uVar4, *(uint *)(lVar10 + 0x18) <= uVar6))
    goto LAB_07735a64;
    lVar9 = lVar5 >> 0x20;
    FUN_094fd908(lVar10 + lVar9 * 0x20 + 0x20,
                 *(undefined4 *)(in_stack_00000048 + (long)(int)uVar3 * 4 + 0x20),0);
    lVar10 = *(long *)(unaff_x24 + 0x58);
    if (lVar10 == 0) goto LAB_07735a68;
    if (((*(uint *)(in_stack_00000038 + 0x18) <= uVar4) ||
        (uVar3 = FUN_094fd910(lVar12,0), *(uint *)(in_stack_00000048 + 0x18) <= uVar3)) ||
       (*(uint *)(lVar10 + 0x18) <= uVar6)) goto LAB_07735a64;
    FUN_094fd918(lVar10 + lVar9 * 0x20 + 0x20,
                 *(undefined4 *)(in_stack_00000048 + (long)(int)uVar3 * 4 + 0x20),0);
    lVar10 = *(long *)(unaff_x24 + 0x58);
    if (lVar10 == 0) goto LAB_07735a68;
    if (((*(uint *)(in_stack_00000038 + 0x18) <= uVar4) ||
        (uVar3 = FUN_094fd920(lVar12,0), *(uint *)(in_stack_00000048 + 0x18) <= uVar3)) ||
       (*(uint *)(lVar10 + 0x18) <= uVar6)) goto LAB_07735a64;
    FUN_094fd928(lVar10 + lVar9 * 0x20 + 0x20,
                 *(undefined4 *)(in_stack_00000048 + (long)(int)uVar3 * 4 + 0x20),0);
    lVar10 = *(long *)(unaff_x24 + 0x58);
    if (lVar10 == 0) goto LAB_07735a68;
    if (((*(uint *)(in_stack_00000038 + 0x18) <= uVar4) ||
        (uVar3 = FUN_094fd930(lVar12,0), *(uint *)(in_stack_00000048 + 0x18) <= uVar3)) ||
       (*(uint *)(lVar10 + 0x18) <= uVar6)) goto LAB_07735a64;
    FUN_094fd938(lVar10 + lVar9 * 0x20 + 0x20,
                 *(undefined4 *)(in_stack_00000048 + (long)(int)uVar3 * 4 + 0x20),0);
    lVar10 = *(long *)(unaff_x24 + 0x58);
    if (lVar10 == 0) goto LAB_07735a68;
    if ((*(uint *)(in_stack_00000038 + 0x18) <= uVar4) ||
       (FUN_094fd8c0(lVar12,0), *(uint *)(lVar10 + 0x18) <= uVar6)) goto LAB_07735a64;
    FUN_094fd8c8(lVar10 + lVar9 * 0x20 + 0x20,0);
    lVar10 = *(long *)(unaff_x24 + 0x58);
    if (lVar10 == 0) goto LAB_07735a68;
    if ((*(uint *)(in_stack_00000038 + 0x18) <= uVar4) ||
       (FUN_094fd8d0(lVar12,0), *(uint *)(lVar10 + 0x18) <= uVar6)) goto LAB_07735a64;
    FUN_094fd8d8(lVar10 + lVar9 * 0x20 + 0x20,0);
    lVar10 = *(long *)(unaff_x24 + 0x58);
    if (lVar10 == 0) goto LAB_07735a68;
                    /* try { // try from 07735924 to 07835927 has its CatchHandler @ 07735f48 */
                    /* try { // try from 07735934 to 0783593b has its CatchHandler @ 07735f64 */
    if ((*(uint *)(in_stack_00000038 + 0x18) <= uVar4) ||
       (FUN_094fd8e0(lVar12,0), *(uint *)(lVar10 + 0x18) <= uVar6)) goto LAB_07735a64;
    FUN_094fd8e8(lVar10 + lVar9 * 0x20 + 0x20,0);
                    /* try { // try from 0773594c to 0783597f has its CatchHandler @ 07735f74 */
    lVar10 = *(long *)(unaff_x24 + 0x58);
    if (lVar10 == 0) goto LAB_07735a68;
    if ((*(uint *)(in_stack_00000038 + 0x18) <= uVar4) ||
       (FUN_094fd8f0(lVar12,0), *(uint *)(lVar10 + 0x18) <= uVar6)) goto LAB_07735a64;
    FUN_094fd8f8(lVar10 + lVar9 * 0x20 + 0x20,0);
    uVar6 = (ulong)*(uint *)(in_stack_00000038 + 0x18);
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x100000000;
                    /* try { // try from 07735994 to 07835997 has its CatchHandler @ 07735f4c */
    if ((long)(int)*(uint *)(in_stack_00000038 + 0x18) <= (long)uVar4) break;
LAB_07735750:
    lVar12 = lVar12 + 0x20;
    lVar10 = *(long *)(unaff_x24 + 0x58);
    if (lVar10 == 0) goto LAB_07735a68;
  }
LAB_077359a0:
  lVar5 = *in_stack_00000040;
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 077359b8 to 078359c7 has its CatchHandler @ 07735f44 */
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        if (uVar3 <= uVar7) {
LAB_07735a64:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        puVar8 = (uint *)(lVar5 + (long)(int)uVar7 * 4 + 0x20);
        uVar2 = *puVar8;
        if (in_stack_00000048 == 0) goto LAB_07735a68;
                    /* try { // try from 077359dc to 078359df has its CatchHandler @ 07735f40 */
        if (*(uint *)(in_stack_00000048 + 0x18) <= uVar2) goto LAB_07735a64;
        uVar7 = uVar7 + 1;
        *puVar8 = *(uint *)(in_stack_00000048 + (long)(int)uVar2 * 4 + 0x20);
                    /* try { // try from 077359f4 to 07835a13 has its CatchHandler @ 07735f5c */
      } while ((int)uVar7 < (int)uVar3);
    }
    *(long *)(in_stack_00000030 + 0x40) = lVar5;
    thunk_FUN_044bb4b4((long *)(in_stack_00000030 + 0x40));
    *(undefined8 *)(in_stack_00000030 + 0xf0) = 0;
    thunk_FUN_044bb4b4(in_stack_00000040,0);
    *(undefined8 *)(in_stack_00000030 + 0xd8) = 0;
    thunk_FUN_044bb4b4(in_stack_00000018,0);
                    /* try { // try from 07735a28 to 07835a5b has its CatchHandler @ 07735f58 */
    *(undefined8 *)(in_stack_00000030 + 0xe0) = 0;
    thunk_FUN_044bb4b4(in_stack_00000020,0);
    *(undefined8 *)(in_stack_00000030 + 0xf8) = 0;
    thunk_FUN_044bb4b4(in_stack_00000028,0);
    return;
  }
LAB_07735a68:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07735a68 to 07835a73 has its CatchHandler @ 07735f84 */
  FUN_04447e44();
}


