/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 053059b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8
OVRManager__set_eyeTrackedFoveatedRenderingEnabled
          (undefined1 param_1 [16],float param_2,float param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000068;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x21 + 0x12f) = 1;
  if (*(long *)(unaff_x20 + 0x28) == 0) {
LAB_05305cd8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar12 = (float)FUN_060ffbe4(*(long *)(unaff_x20 + 0x28),0);
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05305cd8;
  fVar15 = param_3;
  fVar17 = param_2;
  fVar13 = (float)FUN_060ffbe4(*(long *)(unaff_x20 + 0x20),0);
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  puVar2 = PTR_DAT_067c8f80;
  fVar13 = fVar13 - fVar12;
  fVar17 = fVar17 - param_2;
  fVar15 = fVar15 - param_3;
  in_stack_00000068._4_4_ = fVar12;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar12 = *(float *)(unaff_x20 + 0x40);
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  fVar16 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar17 * fVar17);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar1 = DAT_011b06e4;
  if (fVar16 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    fVar13 = *pfVar8;
    fVar17 = pfVar8[1];
    fVar15 = pfVar8[2];
  }
  else {
    fVar13 = fVar13 / fVar16;
    fVar17 = fVar17 / fVar16;
    fVar15 = fVar15 / fVar16;
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar2 = PTR_DAT_067c90a0;
  fVar14 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar17 * fVar17);
  if (fVar14 <= fVar1) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    fVar13 = *pfVar8;
    fVar17 = pfVar8[1];
    fVar15 = pfVar8[2];
  }
  else {
    fVar13 = fVar13 / fVar14;
    fVar17 = fVar17 / fVar14;
    fVar15 = fVar15 / fVar14;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  fVar16 = fVar16 + fVar12;
  uVar3 = FUN_060f1c8c(unaff_x20 + 0x50,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar2);
  }
  fStack0000000000000008 = in_stack_00000068._4_4_;
  fStack000000000000000c = param_2;
  fStack0000000000000010 = param_3;
  fStack0000000000000014 = fVar13;
  fStack0000000000000018 = fVar17;
  fStack000000000000001c = fVar15;
  uVar4 = FUN_0616b588(fVar16,&stack0x00000008,uVar10,uVar3,0);
  fVar12 = 0.0;
  if (0 < (int)uVar4) {
    uVar5 = FUN_04f6ebb4(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar5 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + 0x58);
      if (lVar9 == 0) goto LAB_05305cd8;
      if (*(int *)(lVar9 + 0x18) == 0) {
LAB_05305cdc:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar9 = lVar9 + 0x20;
LAB_05305c90:
      fVar12 = (float)FUN_06170650(lVar9,0);
      fVar16 = fVar16 - fVar12;
      uVar10 = 1;
      fVar12 = 0.0;
      if (0.0 <= fVar16) {
        fVar12 = fVar16;
      }
      goto LAB_05305cac;
    }
    uVar5 = 0;
    lVar11 = 0x20;
    do {
      lVar9 = *(long *)(unaff_x20 + 0x58);
      if (lVar9 == 0) goto LAB_05305cd8;
      if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_05305cdc;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar9 = FUN_06170574(lVar9 + lVar11,0);
      if (lVar9 == 0) goto LAB_05305cd8;
      uVar6 = FUN_060edee8(lVar9,0);
      uVar7 = FUN_04f6dc3c(uVar10,uVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar9 = *(long *)(unaff_x20 + 0x58);
        if (lVar9 == 0) goto LAB_05305cd8;
        if (*(uint *)(lVar9 + 0x18) <= (uint)uVar5) goto LAB_05305cdc;
        lVar9 = lVar9 + lVar11;
        goto LAB_05305c90;
      }
      uVar5 = uVar5 + 1;
      lVar11 = lVar11 + 0x2c;
    } while (uVar4 != uVar5);
  }
  uVar10 = 0;
LAB_05305cac:
  *unaff_x19 = fVar12;
  return uVar10;
}


