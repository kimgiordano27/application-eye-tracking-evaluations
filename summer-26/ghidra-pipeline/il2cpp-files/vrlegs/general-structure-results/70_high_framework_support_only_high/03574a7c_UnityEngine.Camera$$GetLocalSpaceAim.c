/*
FUNCTION_NAME: UnityEngine.Camera$$GetLocalSpaceAim
ENTRY_POINT: 03574a7c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Camera__GetLocalSpaceAim(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x19;
  long lVar9;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x19 + 600) = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar9 = *(long *)(unaff_x19 + 600);
  if (*(int *)(*(long *)PTR_DAT_03cc65c0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_037b3f74(0);
  uVar5 = FUN_036ad72c(0);
  if (lVar9 != 0) {
    FUN_0390f4d8(lVar9,uVar4,uVar5,0);
    plVar6 = (long *)FUN_01f7e2fc();
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x2f8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x300));
      FUN_03574e5c();
      FUN_01f49730();
      *(undefined8 *)(unaff_x19 + 0x108) = in_stack_00000008;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x108);
      lVar9 = FUN_01f4a080();
      if (lVar9 != 0) {
        if (1 < *(int *)(lVar9 + 0x18)) {
          plVar6 = *(long **)(lVar9 + 0x28);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)0x0;
            *(undefined8 *)(unaff_x19 + 0x170) = 0;
          }
          else {
            lVar9 = *(long *)
                     UnityEngine_UIElements_Experimental_PointerOverLinkTagEvent_<>c_TypeInfo;
            bVar1 = *(byte *)(lVar9 + 0x130);
            if (*(byte *)(*plVar6 + 0x130) < bVar1) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = plVar6;
              if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
                plVar8 = (long *)0x0;
              }
            }
            *(long **)(unaff_x19 + 0x170) = plVar8;
            if (*(byte *)(*plVar6 + 0x130) < bVar1) {
              plVar6 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
              plVar6 = (long *)0x0;
            }
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (unaff_x19 + 0x170,plVar6);
        }
        uVar4 = *(undefined8 *)(unaff_x19 + 0x110);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_036cee6c(uVar4,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_03574e48;
          FUN_01f49730(*(long *)(unaff_x19 + 0x110),&stack0x00000008,
                       *(undefined8 *)
                        UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_<>c_TypeInfo);
          *(undefined8 *)(unaff_x19 + 0x120) = in_stack_00000008;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x120);
        }
        uVar4 = *(undefined8 *)(unaff_x19 + 600);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_036cee6c(uVar4,0,0);
        if ((uVar7 & 1) != 0) {
          lVar9 = *(long *)(unaff_x19 + 600);
          if (*(int *)(*(long *)PTR_DAT_03cc65c0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar4 = FUN_037b3f74(0);
          uVar5 = FUN_036ad72c(0);
          if (lVar9 == 0) goto LAB_03574e48;
          FUN_0390f4d8(lVar9,uVar4,uVar5,0);
        }
        uVar4 = *(undefined8 *)(unaff_x19 + 0x138);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_036cee6c(uVar4,0,0);
        puVar2 = PTR_DAT_03cbf360;
        if ((uVar7 & 1) != 0) {
          lVar9 = *(long *)(unaff_x19 + 0x138);
          uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf360);
          FUN_036e8134();
          if (lVar9 == 0) goto LAB_03574e48;
          FUN_037b7428(lVar9,uVar4,0);
          lVar9 = *(long *)(unaff_x19 + 0x138);
          uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
          FUN_036e8134();
          if (lVar9 == 0) goto LAB_03574e48;
          FUN_037b7428(lVar9,uVar4,0);
          uVar4 = *(undefined8 *)(unaff_x19 + 0x150);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_036cee6c(uVar4,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_03574e48;
            lVar9 = *(long *)(*(long *)(unaff_x19 + 0x150) + 0x118);
            uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf998);
            FUN_020d3a10();
            if (lVar9 == 0) goto LAB_03574e48;
            FUN_020d4914(lVar9,uVar4,*(undefined8 *)PTR_DAT_03cbf9a0);
          }
          FUN_035729a8();
        }
        puVar3 = OVRPlugin_OVRP_1_32_0_TypeInfo;
        puVar2 = IOVRSceneComponent_TypeInfo;
        lVar9 = *(long *)OVRPlugin_OVRP_1_32_0_TypeInfo;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar9 = *(long *)puVar3;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x58);
        uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        FUN_02060754();
        if (lVar9 != 0) {
          FUN_021c826c(lVar9,uVar4,
                       *(undefined8 *)
                        UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_TypeInfo);
          return;
        }
      }
    }
  }
LAB_03574e48:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


