/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner.<SpawnCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 06381de4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;weak_pose_support
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_<SpawnCoroutine>d__4__System_IDisposable_Dispose
               (code *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float __y;
  float unaff_s9;
  
  *(code **)(unaff_x20 + 0x698) = param_1;
  fVar2 = (float)(*param_1)();
  __y = *(float *)(unaff_x19 + 0x2c);
  *(float *)(unaff_x19 + 0x30) = unaff_s9 + fVar2;
  fVar2 = fmodf(unaff_s9 + fVar2,__y);
  fVar2 = (fVar2 / __y) * DAT_012ed918;
  fVar2 = sinf(fVar2 + fVar2);
  if (DAT_086ef188 == (code *)0x0) {
    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
  }
  lVar1 = (*DAT_086ef188)();
  if (lVar1 != 0) {
    UnityEngine_UIElements_BoundsField___cctor
              (fVar2 * *(float *)(unaff_x19 + 0x20),fVar2 * *(float *)(unaff_x19 + 0x24),
               fVar2 * *(float *)(unaff_x19 + 0x28),lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


