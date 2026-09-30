/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 05fdb92c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 123
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationLevel(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_07a467db & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075b8c38);
    DAT_07a467db = 1;
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    fVar2 = (float)(**(code **)(lVar1 + 0x18))
                             (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    fVar7 = *(float *)(param_1 + 0xd0);
    if ((*(char *)(param_1 + 0x118) == '\0') || (0.0 < fVar7)) {
      fVar5 = *(float *)(param_1 + 0xcc);
      fVar4 = 1.0 / (fVar2 * *(float *)(param_1 + 0x78) + 1.0);
      fVar9 = fVar5 * fVar4;
      fVar8 = *(float *)(param_1 + 0xd4) * fVar4;
      *(float *)(param_1 + 0xcc) = fVar9;
      *(float *)(param_1 + 0xd4) = fVar8;
      if (0.0 < fVar7) {
        fVar4 = fVar2 * *(float *)(param_1 + 0x74) + 1.0;
        fVar7 = fVar7 * (1.0 / fVar4);
        *(float *)(param_1 + 0xd0) = fVar7;
      }
      if (*(int *)(*(long *)PTR_DAT_075b8c38 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar3 = (float)FUN_06ee4a4c(0);
      fVar6 = *(float *)(param_1 + 0x80);
      *(float *)(param_1 + 0xcc) = fVar9 + fVar2 * fVar3 * fVar6;
      *(float *)(param_1 + 0xd0) = fVar7 + fVar2 * fVar4 * fVar6;
      *(float *)(param_1 + 0xd4) = fVar8 + fVar2 * fVar5 * fVar6;
    }
    else {
      fVar2 = 1.0 / (fVar2 * *(float *)(param_1 + 0x70) + 1.0);
      *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) * fVar2;
      *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xd4) * fVar2;
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


