/*
FUNCTION_NAME: UnityEngine.CanvasRenderer$$set_popMaterialCount_Injected
ENTRY_POINT: 05e6aa64
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


void UnityEngine_CanvasRenderer__set_popMaterialCount_Injected(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  long unaff_x23;
  undefined8 uVar5;
  
  if (unaff_x23 != 0) {
    uVar5 = *(undefined8 *)(unaff_x23 + 0x70);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05e6afe8(uVar5);
    if (unaff_x20 != 0) {
      FUN_05e70eb4();
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      thunk_FUN_02bb0e9c();
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),0);
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),0);
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x38),0);
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x40),0);
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      thunk_FUN_02bb0e9c();
      if (unaff_x20 != 0) {
        FUN_05e6dc04();
        if ((*(byte *)(unaff_x19 + 0x68) >> 2 & 1) != 0) {
          FUN_05e7786c();
          FUN_05e776bc();
        }
        *(undefined4 *)(unaff_x19 + 0x9c) = 0;
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x110));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d63c(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x110),0);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          lVar3 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x128);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x108));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d50c(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x108),0);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          lVar3 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x118);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x118));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x118),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar3 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x118) = **(undefined8 **)(lVar3 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x120));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x120),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar3 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x120) = **(undefined8 **)(lVar3 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x128));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x128),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar3 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x128) = **(undefined8 **)(lVar3 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x130));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x130),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar3 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x130) = **(undefined8 **)(lVar3 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x138));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x138),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar3 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x138) = **(undefined8 **)(lVar3 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x140));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x140),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar3 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x140) = **(undefined8 **)(lVar3 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x148));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d5a4(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x148),0);
          puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          lVar3 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x148) = **(undefined8 **)(lVar3 + 0xb8);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0x100));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d474(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0x100),0);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          lVar3 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x110);
        }
        uVar2 = FUN_05e66d68(*(undefined8 *)(unaff_x19 + 0xf8));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x148) == 0) goto LAB_05e6aef8;
          FUN_05e7d3dc(*(long *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x19 + 0xf8),0);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          lVar3 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x108);
        }
        *(undefined8 *)(unaff_x19 + 0x48) = 0;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x48),0);
        *(undefined8 *)(unaff_x19 + 0x50) = 0;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x50),0);
        plVar4 = (long *)(unaff_x19 + 0xb0);
        if (*plVar4 != 0) {
          if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_05e6aef8;
          FUN_05e77974(*(long *)(unaff_x20 + 0x108),*plVar4,0);
          *plVar4 = 0;
          thunk_FUN_02bb0e9c(plVar4,0);
        }
        plVar4 = (long *)(unaff_x19 + 0xa8);
        if (*plVar4 != 0) {
          if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_05e6aef8;
          FUN_05e77974(*(long *)(unaff_x20 + 0x108),*plVar4,0);
          *plVar4 = 0;
          thunk_FUN_02bb0e9c(plVar4,0);
        }
        FUN_05e70dc4();
        return;
      }
    }
  }
LAB_05e6aef8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


