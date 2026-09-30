/*
FUNCTION_NAME: OVRPlugin$$EnqueueDestroyLayer
ENTRY_POINT: 07c73430
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueDestroyLayer
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  while (unaff_x28 < *(uint *)(unaff_x24 + 0x18)) {
    uVar9 = FUN_07ca0214(unaff_x24 + unaff_x29 + 0x20,0);
    if (unaff_x23 == 0) goto LAB_07c7371c;
                    /* try { // try from 07c73458 to 07d7347f has its CatchHandler @ 07c73600 */
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x28) break;
    lVar3 = unaff_x23 + unaff_x29;
    unaff_x28 = unaff_x28 + 1;
    unaff_x29 = unaff_x29 + 0x10;
    *(undefined4 *)(lVar3 + 0x20) = uVar9;
    *(int *)(lVar3 + 0x24) = (int)param_2;
    *(int *)(lVar3 + 0x28) = (int)param_3;
    *(int *)(lVar3 + 0x2c) = (int)param_4;
    lVar3 = FUN_07c73800();
    if (lVar3 == 0) goto LAB_07c7371c;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x28) {
      lVar3 = FUN_07c723dc();
      if (lVar3 == 0) {
        uVar7 = (ulong)DAT_01c75a38;
        uVar11 = 0;
        uVar6 = FUN_09516910();
                    /* try { // try from 07c73500 to 07d735af has its CatchHandler @ 07c731f8 */
        uStack0000000000000094 = *(undefined8 *)(unaff_x26 + 0x14);
        uStack0000000000000088 = (undefined4)_uStack00000000000000a8;
        in_stack_00000080 = _uStack00000000000000a0;
        uStack000000000000008c = (undefined4)*(undefined8 *)(unaff_x26 + 0xc);
        uStack0000000000000090 = (undefined4)((ulong)*(undefined8 *)(unaff_x26 + 0xc) >> 0x20);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uStack0000000000000048 = uStack0000000000000088;
        in_stack_00000040 = in_stack_00000080;
        uStack0000000000000054 = uStack0000000000000094;
        uStack000000000000004c = uStack000000000000008c;
        uStack0000000000000050 = uStack0000000000000090;
        FUN_07ca0128(&stack0x00000060,&stack0x00000040,0);
        uStack00000000000000a8 = uStack0000000000000068;
        fStack00000000000000ac = fStack000000000000006c;
        _uStack00000000000000a0 = in_stack_00000060;
        uVar1 = _uStack00000000000000a0;
        *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000074;
        *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000070,fStack000000000000006c);
        uStack00000000000000a0 = (undefined4)in_stack_00000060;
        uVar9 = uStack00000000000000a0;
        uStack00000000000000a4 = (undefined4)((ulong)in_stack_00000060 >> 0x20);
        uVar2 = uStack00000000000000a4;
        uVar12 = uVar11;
        uVar13 = uVar7;
        _uStack00000000000000a0 = uVar1;
        uVar9 = FUN_09516eb8(uVar6,uVar11,uVar7,param_4,uVar9,uVar2,uStack0000000000000068,0);
        _uStack00000000000000a0 = CONCAT44((int)uVar12,uVar9);
        fVar19 = (float)uVar6;
        fVar15 = fVar19 * in_stack_000000b8;
        fVar18 = (float)uVar11;
        fVar20 = (float)param_4;
        fVar17 = (float)uVar7;
        fVar16 = fVar18 * fStack00000000000000b4;
        fVar21 = fVar17 * fStack00000000000000b0;
        fVar22 = fVar19 * fStack00000000000000b0;
        fVar10 = fVar18 * fStack00000000000000b0;
        fVar14 = fVar17 * fStack00000000000000b4;
        fStack00000000000000b0 =
             (fVar17 * fStack00000000000000ac +
             fVar20 * fStack00000000000000b0 + fVar18 * in_stack_000000b8) -
             fVar19 * fStack00000000000000b4;
        fStack00000000000000b4 =
             (fVar22 + fVar20 * fStack00000000000000b4 + fVar17 * in_stack_000000b8) -
             fVar18 * fStack00000000000000ac;
        in_stack_000000b8 =
             ((fVar20 * in_stack_000000b8 - fVar19 * fStack00000000000000ac) - fVar10) - fVar14;
        _uStack00000000000000a8 =
             CONCAT44((fVar16 + fVar20 * fStack00000000000000ac + fVar15) - fVar21,(int)uVar13);
        goto LAB_07c73638;
      }
      plVar4 = (long *)FUN_07c723dc();
      if (plVar4 == (long *)0x0) goto LAB_07c7371c;
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 == 0) goto LAB_07c734d0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_07c734b8;
    }
    unaff_x23 = FUN_07c73800();
    unaff_x24 = FUN_07c73800();
    if (unaff_x24 == 0) goto LAB_07c7371c;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_07c734b8:
    if (*(long *)(piVar8 + -2) == *unaff_x25) {
      puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
      goto LAB_07c73610;
    }
  }
LAB_07c734d0:
                    /* try { // try from 07c734d8 to 07d734ff has its CatchHandler @ 07c7360c */
  puVar5 = (undefined8 *)FUN_044822ac(plVar4,*unaff_x25,3);
LAB_07c73610:
  (*(code *)*puVar5)(&stack0x00000080,plVar4,&stack0x000000a0);
  _uStack00000000000000a8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  _uStack00000000000000a0 = in_stack_00000080;
  *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000094;
  *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000090,uStack000000000000008c);
LAB_07c73638:
  FUN_07c738a8();
  lVar3 = FUN_07c723dc();
  if (lVar3 != 0) {
    plVar4 = (long *)FUN_07c723dc();
    if ((unaff_x19 == 0) || (uVar6 = FUN_095259a0(), plVar4 == (long *)0x0)) {
LAB_07c7371c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_07c736d8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar4,*unaff_x25,4);
LAB_07c736d8:
    (*(code *)*puVar5)(plVar4,uVar6,puVar5[1]);
    FUN_07c72b70();
  }
  return;
}


