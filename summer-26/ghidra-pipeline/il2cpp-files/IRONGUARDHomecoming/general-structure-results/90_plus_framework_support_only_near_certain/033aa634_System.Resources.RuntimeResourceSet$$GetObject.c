/*
FUNCTION_NAME: System.Resources.RuntimeResourceSet$$GetObject
ENTRY_POINT: 033aa634
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 199
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033ab178) */
/* WARNING: Removing unreachable block (ram,0x033ab0a0) */

long System_Resources_RuntimeResourceSet__GetObject(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long lVar12;
  long *unaff_x22;
  long unaff_x23;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x25;
  undefined8 uVar15;
  long *plVar16;
  uint uVar17;
  long in_stack_00000018;
  
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_XR_InputDevices_GetDevicesWithCharacteristics__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEvent_GetNextInMemoryChecked__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEvent_set_sizeInBytes__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer_AllocateEvent__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__)
  ;
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer_AppendEvent__);
  *(undefined1 *)(unaff_x20 + 0x350) = 1;
  if ((unaff_x23 != 0) && (uVar1 = *(uint *)(unaff_x23 + 0x18), 0 < (int)uVar1)) {
    lVar12 = 0;
    do {
      if (uVar1 <= (uint)lVar12) goto LAB_033ab15c;
      plVar13 = *(long **)(unaff_x23 + 0x20 + lVar12 * 8);
      if (plVar13 == (long *)0x0) goto LAB_033ab250;
      uVar7 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
      if (((uVar7 & 1) != 0) && (uVar7 = (**(code **)(*plVar13 + 0x198))(plVar13), (uVar7 & 1) != 0)
         ) {
                    /* WARNING: Could not recover jumptable at 0x033aabe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar12 = (**(code **)(*plVar13 + 0x1a8))(plVar13);
        return lVar12;
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < (int)uVar1);
  }
  uVar14 = *(undefined8 *)
            Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar14,0);
  uVar7 = FUN_03582560();
  if ((uVar7 & 1) != 0) {
    if (unaff_x22 != (long *)0x0) {
                    /* try { // try from 033aa7c4 to 034aa8a3 has its CatchHandler @ 033aa7c4
                       catch() { ... } // from try @ 033aa7c4 with catch @ 033aa7c4
                       catch() { ... } // from try @ 033aa944 with catch @ 033aa7c4
                       catch() { ... } // from try @ 033aa9ac with catch @ 033aa7c4
                       catch() { ... } // from try @ 033aaa5c with catch @ 033aa7c4 */
                    /* WARNING: Could not recover jumptable at 0x033aa7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar12 = (**(code **)(*unaff_x22 + 0x1c8))();
      return lVar12;
    }
    goto LAB_033ab250;
  }
  if (unaff_x19 == (long *)0x0) goto LAB_033ab250;
  uVar7 = (**(code **)(*unaff_x19 + 0x5c8))();
  if ((uVar7 & 1) != 0) {
    if (unaff_x22 != (long *)0x0) {
      (**(code **)(*unaff_x22 + 0x1c8))();
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                          );
      }
      lVar12 = FUN_0359e654();
      if (lVar12 != 0) {
        plVar13 = (long *)FUN_0358ffe4(lVar12,0);
        puVar6 = Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer_AllocateEvent__;
        puVar5 = Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
LAB_033aa870:
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar13;
          lVar12 = *(long *)puVar4;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar12) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_033aa8c4;
              }
              uVar7 = uVar7 - 1;
              piVar11 = piVar11 + 4;
                    /* try { // try from 033aa8a4 to 034aa8ab has its CatchHandler @ 033aaa14 */
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar13,lVar12,0);
LAB_033aa8c4:
                    /* try { // try from 033aa8c4 to 034aa8d3 has its CatchHandler @ 033aaa04 */
          uVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          if ((uVar7 & 1) == 0) {
            plVar13 = (long *)thunk_FUN_01f116d0(plVar13,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                );
            if (plVar13 == (long *)0x0) goto LAB_033ab090;
            lVar12 = *plVar13;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 == 0) goto LAB_033aaba0;
            piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_033aab88;
          }
          lVar10 = *plVar13;
          lVar12 = *(long *)puVar4;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
                    /* try { // try from 033aa8f0 to 034aa8ff has its CatchHandler @ 033aaa08 */
              if (*(long *)(piVar11 + -2) == lVar12) {
                    /* try { // try from 033aa914 to 034aa91b has its CatchHandler @ 033aaa0c */
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_033aa924;
              }
              uVar7 = uVar7 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar13,lVar12,1);
