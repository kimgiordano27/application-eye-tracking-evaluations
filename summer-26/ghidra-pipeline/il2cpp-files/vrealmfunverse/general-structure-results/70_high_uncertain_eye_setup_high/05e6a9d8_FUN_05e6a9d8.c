/*
FUNCTION_NAME: FUN_05e6a9d8
ENTRY_POINT: 05e6a9d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_05e6a9d8(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_066dc67e & 1) == 0) {
    FUN_02b3c81c(Method_OVRSpatialAnchor_UnboundAnchor_BindTo__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_14__);
    DAT_066dc67e = 1;
  }
  if (param_2 != 0) {
    plVar3 = (long *)(param_2 + 0x18);
    if (*plVar3 != 0) {
      FUN_05e6e7dc(*plVar3,param_2,0);
      FUN_05e558b0(param_1,param_2,0);
      if (*(long *)(param_2 + 0x20) == 0) {
        lVar4 = *plVar3;
        if (lVar4 == 0) goto LAB_05e6aef8;
        uVar5 = *(undefined8 *)(lVar4 + 0x70);
        if (*(int *)(*(long *)
                      Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05e6afe8(uVar5,lVar4);
        if (param_1 == 0) goto LAB_05e6aef8;
        FUN_05e70eb4(param_1,*plVar3,0);
      }
      *(undefined8 *)(param_2 + 0x20) = 0;
      thunk_FUN_02bb0e9c((long *)(param_2 + 0x20),0);
      *(undefined8 *)(param_2 + 0x28) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(param_2 + 0x28),0);
      *(undefined8 *)(param_2 + 0x30) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(param_2 + 0x30),0);
      *(undefined8 *)(param_2 + 0x38) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(param_2 + 0x38),0);
      *(undefined8 *)(param_2 + 0x40) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(param_2 + 0x40),0);
      *(undefined8 *)(param_2 + 0x18) = 0;
      thunk_FUN_02bb0e9c(plVar3,0);
      if (param_1 != 0) {
        FUN_05e6dc04(param_1,param_2,0);
        if ((*(byte *)(param_2 + 0x68) >> 2 & 1) != 0) {
          FUN_05e7786c(param_1,param_2,0);
          FUN_05e776bc(param_1,param_2,0);
        }
        *(undefined4 *)(param_2 + 0x9c) = 0;
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x110));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d63c(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x110),0);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          lVar4 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x128);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x108));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d50c(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x108),0);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          lVar4 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x118);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x118));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x118),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar4 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x118) = **(undefined8 **)(lVar4 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x120));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x120),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar4 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x120) = **(undefined8 **)(lVar4 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x128));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x128),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar4 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x128) = **(undefined8 **)(lVar4 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x130));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x130),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar4 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x130) = **(undefined8 **)(lVar4 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x138));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x138),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar4 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x138) = **(undefined8 **)(lVar4 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x140));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x140),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar4 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x140) = **(undefined8 **)(lVar4 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x148));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x148),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar4 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x148) = **(undefined8 **)(lVar4 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0x100));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d474(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x100),0);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          lVar4 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x110);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(param_2 + 0xf8));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d3dc(*(long *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0xf8),0);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          lVar4 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar1;
          }
          *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x108);
        }
        *(undefined8 *)(param_2 + 0x48) = 0;
        thunk_FUN_02bb0e9c((undefined8 *)(param_2 + 0x48),0);
        *(undefined8 *)(param_2 + 0x50) = 0;
        thunk_FUN_02bb0e9c((undefined8 *)(param_2 + 0x50),0);
        plVar3 = (long *)(param_2 + 0xb0);
        if (*plVar3 != 0) {
          if (*(long *)(param_1 + 0x108) == 0) goto LAB_05e6aef8;
          FUN_05e77974(*(long *)(param_1 + 0x108),*plVar3,0);
          *plVar3 = 0;
          thunk_FUN_02bb0e9c(plVar3,0);
        }
        plVar3 = (long *)(param_2 + 0xa8);
        if (*plVar3 != 0) {
          if (*(long *)(param_1 + 0x108) == 0) goto LAB_05e6aef8;
          FUN_05e77974(*(long *)(param_1 + 0x108),*plVar3,0);
          *plVar3 = 0;
          thunk_FUN_02bb0e9c(plVar3,0);
        }
        FUN_05e70dc4(param_1,param_2,0);
        return;
      }
    }
  }
LAB_05e6aef8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


