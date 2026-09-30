/*
FUNCTION_NAME: FUN_03384ff8
ENTRY_POINT: 03384ff8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_03384ff8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
                    /* try { // try from 03385010 to 03485037 has its CatchHandler @ 0338504c */
  if ((DAT_048321b9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_GetElementData<ToggleValue_Data>__)
    ;
                    /* try { // try from 03385038 to 03485043 has its CatchHandler @ 03384b04 */
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_EnterParentElement__);
                    /* try { // try from 03385044 to 0348504b has its CatchHandler @ 0338504c */
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_EnterParentElement__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03385010 with catch @ 0338504c
                       catch(type#2 @ 00000000) { ... } // from try @ 03385044 with catch @ 0338504c
                        */
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_ExitParentElement__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_Initialize__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_Initialize__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_Initialize__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_get_serializedObject__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphReference_ChildReference__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<HandGrabInteractor,_HandGrabInteractable>_HandlePointerEventRaised__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphReference_CreateGraphData__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphReference_FreeGraphData__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphReference_FreeInvalidInterns__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphReference_ParentReference__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphStack_InitializeNoAlloc__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Graphics_DrawMesh__);
    DAT_048321b9 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (param_2 != (long *)0x0) {
    lVar12 = *(long *)(param_1 + 0x28);
    uVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    puVar3 = Method_Unity_VisualScripting_GraphPointer_ExitParentElement__;
    if (lVar12 != 0) {
      uVar8 = FUN_02b6b4d8(lVar12,uVar7,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_GraphPointer_EnterParentElement__);
      if ((uVar8 & 1) != 0) {
        lVar12 = *(long *)(param_1 + 0x28);
        uVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        if (lVar12 == 0) goto LAB_03385430;
        uVar7 = FUN_02b6b264(lVar12,uVar7,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_GraphPointer_EnterParentElement__);
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_03385430;
        uVar8 = FUN_02b6b4d8(*(long *)(param_1 + 0x10),uVar7,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_GraphPointer_GetElementData<ToggleValue_Data>__
                            );
        if ((uVar8 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar7 = FUN_02b6b264(*(long *)(param_1 + 0x10),uVar7,*(undefined8 *)puVar3);
            return uVar7;
          }
          goto LAB_03385430;
        }
      }
      plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__
                                         );
      FUN_03416d98(plVar9,0);
      puVar1 = Method_UnityEngine_Graphics_DrawMesh__;
      puVar2 = Method_Unity_VisualScripting_GraphReference_FreeGraphData__;
      if (plVar9 != (long *)0x0) {
        FUN_03418c10(plVar9,*(undefined8 *)
                             Method_Unity_VisualScripting_GraphReference_ParentReference__,0);
        uVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        uVar7 = FUN_03406290(*(undefined8 *)puVar2,uVar7,0);
        FUN_03418c10(plVar9,uVar7,0);
        uVar7 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        uVar7 = FUN_03405678(*(undefined8 *)puVar1,uVar7,0);
        FUN_03418c10(plVar9,uVar7,0);
        puVar2 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar12 = FUN_02b6b114(*(long *)(param_1 + 0x10),
                                  *(undefined8 *)
                                   Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                 ),
           puVar4 = Method_Unity_VisualScripting_GraphReference_FreeInvalidInterns__,
           puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__,
           lVar12 != 0)) {
          local_74 = FUN_0300136c(lVar12,*(undefined8 *)
                                          Method_Unity_VisualScripting_GraphReference_ChildReference__
                                 );
          uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_74);
          uVar7 = FUN_03406290(*(undefined8 *)puVar4,uVar7,0);
          FUN_03418c10(plVar9,uVar7,0);
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (lVar12 = FUN_02b6b114(*(long *)(param_1 + 0x10),*(undefined8 *)puVar2),
             puVar6 = Method_Unity_VisualScripting_GraphStack_InitializeNoAlloc__,
             puVar5 = Method_Unity_VisualScripting_GraphReference_CreateGraphData__,
             puVar4 = Method_Unity_VisualScripting_GraphPointer_Initialize__,
             puVar1 = Method_Unity_VisualScripting_GraphPointer_Initialize__,
             puVar2 = 
             Method_Oculus_Interaction_PointerInteractor<HandGrabInteractor,_HandGrabInteractable>_HandlePointerEventRaised__
             , lVar12 != 0)) {
            FUN_0300123c(&local_90,lVar12,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_GraphPointer_get_serializedObject__);
            uStack_68 = uStack_88;
            local_70 = local_90;
            local_60 = local_80;
            do {
              uVar8 = FUN_02ce9cdc(&local_70,*(undefined8 *)puVar4);
              uVar7 = local_60;
              if ((uVar8 & 1) == 0) {
                FUN_02ce9cd8(&local_70,*(undefined8 *)puVar1);
                uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                FUN_033a2f1c(uVar7,0);
                return 0;
              }
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar12 = FUN_02b6b264(*(long *)(param_1 + 0x10),local_60,*(undefined8 *)puVar3);
              if (lVar12 == 0) {
                uVar11 = *(undefined8 *)puVar6;
              }
              else {
                if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar12 = FUN_02b6b264(*(long *)(param_1 + 0x10),uVar7,*(undefined8 *)puVar3);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                plVar10 = (long *)thunk_FUN_01ecaf38(lVar12,0);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
              }
              uVar7 = FUN_0340eee0(*(undefined8 *)puVar5,uVar7,*(undefined8 *)puVar2,uVar11,0);
              FUN_03418c10(plVar9,uVar7,0);
            } while( true );
          }
        }
      }
    }
  }
LAB_03385430:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


