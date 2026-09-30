/*
FUNCTION_NAME: OVRManager$$get_colorGamut
ENTRY_POINT: 073c35bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_colorGamut(void)

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
  float unaff_s11;
  
  uVar1 = FUN_0863b150();
  fVar8 = 0.0;
  if (0 < (int)uVar1) {
    uVar2 = FUN_06f74e14(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) {
LAB_073c36d8:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_073c36dc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar6 = lVar6 + 0x20;
LAB_073c3694:
      fVar8 = (float)FUN_0863da0c(lVar6,0);
      fVar8 = unaff_s11 - fVar8;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      uVar5 = 1;
      goto LAB_073c36ac;
    }
    uVar2 = 0;
    lVar7 = 0x20;
    do {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) goto LAB_073c36d8;
      if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_073c36dc;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar6 = FUN_0863d930(lVar6 + lVar7,0);
      if (lVar6 == 0) goto LAB_073c36d8;
      uVar3 = FUN_085dc490(lVar6,0);
      uVar4 = FUN_06f74074(uVar5,uVar3,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x58);
        if (lVar6 == 0) goto LAB_073c36d8;
        if (*(uint *)(lVar6 + 0x18) <= (uint)uVar2) goto LAB_073c36dc;
        lVar6 = lVar6 + lVar7;
        goto LAB_073c3694;
      }
      uVar2 = uVar2 + 1;
      lVar7 = lVar7 + 0x2c;
    } while (uVar1 != uVar2);
  }
  uVar5 = 0;
LAB_073c36ac:
  *unaff_x19 = fVar8;
  return uVar5;
}


