/*
FUNCTION_NAME: FUN_033ab388
ENTRY_POINT: 033ab388
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_033ab388(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined1 local_54 [4];
  
  puVar1 = Method_UnityEngine_Component_GetComponent<NavMeshAgent>__;
                    /* try { // try from 033ab3b0 to 034ab3e7 has its CatchHandler @ 033ab1ac */
  if ((DAT_04832351 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<IGraphParentElement,_Guid>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Subtraction__);
                    /* try { // try from 033ab3e8 to 034ab3eb has its CatchHandler @ 033ab488 */
                    /* try { // try from 033ab3ec to 034ab4b3 has its CatchHandler @ 033ab1ac */
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<ActionEvent>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<DeltaStateEvent>__)
    ;
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<StateEvent>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<TextEvent>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateFormat__);
    DAT_04832351 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = FUN_034a66c0(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),0,0);
  if ((uVar4 & 1) != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033ab3e8 with catch @ 033ab488
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033ab2a4 with catch @ 033ab48c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033ab278 with catch @ 033ab490
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033ab258 with catch @ 033ab494
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033ab2d0 with catch @ 033ab498
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033ab350 with catch @ 033ab49c
                        */
    uVar10 = *(undefined8 *)Method_System_Linq_Enumerable_Select<IGraphParentElement,_Guid>__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 033ab4b4 to 034ab4b7 has its CatchHandler @ 033ab4c4 */
    lVar3 = FUN_03579868(uVar10,0);
    if (lVar3 == 0) goto LAB_033ab7bc;
    uVar10 = FUN_03584e6c(lVar3,0);
                    /* catch() { ... } // from try @ 033ab4b4 with catch @ 033ab4c4 */
    lVar3 = FUN_0230ab8c(uVar10,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Subtraction__
                        );
    puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<TextEvent>__;
                    /* try { // try from 033ab4d4 to 034ab4db has its CatchHandler @ 033ab4f0 */
                    /* try { // try from 033ab4dc to 034ab4e7 has its CatchHandler @ 033ab1ac */
    lVar9 = *(long *)Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<TextEvent>__;
                    /* try { // try from 033ab4e8 to 034ab4ef has its CatchHandler @ 033ab4f0 */
    if (*(int *)(lVar9 + 0xe0) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ab4d4 with catch @ 033ab4f0
                       catch(type#2 @ 00000000) { ... } // from try @ 033ab4e8 with catch @ 033ab4f0
                        */
      thunk_FUN_01ee6d7c(lVar9);
      lVar9 = *(long *)puVar2;
    }
    lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar9);
        lVar9 = *(long *)puVar2;
      }
      uVar10 = **(undefined8 **)(lVar9 + 0xb8);
      lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<DeltaStateEvent>__
                                 );
      FUN_025f2a84(lVar12,uVar10,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<StateEvent>__,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar5 = lVar12;
      thunk_FUN_01f51358(plVar5,lVar12);
    }
    if (lVar3 == 0) goto LAB_033ab7bc;
    uVar10 = FUN_030f321c(lVar3,lVar12,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<ActionEvent>__)
    ;
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar3);
      lVar3 = *(long *)puVar1;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    *puVar6 = uVar10;
    thunk_FUN_01f51358(puVar6,uVar10);
  }
  puVar2 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  plVar11 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
  plVar5 = (long *)FUN_01f08890(*(undefined8 *)puVar2,1);
  if (plVar5 == (long *)0x0) goto LAB_033ab7bc;
  if ((param_1 != 0) &&
     (lVar3 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
  goto LAB_033ab7c4;
  if ((int)plVar5[3] == 0) goto LAB_033ab7c0;
  plVar5[4] = param_1;
  thunk_FUN_01f51358(plVar5 + 4,param_1);
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  if (plVar11 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar11 + 0x408))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x410));
    plVar5 = (long *)FUN_01f08890(*(undefined8 *)puVar1,3);
    if (plVar5 != (long *)0x0) {
      if ((param_3 != 0) &&
         (lVar9 = thunk_FUN_01f116d0(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
LAB_033ab7c4:
        uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,0);
      }
      puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
      if ((int)plVar5[3] != 0) {
        plVar5[4] = param_3;
        thunk_FUN_01f51358(plVar5 + 4,param_3);
        local_54[0] = 0;
        lVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_54);
        if ((lVar9 != 0) &&
           (lVar12 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0))
        goto LAB_033ab7c4;
        if (1 < *(uint *)(plVar5 + 3)) {
          plVar5[5] = lVar9;
          thunk_FUN_01f51358(plVar5 + 5,lVar9);
          lVar9 = FUN_03594a14(param_1,0);
          if ((lVar9 != 0) &&
             (lVar12 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0))
          goto LAB_033ab7c4;
          if (2 < *(uint *)(plVar5 + 3)) {
            plVar11 = plVar5 + 6;
            *plVar11 = lVar9;
            thunk_FUN_01f51358(plVar11,lVar9);
            if ((lVar3 != 0) &&
               (plVar7 = (long *)FUN_034b2bf4(lVar3,0,plVar5,0), plVar7 != (long *)0x0)) {
              if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc();
              }
              pcVar8 = (char *)thunk_FUN_01f11920();
              if (*pcVar8 == '\0') {
                uVar10 = FUN_0340f2f0(*(undefined8 *)
                                       Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateFormat__
                                      ,param_3,param_1,0);
                if (param_4 == 0) goto LAB_033ab7bc;
                FUN_03418c10(param_4,uVar10,0);
              }
              else {
                if (*(uint *)(plVar5 + 3) < 3) goto LAB_033ab7c0;
                param_2 = *plVar11;
              }
              return param_2;
            }
            goto LAB_033ab7bc;
          }
        }
      }
LAB_033ab7c0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_033ab7bc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


