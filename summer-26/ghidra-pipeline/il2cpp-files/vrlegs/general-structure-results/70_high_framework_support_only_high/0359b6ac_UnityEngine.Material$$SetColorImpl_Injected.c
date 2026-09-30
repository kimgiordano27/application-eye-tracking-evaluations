/*
FUNCTION_NAME: UnityEngine.Material$$SetColorImpl_Injected
ENTRY_POINT: 0359b6ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


long UnityEngine_Material__SetColorImpl_Injected(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  int *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 uVar6;
  ulong unaff_x22;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  uVar4 = FUN_036d35a8();
  if ((uVar4 & 1) != 0) goto LAB_0359b6b4;
  if (unaff_x21 != 0) {
    iVar2 = FUN_0359b484();
    *unaff_x19 = iVar2;
    puVar1 = OVRPlugin_Sizei_TypeInfo;
    if (iVar2 != -1) {
      return unaff_x21;
    }
    if (**(long **)(*(long *)OVRPlugin_Sizei_TypeInfo + 0xb8) == 0) {
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e44d8(uVar6,*(undefined8 *)PTR_DAT_03cc8bb0);
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
    }
    else {
      FUN_021e4d64(**(long **)(*(long *)OVRPlugin_Sizei_TypeInfo + 0xb8),
                   *(undefined8 *)PTR_DAT_03ccbbf8);
    }
    uVar3 = FUN_036d3364();
    if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
      in_stack_00000008._4_4_ = uVar3;
      FUN_021e5f08(**(long **)(*(long *)puVar1 + 0xb8),(long)&stack0x00000008 + 4,
                   *(undefined8 *)PTR_DAT_03cc8e90);
      if ((unaff_x22 & 1) == 0) {
LAB_0359b6b4:
        *unaff_x19 = -1;
        return 0;
      }
      lVar5 = *(long *)(unaff_x21 + 0xd8);
      if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
        lVar5 = FUN_0359b828(lVar5,unaff_w20,1);
        return lVar5;
      }
      lVar5 = FUN_03597474();
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(lVar5 + 0x68);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x24);
        }
        uVar4 = FUN_036cee6c(uVar6,0,0);
        if ((uVar4 & 1) == 0) goto LAB_0359b6b4;
        lVar5 = FUN_03597474();
        if (lVar5 != 0) {
          lVar5 = FUN_0359b9d4(*(undefined8 *)(lVar5 + 0x68),unaff_w20,1);
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


