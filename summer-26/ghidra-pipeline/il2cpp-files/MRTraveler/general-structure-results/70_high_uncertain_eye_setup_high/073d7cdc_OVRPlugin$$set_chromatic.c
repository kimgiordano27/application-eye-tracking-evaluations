/*
FUNCTION_NAME: OVRPlugin$$set_chromatic
ENTRY_POINT: 073d7cdc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_chromatic
               (float param_1,float param_2,undefined1 param_3 [16],float param_4,long param_5)

{
  long lVar1;
  long *unaff_x19;
  ulong unaff_x21;
  long lVar2;
  long unaff_x23;
  long *unaff_x24;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  
  while( true ) {
    lVar2 = *(long *)(param_5 + 0x18);
    param_2 = param_2 * unaff_s8;
    fVar4 = *(float *)(param_5 + 0x28) * unaff_s8;
    fVar3 = (float)FUN_085d262c(param_1 * unaff_s8,param_2,fVar4,0);
    lVar1 = *unaff_x19;
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (lVar2 == 0) break;
    lVar1 = lVar1 + unaff_x23;
    fVar10 = *(float *)(lVar1 + 0x28);
    fVar6 = *(float *)(lVar1 + 0x2c);
    fVar7 = *(float *)(lVar1 + 0x20);
    fVar9 = *(float *)(lVar1 + 0x24);
    fVar11 = param_4 * fVar10;
    fVar8 = param_4 * fVar7;
    fVar5 = param_4 * fVar9;
    param_4 = ((param_4 * fVar6 - fVar3 * fVar7) - param_2 * fVar9) - fVar4 * fVar10;
    FUN_085eb51c((param_2 * fVar10 + fVar8 + fVar3 * fVar6) - fVar4 * fVar9,
                 (fVar4 * fVar7 + fVar5 + param_2 * fVar6) - fVar3 * fVar10,
                 (fVar3 * fVar9 + fVar11 + fVar4 * fVar6) - param_2 * fVar7,lVar2,0);
    do {
      unaff_x21 = unaff_x21 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      lVar1 = *unaff_x24;
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar1 = *unaff_x24;
      }
      if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_073d7dbc;
      if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
        return;
      }
      if (*unaff_x19 == 0) goto LAB_073d7dbc;
      if ((long)*(int *)(*unaff_x19 + 0x18) <= (long)unaff_x21) {
        return;
      }
      lVar1 = FUN_073d83e0();
      if (lVar1 == 0) goto LAB_073d7dbc;
      param_5 = FUN_073d828c(lVar1,unaff_x21 & 0xffffffff);
    } while (param_5 == 0);
    param_1 = *(float *)(param_5 + 0x20);
    param_2 = *(float *)(param_5 + 0x24);
  }
LAB_073d7dbc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


