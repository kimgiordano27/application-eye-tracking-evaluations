/*
FUNCTION_NAME: UnityEngine.XR.XRSettings$$get_loadedDeviceName_Injected
ENTRY_POINT: 07ece0c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


long UnityEngine_XR_XRSettings__get_loadedDeviceName_Injected(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x25;
  
  FUN_03a8a718(
              Method_UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_Get__
              );
  FUN_03a8a718(
              Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Get__
              );
  FUN_03a8a718(
              Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Release__
              );
  FUN_03a8a718(
              Method_UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_Get__
              );
  FUN_03a8a718(
              Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Get__
              );
  FUN_03a8a718(Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Get__);
  FUN_03a8a718(
              Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
              );
  FUN_03a8a718(PTR_DAT_08487e70);
  FUN_03a8a718(
              Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<int>__ctor__
              );
  FUN_03a8a718(Method_HurricaneVR_Framework_Shared_Utilities_CircularBuffer<Vector3>_Enqueue__);
  FUN_03a8a718(PTR_DAT_084a0768);
  FUN_03a8a718(PTR_DAT_08487e80);
  FUN_03a8a718(
              Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<long>__ctor__
              );
  *(undefined1 *)(unaff_x20 + 0xd2c) = 1;
  lVar1 = FUN_03a8a804(*unaff_x19,3);
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


