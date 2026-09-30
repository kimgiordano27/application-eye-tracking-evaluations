/*
FUNCTION_NAME: OVRManager$$get_sharpenType
ENTRY_POINT: 0692606c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_sharpenType(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  long *plVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float __x;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486808);
    FUN_03a8a718(PTR_DAT_084868c0);
    *(undefined1 *)(unaff_x20 + 0xec3) = 1;
  }
  lVar3 = thunk_FUN_03ac74bc(*unaff_x21);
  FUN_07c42d70(lVar3,0);
  plVar4 = (long *)(param_2 + 0x30);
  *plVar4 = lVar3;
  thunk_FUN_03afed3c(plVar4,lVar3);
  lVar3 = FUN_03a8a804(*unaff_x22,0x14);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar2) {
      fVar8 = 0.0;
      uVar5 = 0;
      do {
        lVar3 = *plVar4;
        if (lVar3 == 0) goto LAB_069261ac;
        fVar9 = *(float *)(param_2 + 0x1c);
        fVar10 = *(float *)(param_2 + 0x20);
        fVar11 = *(float *)(param_2 + 0x24);
        __x = ABS(fVar8) * *(float *)(param_2 + 0x18);
        fVar6 = atanf(__x);
        fVar6 = atanf(__x - fVar11 * (__x - fVar6));
        fVar6 = sinf(fVar9 * fVar6);
        FUN_07c42374(fVar8,fVar10 * fVar6,lVar3,0);
        uVar1 = uVar5 + 1;
        fVar8 = fVar8 + (float)(&DAT_015c4900)[10 < uVar5];
        uVar5 = uVar1;
      } while (uVar2 != uVar1);
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if (*plVar4 == 0) goto LAB_069261ac;
          FUN_07c42908(0,*plVar4,uVar5,0);
          uVar5 = uVar5 + 1;
        } while (uVar2 != uVar5);
      }
    }
    uVar7 = FUN_06925fc4(param_2);
    *(undefined4 *)(param_2 + 0x28) = uVar7;
    return;
  }
LAB_069261ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


