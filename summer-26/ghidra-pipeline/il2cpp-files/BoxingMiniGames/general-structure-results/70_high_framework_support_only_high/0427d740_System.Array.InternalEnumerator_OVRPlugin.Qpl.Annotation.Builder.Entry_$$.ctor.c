/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$.ctor
ENTRY_POINT: 0427d740
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>___ctor
              (long param_1,int *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0367c9fc(param_1);
  }
  plVar1 = (long *)FUN_04028ab8(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x80));
  if (0 < *param_2) {
    if (plVar1 == (long *)0x0) {
LAB_0427d838:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (plVar1,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),param_3);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if ((*(long *)(param_2 + 6) != 0) && (0 < *param_2 + -1)) {
      lVar5 = 0;
      uVar2 = 0;
      do {
        lVar4 = *(long *)(param_2 + 6);
        if (lVar4 == 0) goto LAB_0427d838;
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        uVar3 = (**(code **)(*plVar1 + 0x1b8))
                          (plVar1,*(undefined8 *)(lVar4 + lVar5 + 0x20),
                           *(undefined8 *)(lVar4 + lVar5 + 0x28),param_3);
        if ((uVar3 & 1) != 0) {
          return (int)uVar2 + 1;
        }
        uVar2 = uVar2 + 1;
        lVar5 = lVar5 + 0x10;
      } while ((long)uVar2 < (long)(*param_2 + -1));
    }
  }
  return -1;
}


