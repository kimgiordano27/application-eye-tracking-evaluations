/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerEnd
ENTRY_POINT: 07ca1344
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerEnd(long param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w8;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  uint uVar12;
  ulong unaff_x21;
  long *plVar13;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float unaff_s10;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_044a54b4();
      param_1 = *unaff_x27;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_07ca16ac;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x21) {
LAB_07ca16b0:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar1 = *(uint *)(lVar8 + unaff_x21 * 4 + 0x20);
    if ((uVar1 != 0xffffffff) &&
       (uVar12 = (uint)unaff_x21, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar12 & 0x1f) & 1) != 0))
    {
      plVar13 = *(long **)(unaff_x19 + 0x38);
      if (plVar13 == (long *)0x0) goto LAB_07ca16ac;
      lVar8 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_07ca13dc;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar13,*unaff_x26,9);
LAB_07ca13dc:
      (*(code *)*puVar4)(plVar13,uVar1,&stack0x00000050,puVar4[1]);
      uVar9 = FUN_07ca16c0();
      if ((uVar9 & 1) == 0) {
        in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
        in_stack_00000018 = in_stack_00000058;
        uStack0000000000000024 = uStack0000000000000064;
        uStack0000000000000020 = uStack0000000000000060;
        lVar8 = FUN_07ca1788();
        plVar13 = *(long **)(unaff_x19 + 0x78);
        in_stack_00000078 = lVar8;
        if (plVar13 == (long *)0x0) goto LAB_07ca16ac;
        if ((lVar8 != 0) &&
           (lVar5 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar5 == 0)) {
          uVar6 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar6,0);
        }
        if (*(uint *)(plVar13 + 3) <= uVar1) goto LAB_07ca16b0;
        plVar13[(long)(int)uVar1 + 4] = lVar8;
        thunk_FUN_044bb4b4(plVar13 + (long)(int)uVar1 + 4,lVar8);
      }
      uStack000000000000000c = uVar1;
      uVar6 = thunk_FUN_04484e3c(*unaff_x28,(long)&stack0x00000008 + 4);
      uStack0000000000000008 = uVar12;
      uVar7 = thunk_FUN_04484e3c(*unaff_x28,&stack0x00000008);
      FUN_078b5afc(*(undefined8 *)PTR_DAT_09f50e88,uVar6,uVar7,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_07ca16ac;
      uVar6 = FUN_07ca36c8(*(long *)(unaff_x19 + 0x40),uVar1,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      plVar13 = *(long **)(unaff_x19 + 0x38);
      fVar3 = (float)uVar6;
      if (uVar1 != 0) {
        fVar3 = unaff_s10;
      }
      fVar2 = -(float)uVar6;
      if ((0x108421U >> (ulong)(uVar12 - 5 & 0x1f) & (uint)(uVar12 - 5 < 0x15)) == 0) {
        fVar2 = fVar3;
      }
      if (plVar13 == (long *)0x0) goto LAB_07ca16ac;
      lVar8 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_07ca1568;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar13,*unaff_x26,9);
LAB_07ca1568:
      (*(code *)*puVar4)(plVar13,unaff_x21 & 0xffffffff,&stack0x00000030,puVar4[1]);
      if (in_stack_00000078 == 0) goto LAB_07ca16ac;
      FUN_095258d0(in_stack_00000078,0);
      uVar6 = FUN_07ca1948(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                           uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar6,
                           fVar2);
      lVar8 = in_stack_00000078;
      uVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e48);
      FUN_07ca2304(uVar7,uVar1,unaff_x21 & 0xffffffff,lVar8,uVar6,0);
      lVar8 = *(long *)(unaff_x19 + 0x68);
      if (lVar8 == 0) goto LAB_07ca16ac;
      lVar5 = *(long *)(lVar8 + 0x10);
      lVar10 = *unaff_x29;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07ca16ac;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = uVar7;
        thunk_FUN_044bb4b4(puVar4,uVar7);
      }
      else {
        FUN_05bade44(lVar8,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 0x1a) {
      FUN_07ca1bb0();
      lVar8 = *(long *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        return;
      }
LAB_07ca16ac:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    param_1 = *unaff_x27;
    in_w8 = *(int *)(param_1 + 0xe4);
  } while( true );
}


