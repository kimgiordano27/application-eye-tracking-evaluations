/*
FUNCTION_NAME: FUN_05568a1c
ENTRY_POINT: 05568a1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05568a1c(long *param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_64 [4];
  
  puVar1 = PTR_DAT_067d99b8;
                    /* try { // try from 05568a20 to 05668a23 has its CatchHandler @ 05569018 */
  if ((DAT_06bbf933 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d7760);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(PTR_DAT_067caf40);
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_get_outsideClickStrategy__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst_00000FD5_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067cafa0);
    FUN_02f08768(System_Nullable<DateTime>_var);
    FUN_02f08768(PTR_DAT_067d99b8);
    FUN_02f08768(System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo);
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_get_outsideScrollEnabled__);
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<Popover>_InvokeDismissedEventHandlers__);
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<Popover>__ctor__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000FD6_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<Popover>_SetAnchor__);
    FUN_02f08768(
                UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_00000191_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<Popover>_SetArrowVisible__);
    DAT_06bbf933 = 1;
  }
  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_050f41f0(uVar8,2,0,0);
  if (param_2 != 0) {
    FUN_04fd5544(param_2,*(undefined8 *)Method_Unity_AppUI_UI_AnchorPopup<Popover>_SetArrowVisible__
                 ,uVar8,0);
    puVar1 = Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_get_outsideScrollEnabled__;
    if (param_5 != 0) {
      local_78 = CONCAT44(local_78._4_4_,param_5);
      uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_EaseAttachBurst_00000FD5_BurstDirectCall_TypeInfo
                                 ,&local_78);
      FUN_04fd5544(param_2,*(undefined8 *)puVar1,uVar8,0);
    }
    iVar5 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
    if (iVar5 != 1) {
      uVar6 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
      local_78 = CONCAT44(local_78._4_4_,uVar6);
      uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)
                                  Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_get_outsideClickStrategy__
                                 ,&local_78);
      FUN_04fd5544(param_2,*(undefined8 *)Method_Unity_AppUI_UI_AnchorPopup<Popover>__ctor__,uVar8,0
                  );
    }
    if (param_5 == 0) {
      uVar8 = FUN_05569808(param_1,0);
      FUN_04fd5544(param_2,*(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000FD6_PostfixBurstDelegate_TypeInfo
                   ,uVar8,0);
      iVar5 = FUN_0556999c(param_1);
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
      FUN_04f77edc(uVar8,iVar5 << 1,0);
      if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar11 = FUN_050656a0(0);
      plVar9 = (long *)thunk_FUN_02f45270(*(undefined8 *)System_Nullable<DateTime>_var);
      FUN_050a76c8(plVar9,uVar8,uVar11,0);
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                  System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo);
      FUN_057d282c(uVar8,plVar9,0);
      FUN_05569abc(param_1,uVar8,2);
      if (plVar9 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        FUN_04fd5544(param_2,*(undefined8 *)
                              UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_00000191_BurstDirectCall_TypeInfo
                     ,uVar8,0);
        return;
      }
    }
    else {
      iVar5 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
      FUN_05569020(param_1,param_2);
      if (iVar5 == 1) {
        plVar9 = (long *)param_1[5];
        if (plVar9 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
          FUN_04fe0c98(param_2,*(undefined8 *)
                                Method_Unity_AppUI_UI_AnchorPopup<Popover>_InvokeDismissedEventHandlers__
                       ,uVar6,0);
          puVar4 = Method_Unity_AppUI_UI_AnchorPopup<Popover>_SetAnchor__;
          puVar3 = PTR_DAT_067caf40;
          puVar2 = PTR_DAT_067c9fd8;
          puVar1 = PTR_DAT_067c9338;
          plVar9 = (long *)param_1[5];
          if (plVar9 != (long *)0x0) {
            iVar5 = 0;
            while (iVar7 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0)),
                  iVar5 < iVar7) {
              local_64[0] = 0;
              uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x28),local_64);
              local_78 = 0;
              uStack_70 = 0;
              FUN_04fecd90(&local_78,param_4 & 0xffffffff,uVar8,0);
              lVar10 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d7760);
              FUN_04ff34e4(lVar10,0,local_78,uStack_70,0);
              plVar9 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar3);
              FUN_0508a180(plVar9,0);
              if (((param_1[5] == 0) || (uVar8 = FUN_0558c44c(param_1[5],iVar5,0), lVar10 == 0)) ||
                 (FUN_04ff3c7c(lVar10,plVar9,uVar8,0), plVar9 == (long *)0x0)) goto LAB_05569018;
              (**(code **)(*plVar9 + 0x208))(plVar9,0,*(undefined8 *)(*plVar9 + 0x210));
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar8 = FUN_050656a0(0);
              local_7c = iVar5;
              uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x48),&local_7c);
              uVar8 = FUN_04f70148(uVar8,*(undefined8 *)puVar4,uVar11,0);
              uVar11 = (**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
              FUN_04fd5544(param_2,uVar8,uVar11,0);
              plVar9 = (long *)param_1[5];
              iVar5 = iVar5 + 1;
              if (plVar9 == (long *)0x0) goto LAB_05569018;
            }
            plVar9 = (long *)param_1[5];
            if (plVar9 != (long *)0x0) {
              iVar5 = 0;
              goto LAB_05568ef8;
            }
          }
        }
      }
      else {
LAB_05568fbc:
        plVar9 = (long *)param_1[5];
        if (plVar9 != (long *)0x0) {
          iVar5 = 0;
          do {
            iVar7 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
            if (iVar7 <= iVar5) {
              return;
            }
            if ((param_1[5] == 0) || (lVar10 = FUN_0558c44c(param_1[5],iVar5,0), lVar10 == 0))
            break;
            FUN_05545f68(lVar10,param_2,param_3,param_4,iVar5,0);
            plVar9 = (long *)param_1[5];
            iVar5 = iVar5 + 1;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
LAB_05569018:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
LAB_05568ef8:
  iVar7 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
  if (iVar7 <= iVar5) {
    FUN_05569190(param_1,param_2);
    plVar9 = (long *)param_1[5];
    if (plVar9 != (long *)0x0) {
      iVar5 = 0;
      goto LAB_05568f68;
    }
    goto LAB_05569018;
  }
  if ((param_1[5] == 0) || (lVar10 = FUN_0558c44c(param_1[5],iVar5,0), lVar10 == 0))
  goto LAB_05569018;
  FUN_05549194(lVar10,param_2,param_3,param_4,iVar5,1,0);
  plVar9 = (long *)param_1[5];
  iVar5 = iVar5 + 1;
  if (plVar9 == (long *)0x0) goto LAB_05569018;
  goto LAB_05568ef8;
  while( true ) {
    FUN_0554ad1c(lVar10,param_2,param_3,param_4,iVar5,0);
    plVar9 = (long *)param_1[5];
    iVar5 = iVar5 + 1;
    if (plVar9 == (long *)0x0) break;
LAB_05568f68:
    iVar7 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    if (iVar7 <= iVar5) goto LAB_05568fbc;
    if ((param_1[5] == 0) || (lVar10 = FUN_0558c44c(param_1[5],iVar5,0), lVar10 == 0)) break;
  }
  goto LAB_05569018;
}


