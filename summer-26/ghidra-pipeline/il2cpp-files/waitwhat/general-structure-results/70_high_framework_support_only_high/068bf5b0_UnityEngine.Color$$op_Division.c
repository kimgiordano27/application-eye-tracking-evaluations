/*
FUNCTION_NAME: UnityEngine.Color$$op_Division
ENTRY_POINT: 068bf5b0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_20;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 UnityEngine_Color__op_Division(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while (param_1 != 0) {
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20) = param_2;
    }
    else {
      FUN_042e4a64(unaff_x23,param_2,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    lVar4 = *unaff_x24;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *unaff_x24;
    }
    if (*(long *)(unaff_x21 + 0x1c0) == 0) break;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    uVar5 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27);
    if ((*(long *)(unaff_x21 + 0x1c0) == 0) ||
       (FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27), lVar4 == 0)) break;
    FUN_0524b264(lVar4,uVar5,extraout_x1,
                 *(undefined8 *)
                  Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_LayoutResult_TypeInfo);
    unaff_x24 = (long *)
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
          plVar6 = (long *)FUN_068b3948();
          puVar3 = OVRPlugin_OVRP_1_19_0_TypeInfo;
          if (plVar6 == (long *)0x0) goto LAB_068bf814;
          lVar4 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar10 == 0) goto LAB_068bf708;
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_068bf6f0;
        }
        if (*(long *)(unaff_x21 + 0x1c0) == 0) goto LAB_068bf8c8;
        uVar5 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27);
        if (*(long *)(unaff_x21 + 0x1d0) == 0) goto LAB_068bf8c8;
        uVar10 = FUN_042e4df8(*(long *)(unaff_x21 + 0x1d0),uVar5,*unaff_x28);
      } while ((((uVar10 & 1) != 0) || (lVar4 = thunk_FUN_031c3cac(uVar5,*unaff_x29), lVar4 == 0))
              || (plVar6 = (long *)thunk_FUN_031c3cac(lVar4,*unaff_x19), plVar6 == (long *)0x0));
      lVar4 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x19) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 6) * 0x10 + 0x138);
            goto LAB_068bf564;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_031c0d08(plVar6,*unaff_x19,6);
LAB_068bf564:
      uVar10 = (*(code *)*puVar7)(plVar6);
    } while ((uVar10 & 1) == 0);
    if (*(long *)(unaff_x21 + 0x1c0) == 0) break;
    unaff_x23 = *(long *)(unaff_x21 + 0x1d0);
    param_2 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27);
    if (unaff_x23 == 0) break;
    param_1 = *(long *)(unaff_x23 + 0x10);
    in_x9 = *(long *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  }
  goto LAB_068bf8c8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_068bf6f0:
    if (*(long *)(piVar11 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_068bf724;
    }
  }
LAB_068bf708:
  puVar7 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
LAB_068bf724:
  uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar4 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_068bf7a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar3,3);
LAB_068bf7a4:
    (*(code *)*puVar7)(plVar6);
    lVar4 = *(long *)(unaff_x21 + 0x1d0);
    if (lVar4 == 0) goto LAB_068bf8c8;
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    unaff_x24 = (long *)
                Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      lVar4 = *(long *)(unaff_x21 + 0x1d0);
      if (lVar4 == 0) goto LAB_068bf8c8;
    }
    FUN_042e4c6c(lVar4,**(undefined8 **)(*unaff_x24 + 0xb8),
                 *(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
  }
LAB_068bf814:
  lVar4 = *(long *)(unaff_x21 + 0x1d0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
      uVar9 = 0;
      uVar5 = 0;
      *unaff_x25 = 0;
    }
    else {
      lVar8 = FUN_042e47a4(lVar4,0,*(undefined8 *)
                                    Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                          );
      lVar4 = 0;
      if (lVar8 != 0) {
        uVar5 = *(undefined8 *)
                 System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
        lVar4 = thunk_FUN_031c3cac(lVar8,uVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(lVar8,uVar5);
        }
      }
      *unaff_x25 = lVar4;
      lVar4 = *unaff_x24;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar4 = *unaff_x24;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_068bf8c8;
      uVar5 = FUN_0524b1e4(lVar4,*unaff_x25,
                           *(undefined8 *)
                            Oculus_Skinning_GpuSkinning_OvrGpuMorphTargetsCombiner_ArrayGrowthEventHandler_TypeInfo
                          );
      uVar9 = 1;
    }
    *unaff_x20 = uVar5;
    return uVar9;
  }
LAB_068bf8c8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


