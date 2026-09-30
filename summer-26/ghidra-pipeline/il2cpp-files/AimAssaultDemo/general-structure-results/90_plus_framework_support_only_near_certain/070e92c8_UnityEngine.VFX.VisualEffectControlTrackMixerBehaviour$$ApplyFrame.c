/*
FUNCTION_NAME: UnityEngine.VFX.VisualEffectControlTrackMixerBehaviour$$ApplyFrame
ENTRY_POINT: 070e92c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 UnityEngine_VFX_VisualEffectControlTrackMixerBehaviour__ApplyFrame(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long in_stack_00000008;
  
  FUN_0373b518(OVRPlugin_Qpl_Annotation_Builder_var);
  FUN_0373b518(UnityEngine_ParticleSystem_CollisionModule_var);
  FUN_0373b518(<>f__AnonymousType0<Material,_Light>_TypeInfo);
  FUN_0373b518(
              UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARAnchorManager,_ARAnchor>_TypeInfo
              );
  FUN_0373b518(
              UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
              );
  *(undefined1 *)(unaff_x23 + 0xcbd) = 1;
  in_stack_00000008 = 0;
  uVar3 = FUN_070e9238();
  if ((unaff_x20 & 1) == 0) {
LAB_070e93c4:
    *unaff_x19 = 0;
    thunk_FUN_037aeb94();
    return 0;
  }
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    uVar4 = FUN_05a3a6e4(*(long *)(unaff_x21 + 0x10),uVar3,&stack0x00000008,
                         *(undefined8 *)
                          UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                        );
    if ((uVar4 & 1) == 0) goto LAB_070e93c4;
    if (in_stack_00000008 != 0) {
      if (*(int *)(in_stack_00000008 + 0x20) < 1) goto LAB_070e93c4;
      plVar5 = (long *)FUN_052c1e64(in_stack_00000008,
                                    *(undefined8 *)
                                     UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                                   );
      if ((in_stack_00000008 != 0) && (plVar5 != (long *)0x0)) {
        lVar8 = *plVar5;
        iVar1 = *(int *)(in_stack_00000008 + 0x20);
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_Qpl_Annotation_Builder_var) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_070e93f8;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)OVRPlugin_Qpl_Annotation_Builder_var,0);
LAB_070e93f8:
        uVar7 = (*(code *)*puVar6)(plVar5,iVar1 + -1,puVar6[1]);
        *unaff_x19 = uVar7;
        thunk_FUN_037aeb94();
        if (in_stack_00000008 != 0) {
          FUN_052c3308(in_stack_00000008,*(int *)(in_stack_00000008 + 0x20) + -1,
                       *(undefined8 *)<>f__AnonymousType0<Material,_Light>_TypeInfo);
          puVar2 = UnityEngine_ParticleSystem_CollisionModule_var;
          lVar8 = *(long *)UnityEngine_ParticleSystem_CollisionModule_var;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar8 = *(long *)puVar2;
          }
          **(int **)(lVar8 + 0xb8) = **(int **)(lVar8 + 0xb8) + -1;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


