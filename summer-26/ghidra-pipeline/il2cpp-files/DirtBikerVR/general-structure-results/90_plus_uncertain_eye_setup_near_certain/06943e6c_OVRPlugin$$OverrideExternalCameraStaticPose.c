/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 06943e6c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x19;
  long *unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((int)unaff_x19[0xd] == 0) {
    return;
  }
  plVar1 = (long *)unaff_x19[0xc];
  if (plVar1 != (long *)0x0) {
    fVar4 = (float)(**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
    fVar8 = fVar4 + *(float *)(unaff_x19 + 6);
    if (fVar8 == 0.0) {
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4fb40(*(undefined8 *)PTR_DAT_084b6340,0);
      return;
    }
    fVar5 = (float)(**(code **)(*unaff_x19 + 0x238))((int)unaff_x19[8],unaff_s8);
    lVar2 = unaff_x19[0xf];
    if (lVar2 != 0) {
      fVar7 = *(float *)(unaff_x19 + 8);
      fVar9 = *(float *)(unaff_x19 + 6);
      fVar6 = (float)(**(code **)(lVar2 + 0x18))
                               (fVar7,unaff_s8,*(undefined8 *)(lVar2 + 0x40),
                                *(undefined8 *)(lVar2 + 0x28));
      fVar5 = ((((fVar4 / fVar8) * fVar5 + fVar7 * (fVar9 / fVar8)) - *(float *)(unaff_x19 + 8)) *
              *(float *)(unaff_x19 + 6)) / unaff_s8;
      pcVar3 = *(code **)(*unaff_x19 + 600);
      fVar4 = fVar6 - fVar5;
      *(float *)(unaff_x19 + 7) = fVar4;
      *(float *)(unaff_x19 + 0x12) = (fVar6 * *(float *)(unaff_x19 + 8)) / 1000.0;
      fVar4 = (float)(*pcVar3)(fVar4,0,unaff_s8);
      lVar2 = unaff_x19[0x11];
      fVar8 = *(float *)(unaff_x19 + 8) + ((fVar5 + fVar6 + fVar4) / fVar8) * unaff_s8;
      fVar4 = *(float *)(unaff_x19 + 0x20) * DAT_015c5d4c;
      if (fVar8 <= fVar4) {
        fVar4 = fVar8;
      }
      fVar6 = 1.0;
      fVar5 = 0.0;
      if (0.0 <= fVar8) {
        fVar5 = fVar4;
      }
      fVar8 = fVar5 / *(float *)(unaff_x19 + 0x20);
      *(float *)(unaff_x19 + 8) = fVar5;
      fVar4 = 1.0;
      if (fVar8 <= 1.0) {
        fVar4 = fVar8;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar8) {
        fVar5 = fVar4;
      }
      *(float *)(unaff_x19 + 0x26) = fVar5;
      if (lVar2 != 0) {
        if (*(char *)(lVar2 + 0x10) != '\0') {
          fVar6 = *(float *)(lVar2 + 0x20);
        }
        fVar8 = *(float *)(unaff_x19 + 0x12) / (*(float *)((long)unaff_x19 + 0x9c) * fVar6);
        fVar4 = 1.0;
        if (fVar8 <= 1.0) {
          fVar4 = fVar8;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar8) {
          fVar5 = fVar4;
        }
        *(float *)((long)unaff_x19 + 0x13c) = fVar5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


