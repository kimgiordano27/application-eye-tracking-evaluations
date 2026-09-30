/*
FUNCTION_NAME: UnityEngine.XR.XRDevice$$SetTrackingSpaceType
ENTRY_POINT: 07ece17c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


long UnityEngine_XR_XRDevice__SetTrackingSpaceType(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  undefined8 uVar5;
  long *unaff_x25;
  
  lVar1 = FUN_03a8a804(*unaff_x19);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar3);
    lVar3 = *unaff_x25;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  if (puVar4[1] == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar3);
      puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar5 = *puVar4;
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Release__
                              );
    FUN_04968274(uVar2,uVar5,
                 *(undefined8 *)
                  Method_UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_Get__
                 ,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
    *puVar4 = uVar2;
    thunk_FUN_03afed3c(puVar4,uVar2);
    lVar3 = *unaff_x25;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar3);
    lVar3 = *unaff_x25;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  if (puVar4[2] == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar3);
      puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar5 = *puVar4;
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
                              );
    FUN_05cd8340(uVar2,uVar5,
                 *(undefined8 *)
                  Method_UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_Get__
                 ,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
    *puVar4 = uVar2;
    thunk_FUN_03afed3c(puVar4,uVar2);
  }
  FUN_0647b0d8();
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      thunk_FUN_03afed3c(lVar1 + 0x20,0);
      lVar3 = *unaff_x25;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar3 = *unaff_x25;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0xb8);
      if (puVar4[3] == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
        }
        uVar5 = *puVar4;
        uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Release__
                                  );
        FUN_04968274(uVar2,uVar5,
                     *(undefined8 *)
                      Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Get__
                     ,0);
        puVar4 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
        *puVar4 = uVar2;
        thunk_FUN_03afed3c(puVar4,uVar2);
        lVar3 = *unaff_x25;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar3 = *unaff_x25;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0xb8);
      if (puVar4[4] == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
        }
        uVar5 = *puVar4;
        uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
                                  );
        FUN_05cd8340(uVar2,uVar5,
                     *(undefined8 *)
                      Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Release__
                     ,0);
        puVar4 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x20);
        *puVar4 = uVar2;
        thunk_FUN_03afed3c(puVar4,uVar2);
      }
      FUN_0647b0d8();
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x48) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
        *(undefined8 *)(lVar1 + 0x58) = 0;
        *(undefined8 *)(lVar1 + 0x50) = 0;
        thunk_FUN_03afed3c(lVar1 + 0x40,0);
        lVar3 = *unaff_x25;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar3 = *unaff_x25;
        }
        puVar4 = *(undefined8 **)(lVar3 + 0xb8);
        if (puVar4[5] == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
          }
          uVar5 = *puVar4;
          uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                      Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Release__
                                    );
          FUN_04968274(uVar2,uVar5,
                       *(undefined8 *)
                        Method_UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_Get__
                       ,0);
          puVar4 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x28);
          *puVar4 = uVar2;
          thunk_FUN_03afed3c(puVar4,uVar2);
          lVar3 = *unaff_x25;
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar3 = *unaff_x25;
        }
        puVar4 = *(undefined8 **)(lVar3 + 0xb8);
        if (puVar4[6] == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
          }
          uVar5 = *puVar4;
          uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                      Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
                                    );
          FUN_05cd8340(uVar2,uVar5,
                       *(undefined8 *)
                        Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Get__
                       ,0);
          puVar4 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x30);
          *puVar4 = uVar2;
          thunk_FUN_03afed3c(puVar4,uVar2);
        }
        FUN_0647b0d8();
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x68) = 0;
          *(undefined8 *)(lVar1 + 0x60) = 0;
          *(undefined8 *)(lVar1 + 0x78) = 0;
          *(undefined8 *)(lVar1 + 0x70) = 0;
          thunk_FUN_03afed3c(lVar1 + 0x60,0);
          return lVar1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


