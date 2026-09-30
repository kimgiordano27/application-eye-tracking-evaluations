/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequency
ENTRY_POINT: 05d1bbe8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemDisplayFrequency(void)

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
  float in_s3;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  
  while( true ) {
    lVar1 = FUN_05d1c304();
    if (lVar1 == 0) break;
    lVar1 = FUN_05d1c1b0(lVar1,unaff_x21 & 0xffffffff);
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x18);
      fVar4 = *(float *)(lVar1 + 0x24) * unaff_s8;
      fVar5 = *(float *)(lVar1 + 0x28) * unaff_s8;
      fVar3 = (float)FUN_068ecdd4(*(float *)(lVar1 + 0x20) * unaff_s8,fVar4,fVar5,0);
      lVar1 = *unaff_x19;
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (lVar2 == 0) break;
      lVar1 = lVar1 + unaff_x23;
      fVar11 = *(float *)(lVar1 + 0x28);
      fVar7 = *(float *)(lVar1 + 0x2c);
      fVar8 = *(float *)(lVar1 + 0x20);
      fVar10 = *(float *)(lVar1 + 0x24);
      fVar12 = in_s3 * fVar11;
      fVar9 = in_s3 * fVar8;
      fVar6 = in_s3 * fVar10;
      in_s3 = ((in_s3 * fVar7 - fVar3 * fVar8) - fVar4 * fVar10) - fVar5 * fVar11;
      UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
                ((fVar4 * fVar11 + fVar9 + fVar3 * fVar7) - fVar5 * fVar10,
                 (fVar5 * fVar8 + fVar6 + fVar4 * fVar7) - fVar3 * fVar11,
                 (fVar3 * fVar10 + fVar12 + fVar5 * fVar7) - fVar4 * fVar8,lVar2,0);
    }
    unaff_x21 = unaff_x21 + 1;
    unaff_x23 = unaff_x23 + 0x10;
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar1 = *unaff_x24;
    }
    if (**(long **)(lVar1 + 0xb8) == 0) break;
    if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
      return;
    }
    if (*unaff_x19 == 0) break;
    if ((long)*(int *)(*unaff_x19 + 0x18) <= (long)unaff_x21) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


