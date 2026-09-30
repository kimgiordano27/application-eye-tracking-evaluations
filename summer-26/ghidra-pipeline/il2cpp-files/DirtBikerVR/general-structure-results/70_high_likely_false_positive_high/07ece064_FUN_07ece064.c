/*
FUNCTION_NAME: FUN_07ece064
ENTRY_POINT: 07ece064
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_07ece064(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Get__;
  puVar3 = Method_UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_Release__;
  if ((DAT_0899ad2c & 1) == 0) {
    FUN_03a8a718(Method_UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_Release__);
    FUN_03a8a718(Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Get__);
    FUN_03a8a718(
                Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Release__
                );
    FUN_03a8a718(
                Method_UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_Get__
                );
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
    DAT_0899ad2c = 1;
  }
  puVar2 = Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<long>__ctor__
  ;
  puVar1 = PTR_DAT_08487e80;
  lVar5 = FUN_03a8a804(*(undefined8 *)puVar3,3);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar7 + 0xb8);
  uVar9 = *(undefined8 *)puVar2;
  uVar10 = *(undefined8 *)puVar1;
  lVar11 = puVar8[1];
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar7);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Release__
                               );
    FUN_04968274(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_Get__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar11;
    thunk_FUN_03afed3c(plVar6,lVar11);
    lVar7 = *(long *)puVar4;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar3 = Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Get__;
  puVar8 = *(undefined8 **)(lVar7 + 0xb8);
  lVar13 = puVar8[2];
  if (lVar13 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar7);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
                               );
    FUN_05cd8340(lVar13,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_Get__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar6 = lVar13;
    thunk_FUN_03afed3c(plVar6,lVar13);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_0647b0d8(&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar3);
  puVar2 = Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<int>__ctor__;
  puVar1 = PTR_DAT_084a0768;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x28) = uStack_68;
      *(undefined8 *)(lVar5 + 0x20) = local_70;
      *(undefined8 *)(lVar5 + 0x38) = uStack_58;
      *(undefined8 *)(lVar5 + 0x30) = uStack_60;
      thunk_FUN_03afed3c(lVar5 + 0x20,0);
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar7 = *(long *)puVar4;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0xb8);
      uVar9 = *(undefined8 *)puVar2;
      uVar10 = *(undefined8 *)puVar1;
      lVar11 = puVar8[3];
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar12 = *puVar8;
        lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Release__
                                   );
        FUN_04968274(lVar11,uVar12,
                     *(undefined8 *)
                      Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Get__
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
        *plVar6 = lVar11;
        thunk_FUN_03afed3c(plVar6,lVar11);
        lVar7 = *(long *)puVar4;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar7 = *(long *)puVar4;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0xb8);
      lVar13 = puVar8[4];
      if (lVar13 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar12 = *puVar8;
        lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
                                   );
        FUN_05cd8340(lVar13,uVar12,
                     *(undefined8 *)
                      Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Release__
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
        *plVar6 = lVar13;
        thunk_FUN_03afed3c(plVar6,lVar13);
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      FUN_0647b0d8(&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar3);
      puVar2 = Method_HurricaneVR_Framework_Shared_Utilities_CircularBuffer<Vector3>_Enqueue__;
      puVar1 = PTR_DAT_08487e70;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar5 + 0x48) = uStack_68;
        *(undefined8 *)(lVar5 + 0x40) = local_70;
        *(undefined8 *)(lVar5 + 0x58) = uStack_58;
        *(undefined8 *)(lVar5 + 0x50) = uStack_60;
        thunk_FUN_03afed3c(lVar5 + 0x40,0);
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar7 = *(long *)puVar4;
        }
        puVar8 = *(undefined8 **)(lVar7 + 0xb8);
        uVar9 = *(undefined8 *)puVar2;
        uVar10 = *(undefined8 *)puVar1;
        lVar11 = puVar8[5];
        if (lVar11 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar12 = *puVar8;
          lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       Method_UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_Release__
                                     );
          FUN_04968274(lVar11,uVar12,
                       *(undefined8 *)
                        Method_UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_Get__
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
          *plVar6 = lVar11;
          thunk_FUN_03afed3c(plVar6,lVar11);
          lVar7 = *(long *)puVar4;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar7 = *(long *)puVar4;
        }
        puVar8 = *(undefined8 **)(lVar7 + 0xb8);
        lVar13 = puVar8[6];
        if (lVar13 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar12 = *puVar8;
          lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
                                     );
          FUN_05cd8340(lVar13,uVar12,
                       *(undefined8 *)
                        Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Get__
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
          *plVar6 = lVar13;
          thunk_FUN_03afed3c(plVar6,lVar13);
        }
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        FUN_0647b0d8(&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar3);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x68) = uStack_68;
          *(undefined8 *)(lVar5 + 0x60) = local_70;
          *(undefined8 *)(lVar5 + 0x78) = uStack_58;
          *(undefined8 *)(lVar5 + 0x70) = uStack_60;
          thunk_FUN_03afed3c(lVar5 + 0x60,0);
          return lVar5;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


