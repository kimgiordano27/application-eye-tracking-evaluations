/*
FUNCTION_NAME: UnityEngine.Rendering.RenderPipeline$$Dispose
ENTRY_POINT: 07bd7534
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 229
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_possible_biometrics_hits_1
*/


undefined8 UnityEngine_Rendering_RenderPipeline__Dispose(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int unaff_w19;
  long *plVar8;
  long *unaff_x21;
  long lVar9;
  
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x21);
  }
  uVar1 = FUN_07c9e200(param_1,0,0);
  if ((uVar1 & 1) == 0) {
    if ((param_1 == 0) || (lVar9 = *(long *)(param_1 + 0x18), lVar9 == 0)) {
LAB_07bd7660:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar1 = 0;
      uVar5 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        plVar8 = *(long **)(lVar9 + 0x20 + uVar1 * 8);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_07c9e200(plVar8,0,0);
        if ((uVar5 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_07bd7660;
          uVar5 = FUN_07bd1ac4(plVar8);
          if ((uVar5 & 1) != 0) {
            if (unaff_w19 < 2) {
              if (unaff_w19 == 0) {
                puVar6 = (undefined8 *)(*plVar8 + 0x188);
                puVar7 = (undefined8 *)(*plVar8 + 400);
              }
              else {
                if (unaff_w19 != 1) {
UnityEngine_Rendering_RenderPipelineAsset__get_defaultLineMaterial:
                  uVar2 = thunk_FUN_03af1434(OVREyeGaze_TypeInfo);
                  uVar2 = thunk_FUN_03ac70f4(uVar2,&stack0x0000000c);
                  thunk_FUN_03af1434(PTR_DAT_08491280);
                  uVar3 = thunk_FUN_03ac74bc();
                  uVar4 = thunk_FUN_03af1434(PTR_DAT_084936d8);
                  FUN_066b4278(uVar3,uVar4,uVar2,0,0);
                  uVar2 = thunk_FUN_03af1434(OVRFaceExpressions_TypeInfo);
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a884(uVar3,uVar2);
                }
                puVar6 = (undefined8 *)(*plVar8 + 0x1b8);
                puVar7 = (undefined8 *)(*plVar8 + 0x1c0);
              }
            }
            else if (unaff_w19 == 2) {
              puVar6 = (undefined8 *)(*plVar8 + 0x198);
              puVar7 = (undefined8 *)(*plVar8 + 0x1a0);
            }
            else {
              if (unaff_w19 != 3)
              goto UnityEngine_Rendering_RenderPipelineAsset__get_defaultLineMaterial;
              puVar6 = (undefined8 *)(*plVar8 + 0x1a8);
              puVar7 = (undefined8 *)(*plVar8 + 0x1b0);
            }
            (*(code *)*puVar6)(plVar8,*puVar7);
          }
        }
        uVar5 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar1 = uVar1 + 1;
      } while ((long)uVar1 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
  }
  return 1;
}


