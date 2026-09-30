/*
FUNCTION_NAME: UnityEngine.Camera$$get_anamorphism
ENTRY_POINT: 03574670
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Camera__get_anamorphism(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long in_stack_00000008;
  
  if ((DAT_0412e00d & 1) == 0) {
    FUN_01ab69ac(IOVRSceneComponent_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe188);
    FUN_01ab69ac(UnityEngine_UIElements_PointerLeaveEvent_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_PointerMoveEvent_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbfd00);
    FUN_01ab69ac(UnityEngine_UIElements_PointerOutEvent_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_InputSystem_Controls_KeyControl_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_PointerOverEvent_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd09e8);
    FUN_01ab69ac(PTR_DAT_03cbe5c8);
    FUN_01ab69ac(PTR_DAT_03cc65c0);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(UnityEngine_UIElements_Experimental_PointerOverLinkTagEvent_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(UnityEngine_UIElements_PointerStationaryEvent_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_PointerUpEvent_<>c_TypeInfo);
    FUN_01ab69ac(Cysharp_Threading_Tasks_PlayerLoopHelper_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_TypeInfo);
    FUN_01ab69ac(PolicyPanelBase_<DelayShowView>d__7_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc07a8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cbf998);
    FUN_01ab69ac(PTR_DAT_03cbf360);
    FUN_01ab69ac(PTR_DAT_03cbf9a0);
    FUN_01ab69ac(UnityEngine_UIElements_PopupWindow_UxmlFactory_TypeInfo);
    DAT_0412e00d = 1;
  }
  puVar2 = UnityEngine_UIElements_PointerLeaveEvent_<>c_TypeInfo;
  FUN_0391fac0(param_1,0);
  if (*(long *)(param_1 + 0x220) == 0) {
    *(undefined8 *)(param_1 + 0x220) = **(undefined8 **)(*(long *)PTR_DAT_03cbebc0 + 0xb8);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  puVar3 = PTR_DAT_03cbe188;
  FUN_01f49730(param_1,&stack0x00000008,*(undefined8 *)puVar2);
  puVar2 = UnityEngine_UIElements_PointerMoveEvent_<>c_TypeInfo;
  if (in_stack_00000008 == 0) {
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x160) = 1;
    FUN_01f49730(param_1,&stack0x00000008,*(undefined8 *)puVar2);
    *(long *)(param_1 + 0x168) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x168);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar2 = PTR_DAT_03cbdf88;
  uVar6 = FUN_0366d138(0);
  if ((uVar6 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_1 + 600);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_036d35a8(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x138);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_036cee6c(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
        plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
        uVar13 = *(undefined8 *)PolicyPanelBase_<DelayShowView>d__7_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe5e8);
        }
        lVar8 = FUN_0277b678(uVar13,0);
        if (plVar7 == (long *)0x0) goto LAB_03574e48;
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
          uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar13,0);
        }
        if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar7[4] = lVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar8);
        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe5c8);
        FUN_036cfaa0(lVar8,*(undefined8 *)UnityEngine_UIElements_PopupWindow_UxmlFactory_TypeInfo,
                     plVar7,0);
        if (lVar8 == 0) goto LAB_03574e48;
        FUN_036d46a4(lVar8,0x34,0);
        lVar9 = FUN_036cf428(lVar8,0);
        if (((*(long *)(param_1 + 0x138) == 0) ||
            (lVar10 = FUN_0357f060(*(long *)(param_1 + 0x138),0), lVar10 == 0)) ||
           (uVar13 = FUN_036dc8dc(lVar10,0), lVar9 == 0)) goto LAB_03574e48;
        FUN_036dd6d0(lVar9,uVar13,0);
        lVar9 = FUN_036cf428(lVar8,0);
        if (lVar9 == 0) goto LAB_03574e48;
        FUN_036df5b4(lVar9,0);
        lVar9 = FUN_036cbbbc(param_1,0);
        if (lVar9 == 0) goto LAB_03574e48;
        uVar5 = FUN_036cf464(lVar9,0);
        FUN_036cf4a0(lVar8,uVar5,0);
        FUN_01f7e3e4(lVar8,&stack0x00000008,*(undefined8 *)PTR_DAT_03cd09e8);
        *(long *)(param_1 + 0x248) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x248);
        FUN_01f7e3e4(lVar8,&stack0x00000008,
                     *(undefined8 *)UnityEngine_UIElements_PointerOverEvent_<>c_TypeInfo);
        *(long *)(param_1 + 600) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 600);
        lVar9 = *(long *)(param_1 + 600);
        if (*(int *)(*(long *)PTR_DAT_03cc65c0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_037b3f74(0);
        uVar11 = FUN_036ad72c(0);
        if (lVar9 == 0) goto LAB_03574e48;
        FUN_0390f4d8(lVar9,uVar13,uVar11,0);
        plVar7 = (long *)FUN_01f7e2fc(lVar8,*(undefined8 *)
                                             UnityEngine_InputSystem_Controls_KeyControl_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_03574e48;
        (**(code **)(*plVar7 + 0x2f8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x300));
        FUN_03574e5c(param_1);
      }
    }
  }
  puVar3 = UnityEngine_UIElements_PointerOutEvent_<>c_TypeInfo;
  FUN_01f49730(param_1,&stack0x00000008,*(undefined8 *)PTR_DAT_03cbfd00);
  *(long *)(param_1 + 0x108) = in_stack_00000008;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x108);
  lVar8 = FUN_01f4a080(param_1,*(undefined8 *)puVar3);
  if (lVar8 == 0) goto LAB_03574e48;
  if (1 < *(int *)(lVar8 + 0x18)) {
    plVar7 = *(long **)(lVar8 + 0x28);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
    else {
      lVar8 = *(long *)UnityEngine_UIElements_Experimental_PointerOverLinkTagEvent_<>c_TypeInfo;
      bVar1 = *(byte *)(lVar8 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar1) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
          plVar12 = (long *)0x0;
        }
      }
      *(long **)(param_1 + 0x170) = plVar12;
      if (*(byte *)(*plVar7 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
        plVar7 = (long *)0x0;
      }
    }
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x170,plVar7);
  }
  uVar13 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036cee6c(uVar13,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x110) == 0) goto LAB_03574e48;
    FUN_01f49730(*(long *)(param_1 + 0x110),&stack0x00000008,
                 *(undefined8 *)
                  UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_<>c_TypeInfo);
    *(long *)(param_1 + 0x120) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x120);
  }
  uVar13 = *(undefined8 *)(param_1 + 600);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036cee6c(uVar13,0,0);
  if ((uVar6 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 600);
    if (*(int *)(*(long *)PTR_DAT_03cc65c0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_037b3f74(0);
    uVar11 = FUN_036ad72c(0);
    if (lVar8 == 0) goto LAB_03574e48;
    FUN_0390f4d8(lVar8,uVar13,uVar11,0);
  }
  uVar13 = *(undefined8 *)(param_1 + 0x138);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036cee6c(uVar13,0,0);
  puVar3 = PTR_DAT_03cbf360;
  if ((uVar6 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x138);
    uVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf360);
    FUN_036e8134(uVar13,param_1,
                 *(undefined8 *)UnityEngine_UIElements_PointerStationaryEvent_<>c_TypeInfo,0);
    if (lVar8 == 0) goto LAB_03574e48;
    FUN_037b7428(lVar8,uVar13,0);
    lVar8 = *(long *)(param_1 + 0x138);
    uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    FUN_036e8134(uVar13,param_1,
                 *(undefined8 *)
                  UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_TypeInfo,0);
    if (lVar8 == 0) goto LAB_03574e48;
    FUN_037b7428(lVar8,uVar13,0);
    uVar13 = *(undefined8 *)(param_1 + 0x150);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_036cee6c(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x150) == 0) goto LAB_03574e48;
      lVar8 = *(long *)(*(long *)(param_1 + 0x150) + 0x118);
      uVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf998);
      FUN_020d3a10(uVar13,param_1,
                   *(undefined8 *)Cysharp_Threading_Tasks_PlayerLoopHelper_<>c_TypeInfo,0);
      if (lVar8 == 0) goto LAB_03574e48;
      FUN_020d4914(lVar8,uVar13,*(undefined8 *)PTR_DAT_03cbf9a0);
    }
    FUN_035729a8(param_1);
  }
  puVar4 = UnityEngine_UIElements_PointerUpEvent_<>c_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_32_0_TypeInfo;
  puVar2 = IOVRSceneComponent_TypeInfo;
  lVar8 = *(long *)OVRPlugin_OVRP_1_32_0_TypeInfo;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x58);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_02060754(uVar13,param_1,*(undefined8 *)puVar4,0);
  if (lVar8 != 0) {
    FUN_021c826c(lVar8,uVar13,
                 *(undefined8 *)
                  UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_TypeInfo);
    return;
  }
LAB_03574e48:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