LAB_033aa924:
          plVar9 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
                    /* try { // try from 033aa934 to 034aa943 has its CatchHandler @ 033aaa00 */
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
                    /* try { // try from 033aa944 to 034aa9a7 has its CatchHandler @ 033aa7c4 */
          (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          lVar12 = FUN_03584bcc();
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar16 = *(long **)(lVar12 + 0x20);
          uVar14 = *(undefined8 *)puVar5;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          }
          uVar14 = FUN_03579868(uVar14,0);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar14,uVar14);
          }
                    /* try { // try from 033aa9a8 to 034aa9ab has its CatchHandler @ 033aaa10 */
                    /* try { // try from 033aa9ac to 034aaa2b has its CatchHandler @ 033aa7c4 */
          lVar12 = (**(code **)(*plVar16 + 0x208))
                             (plVar16,uVar14,0,*(undefined8 *)(*plVar16 + 0x210));
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (0 < (int)uVar1) {
            uVar17 = 0;
            do {
              if (uVar1 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              plVar16 = *(long **)(lVar12 + (long)(int)uVar17 * 8 + 0x20);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033aa934 with catch @ 033aaa00
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033aa8c4 with catch @ 033aaa04
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033aa8f0 with catch @ 033aaa08
                        */
              if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar16);
              }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033aa914 with catch @ 033aaa0c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033aa9a8 with catch @ 033aaa10
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 033aa8a4 with catch @ 033aaa14
                        */
              uVar7 = FUN_0340eec4(plVar16[2],0);
              if ((uVar7 & 1) == 0) {
                uVar14 = (**(code **)(*unaff_x22 + 0x1c8))();
                    /* try { // try from 033aaa2c to 034aaa2f has its CatchHandler @ 033aaa44 */
                uVar7 = FUN_0340e364(uVar14,plVar16[2],1,0);
                if ((uVar7 & 1) != 0) {
                    /* try { // try from 033aaa54 to 034aaa5b has its CatchHandler @ 033aaa70 */
                    /* try { // try from 033aaa5c to 034aaa67 has its CatchHandler @ 033aa7c4 */
                  (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                  goto LAB_033aa870;
                }
              }
              uVar1 = *(uint *)(lVar12 + 0x18);
                    /* catch() { ... } // from try @ 033aaa2c with catch @ 033aaa44 */
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar1);
          }
        } while( true );
      }
    }
    goto LAB_033ab250;
  }
                    /* try { // try from 033aaa68 to 034aaa6f has its CatchHandler @ 033aaa70 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033aaa54 with catch @ 033aaa70
                       catch(type#2 @ 00000000) { ... } // from try @ 033aaa68 with catch @ 033aaa70
                        */
  uVar14 = (**(code **)(*unaff_x19 + 0x8a8))();
  uVar15 = *(undefined8 *)Method_UnityEngine_XR_InputDevices_GetDevicesWithCharacteristics__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar15 = FUN_03579868(uVar15,0);
  puVar4 = Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
  uVar7 = FUN_022ee1a4(uVar14,uVar15,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_033aa338();
    if (unaff_x22 != (long *)0x0) {
      (**(code **)(*unaff_x22 + 0x2f8))();
      lVar12 = FUN_033ab7d4();
      return lVar12;
    }
    goto LAB_033ab250;
  }
  uVar14 = (**(code **)(*unaff_x19 + 0x8a8))();
  uVar15 = *(undefined8 *)
            Method_UnityEngine_InputSystem_LowLevel_InputEvent_GetNextInMemoryChecked__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar15 = FUN_03579868(uVar15,0);
  uVar7 = FUN_022ee1a4(uVar14,uVar15,*(undefined8 *)puVar4);
  if ((uVar7 & 1) != 0) {
    lVar12 = (**(code **)(*unaff_x19 + 0x438))();
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar7 = FUN_03582560(lVar12,0,0);
    if ((((uVar7 & 1) != 0) && (lVar10 = (**(code **)(*unaff_x19 + 0x478))(), lVar10 != 0)) &&
       (*(long *)(lVar10 + 0x18) != 0)) {
      if ((int)*(long *)(lVar10 + 0x18) == 0) goto LAB_033ab15c;
      lVar12 = *(long *)(lVar10 + 0x20);
    }
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03583338(lVar12,0,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      lVar10 = FUN_03579868(uVar14,0);
      if (lVar10 == 0) goto LAB_033ab250;
      plVar13 = (long *)FUN_03584c60(lVar10,*(undefined8 *)
                                             Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer_AppendEvent__
                                     ,0x18,0);
      plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                    ,1);
      if (plVar9 == (long *)0x0) goto LAB_033ab250;
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_033ab180;
      if ((int)plVar9[3] == 0) goto LAB_033ab15c;
      plVar9[4] = lVar12;
      thunk_FUN_01f51358(plVar9 + 4,lVar12);
      if (plVar13 == (long *)0x0) goto LAB_033ab250;
      lVar12 = (**(code **)(*plVar13 + 0x408))(plVar13,plVar9,*(undefined8 *)(*plVar13 + 0x410));
      puVar5 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
      plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,4);
      if (plVar13 == (long *)0x0) goto LAB_033ab250;
      if ((in_stack_00000018 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(in_stack_00000018,*(undefined8 *)(*plVar13 + 0x40)),
         lVar10 == 0)) {
LAB_033ab180:
        uVar14 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar14,0);
      }
      if ((int)plVar13[3] == 0) {
LAB_033ab15c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar13[4] = in_stack_00000018;
      thunk_FUN_01f51358();
                    /* try { // try from 033aadf8 to 034aae63 has its CatchHandler @ 033aadf8
                       catch() { ... } // from try @ 033aadf8 with catch @ 033aadf8
                       catch() { ... } // from try @ 033aaf40 with catch @ 033aadf8
                       catch() { ... } // from try @ 033aaf74 with catch @ 033aadf8
                       catch() { ... } // from try @ 033aafcc with catch @ 033aadf8 */
      if ((unaff_x22 != (long *)0x0) && (lVar10 = thunk_FUN_01f116d0(), lVar10 == 0))
      goto LAB_033ab180;
      if (*(uint *)(plVar13 + 3) < 2) goto LAB_033ab15c;
      plVar13[5] = (long)unaff_x22;
      thunk_FUN_01f51358();
      if ((unaff_x25 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(unaff_x25,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
      goto LAB_033ab180;
      if (*(uint *)(plVar13 + 3) < 3) goto LAB_033ab15c;
      plVar13[6] = unaff_x25;
      thunk_FUN_01f51358();
                    /* try { // try from 033aae64 to 034aae6b has its CatchHandler @ 033aaf88 */
      if ((unaff_x23 != 0) && (lVar10 = thunk_FUN_01f116d0(), lVar10 == 0)) goto LAB_033ab180;
      if (*(uint *)(plVar13 + 3) < 4) goto LAB_033ab15c;
                    /* try { // try from 033aae84 to 034aae93 has its CatchHandler @ 033aaf84 */
      plVar13[7] = unaff_x23;
      thunk_FUN_01f51358();
      if (lVar12 == 0) goto LAB_033ab250;
      lVar12 = FUN_034b2bf4(lVar12,0,plVar13,0);
                    /* try { // try from 033aaeb0 to 034aaf3f has its CatchHandler @ 033aaf8c */
      uVar7 = FUN_035841e4();
      if ((uVar7 & 1) != 0) {
        return lVar12;
      }
      uVar14 = (**(code **)(*unaff_x19 + 0x8a8))();
      uVar15 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEvent_set_sizeInBytes__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      uVar15 = FUN_03579868(uVar15,0);
      uVar7 = FUN_022ee1a4(uVar14,uVar15,*(undefined8 *)puVar4);
      if ((uVar7 & 1) != 0) {
        plVar13 = (long *)FUN_01f08890(*(undefined8 *)puVar5,1);
        if (plVar13 != (long *)0x0) {
          if ((lVar12 != 0) &&
             (lVar10 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
          goto LAB_033ab180;
          if ((int)plVar13[3] != 0) {
            plVar13[4] = lVar12;
            thunk_FUN_01f51358(plVar13 + 4,lVar12);
            lVar12 = FUN_035949e4();
            return lVar12;
          }
          goto LAB_033ab15c;
        }
        goto LAB_033ab250;
      }
    }
  }
  uVar7 = FUN_035846d4();
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_0358471c();
    if (((uVar7 & 1) == 0) || (uVar7 = FUN_035849ac(), (uVar7 & 1) != 0)) {
      if (unaff_x22 != (long *)0x0) {
        uVar14 = (**(code **)(*unaff_x22 + 0x1c8))();
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar12 = FUN_034fefcc(uVar14);
        return lVar12;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03594a14();
    if (unaff_x22 != (long *)0x0) {
      (**(code **)(*unaff_x22 + 0x2f8))();
      if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
      }
      goto LAB_033aafe4;
    }
  }
  else if (unaff_x22 != (long *)0x0) {
    (**(code **)(*unaff_x22 + 0x2f8))();
    if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
    }
LAB_033aafe4:
    lVar12 = FUN_033ab9ec();
    return lVar12;
  }
LAB_033ab250:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar11 = piVar11 + 4;
    if (uVar7 == 0) break;
LAB_033aab88:
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_033ab084;
    }
  }
LAB_033aaba0:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar3,0);
LAB_033ab084:
  (*(code *)*puVar8)(plVar13,puVar8[1]);
LAB_033ab090:
  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_033aa338();
  lVar12 = FUN_033ab388();
  return lVar12;
}


