/*
FUNCTION_NAME: OVRManager$$get_nativeColorGamut
ENTRY_POINT: 073c362c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_nativeColorGamut(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong in_x9;
  float *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float fVar5;
  float unaff_s8;
  float unaff_s11;
  
  do {
    if (in_x9 <= unaff_x22) {
LAB_073c36dc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    lVar1 = FUN_0863d930(param_1 + unaff_x23,0);
    if (lVar1 == 0) {
LAB_073c36d8:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = FUN_085dc490(lVar1,0);
    uVar3 = FUN_06f74074(uVar4,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *(long *)(unaff_x20 + 0x58);
      if (lVar1 == 0) goto LAB_073c36d8;
      if ((uint)unaff_x22 < *(uint *)(lVar1 + 0x18)) {
        fVar5 = (float)FUN_0863da0c(lVar1 + unaff_x23,0);
        unaff_s8 = unaff_s11 - fVar5;
        if (unaff_s8 <= 0.0) {
          unaff_s8 = 0.0;
        }
        uVar4 = 1;
LAB_073c36ac:
        *unaff_x19 = unaff_s8;
        return uVar4;
      }
      goto LAB_073c36dc;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x2c;
    if (unaff_x24 == unaff_x22) {
      uVar4 = 0;
      goto LAB_073c36ac;
    }
    param_1 = *(long *)(unaff_x20 + 0x58);
    if (param_1 == 0) goto LAB_073c36d8;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  } while( true );
}


