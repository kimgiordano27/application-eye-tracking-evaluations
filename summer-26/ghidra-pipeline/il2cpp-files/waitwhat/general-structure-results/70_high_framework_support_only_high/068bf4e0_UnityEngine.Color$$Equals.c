/*
FUNCTION_NAME: UnityEngine.Color$$Equals
ENTRY_POINT: 068bf4e0
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


undefined8 UnityEngine_Color__Equals(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    uVar4 = FUN_042e4df8(param_1,unaff_x23,*unaff_x28);
    if ((((uVar4 & 1) == 0) && (lVar5 = thunk_FUN_031c3cac(unaff_x23,*unaff_x29), lVar5 != 0)) &&
       (plVar6 = (long *)thunk_FUN_031c3cac(lVar5,*unaff_x19), plVar6 != (long *)0x0)) {
      lVar5 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x19) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 6) * 0x10 + 0x138);
            goto LAB_068bf564;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_031c0d08(plVar6,*unaff_x19,6);
LAB_068bf564:
      uVar4 = (*(code *)*puVar7)(plVar6);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(unaff_x21 + 0x1c0) == 0) break;
        lVar5 = *(long *)(unaff_x21 + 0x1d0);
        uVar8 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27);
        if (lVar5 == 0) break;
        lVar10 = *(long *)(lVar5 + 0x10);
        lVar11 = *(long *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_042e4a64(lVar5,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lVar5 = *unaff_x24;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar5 = *unaff_x24;
        }
        if (*(long *)(unaff_x21 + 0x1c0) == 0) break;
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        uVar8 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27);
        if ((*(long *)(unaff_x21 + 0x1c0) == 0) ||
           (FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27), lVar5 == 0)) break;
        FUN_0524b264(lVar5,uVar8,extraout_x1,
                     *(undefined8 *)
                      Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_LayoutResult_TypeInfo);
        unaff_x24 = (long *)
                    Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo
        ;
      }
    }
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == unaff_w26) {
      if (*(long *)(unaff_x21 + 0x1d0) != 0) {
        if (1 < *(int *)(*(long *)(unaff_x21 + 0x1d0) + 0x18)) {
          if (*(int *)(*(long *)PTR_DAT_070f2d40 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_0686ba98();
        }
        plVar6 = (long *)FUN_068b3948();
        puVar3 = OVRPlugin_OVRP_1_19_0_TypeInfo;
        if (plVar6 == (long *)0x0) goto LAB_068bf814;
        lVar5 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 == 0) goto LAB_068bf708;
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_068bf6f0;
      }
      break;
    }
    if (*(long *)(unaff_x21 + 0x1c0) == 0) break;
    unaff_x23 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),unaff_w22,*unaff_x27);
    param_1 = *(long *)(unaff_x21 + 0x1d0);
  } while (param_1 != 0);
  goto LAB_068bf8c8;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
LAB_068bf6f0:
    if (*(long *)(piVar12 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_068bf724;
    }
  }
LAB_068bf708:
  puVar7 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
LAB_068bf724:
  uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar5 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_068bf7a4;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar3,3);
LAB_068bf7a4:
    (*(code *)*puVar7)(plVar6);
    lVar5 = *(long *)(unaff_x21 + 0x1d0);
    if (lVar5 == 0) goto LAB_068bf8c8;
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    unaff_x24 = (long *)
                Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      lVar5 = *(long *)(unaff_x21 + 0x1d0);
      if (lVar5 == 0) goto LAB_068bf8c8;
    }
    FUN_042e4c6c(lVar5,**(undefined8 **)(*unaff_x24 + 0xb8),
                 *(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
  }
LAB_068bf814:
  lVar5 = *(long *)(unaff_x21 + 0x1d0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
      uVar9 = 0;
      uVar8 = 0;
      *unaff_x25 = 0;
    }
    else {
      lVar10 = FUN_042e47a4(lVar5,0,*(undefined8 *)
                                     Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                           );
      lVar5 = 0;
      if (lVar10 != 0) {
        uVar8 = *(undefined8 *)
                 System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
        lVar5 = thunk_FUN_031c3cac(lVar10,uVar8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(lVar10,uVar8);
        }
      }
      *unaff_x25 = lVar5;
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *unaff_x24;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_068bf8c8;
      uVar8 = FUN_0524b1e4(lVar5,*unaff_x25,
                           *(undefined8 *)
                            Oculus_Skinning_GpuSkinning_OvrGpuMorphTargetsCombiner_ArrayGrowthEventHandler_TypeInfo
                          );
      uVar9 = 1;
    }
    *unaff_x20 = uVar8;
    return uVar9;
  }
LAB_068bf8c8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


