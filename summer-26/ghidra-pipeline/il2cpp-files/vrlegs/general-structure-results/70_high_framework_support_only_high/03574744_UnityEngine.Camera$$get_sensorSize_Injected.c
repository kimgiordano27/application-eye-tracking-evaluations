/*
FUNCTION_NAME: UnityEngine.Camera$$get_sensorSize_Injected
ENTRY_POINT: 03574744
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_17;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Camera__get_sensorSize_Injected(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long in_stack_00000008;
  
  FUN_01ab69ac();
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
  *(undefined1 *)(unaff_x20 + 0xd) = 1;
  FUN_0391fac0();
  if (*(long *)(unaff_x19 + 0x220) == 0) {
    *(undefined8 *)(unaff_x19 + 0x220) = **(undefined8 **)(*(long *)PTR_DAT_03cbebc0 + 0xb8);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  puVar2 = PTR_DAT_03cbe188;
  FUN_01f49730();
  if (in_stack_00000008 == 0) {
    *(undefined1 *)(unaff_x19 + 0x160) = 0;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x160) = 1;
    FUN_01f49730();
    *(long *)(unaff_x19 + 0x168) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x168);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar2 = PTR_DAT_03cbdf88;
  uVar5 = FUN_0366d138(0);
  if ((uVar5 & 1) != 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 600);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036d35a8(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(unaff_x19 + 0x138);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_036cee6c(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
        uVar12 = *(undefined8 *)PolicyPanelBase_<DelayShowView>d__7_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe5e8);
        }
        lVar7 = FUN_0277b678(uVar12,0);
        if (plVar6 == (long *)0x0) goto LAB_03574e48;
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
          uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar12,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar6[4] = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar7);
        lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe5c8);
        FUN_036cfaa0(lVar7,*(undefined8 *)UnityEngine_UIElements_PopupWindow_UxmlFactory_TypeInfo,
                     plVar6,0);
        if (lVar7 == 0) goto LAB_03574e48;
        FUN_036d46a4(lVar7,0x34,0);
        lVar8 = FUN_036cf428(lVar7,0);
        if (((*(long *)(unaff_x19 + 0x138) == 0) ||
            (lVar9 = FUN_0357f060(*(long *)(unaff_x19 + 0x138),0), lVar9 == 0)) ||
           (uVar12 = FUN_036dc8dc(lVar9,0), lVar8 == 0)) goto LAB_03574e48;
        FUN_036dd6d0(lVar8,uVar12,0);
        lVar8 = FUN_036cf428(lVar7,0);
        if (lVar8 == 0) goto LAB_03574e48;
        FUN_036df5b4(lVar8,0);
        lVar8 = FUN_036cbbbc();
        if (lVar8 == 0) goto LAB_03574e48;
        uVar4 = FUN_036cf464(lVar8,0);
        FUN_036cf4a0(lVar7,uVar4,0);
        FUN_01f7e3e4(lVar7,&stack0x00000008,*(undefined8 *)PTR_DAT_03cd09e8);
        *(long *)(unaff_x19 + 0x248) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x248);
        FUN_01f7e3e4(lVar7,&stack0x00000008,
                     *(undefined8 *)UnityEngine_UIElements_PointerOverEvent_<>c_TypeInfo);
        *(long *)(unaff_x19 + 600) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 600);
        lVar8 = *(long *)(unaff_x19 + 600);
        if (*(int *)(*(long *)PTR_DAT_03cc65c0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_037b3f74(0);
        uVar10 = FUN_036ad72c(0);
        if (lVar8 == 0) goto LAB_03574e48;
        FUN_0390f4d8(lVar8,uVar12,uVar10,0);
        plVar6 = (long *)FUN_01f7e2fc(lVar7,*(undefined8 *)
                                             UnityEngine_InputSystem_Controls_KeyControl_TypeInfo);
        if (plVar6 == (long *)0x0) goto LAB_03574e48;
        (**(code **)(*plVar6 + 0x2f8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x300));
        FUN_03574e5c();
      }
    }
  }
  FUN_01f49730();
  *(long *)(unaff_x19 + 0x108) = in_stack_00000008;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x108);
  lVar7 = FUN_01f4a080();
  if (lVar7 == 0) goto LAB_03574e48;
  if (1 < *(int *)(lVar7 + 0x18)) {
    plVar6 = *(long **)(lVar7 + 0x28);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x170) = 0;
    }
    else {
      lVar7 = *(long *)UnityEngine_UIElements_Experimental_PointerOverLinkTagEvent_<>c_TypeInfo;
      bVar1 = *(byte *)(lVar7 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x170) = plVar11;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
        plVar6 = (long *)0x0;
      }
    }
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x170,plVar6);
  }
  uVar12 = *(undefined8 *)(unaff_x19 + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036cee6c(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_03574e48;
    FUN_01f49730(*(long *)(unaff_x19 + 0x110),&stack0x00000008,
                 *(undefined8 *)
                  UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_<>c_TypeInfo);
    *(long *)(unaff_x19 + 0x120) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x120);
  }
  uVar12 = *(undefined8 *)(unaff_x19 + 600);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036cee6c(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 600);
    if (*(int *)(*(long *)PTR_DAT_03cc65c0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_037b3f74(0);
    uVar10 = FUN_036ad72c(0);
    if (lVar7 == 0) goto LAB_03574e48;
    FUN_0390f4d8(lVar7,uVar12,uVar10,0);
  }
  uVar12 = *(undefined8 *)(unaff_x19 + 0x138);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036cee6c(uVar12,0,0);
  puVar3 = PTR_DAT_03cbf360;
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x138);
    uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf360);
    FUN_036e8134();
    if (lVar7 == 0) goto LAB_03574e48;
    FUN_037b7428(lVar7,uVar12,0);
    lVar7 = *(long *)(unaff_x19 + 0x138);
    uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    FUN_036e8134();
    if (lVar7 == 0) goto LAB_03574e48;
    FUN_037b7428(lVar7,uVar12,0);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x150);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036cee6c(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_03574e48;
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x150) + 0x118);
      uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf998);
      FUN_020d3a10();
      if (lVar7 == 0) goto LAB_03574e48;
      FUN_020d4914(lVar7,uVar12,*(undefined8 *)PTR_DAT_03cbf9a0);
    }
    FUN_035729a8();
  }
  puVar3 = OVRPlugin_OVRP_1_32_0_TypeInfo;
  puVar2 = IOVRSceneComponent_TypeInfo;
  lVar7 = *(long *)OVRPlugin_OVRP_1_32_0_TypeInfo;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x58);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_02060754();
  if (lVar7 != 0) {
    FUN_021c826c(lVar7,uVar12,
                 *(undefined8 *)
                  UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_TypeInfo);
    return;
  }
LAB_03574e48:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


