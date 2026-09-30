/*
FUNCTION_NAME: UnityEngine.Timeline.ControlPlayableAsset$$.ctor
ENTRY_POINT: 070d5340
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Timeline_ControlPlayableAsset___ctor(void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int in_w8;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int unaff_w29;
  undefined8 uVar8;
  undefined8 in_stack_00000190;
  uint uStack0000000000000198;
  undefined4 uStack000000000000019c;
  undefined4 uStack00000000000001a0;
  undefined4 uStack00000000000001a4;
  undefined4 in_stack_000001a8;
  undefined4 in_stack_00000320;
  undefined4 in_stack_00000324;
  undefined4 in_stack_00000328;
  
  if (in_w8 == 0) {
    thunk_FUN_03798b70();
  }
  if (unaff_x25 != 0) {
    thunk_FUN_07576cdc();
    if (*(long *)(unaff_x19 + 0xc0) != 0) {
      thunk_FUN_07576abc((float)unaff_w28 / (float)unaff_w22,(float)unaff_w29 / (float)unaff_w24,
                         *(long *)(unaff_x19 + 0xc0),
                         *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 8),0);
      if ((*unaff_x21 != 0) && (lVar6 = *(long *)(*unaff_x21 + 0xd8), lVar6 != 0)) {
        FUN_075571ec(lVar6,0);
        in_stack_00000190 = 0;
        uStack0000000000000198 = 0;
        uStack000000000000019c = 0;
        in_stack_000001a8 = 0;
        uStack00000000000001a0 = 0;
        uStack00000000000001a4 = 0;
        FUN_070d5620(&stack0x00000190);
        uVar3 = uStack000000000000019c;
        uVar2 = uStack0000000000000198;
        uVar1 = in_stack_00000190;
        uVar7 = CONCAT44(uStack000000000000019c,uStack0000000000000198);
        *(ulong *)(unaff_x27 + 0x14) = CONCAT44(in_stack_000001a8,uStack00000000000001a4);
        *(ulong *)(unaff_x27 + 0xc) = CONCAT44(uStack00000000000001a0,uStack000000000000019c);
        uVar4 = FUN_070d570c((undefined8 *)(unaff_x19 + 0x160),&stack0x00000310);
        lVar6 = *(long *)(unaff_x19 + 0xc0);
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_03798b70(*unaff_x26);
        }
        if (lVar6 != 0) {
          uVar5 = FUN_07575020(lVar6,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
          if ((uVar4 & uVar5 & 1) == 0) {
            uVar8 = *(undefined8 *)(unaff_x27 + 0xc);
            *(undefined8 *)(unaff_x19 + 0x174) = *(undefined8 *)(unaff_x27 + 0x14);
            *(undefined8 *)(unaff_x19 + 0x16c) = uVar8;
            *(undefined8 *)(unaff_x19 + 0x168) = uVar7;
            *(undefined8 *)(unaff_x19 + 0x160) = uVar1;
            uVar7 = *(undefined8 *)(unaff_x19 + 0xc0);
            if (*(int *)(*(long *)PTR_DAT_07d8dc68 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_06fa838c(uVar7,*(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_var,
                         (byte)uVar1 & 1,0);
            FUN_06fa838c(*(undefined8 *)(unaff_x19 + 0xc0),
                         *(undefined8 *)
                          UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                         ,(byte)((ulong)uVar1 >> 8) & 1,0);
            FUN_06fa838c(*(undefined8 *)(unaff_x19 + 0xc0),
                         *(undefined8 *)OVRSpatialAnchor_MultiAnchorDelegatePair_var,
                         (byte)((ulong)uVar1 >> 0x10) & 1,0);
            FUN_06fa838c(*(undefined8 *)(unaff_x19 + 0xc0),
                         *(undefined8 *)OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var,
                         (byte)((ulong)uVar1 >> 0x18) & 1,0);
            FUN_06fa838c(*(undefined8 *)(unaff_x19 + 0xc0),*(undefined8 *)OVRSpaceQuery_Options_var,
                         (byte)((ulong)uVar1 >> 0x20) & 1,0);
            FUN_06fa838c(*(undefined8 *)(unaff_x19 + 0xc0),
                         *(undefined8 *)OVRSpatialAnchor_LoadOptions_var,
                         (byte)((ulong)uVar1 >> 0x28) & 1,0);
            FUN_06fa838c(*(undefined8 *)(unaff_x19 + 0xc0),*(undefined8 *)OVRPlugin_Vector3f_var,
                         (byte)((ulong)uVar1 >> 0x30) & 1,0);
            FUN_06fa838c(*(undefined8 *)(unaff_x19 + 0xc0),
                         *(undefined8 *)OVRSceneLoader_SceneInfo_var,
                         (byte)((ulong)uVar1 >> 0x38) & 1,0);
            FUN_06fa838c(*(undefined8 *)(unaff_x19 + 0xc0),
                         *(undefined8 *)OVRRaycaster_RaycastHit_var,uVar2 & 1,0);
            FUN_06fa838c(*(undefined8 *)(unaff_x19 + 0xc0),
                         *(undefined8 *)
                          OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var,
                         uVar2 >> 8 & 1,0);
            lVar6 = *(long *)(unaff_x19 + 0xc0);
            if (*(int *)(*unaff_x26 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            if (lVar6 == 0) goto LAB_070d5618;
            thunk_FUN_07576abc(uVar3,in_stack_00000320,in_stack_00000324,in_stack_00000328,lVar6,
                               *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
          }
          return;
        }
      }
    }
  }
LAB_070d5618:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


