/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 05305bc8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__get_foveatedRenderingLevel(undefined4 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float *unaff_x19;
  long unaff_x20;
  long lVar7;
  float fVar8;
  float fVar9;
  float unaff_s11;
  undefined4 uStack0000000000000008;
  
  uStack0000000000000008 = param_1;
  uVar1 = FUN_0616b588();
  fVar9 = 0.0;
  if (0 < (int)uVar1) {
    uVar2 = FUN_04f6ebb4(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) {
LAB_05305cd8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05305cdc:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar6 = lVar6 + 0x20;
LAB_05305c90:
      fVar8 = (float)FUN_06170650(lVar6,0);
      uVar5 = 1;
      fVar9 = 0.0;
      if (0.0 <= unaff_s11 - fVar8) {
        fVar9 = unaff_s11 - fVar8;
      }
      goto LAB_05305cac;
    }
    uVar2 = 0;
    lVar7 = 0x20;
    do {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) goto LAB_05305cd8;
      if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_05305cdc;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar6 = FUN_06170574(lVar6 + lVar7,0);
      if (lVar6 == 0) goto LAB_05305cd8;
      uVar3 = FUN_060edee8(lVar6,0);
      uVar4 = FUN_04f6dc3c(uVar5,uVar3,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x58);
        if (lVar6 == 0) goto LAB_05305cd8;
        if (*(uint *)(lVar6 + 0x18) <= (uint)uVar2) goto LAB_05305cdc;
        lVar6 = lVar6 + lVar7;
        goto LAB_05305c90;
      }
      uVar2 = uVar2 + 1;
      lVar7 = lVar7 + 0x2c;
    } while (uVar1 != uVar2);
  }
  uVar5 = 0;
LAB_05305cac:
  *unaff_x19 = fVar9;
  return uVar5;
}


