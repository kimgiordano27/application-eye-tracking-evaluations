/*
FUNCTION_NAME: UnityEngine.Camera$$GetLocalSpaceAim_Injected
ENTRY_POINT: 03574ad8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Camera__GetLocalSpaceAim_Injected(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x19;
  undefined8 uVar9;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  plVar4 = (long *)FUN_01f7e2fc(param_2,*param_1);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x2f8))(plVar4,1,*(undefined8 *)(*plVar4 + 0x300));
    FUN_03574e5c();
    FUN_01f49730();
    *(undefined8 *)(unaff_x19 + 0x108) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x108);
    lVar5 = FUN_01f4a080();
    if (lVar5 != 0) {
      if (1 < *(int *)(lVar5 + 0x18)) {
        plVar4 = *(long **)(lVar5 + 0x28);
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
          *(undefined8 *)(unaff_x19 + 0x170) = 0;
        }
        else {
          lVar5 = *(long *)UnityEngine_UIElements_Experimental_PointerOverLinkTagEvent_<>c_TypeInfo;
          bVar1 = *(byte *)(lVar5 + 0x130);
          if (*(byte *)(*plVar4 + 0x130) < bVar1) {
            plVar8 = (long *)0x0;
          }
          else {
            plVar8 = plVar4;
            if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
              plVar8 = (long *)0x0;
            }
          }
          *(long **)(unaff_x19 + 0x170) = plVar8;
          if (*(byte *)(*plVar4 + 0x130) < bVar1) {
            plVar4 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
            plVar4 = (long *)0x0;
          }
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x170,plVar4);
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x110);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_036cee6c(uVar9,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_03574e48;
        FUN_01f49730(*(long *)(unaff_x19 + 0x110),&stack0x00000008,
                     *(undefined8 *)
                      UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_<>c_TypeInfo);
        *(undefined8 *)(unaff_x19 + 0x120) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x120);
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 600);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_036cee6c(uVar9,0,0);
      if ((uVar6 & 1) != 0) {
        lVar5 = *(long *)(unaff_x19 + 600);
        if (*(int *)(*(long *)PTR_DAT_03cc65c0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_037b3f74(0);
        uVar7 = FUN_036ad72c(0);
        if (lVar5 == 0) goto LAB_03574e48;
        FUN_0390f4d8(lVar5,uVar9,uVar7,0);
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x138);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_036cee6c(uVar9,0,0);
      puVar2 = PTR_DAT_03cbf360;
      if ((uVar6 & 1) != 0) {
        lVar5 = *(long *)(unaff_x19 + 0x138);
        uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf360);
        FUN_036e8134();
        if (lVar5 == 0) goto LAB_03574e48;
        FUN_037b7428(lVar5,uVar9,0);
        lVar5 = *(long *)(unaff_x19 + 0x138);
        uVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        FUN_036e8134();
        if (lVar5 == 0) goto LAB_03574e48;
        FUN_037b7428(lVar5,uVar9,0);
        uVar9 = *(undefined8 *)(unaff_x19 + 0x150);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_036cee6c(uVar9,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_03574e48;
          lVar5 = *(long *)(*(long *)(unaff_x19 + 0x150) + 0x118);
          uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf998);
          FUN_020d3a10();
          if (lVar5 == 0) goto LAB_03574e48;
          FUN_020d4914(lVar5,uVar9,*(undefined8 *)PTR_DAT_03cbf9a0);
        }
        FUN_035729a8();
      }
      puVar3 = OVRPlugin_OVRP_1_32_0_TypeInfo;
      puVar2 = IOVRSceneComponent_TypeInfo;
      lVar5 = *(long *)OVRPlugin_OVRP_1_32_0_TypeInfo;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar3;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_02060754();
      if (lVar5 != 0) {
        FUN_021c826c(lVar5,uVar9,
                     *(undefined8 *)
                      UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_TypeInfo);
        return;
      }
    }
  }
LAB_03574e48:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


