/*
FUNCTION_NAME: OVRPlugin.OVRP_1_54_0$$ovrp_Media_SetPlatformInitialized
ENTRY_POINT: 0696687c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_54_0__ovrp_Media_SetPlatformInitialized(void)

{
  float fVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar15;
  float fVar16;
  float fVar17;
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
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  long in_stack_000001c0;
  
  while( true ) {
    uVar2 = FUN_07d1c660(unaff_x20,0);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
    thunk_FUN_03afed3c(unaff_x19 + 0x70,0);
    uVar2 = FUN_07d1c63c(unaff_x20,0);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
    thunk_FUN_03afed3c(unaff_x19 + 0x78,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *(long *)(lVar4 + 0x40);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    fVar16 = *(float *)(lVar4 + 0x13c);
    fVar15 = *(float *)(lVar4 + 0x130);
    uVar3 = FUN_07d1d058(unaff_x19 + 0x70,0);
    if ((uVar3 & 1) == 0) {
      FUN_07d1d094(unaff_x19 + 0x70,1,0);
    }
    *(float *)(unaff_x19 + 0x68) = fVar16 * *(float *)(unaff_x19 + 0x24);
    FUN_07d1cd00(&stack0x00000120,unaff_x19 + 0x78,0);
    in_stack_00000198 = in_stack_00000148;
    in_stack_00000190 = in_stack_00000140;
    in_stack_00000178 = in_stack_00000128;
    in_stack_00000170 = in_stack_00000120;
    in_stack_00000188 = in_stack_00000138;
    in_stack_00000180 = in_stack_00000130;
    in_stack_000001a0 = in_stack_00000150;
    uVar2 = in_stack_00000130;
    uVar11 = in_stack_00000140;
    fVar5 = (float)UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                             (&stack0x00000170,0);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    fVar17 = *(float *)(unaff_x19 + 0x68);
    fVar6 = (float)FUN_07ca8818(0);
    fVar6 = fVar6 * unaff_s10;
    fVar16 = unaff_s8;
    if (fVar17 <= unaff_s8) {
      fVar16 = fVar17;
    }
    fVar12 = (float)uVar9;
    fVar13 = (float)((ulong)uVar9 >> 0x20);
    fVar14 = (float)uVar10;
    fVar1 = unaff_s9;
    if (0.0 <= fVar17) {
      fVar1 = fVar16;
    }
    fVar16 = unaff_s8;
    if (fVar6 <= unaff_s8) {
      fVar16 = fVar6;
    }
    fVar17 = unaff_s9;
    if (0.0 <= fVar6) {
      fVar17 = fVar16;
    }
    fVar16 = (float)uVar2 +
             ((fVar13 + ((float)((ulong)uVar7 >> 0x20) - fVar13) * fVar1) - (float)uVar2) * fVar17;
    FUN_07d1d778(&stack0x00000120,
                 CONCAT44(fVar16,fVar5 + ((fVar12 + ((float)uVar7 - fVar12) * fVar1) - fVar5) *
                                         fVar17),fVar16,
                 (float)uVar11 +
                 ((fVar14 + ((float)uVar8 - fVar14) * fVar1) - (float)uVar11) * fVar17,0);
    in_stack_00000108 = in_stack_00000148;
    in_stack_00000100 = in_stack_00000140;
    in_stack_000000e8 = in_stack_00000128;
    in_stack_000000e0 = in_stack_00000120;
    in_stack_000000f8 = in_stack_00000138;
    in_stack_000000f0 = in_stack_00000130;
    in_stack_00000110 = in_stack_00000150;
    FUN_07d1ce50(unaff_x19 + 0x78,&stack0x000000e0,0);
    fVar16 = *(float *)(unaff_x19 + 0x28);
    FUN_07d1c8b8(&stack0x000000c0,unaff_x19 + 0x78,0);
    in_stack_00000128 = in_stack_000000c8;
    in_stack_00000120 = in_stack_000000c0;
    in_stack_00000138 = in_stack_000000d8;
    in_stack_00000130 = in_stack_000000d0;
    *(undefined8 *)(unaff_x19 + 0x88) = in_stack_000000c8;
    *(undefined8 *)(unaff_x19 + 0x80) = in_stack_000000c0;
    *(undefined8 *)(unaff_x19 + 0x98) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0x90) = in_stack_000000d0;
    thunk_FUN_03afed3c(unaff_x19 + 0x88,0);
    fVar16 = fVar15 * (fVar16 + unaff_s11);
    FUN_07d1d488(fVar16 + *(float *)(unaff_x19 + 0x58),unaff_x19 + 0x80,0);
    FUN_07d1d478(fVar16 + *(float *)(unaff_x19 + 0x5c),unaff_x19 + 0x80,0);
    in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 0x88);
    in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0x80);
    in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x98);
    in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0x90);
    FUN_07d1c9b4(unaff_x19 + 0x78,&stack0x000000a0,0);
    fVar16 = *(float *)(unaff_x19 + 0x2c);
    FUN_07d1caf0(&stack0x00000080,unaff_x19 + 0x78,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    *(undefined8 *)(unaff_x19 + 0x88) = in_stack_00000088;
    *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000080;
    *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000098;
    *(undefined8 *)(unaff_x19 + 0x90) = in_stack_00000090;
    thunk_FUN_03afed3c(unaff_x19 + 0x88,0);
    fVar15 = fVar15 * (fVar16 + unaff_s11);
    FUN_07d1d488(fVar15 + *(float *)(unaff_x19 + 0x60),unaff_x19 + 0x80,0);
    FUN_07d1d478(fVar15 + *(float *)(unaff_x19 + 100),unaff_x19 + 0x80,0);
    in_stack_00000068 = *(undefined8 *)(unaff_x19 + 0x88);
    in_stack_00000060 = *(undefined8 *)(unaff_x19 + 0x80);
    in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0x98);
    in_stack_00000070 = *(undefined8 *)(unaff_x19 + 0x90);
    FUN_07d1cbc4(unaff_x19 + 0x78,&stack0x00000060,0);
    uVar3 = FUN_061c1964(&stack0x000001b0,*unaff_x22);
    unaff_x20 = in_stack_000001c0;
    if ((uVar3 & 1) == 0) break;
    if (in_stack_000001c0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = FUN_07d1b874(in_stack_000001c0,0);
    if ((uVar3 & 1) == 0) {
      FUN_07d1c280(unaff_x20,0);
    }
  }
  FUN_061c1960(&stack0x000001b0,*unaff_x21);
  return;
}


