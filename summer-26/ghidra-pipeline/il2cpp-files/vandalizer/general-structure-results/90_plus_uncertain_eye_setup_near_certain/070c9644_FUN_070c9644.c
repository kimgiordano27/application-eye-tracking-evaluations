/*
FUNCTION_NAME: FUN_070c9644
ENTRY_POINT: 070c9644
PROGRAM: vandalizer-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_070c9644(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = OVRPlugin_OVRP_1_111_0_TypeInfo;
  if ((DAT_07a5a96d & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d8968);
    FUN_031f20f4(PTR_DAT_075d8960);
    FUN_031f20f4(OVRPlugin_OVRP_1_115_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_111_0_TypeInfo);
    DAT_07a5a96d = 1;
  }
  *(undefined4 *)(param_2 + 0x4f0) = param_4;
  *(undefined4 *)(param_2 + 0x4f4) = param_3;
  *(undefined4 *)(param_2 + 0x4f8) = param_1;
  lVar5 = *(long *)(param_2 + 0x4e8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (lVar5 != 0) {
    FUN_06fc7e40(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x210),0);
    if (*(long *)(param_2 + 0x4e8) != 0) {
      FUN_06fc7e40(*(long *)(param_2 + 0x4e8),
                   *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x208),0);
      lVar5 = *(long *)puVar1;
      iVar2 = *(int *)(param_2 + 0x4f0);
      lVar6 = *(long *)(param_2 + 0x4e8);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar5 = *(long *)puVar1;
      }
      if (iVar2 == 0) {
        if (lVar6 == 0) goto LAB_070c9928;
        lVar4 = 0x210;
      }
      else {
        if (lVar6 == 0) goto LAB_070c9928;
        lVar4 = 0x208;
      }
      FUN_06fc7f68(lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + lVar4),0);
      lVar5 = *(long *)(param_2 + 0x4d8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if (lVar5 != 0) {
        FUN_06fc7e40(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x200),0);
        if (*(long *)(param_2 + 0x4d8) != 0) {
          FUN_06fc7e40(*(long *)(param_2 + 0x4d8),
                       *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1f8),0);
          lVar5 = *(long *)puVar1;
          iVar2 = *(int *)(param_2 + 0x4f0);
          lVar6 = *(long *)(param_2 + 0x4d8);
          if (*(int *)(lVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar5 = *(long *)puVar1;
          }
          if (iVar2 == 0) {
            if (lVar6 == 0) goto LAB_070c9928;
            lVar4 = 0x200;
          }
          else {
            if (lVar6 == 0) goto LAB_070c9928;
            lVar4 = 0x1f8;
          }
          FUN_06fc7f68(lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + lVar4),0);
          lVar5 = *(long *)(param_2 + 0x4d0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          if (lVar5 != 0) {
            FUN_06fc7e40(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1e8),0);
            if (*(long *)(param_2 + 0x4d0) != 0) {
              FUN_06fc7e40(*(long *)(param_2 + 0x4d0),
                           *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1e0),0);
              lVar5 = *(long *)puVar1;
              iVar2 = *(int *)(param_2 + 0x4f0);
              lVar6 = *(long *)(param_2 + 0x4d0);
              if (*(int *)(lVar5 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar5 = *(long *)puVar1;
              }
              if (iVar2 == 0) {
                if (lVar6 == 0) goto LAB_070c9928;
                lVar4 = 0x1e8;
              }
              else {
                if (lVar6 == 0) goto LAB_070c9928;
                lVar4 = 0x1e0;
              }
              FUN_06fc7f68(lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + lVar4),0);
              if (*(long *)(param_2 + 0x500) != 0) {
                FUN_07018684(*(undefined8 *)(param_2 + 0x4d8),*(long *)(param_2 + 0x500),0);
                *(undefined8 *)(param_2 + 0x500) = 0;
                thunk_FUN_0329bf60(param_2 + 0x500,0);
              }
              if (*(long *)(param_2 + 0x4e8) != 0) {
                iVar2 = FUN_06fcd654(*(long *)(param_2 + 0x4e8),0);
                if (iVar2 == 2) {
                  FUN_070c992c(param_2);
                  return;
                }
                uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8960);
                FUN_04292d74(uVar3,param_2,*(undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo,0);
                Fusion_Native__ExpandPtrArray<__Il2CppFullySharedGenericStructType>
                          (param_2,uVar3,0,*(undefined8 *)PTR_DAT_075d8968);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_070c9928:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


