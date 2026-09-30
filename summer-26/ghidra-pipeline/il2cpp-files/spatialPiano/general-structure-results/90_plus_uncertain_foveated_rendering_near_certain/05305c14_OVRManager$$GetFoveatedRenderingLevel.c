/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 05305c14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__GetFoveatedRenderingLevel(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  float *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar4;
  long lVar5;
  ulong unaff_x23;
  float fVar6;
  float unaff_s8;
  float unaff_s11;
  
  lVar5 = 0x20;
  do {
    lVar3 = *(long *)(unaff_x20 + 0x58);
    if (lVar3 == 0) goto LAB_05305cd8;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) {
LAB_05305cdc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    lVar3 = FUN_06170574(lVar3 + lVar5,0);
    if (lVar3 == 0) {
LAB_05305cd8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar1 = FUN_060edee8(lVar3,0);
    uVar2 = FUN_04f6dc3c(uVar4,uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x58);
      if (lVar3 == 0) goto LAB_05305cd8;
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x23) goto LAB_05305cdc;
      fVar6 = (float)FUN_06170650(lVar3 + lVar5,0);
      uVar4 = 1;
      unaff_s8 = 0.0;
      if (0.0 <= unaff_s11 - fVar6) {
        unaff_s8 = unaff_s11 - fVar6;
      }
      goto LAB_05305cac;
    }
    unaff_x23 = unaff_x23 + 1;
    lVar5 = lVar5 + 0x2c;
    if ((unaff_x21 & 0xffffffff) == unaff_x23) {
      uVar4 = 0;
LAB_05305cac:
      *unaff_x19 = unaff_s8;
      return uVar4;
    }
  } while( true );
}


