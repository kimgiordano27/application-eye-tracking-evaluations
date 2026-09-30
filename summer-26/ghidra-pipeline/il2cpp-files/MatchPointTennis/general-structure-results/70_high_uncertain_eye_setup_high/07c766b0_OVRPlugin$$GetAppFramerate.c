/*
FUNCTION_NAME: OVRPlugin$$GetAppFramerate
ENTRY_POINT: 07c766b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppFramerate(long param_1)

{
  long lVar1;
  long *unaff_x19;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x24;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s3;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar15 = *(float *)(param_1 + 0xec4);
  plVar5 = *(long **)(unaff_x24 + 0x7b0);
  lVar4 = 0;
  uVar2 = 0;
  while( true ) {
    lVar1 = *plVar5;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar1 = *plVar5;
    }
    if (**(long **)(lVar1 + 0xb8) == 0) break;
    if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)uVar2) {
      return;
    }
    if (*unaff_x19 == 0) break;
    if ((long)*(int *)(*unaff_x19 + 0x18) <= (long)uVar2) {
      return;
    }
    lVar1 = FUN_07c76e24();
    if (lVar1 == 0) break;
    lVar1 = FUN_07c76cd0(lVar1,uVar2 & 0xffffffff);
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + 0x18);
      fVar7 = *(float *)(lVar1 + 0x24) * fVar15;
      fVar8 = *(float *)(lVar1 + 0x28) * fVar15;
      fVar6 = (float)FUN_09516910(*(float *)(lVar1 + 0x20) * fVar15,fVar7,fVar8,0);
      lVar1 = *unaff_x19;
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (lVar3 == 0) break;
      lVar1 = lVar1 + lVar4;
      fVar14 = *(float *)(lVar1 + 0x28);
      fVar10 = *(float *)(lVar1 + 0x2c);
      fVar11 = *(float *)(lVar1 + 0x20);
      fVar13 = *(float *)(lVar1 + 0x24);
      fVar16 = in_s3 * fVar14;
      fVar12 = in_s3 * fVar11;
      fVar9 = in_s3 * fVar13;
      in_s3 = ((in_s3 * fVar10 - fVar6 * fVar11) - fVar7 * fVar13) - fVar8 * fVar14;
      FUN_0953a418((fVar7 * fVar14 + fVar12 + fVar6 * fVar10) - fVar8 * fVar13,
                   (fVar8 * fVar11 + fVar9 + fVar7 * fVar10) - fVar6 * fVar14,
                   (fVar6 * fVar13 + fVar16 + fVar8 * fVar10) - fVar7 * fVar11,lVar3,0);
    }
    uVar2 = uVar2 + 1;
    lVar4 = lVar4 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


