/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 05305af8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_permission_setup
*/


undefined8 OVRManager__OnPermissionGranted(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar12;
  float unaff_s14;
  float fVar13;
  float unaff_s15;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000068;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x22 + 0x2bf) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar1 = PTR_DAT_067c90a0;
  fVar11 = SQRT(unaff_s11 * unaff_s11 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15);
  if (fVar11 <= unaff_s13) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    fVar12 = *pfVar7;
    fVar13 = pfVar7[1];
    fVar11 = pfVar7[2];
  }
  else {
    fVar12 = unaff_s14 / fVar11;
    fVar13 = unaff_s15 / fVar11;
    fVar11 = unaff_s11 / fVar11;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = FUN_060f1c8c(unaff_x20 + 0x50,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar1);
  }
  in_stack_00000008 = in_stack_00000068._4_4_;
  fStack0000000000000014 = fVar12;
  in_stack_00000018 = fVar13;
  fStack000000000000001c = fVar11;
  uVar3 = FUN_0616b588(unaff_s12 + unaff_s8,&stack0x00000008,uVar9,uVar2,0);
  fVar11 = 0.0;
  if (0 < (int)uVar3) {
    uVar4 = FUN_04f6ebb4(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar4 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + 0x58);
      if (lVar8 == 0) {
LAB_05305cd8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_05305cdc:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar8 = lVar8 + 0x20;
LAB_05305c90:
      fVar12 = (float)FUN_06170650(lVar8,0);
      fVar12 = (unaff_s12 + unaff_s8) - fVar12;
      uVar9 = 1;
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar12;
      }
      goto LAB_05305cac;
    }
    uVar4 = 0;
    lVar10 = 0x20;
    do {
      lVar8 = *(long *)(unaff_x20 + 0x58);
      if (lVar8 == 0) goto LAB_05305cd8;
      if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_05305cdc;
      uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar8 = FUN_06170574(lVar8 + lVar10,0);
      if (lVar8 == 0) goto LAB_05305cd8;
      uVar5 = FUN_060edee8(lVar8,0);
      uVar6 = FUN_04f6dc3c(uVar9,uVar5,0);
      if ((uVar6 & 1) != 0) {
        lVar8 = *(long *)(unaff_x20 + 0x58);
        if (lVar8 == 0) goto LAB_05305cd8;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar4) goto LAB_05305cdc;
        lVar8 = lVar8 + lVar10;
        goto LAB_05305c90;
      }
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + 0x2c;
    } while (uVar3 != uVar4);
  }
  uVar9 = 0;
LAB_05305cac:
  *unaff_x19 = fVar11;
  return uVar9;
}


