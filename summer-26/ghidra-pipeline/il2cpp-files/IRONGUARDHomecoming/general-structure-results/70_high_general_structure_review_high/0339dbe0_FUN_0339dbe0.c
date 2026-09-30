/*
FUNCTION_NAME: FUN_0339dbe0
ENTRY_POINT: 0339dbe0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_2
*/


void FUN_0339dbe0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = Method_UnityEngine_InputSystem_InputAction_ReadValue<float>__;
                    /* try { // try from 0339dc0c to 0349decb has its CatchHandler @ 0339dc0c
                       catch() { ... } // from try @ 0339dc0c with catch @ 0339dc0c
                       catch() { ... } // from try @ 0339df8c with catch @ 0339dc0c
                       catch() { ... } // from try @ 0339e0f4 with catch @ 0339dc0c
                       catch() { ... } // from try @ 0339e19c with catch @ 0339dc0c */
  if ((DAT_048322c6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputAction_ReadValue<Vector2>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputAction_ReadValue<Vector3>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputAction_BindingIndexOnActionToBindingIndexOnMap__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionAsset_FindAction__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionAsset_FindActionMap__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionAsset_FindControlScheme__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionAsset_FindControlSchemeIndex__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionAsset_IsUsableWithDevice__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionAsset_LoadFromJson__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionAsset_get_Item__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionMap_FindAction__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionMap_FromJson__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionMap_OnWantToChangeSetup__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionMap_ToJson__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionMap_get_Item__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverrides__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingDisplayString__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingDisplayString__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingDisplayString__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingDisplayString__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingForControl__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingIndex__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputAction_ReadValue<float>__);
    DAT_048322c6 = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputActionAsset_FindActionMap__);
    FUN_02e6c748(lVar7,uVar8,*(undefined8 *)Method_UnityEngine_InputSystem_InputActionMap_ToJson__,0
                );
    plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_01f51358(plVar6,lVar7);
  }
  if (param_1 != 0) {
    FUN_023feb24(param_1,lVar7,param_2 & 1,
                 *(undefined8 *)Method_UnityEngine_InputSystem_InputActionMap_FromJson__);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = Method_UnityEngine_InputSystem_InputActionMap_FindAction__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FindControlScheme__
                                );
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feb24(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    puVar4 = Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FindAction__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feb24(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar4);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FindControlScheme__
                                );
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feb24(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingDisplayString__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_0339e980(param_1,lVar7,param_2 & 1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingDisplayString__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_0339e980(param_1,lVar7,param_2 & 1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingDisplayString__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_0339e980(param_1,lVar7,param_2 & 1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingDisplayString__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_0339e980(param_1,lVar7,param_2 & 1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingForControl__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_0339e980(param_1,lVar7,param_2 & 1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingIndex__,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_0339e980(param_1,lVar7,param_2 & 1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    puVar4 = Method_UnityEngine_InputSystem_InputActionAsset_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FindControlSchemeIndex__
                                );
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)Method_UnityEngine_InputSystem_InputActionMap_get_Item__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feb24(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar4);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    puVar3 = Method_UnityEngine_InputSystem_InputActionMap_OnWantToChangeSetup__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputAction_ReadValue<Vector3>__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feb24(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar3);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputAction_ReadValue<Vector3>__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feb24(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar3);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    puVar3 = Method_UnityEngine_InputSystem_InputActionAsset_LoadFromJson__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputAction_BindingIndexOnActionToBindingIndexOnMap__
                                );
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feec4(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar3);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_0339e980(param_1,lVar7,param_2 & 1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FindControlScheme__
                                );
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feb24(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_0339e980(param_1,lVar7,param_2 & 1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FromJson__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverrides__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_0339e980(param_1,lVar7,param_2 & 1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = Method_UnityEngine_InputSystem_InputActionAsset_IsUsableWithDevice__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputAction_ReadValue<Vector2>__);
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023fec58(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FindControlSchemeIndex__
                                );
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feb24(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar4);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputActionAsset_FindControlSchemeIndex__
                                );
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa8);
      *plVar6 = lVar7;
      thunk_FUN_01f51358(plVar6,lVar7);
    }
    FUN_023feb24(param_1,lVar7,param_2 & 1,*(undefined8 *)puVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


