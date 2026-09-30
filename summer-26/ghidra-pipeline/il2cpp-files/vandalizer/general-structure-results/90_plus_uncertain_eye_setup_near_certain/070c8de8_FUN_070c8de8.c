/*
FUNCTION_NAME: FUN_070c8de8
ENTRY_POINT: 070c8de8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_070c8de8(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  puVar4 = OVRPlugin_OVRP_1_111_0_TypeInfo;
  if ((DAT_07a5a96b & 1) == 0) {
    FUN_031f20f4(OVRPlugin_OVRP_1_111_0_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d69f8);
    FUN_031f20f4(OVRPlugin_OVRP_1_112_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_113_0_TypeInfo);
    FUN_031f20f4(Oculus_Interaction_Demo_MeshBlit_<<OnEnable>g__BlitRoutine_11_0>d_TypeInfo);
    DAT_07a5a96b = 1;
  }
  puVar3 = PTR_DAT_075d69f8;
  lVar5 = *(long *)puVar4;
  local_38 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *(long *)puVar4;
  }
  FUN_06fc7f68(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x1c8),0);
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_06fc5e0c(uVar6,0);
  *(undefined8 *)(param_1 + 0x4e8) = uVar6;
  thunk_FUN_0329bf60((long *)(param_1 + 0x4e8),uVar6);
  if (*(long *)(param_1 + 0x4e8) != 0) {
    UnityEngine_UIElements_Toggle_UxmlTraits___ctor
              (*(long *)(param_1 + 0x4e8),
               *(undefined8 *)
                Oculus_Interaction_Demo_MeshBlit_<<OnEnable>g__BlitRoutine_11_0>d_TypeInfo,0);
    lVar5 = *(long *)(param_1 + 0x4e8);
    if (lVar5 != 0) {
      FUN_06fc7f68(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1d0),0);
      local_38 = *(undefined8 *)(param_1 + 0x440);
      FUN_06fd1174(&local_38,*(undefined8 *)(param_1 + 0x4e8),0);
      uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
      FUN_06fc5e0c(uVar6,0);
      plVar1 = (long *)(param_1 + 0x4d8);
      *(undefined8 *)(param_1 + 0x4d8) = uVar6;
      thunk_FUN_0329bf60(plVar1,uVar6);
      if (*(long *)(param_1 + 0x4d8) != 0) {
        UnityEngine_UIElements_Toggle_UxmlTraits___ctor
                  (*(long *)(param_1 + 0x4d8),*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,0);
        if (*plVar1 != 0) {
          FUN_06fc7f68(*plVar1,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1f0),0);
          local_38 = *(undefined8 *)(param_1 + 0x440);
          FUN_06fd1174(&local_38,*(undefined8 *)(param_1 + 0x4d8),0);
          uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
          FUN_06fc5e0c(uVar6,0);
          plVar2 = (long *)(param_1 + 0x4d0);
          *(undefined8 *)(param_1 + 0x4d0) = uVar6;
          thunk_FUN_0329bf60(plVar2,uVar6);
          if (*(long *)(param_1 + 0x4d0) != 0) {
            UnityEngine_UIElements_Toggle_UxmlTraits___ctor
                      (*(long *)(param_1 + 0x4d0),*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,0);
            if (*plVar2 != 0) {
              FUN_06fc7f68(*plVar2,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1d8),0);
              if (*plVar1 != 0) {
                FUN_06fcd3a0(*plVar1,*plVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


