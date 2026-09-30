/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp_Internal
ENTRY_POINT: 051a1f48
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetSpaceWarp_Internal(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  float *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float fVar4;
  float unaff_s8;
  float unaff_s11;
  
  do {
    if (param_1 == 0) {
LAB_051a1fdc:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = FUN_05ef3598(param_1,0);
    uVar2 = FUN_04db8dd0(unaff_x21,uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x58);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) {
LAB_051a1fe0:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        fVar4 = (float)FUN_05f5043c(lVar3 + unaff_x23,0);
        unaff_s8 = unaff_s11 - fVar4;
        if (unaff_s8 <= 0.0) {
          unaff_s8 = 0.0;
        }
        uVar1 = 1;
LAB_051a1fb0:
        *unaff_x19 = unaff_s8;
        return uVar1;
      }
      goto LAB_051a1fdc;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x2c;
    if (unaff_x24 == unaff_x22) {
      uVar1 = 0;
      goto LAB_051a1fb0;
    }
    lVar3 = *(long *)(unaff_x20 + 0x58);
    if (lVar3 == 0) goto LAB_051a1fdc;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) goto LAB_051a1fe0;
    unaff_x21 = *(undefined8 *)(unaff_x20 + 0x48);
    param_1 = FUN_05f50360(lVar3 + unaff_x23,0);
  } while( true );
}


