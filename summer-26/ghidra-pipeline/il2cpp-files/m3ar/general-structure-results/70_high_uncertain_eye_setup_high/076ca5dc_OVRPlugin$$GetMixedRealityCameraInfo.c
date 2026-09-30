/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 076ca5dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__GetMixedRealityCameraInfo
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long *param_5,undefined8 param_6,undefined1 *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined4 unaff_w22;
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
  
code_r0x076ca5dc:
                    /* catch() { ... } // from try @ 076ca5c0 with catch @ 076ca5dc */
                    /* catch() { ... } // from try @ 076ca4f0 with catch @ 076ca5e0 */
  uVar2 = (*param_1)(param_5,unaff_w22,param_7,param_8);
                    /* catch() { ... } // from try @ 076ca5b8 with catch @ 076ca5e4 */
  if ((uVar2 & 1) == 0) goto LAB_076ca6e4;
                    /* catch() { ... } // from try @ 076ca5b4 with catch @ 076ca5e8 */
  plVar6 = *(long **)(unaff_x19 + 0x38);
                    /* catch() { ... } // from try @ 076ca4a4 with catch @ 076ca5ec */
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
                    /* catch() { ... } // from try @ 076ca13c with catch @ 076ca5f0
                       catch() { ... } // from try @ 076ca204 with catch @ 076ca5f0 */
  lVar4 = *plVar6;
                    /* catch() { ... } // from try @ 076ca1e8 with catch @ 076ca5f4
                       catch() { ... } // from try @ 076ca220 with catch @ 076ca5f4 */
  uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
                    /* catch() { ... } // from try @ 076ca5b0 with catch @ 076ca5f8 */
                    /* catch() { ... } // from try @ 076ca5ac with catch @ 076ca5fc */
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 076ca194 with catch @ 076ca600 */
  if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 076ca124 with catch @ 076ca604 */
                    /* catch() { ... } // from try @ 076ca5a8 with catch @ 076ca608 */
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 076ca0ec with catch @ 076ca60c */
                    /* catch() { ... } // from try @ 076ca074 with catch @ 076ca610 */
      if (*(long *)(piVar5 + -2) == *unaff_x27) {
                    /* try { // try from 076ca634 to 077ca6d7 has its CatchHandler @ 076c9cf8 */
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_076ca640;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x27,0);
                    /* try { // try from 076ca630 to 077ca633 has its CatchHandler @ 076ca6d4 */
LAB_076ca640:
  uVar2 = (*(code *)*puVar3)(plVar6,uVar1,&stack0x00000038,puVar3[1]);
  if ((uVar2 & 1) == 0) goto LAB_076ca6e4;
  fVar8 = fStack0000000000000074;
  fVar7 = (float)FUN_076ca834();
  fVar7 = fVar7 * fStack0000000000000038;
  fVar8 = fVar8 * fStack000000000000003c;
  fVar9 = param_4 * in_stack_00000040;
  if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_0706723c(*(long *)(unaff_x19 + 0x68),unaff_x20,*unaff_x28);
                    /* catch() { ... } // from try @ 076ca630 with catch @ 076ca6d4 */
  unaff_w23 = unaff_w23 & unaff_s8 < fVar9 + fVar7 + fVar8;
  plVar6 = in_stack_00000088;
                    /* try { // try from 076ca6d8 to 077ca6df has its CatchHandler @ 076ca6e8 */
  do {
    in_stack_00000088 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076ca490;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x24,0);
LAB_076ca490:
    uVar2 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    plVar6 = in_stack_00000088;
    if ((uVar2 & 1) == 0) {
      plVar6 = (long *)*in_stack_00000030;
      if (plVar6 == (long *)0x0) goto LAB_076ca7e4;
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_076ca7bc;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_076ca7a4;
    }
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000088;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076ca4f4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000088,*unaff_x25,0);
LAB_076ca4f4:
    unaff_x20 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
          goto LAB_076ca55c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x26,0x12);
LAB_076ca55c:
    uVar2 = (*(code *)*puVar3)(plVar6,&stack0x00000068,puVar3[1]);
    if ((uVar2 & 1) != 0) break;
LAB_076ca6e4:
                    /* catch() { ... } // from try @ 076ca5d0 with catch @ 076ca6e8
                       catch() { ... } // from try @ 076ca6d8 with catch @ 076ca6e8 */
    unaff_w23 = 0;
    plVar6 = in_stack_00000088;
  } while( true );
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  param_5 = *(long **)(unaff_x19 + 0x28);
  if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar4 = *param_5;
  unaff_w22 = *(undefined4 *)(unaff_x20 + 0x14);
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
        goto LAB_076ca5d0;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(param_5,*unaff_x26,9);
LAB_076ca5d0:
  param_1 = (code *)*puVar3;
  param_8 = puVar3[1];
  param_7 = &stack0x00000048;
  goto code_r0x076ca5dc;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_076ca7a4:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_076ca7d8;
    }
  }
LAB_076ca7bc:
  puVar3 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f65868,0);
LAB_076ca7d8:
  (*(code *)*puVar3)(plVar6,puVar3[1]);
LAB_076ca7e4:
  if (in_stack_00000028 == 0) {
    return unaff_w23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


