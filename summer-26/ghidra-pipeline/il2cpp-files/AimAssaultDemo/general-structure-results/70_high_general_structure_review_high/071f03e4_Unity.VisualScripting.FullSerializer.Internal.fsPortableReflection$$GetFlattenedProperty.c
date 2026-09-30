/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection$$GetFlattenedProperty
ENTRY_POINT: 071f03e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection__GetFlattenedProperty
               (long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  ulong uVar10;
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
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  
  puVar5 = Pico_Platform_Message_GetDataFromMessage<GameRequestFailedReason>_TypeInfo;
  puVar4 = Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadCancelResult>_TypeInfo;
  puVar3 = System_Func<float,_float,_float,_float>_TypeInfo;
  if (param_1 != 0) {
                    /* try { // try from 071f03f8 to 072f041f has its CatchHandler @ 071f056c */
    FUN_075d5a68(param_1,*(undefined8 *)
                          Pico_Platform_Message_GetDataFromMessage<GameRequestFailedReason>_TypeInfo
                 ,0);
    uVar10 = 0;
    do {
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar6 = *(long *)puVar4;
                    /* try { // try from 071f0428 to 072f0433 has its CatchHandler @ 071f0528 */
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 071f0438 to 072f043f has its CatchHandler @ 071f0518 */
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar4;
      }
      lVar8 = *(long *)(unaff_x19 + 0x140);
      if (lVar8 == 0) goto LAB_071f084c;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_071f0850;
                    /* try { // try from 071f0450 to 072f0477 has its CatchHandler @ 071f0520 */
      if (lVar7 == 0) goto LAB_071f084c;
      FUN_07577edc(lVar7,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                   *(undefined4 *)(lVar8 + 0x20),0);
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
                    /* try { // try from 071f0478 to 072f0483 has its CatchHandler @ 071f0514 */
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar6 = *(long *)(unaff_x19 + 0x140);
      if (lVar6 == 0) goto LAB_071f084c;
                    /* try { // try from 071f0488 to 072f04a7 has its CatchHandler @ 071f0574 */
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_071f0850;
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_071f084c;
                    /* try { // try from 071f04a8 to 072f04d7 has its CatchHandler @ 071f0094 */
      FUN_07577edc(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 100),
                   *(undefined4 *)(lVar6 + 0x24),0);
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar6 = *(long *)(unaff_x19 + 0x140);
      if (lVar6 == 0) goto LAB_071f084c;
                    /* try { // try from 071f04d8 to 072f04db has its CatchHandler @ 071f0578 */
                    /* try { // try from 071f04dc to 072f04df has its CatchHandler @ 071f0564 */
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_071f0850;
                    /* try { // try from 071f04e0 to 072f04e3 has its CatchHandler @ 071f0554 */
                    /* try { // try from 071f04e4 to 072f04e7 has its CatchHandler @ 071f057c */
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
                    /* try { // try from 071f04e8 to 072f04eb has its CatchHandler @ 071f0538 */
      if (lVar7 == 0) goto LAB_071f084c;
                    /* try { // try from 071f04ec to 072f04ef has its CatchHandler @ 071f0534 */
                    /* try { // try from 071f04f0 to 072f04f3 has its CatchHandler @ 071f0528 */
                    /* try { // try from 071f04f4 to 072f04f7 has its CatchHandler @ 071f0574 */
                    /* catch() { ... } // from try @ 071f0378 with catch @ 071f04f8
                       try { // try from 071f04f8 to 072f0593 has its CatchHandler @ 071f0094 */
                    /* catch() { ... } // from try @ 071f02e8 with catch @ 071f04fc */
                    /* catch() { ... } // from try @ 071f02c4 with catch @ 071f0500 */
      FUN_07577edc(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68),
                   *(undefined4 *)(lVar6 + 0x28),0);
                    /* catch() { ... } // from try @ 071f0388 with catch @ 071f0504 */
      lVar7 = *(long *)(unaff_x19 + 0xa8);
                    /* catch() { ... } // from try @ 071f034c with catch @ 071f0508 */
      if (lVar7 == 0) goto LAB_071f084c;
                    /* catch() { ... } // from try @ 071f0270 with catch @ 071f050c */
                    /* catch() { ... } // from try @ 071f01dc with catch @ 071f0510 */
                    /* catch() { ... } // from try @ 071f0478 with catch @ 071f0514 */
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
                    /* catch() { ... } // from try @ 071f0438 with catch @ 071f0518 */
                    /* catch() { ... } // from try @ 071f0224 with catch @ 071f051c */
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
                    /* catch() { ... } // from try @ 071f0450 with catch @ 071f0520 */
      if (lVar7 == 0) goto LAB_071f084c;
      FUN_07577edc(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24),
                   uVar10 & 0xffffffff,0);
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_071f084c;
      thunk_FUN_07576f20(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 4),
                         *(undefined8 *)(unaff_x19 + 0x80),0);
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_071f084c;
      thunk_FUN_07576f20(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14),
                         *(undefined8 *)(unaff_x19 + 0x88),0);
      puVar2 = PTR_DAT_07d923b0;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 3);
    lVar7 = *(long *)(unaff_x19 + 0x130);
    if (lVar7 != 0) {
      lVar6 = 4;
      lVar8 = 0x20;
      do {
        FUN_075d2bc8(lVar7,0);
        lVar7 = *(long *)(unaff_x19 + 0x130);
        if (lVar6 == 7) {
          if (lVar7 != 0) {
            FUN_075d5c10(lVar7,*(undefined8 *)puVar5,0);
            return;
          }
          break;
        }
        lVar9 = *(long *)(unaff_x19 + 0x20);
        if (lVar9 == 0) break;
        uVar10 = lVar6 - 4;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_071f0850:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        FUN_075cae58(&stack0x00000140,*(undefined8 *)(lVar9 + lVar6 * 8),0);
        in_stack_000001b8 = in_stack_00000148;
        in_stack_000001b0 = in_stack_00000140;
        in_stack_000001c8 = in_stack_00000158;
        in_stack_000001c0 = in_stack_00000150;
        in_stack_000001d0 = in_stack_00000160;
        if (lVar7 == 0) break;
        in_stack_00000188 = in_stack_00000148;
        in_stack_00000180 = in_stack_00000140;
        in_stack_00000198 = in_stack_00000158;
        in_stack_00000190 = in_stack_00000150;
        in_stack_000001a0 = in_stack_00000160;
        FUN_075d6824(lVar7,&stack0x00000180,0);
        if (*(long *)(unaff_x19 + 0x130) == 0) break;
        FUN_075d3550(0,0,0,0x3f800000,0x3f800000,*(long *)(unaff_x19 + 0x130),1,1,0);
        lVar7 = *(long *)(unaff_x19 + 0x130);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (lVar7 == 0) break;
        FUN_075dc5c8(lVar7,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) + 4,
                     *(undefined8 *)(unaff_x19 + 0x90),0,0);
        if (*(long *)(unaff_x19 + 0x130) == 0) break;
        FUN_075dc5c8(*(long *)(unaff_x19 + 0x130),
                     *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) + 1,
                     *(undefined8 *)(unaff_x19 + 0xf8),0,0);
        if (*(long *)(unaff_x19 + 0x130) == 0) break;
        FUN_075dc5c8(*(long *)(unaff_x19 + 0x130),
                     *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) + 2,
                     *(undefined8 *)(unaff_x19 + 0x28),0,0);
        lVar7 = *(long *)(unaff_x19 + 0xc0);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
        puVar1 = (undefined8 *)(lVar7 + lVar8);
        in_stack_00000168 = puVar1[5];
        in_stack_00000160 = puVar1[4];
        in_stack_00000178 = puVar1[7];
        in_stack_00000170 = puVar1[6];
        in_stack_00000148 = puVar1[1];
        in_stack_00000140 = *puVar1;
        in_stack_00000158 = puVar1[3];
        in_stack_00000150 = puVar1[2];
        lVar7 = *(long *)(unaff_x19 + 0xb8);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
        puVar1 = (undefined8 *)(lVar7 + lVar8);
        in_stack_00000128 = puVar1[5];
        in_stack_00000120 = puVar1[4];
        in_stack_00000138 = puVar1[7];
        in_stack_00000130 = puVar1[6];
        in_stack_00000108 = puVar1[1];
        in_stack_00000100 = *puVar1;
        in_stack_00000118 = puVar1[3];
        in_stack_00000110 = puVar1[2];
        if (*(long *)(unaff_x19 + 0x130) == 0) break;
        in_stack_00000080 = in_stack_00000100;
        in_stack_00000088 = in_stack_00000108;
        in_stack_00000090 = in_stack_00000110;
        in_stack_00000098 = in_stack_00000118;
        in_stack_000000a0 = in_stack_00000120;
        in_stack_000000a8 = in_stack_00000128;
        in_stack_000000b0 = in_stack_00000130;
        in_stack_000000b8 = in_stack_00000138;
        in_stack_000000c0 = in_stack_00000140;
        in_stack_000000c8 = in_stack_00000148;
        in_stack_000000d0 = in_stack_00000150;
        in_stack_000000d8 = in_stack_00000158;
        in_stack_000000e0 = in_stack_00000160;
        in_stack_000000e8 = in_stack_00000168;
        in_stack_000000f0 = in_stack_00000170;
        in_stack_000000f8 = in_stack_00000178;
        FUN_075d4b74(*(long *)(unaff_x19 + 0x130),&stack0x000000c0,&stack0x00000080,0);
        lVar7 = *(long *)(unaff_x19 + 0x130);
        if (DAT_08253f87 == '\0') {
          FUN_0373b518(puVar2);
          DAT_08253f87 = '\x01';
        }
        if (*(long *)(unaff_x19 + 0xa8) == 0) break;
        if (*(uint *)(*(long *)(unaff_x19 + 0xa8) + 0x18) <= uVar10) goto LAB_071f0850;
        if (lVar7 == 0) break;
        FUN_075db0bc(lVar7);
        lVar7 = *(long *)(unaff_x19 + 0x130);
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0x40;
      } while (lVar7 != 0);
    }
  }
LAB_071f084c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


