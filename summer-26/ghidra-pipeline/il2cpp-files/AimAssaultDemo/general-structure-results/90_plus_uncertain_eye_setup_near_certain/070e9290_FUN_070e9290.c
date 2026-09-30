/*
FUNCTION_NAME: FUN_070e9290
ENTRY_POINT: 070e9290
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_070e9290(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  long local_38;
  
  lVar4 = param_1;
  if ((DAT_08267cbd & 1) == 0) {
    FUN_0373b518(
                UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                );
    FUN_0373b518(OVRPlugin_Qpl_Annotation_Builder_var);
    FUN_0373b518(UnityEngine_ParticleSystem_CollisionModule_var);
    FUN_0373b518(<>f__AnonymousType0<Material,_Light>_TypeInfo);
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARAnchorManager,_ARAnchor>_TypeInfo
                );
    lVar4 = FUN_0373b518(
                        UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                        );
    DAT_08267cbd = 1;
  }
  local_38 = 0;
  uVar3 = FUN_070e9238(lVar4,param_2);
  if ((param_4 & 1) == 0) {
LAB_070e93c4:
    *param_3 = 0;
    thunk_FUN_037aeb94(param_3,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = FUN_05a3a6e4(*(long *)(param_1 + 0x10),uVar3,&local_38,
                         *(undefined8 *)
                          UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                        );
    if ((uVar5 & 1) == 0) goto LAB_070e93c4;
    if (local_38 != 0) {
      if (*(int *)(local_38 + 0x20) < 1) goto LAB_070e93c4;
      plVar6 = (long *)FUN_052c1e64(local_38,*(undefined8 *)
                                              UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                                   );
      if ((local_38 != 0) && (plVar6 != (long *)0x0)) {
        lVar4 = *plVar6;
        iVar1 = *(int *)(local_38 + 0x20);
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_Qpl_Annotation_Builder_var) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_070e93f8;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)OVRPlugin_Qpl_Annotation_Builder_var,0);
LAB_070e93f8:
        uVar8 = (*(code *)*puVar7)(plVar6,iVar1 + -1,puVar7[1]);
        *param_3 = uVar8;
        thunk_FUN_037aeb94(param_3,uVar8);
        if (local_38 != 0) {
          FUN_052c3308(local_38,*(int *)(local_38 + 0x20) + -1,
                       *(undefined8 *)<>f__AnonymousType0<Material,_Light>_TypeInfo);
          puVar2 = UnityEngine_ParticleSystem_CollisionModule_var;
          lVar4 = *(long *)UnityEngine_ParticleSystem_CollisionModule_var;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar4 = *(long *)puVar2;
          }
          **(int **)(lVar4 + 0xb8) = **(int **)(lVar4 + 0xb8) + -1;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


