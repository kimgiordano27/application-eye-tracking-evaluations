/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 0532b504
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0532b828) */

void OVRPlugin__get_faceTracking2Enabled(undefined8 *param_1)

{
  float fVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x23;
  long *plVar7;
  long *unaff_x24;
  long unaff_x25;
  long *plVar8;
  long unaff_x26;
  long *plVar9;
  long unaff_x27;
  long *plVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fStack0000000000000004;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long *in_stack_00000038;
  
  plVar8 = *(long **)(unaff_x25 + 0x538);
  plVar9 = *(long **)(unaff_x26 + 0x208);
  plVar10 = *(long **)(unaff_x27 + 0x800);
  plVar7 = *(long **)(unaff_x23 + 0x1b0);
  in_stack_00000038 = (long *)(*(code *)*param_1)();
  fVar1 = DAT_011b0598;
  fStack0000000000000004 = DAT_011b00f4;
  do {
    plVar6 = in_stack_00000038;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *in_stack_00000038;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0532b598;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*unaff_x24,0);
LAB_0532b598:
    uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    plVar6 = in_stack_00000038;
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000038;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_0532b7b8;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *in_stack_00000038;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0532b5fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*plVar8,0);
LAB_0532b5fc:
    auVar19 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (auVar19._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *plVar6;
    uVar14 = *(undefined4 *)(auVar19._0_8_ + 0x10);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar9) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_0532b66c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*plVar9,4);
LAB_0532b66c:
    uVar4 = (*(code *)*puVar2)(plVar6,uVar14,&stack0x00000018,puVar2[1]);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar14 = uStack000000000000001c;
      uVar15 = in_stack_00000020;
      uVar11 = FUN_060fdd00(uStack0000000000000018,uStack000000000000001c,in_stack_00000020,
                            *(long *)(unaff_x19 + 0x38),0);
      fVar17 = auVar19._12_4_;
      if (auVar19._8_4_ <= fVar17) {
        fVar12 = 0.0;
        fVar17 = 1.0;
LAB_0532b728:
        fVar18 = 0.0;
        fVar13 = 1.0;
      }
      else {
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
          fVar12 = 1.0;
          goto LAB_0532b728;
        }
        fVar12 = (auVar19._8_4_ / fVar17) * 0.5;
        fVar17 = 1.0;
        if (fVar12 <= 1.0) {
          fVar17 = fVar12;
        }
        fVar13 = 0.0;
        if (0.0 <= fVar12) {
          fVar13 = fVar17;
        }
        fVar12 = fVar13 * 0.0 + 1.0;
        fVar17 = fStack0000000000000004 - fVar13 * fStack0000000000000004;
        fVar18 = fVar1 - fVar13 * fVar1;
        fVar13 = fVar12;
      }
      lVar3 = *plVar10;
      fVar16 = *(float *)(unaff_x19 + 0x40);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar3 = *plVar10;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      *(float *)(lVar3 + 0xc) = fVar12;
      *(float *)(lVar3 + 0x10) = fVar17;
      *(float *)(lVar3 + 0x14) = fVar18;
      *(float *)(lVar3 + 0x18) = fVar13;
      *(float *)(lVar3 + 0x1c) = fVar16 * 0.5;
      FUN_052ae014(uVar11,uVar14,uVar15,0,0);
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *plVar7) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0532b7d4;
    }
  }
LAB_0532b7b8:
  puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*plVar7,0);
LAB_0532b7d4:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  return;
}


