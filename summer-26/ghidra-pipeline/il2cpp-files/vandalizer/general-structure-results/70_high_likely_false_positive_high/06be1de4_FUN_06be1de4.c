/*
FUNCTION_NAME: FUN_06be1de4
ENTRY_POINT: 06be1de4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


undefined1  [16] FUN_06be1de4(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
                    /* try { // try from 06be1de8 to 06ce1dff has its CatchHandler @ 06be1e70 */
                    /* try { // try from 06be1e00 to 06ce1e5f has its CatchHandler @ 06be1c14 */
  if ((DAT_07a4fefc & 1) == 0) {
    FUN_031f20f4(UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var);
    FUN_031f20f4(UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
    FUN_031f20f4(UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_var);
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                );
    FUN_031f20f4(PTR_DAT_075a8e70);
    FUN_031f20f4(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_031f20f4(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var);
    FUN_031f20f4(UnityEngine_VFX_VisualEffectControlClip_ClipEvent_var);
    FUN_031f20f4(UnityEngine_VFX_VisualEffectControlClip_PrewarmClipSettings_var);
    FUN_031f20f4(PTR_DAT_075d8fd0);
    FUN_031f20f4(PTR_DAT_075d8fc8);
    FUN_031f20f4(UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var);
    FUN_031f20f4(PTR_DAT_075dae68);
    FUN_031f20f4(PTR_DAT_075d8458);
    FUN_031f20f4(OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var);
    DAT_07a4fefc = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  lVar8 = *param_3;
  if (lVar8 == 0) {
    lVar5 = 0;
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_075a8e70;
    lVar5 = thunk_FUN_0322f04c(lVar8,uVar9);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar8,uVar9);
    }
  }
  puVar1 = PTR_DAT_075d8458;
  lVar8 = *(long *)PTR_DAT_075d8458;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar8 = *(long *)puVar1;
  }
  if (lVar5 != 0) {
    auVar12 = *(undefined1 (*) [16])(*(long *)(lVar8 + 0xb8) + 8);
    uVar9 = thunk_FUN_03202440(lVar5,0);
    FUN_06be24e4(uVar9,&local_68,&local_70);
    if (param_2 != 0) {
      uVar6 = FUN_06bebccc(param_2,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_06bebc50(param_2,0);
        if ((uVar6 & 1) == 0) {
          lVar8 = FUN_031f21dc(*(undefined8 *)
                                UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var
                               ,2);
          if (lVar8 != 0) {
            if (1 < *(uint *)(lVar8 + 0x18)) {
              *(undefined4 *)(lVar8 + 0x24) = 1;
              auVar12 = FUN_06bead64(param_1,param_2,lVar8,0);
              return auVar12;
            }
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
        }
        else {
          lVar8 = FUN_06be77ec(param_2,0);
          if (lVar8 != 0) {
            FUN_05813c78(&local_118,lVar8,
                         *(undefined8 *)UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var);
            puVar3 = UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_var;
            puVar2 = OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var;
            uStack_c8 = uStack_110;
            local_d0 = local_118;
            uStack_b8 = uStack_100;
            local_c0 = local_108;
            local_b0 = local_f8;
            while( true ) {
              do {
                uVar6 = FUN_05afc380(&local_d0,*(undefined8 *)puVar3);
                uVar4 = uStack_b8;
                uVar9 = local_c0;
                if ((uVar6 & 1) == 0) {
                  FUN_05afc4a0(&local_d0,
                               *(undefined8 *)
                                UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
                  return auVar12;
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                }
                uVar6 = FUN_06bf7234(uVar9,0);
              } while ((uVar6 & 1) != 0);
              uVar7 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dae68);
              FUN_06be55ec(uVar7,uVar9,0);
              local_e0 = 0;
              uStack_d8 = 0;
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              auVar11 = FUN_06be4cb4(*(long *)(param_1 + 0x10),uVar7,local_68,&uStack_d8,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              auVar12 = FUN_06be4a00(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_,0);
              local_a0 = auVar12;
              uVar6 = FUN_06be4a78(local_a0,0);
              if ((uVar6 & 1) != 0) break;
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              auVar11 = FUN_06be4cb4(*(long *)(param_1 + 0x10),uVar4,local_70,&local_e0,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              auVar12 = FUN_06be4a00(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_,0);
              local_f0 = auVar12;
              uVar6 = FUN_06be4a78(local_f0,0);
              if ((uVar6 & 1) != 0) break;
              FUN_06be2624(uVar6,lVar5,uStack_d8,local_e0);
            }
            local_a0 = auVar12;
            FUN_05afc4a0(&local_d0,
                         *(undefined8 *)UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
            return local_a0;
          }
        }
      }
      else {
        lVar8 = FUN_06be6248(param_2,0);
        puVar2 = UnityEngine_VFX_VisualEffectControlClip_PrewarmClipSettings_var;
        if (lVar8 != 0) {
          if (0 < *(int *)(lVar8 + 0x18)) {
            iVar10 = 0;
            do {
              uVar9 = FUN_047af170(lVar8,iVar10,*(undefined8 *)puVar2);
              auVar11 = FUN_06be66c0(param_1,uVar9,1,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              auVar12 = FUN_06be4a00(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_,0);
              local_a0 = auVar12;
              uVar6 = FUN_06be4a78(local_a0,0);
              if ((uVar6 & 1) != 0) {
                return auVar12;
              }
              auVar11 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__CanHover
                                  (param_1,uVar9,*(undefined8 *)PTR_DAT_075d8fc8,&local_78,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              auVar12 = FUN_06be4a00(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_,0);
              local_a0 = auVar12;
              uVar6 = FUN_06be4a78(local_a0,0);
              if ((uVar6 & 1) != 0) {
                return auVar12;
              }
              auVar11 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__CanHover
                                  (param_1,uVar9,*(undefined8 *)PTR_DAT_075d8fd0,&local_80,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              auVar12 = FUN_06be4a00(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_,0);
              local_a0 = auVar12;
              uVar6 = FUN_06be4a78(local_a0,0);
              if ((uVar6 & 1) != 0) {
                return auVar12;
              }
              local_90 = 0;
              uStack_88 = 0;
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_06be249c;
              auVar11 = FUN_06be4cb4(*(long *)(param_1 + 0x10),local_78,local_68,&uStack_88,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              auVar12 = FUN_06be4a00(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_,0);
              local_a0 = auVar12;
              uVar6 = FUN_06be4a78(local_a0,0);
              if ((uVar6 & 1) != 0) {
                return auVar12;
              }
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_06be249c;
              auVar11 = FUN_06be4cb4(*(long *)(param_1 + 0x10),local_80,local_70,&local_90,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              auVar12 = FUN_06be4a00(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_,0);
              local_a0 = auVar12;
              uVar6 = FUN_06be4a78(local_a0,0);
              if ((uVar6 & 1) != 0) {
                return auVar12;
              }
              FUN_06be2624(uVar6,lVar5,uStack_88,local_90);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(lVar8 + 0x18));
          }
          return auVar12;
        }
      }
    }
  }
LAB_06be249c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


