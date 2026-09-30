/*
FUNCTION_NAME: Unity.Services.DistributedAuthority.WrappedDistributedAuthorityService.<CreateSessionForLobbyIdAsync>d__12$$MoveNext
ENTRY_POINT: 05fb3958
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_DistributedAuthority_WrappedDistributedAuthorityService_<CreateSessionForLobbyIdAsync>d__12__MoveNext
               (undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x19;
  undefined1 uVar14;
  undefined8 unaff_x20;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  FUN_0400f9fc();
  *(undefined8 *)(unaff_x19 + 0x38) = param_1;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x38),param_1);
  uVar9 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_0403e570(uVar9,0x20,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x40),uVar9);
  uVar9 = thunk_FUN_02dd3144(*unaff_x29);
  FUN_0552aca4(uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x48),uVar9);
  uVar9 = thunk_FUN_02dd3144(*unaff_x28);
  FUN_05fc3484(uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x50),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnStartTeleport__
                            );
  FUN_05fc2ad4(uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x58),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Services_Vivox_AccountId__ctor__);
  FUN_04d95918(uVar9,*(undefined8 *)Method_UnityEngine_UIElements_ATGTextJobSystem_AddDrawEntries__)
  ;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x60),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectEntered__
                            );
  FUN_05fbe3a0(uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x68),uVar9);
  uVar9 = FUN_02d966a4(*(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                       ,3);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
  LeanTween__value();
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_bindingIndex__
                            );
  FUN_047cc514(uVar9,*(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_ActionEvent_From__);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x90),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedStyleProperty<FontDefinition>__ctor__
                            );
  FUN_05fbd800(uVar9,0);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 0xb0),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Action_Invoke__);
  FUN_04e92874(uVar9,*(undefined8 *)
                      Method_UnityEngine_UIElements_ATGTextJobSystem_GenerateTextJobified__);
  *(undefined8 *)(unaff_x19 + 200) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 200),uVar9);
  puVar16 = (undefined8 *)(unaff_x19 + 0xd0);
  *puVar16 = *(undefined8 *)
              Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_interactionIndex__;
  LeanTween__value(puVar16);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Services_Vivox_AccountId__ctor__);
  FUN_04da3448(uVar9,*(undefined8 *)
                      Method_UnityEngine_UIElements_AbstractProgressBar_OnGeometryChanged__);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar9;
  LeanTween__value((undefined8 *)(unaff_x19 + 0xd8),uVar9);
  lVar10 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,2);
  if (lVar10 == 0) goto LAB_05fb3ec4;
  if (*(int *)(lVar10 + 0x18) != 0) {
    *(undefined8 *)(lVar10 + 0x20) =
         *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_controlIndex__;
    LeanTween__value((undefined8 *)(lVar10 + 0x20));
    puVar6 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnCancelTeleport__
    ;
    puVar5 = PTR_DAT_06a000e0;
    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar10 + 0x28) =
           *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_stateIndex__;
      LeanTween__value();
      *(long *)(unaff_x19 + 0xe0) = lVar10;
      LeanTween__value((long *)(unaff_x19 + 0xe0),lVar10);
      FUN_0552aca4();
      *(undefined8 *)(unaff_x19 + 0xd0) = unaff_x20;
      LeanTween__value(puVar16);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar5 = PTR_DAT_06a10750;
      uVar11 = FUN_03655820(&stack0x00000008,*(undefined8 *)puVar6);
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dc473e == '\0') {
          FUN_02d965b8(PTR_DAT_06a10750);
          DAT_06dc473e = '\x01';
        }
        lVar10 = *(long *)puVar5;
        uVar14 = 1;
      }
      else {
        if (in_stack_00000008 == 0) {
LAB_05fb3ec4:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        cVar3 = *(char *)(in_stack_00000008 + 0x14);
        *(char *)(unaff_x19 + 0xaf) = cVar3;
        if (cVar3 != '\0') {
          uVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0ead8);
          FUN_05f20ff0(uVar9,0);
          *(undefined8 *)(unaff_x19 + 0x80) = uVar9;
          LeanTween__value((undefined8 *)(unaff_x19 + 0x80),uVar9);
          if (in_stack_00000008 == 0) goto LAB_05fb3ec4;
        }
        uVar14 = *(undefined1 *)(in_stack_00000008 + 0x15);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dc473e == '\0') {
          FUN_02d965b8(PTR_DAT_06a10750);
          DAT_06dc473e = '\x01';
        }
        lVar10 = *(long *)puVar5;
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar10 = *(long *)puVar5;
      }
      puVar6 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnUIHoverEntered__
      ;
      iVar2 = *(int *)(lVar10 + 0xe4);
      *(undefined1 *)(*(long *)(lVar10 + 0xb8) + 0x11) = uVar14;
      if (iVar2 == 0) {
        thunk_FUN_02df485c();
        lVar10 = *(long *)puVar5;
      }
      puVar8 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnUIHoverExited__
      ;
      puVar7 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnStopLocomotion__
      ;
      lVar10 = FUN_02d966a4(*(undefined8 *)puVar6,**(undefined4 **)(lVar10 + 0xb8));
      plVar15 = (long *)(unaff_x19 + 0x88);
      *plVar15 = lVar10;
      LeanTween__value(plVar15,lVar10);
      lVar10 = 0x20;
      uVar11 = 0;
      while( true ) {
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar12 = *(long *)puVar5;
        }
        if ((long)**(int **)(lVar12 + 0xb8) <= (long)uVar11) {
          uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
          uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
          uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
          FUN_05fc8270(uVar13,uVar9,uVar1,0);
          *(undefined8 *)(unaff_x19 + 0x20) = uVar13;
          LeanTween__value((undefined8 *)(unaff_x19 + 0x20),uVar13);
          lVar10 = *(long *)puVar5;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar10 = *(long *)puVar5;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
          if (lVar10 != 0) {
            lVar12 = *(long *)(lVar10 + 0x10);
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar4 = *(uint *)(lVar10 + 0x18);
              if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar4 + 1;
                plVar15 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
                *plVar15 = unaff_x19;
                LeanTween__value(plVar15);
              }
              else {
                FUN_040101ec();
              }
              lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              if (lVar10 != 0) {
                (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40));
              }
              return;
            }
          }
          goto LAB_05fb3ec4;
        }
        lVar12 = *plVar15;
        uVar9 = FUN_02d966a4(*(undefined8 *)puVar8,uVar11 + 1 & 0xffffffff);
        if (lVar12 == 0) goto LAB_05fb3ec4;
        if (*(uint *)(lVar12 + 0x18) <= uVar11) break;
        *(undefined8 *)(lVar12 + lVar10) = uVar9;
        LeanTween__value(lVar12 + lVar10,uVar9);
        lVar10 = lVar10 + 8;
        uVar11 = uVar11 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


