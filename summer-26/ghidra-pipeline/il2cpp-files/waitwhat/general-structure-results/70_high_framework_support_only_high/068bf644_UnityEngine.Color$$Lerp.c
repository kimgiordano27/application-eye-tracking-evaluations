/*
FUNCTION_NAME: UnityEngine.Color$$Lerp
ENTRY_POINT: 068bf644
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 UnityEngine_Color__Lerp(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 uVar12;
  long unaff_x23;
  undefined8 unaff_x24;
  long *plVar13;
  long *unaff_x25;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    FUN_0524b264(unaff_x23,unaff_x24,param_2,
                 *(undefined8 *)
                  Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_LayoutResult_TypeInfo);
    plVar13 = (long *)
              Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo;
    do {
      do {
        unaff_w22 = unaff_w22 + 1;
        if (unaff_w22 == unaff_w26) {
          if (*(long *)(unaff_x21 + 0x1d0) == 0) goto LAB_068bf8c8;
          if (1 < *(int *)(*(long *)(unaff_x21 + 0x1d0) + 0x18)) {
            if (*(int *)(*(long *)PTR_DAT_070f2d40 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_0686ba98();
          }
          plVar4 = (long *)FUN_068b3948();
          puVar3 = OVRPlugin_OVRP_1_19_0_TypeInfo;
          if (plVar4 == (long *)0x0) goto LAB_068bf814;
          lVar8 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_068bf708;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_068bf6f0;
        }
        if (*(long *)(unaff_x21 + 0x1c0) == 0) goto LAB_068bf8c8;
        uVar12 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27);
        if (*(long *)(unaff_x21 + 0x1d0) == 0) goto LAB_068bf8c8;
        uVar10 = FUN_042e4df8(*(long *)(unaff_x21 + 0x1d0),uVar12,*unaff_x28);
      } while ((((uVar10 & 1) != 0) || (lVar8 = thunk_FUN_031c3cac(uVar12,*unaff_x29), lVar8 == 0))
              || (plVar4 = (long *)thunk_FUN_031c3cac(lVar8,*unaff_x19), plVar4 == (long *)0x0));
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x19) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 6) * 0x10 + 0x138);
            goto LAB_068bf564;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x19,6);
LAB_068bf564:
      uVar10 = (*(code *)*puVar5)(plVar4);
    } while ((uVar10 & 1) == 0);
    if (*(long *)(unaff_x21 + 0x1c0) == 0) goto LAB_068bf8c8;
    lVar8 = *(long *)(unaff_x21 + 0x1d0);
    uVar12 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27);
    if (lVar8 == 0) goto LAB_068bf8c8;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar9 = *(long *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_068bf8c8;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
    }
    else {
      FUN_042e4a64(lVar8,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar8 = *plVar13;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar8 = *plVar13;
    }
    if (*(long *)(unaff_x21 + 0x1c0) == 0) goto LAB_068bf8c8;
    unaff_x23 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    unaff_x24 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27);
    if ((*(long *)(unaff_x21 + 0x1c0) == 0) ||
       (FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27), param_2 = extraout_x1,
       unaff_x23 == 0)) goto LAB_068bf8c8;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_068bf6f0:
    if (*(long *)(piVar11 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_068bf724;
    }
  }
LAB_068bf708:
  puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
LAB_068bf724:
  uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_068bf7a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar3,3);
LAB_068bf7a4:
    (*(code *)*puVar5)(plVar4);
    lVar8 = *(long *)(unaff_x21 + 0x1d0);
    if (lVar8 == 0) goto LAB_068bf8c8;
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    plVar13 = (long *)
              Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      lVar8 = *(long *)(unaff_x21 + 0x1d0);
      if (lVar8 == 0) goto LAB_068bf8c8;
    }
    FUN_042e4c6c(lVar8,**(undefined8 **)(*plVar13 + 0xb8),
                 *(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
  }
LAB_068bf814:
  lVar8 = *(long *)(unaff_x21 + 0x1d0);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
      uVar7 = 0;
      uVar12 = 0;
      *unaff_x25 = 0;
    }
    else {
      lVar6 = FUN_042e47a4(lVar8,0,*(undefined8 *)
                                    Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                          );
      lVar8 = 0;
      if (lVar6 != 0) {
        uVar12 = *(undefined8 *)
                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
        lVar8 = thunk_FUN_031c3cac(lVar6,uVar12);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(lVar6,uVar12);
        }
      }
      *unaff_x25 = lVar8;
      lVar8 = *plVar13;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar8 = *plVar13;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_068bf8c8;
      uVar12 = FUN_0524b1e4(lVar8,*unaff_x25,
                            *(undefined8 *)
                             Oculus_Skinning_GpuSkinning_OvrGpuMorphTargetsCombiner_ArrayGrowthEventHandler_TypeInfo
                           );
      uVar7 = 1;
    }
    *unaff_x20 = uVar12;
    return uVar7;
  }
LAB_068bf8c8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


