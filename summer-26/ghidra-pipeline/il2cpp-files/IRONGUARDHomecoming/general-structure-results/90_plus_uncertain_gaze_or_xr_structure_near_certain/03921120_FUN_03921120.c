/*
FUNCTION_NAME: FUN_03921120
ENTRY_POINT: 03921120
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 232
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_20;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03921704) */
/* WARNING: Removing unreachable block (ram,0x039216e8) */
/* WARNING: Removing unreachable block (ram,0x03921718) */

long * FUN_03921120(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 local_48;
  
  if ((DAT_04838288 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_3562);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_ResetModified__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_get_Properties__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_IsModified__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationSection_DeserializeSection__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3563);
    thunk_FUN_01efb3a4(StringLiteral_3564);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<int,_int>__);
    thunk_FUN_01efb3a4(StringLiteral_3565);
    thunk_FUN_01efb3a4(StringLiteral_3566);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04838288 = 1;
  }
  local_48 = 0;
  if ((param_1 != (long *)0x0) &&
     (*param_1 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* try { // try from 0392124c to 03a21253 has its CatchHandler @ 03921374 */
    lVar3 = thunk_FUN_01ecaf38(param_1,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 0392125c to 03a2126b has its CatchHandler @ 0392131c */
    uVar4 = FUN_0358471c(lVar3,0);
    puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0392126c to 03a2129f has its CatchHandler @ 039210f0 */
      uVar13 = *(undefined8 *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      puVar2 = Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
                    /* try { // try from 039212a0 to 03a212a7 has its CatchHandler @ 03921320 */
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) ==
          0) {
                    /* try { // try from 039212b0 to 03a212bf has its CatchHandler @ 03921318 */
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
      }
                    /* try { // try from 039212c0 to 03a21337 has its CatchHandler @ 039210f0 */
      uVar4 = FUN_03944ea0(lVar3,uVar13,0);
      if ((uVar4 & 1) == 0) {
        uVar13 = *(undefined8 *)StringLiteral_3563;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar4 = FUN_03944ea0(lVar3,uVar13,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 039212b0 with catch @ 03921318
                        */
        if ((uVar4 & 1) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0392125c with catch @ 0392131c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 039212a0 with catch @ 03921320
                        */
          uVar13 = *(undefined8 *)StringLiteral_3562;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
                    /* try { // try from 03921338 to 03a2133b has its CatchHandler @ 03921358 */
                    /* try { // try from 0392133c to 03a2135f has its CatchHandler @ 039210f0 */
          uVar13 = FUN_03579868(uVar13,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03921338 with catch @ 03921358 */
            thunk_FUN_01ee6d7c(*(long *)puVar2);
          }
                    /* try { // try from 03921360 to 03a21373 has its CatchHandler @ 039213e4 */
          uVar4 = FUN_03944ea0(lVar3,uVar13,0);
          if ((uVar4 & 1) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0392124c with catch @ 03921374
                       try { // try from 03921374 to 03a2138b has its CatchHandler @ 039210f0 */
            uVar13 = *(undefined8 *)StringLiteral_3564;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
                    /* try { // try from 0392138c to 03a2138f has its CatchHandler @ 039213b8 */
                    /* try { // try from 03921390 to 03a213c7 has its CatchHandler @ 039210f0 */
            uVar13 = FUN_03579868(uVar13,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar2);
            }
                    /* catch() { ... } // from try @ 0392138c with catch @ 039213b8 */
            uVar4 = FUN_03944ea0(lVar3,uVar13,0);
            if ((uVar4 & 1) == 0) {
                    /* try { // try from 039213c8 to 03a213cf has its CatchHandler @ 039213e4 */
                    /* try { // try from 039213d0 to 03a213db has its CatchHandler @ 039210f0 */
              if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
                    /* try { // try from 039213dc to 03a213e3 has its CatchHandler @ 039213e4 */
              plVar5 = (long *)FUN_03910d44(0);
              puVar1 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03921360 with catch @ 039213e4
                       catch(type#2 @ 00000000) { ... } // from try @ 039213c8 with catch @ 039213e4
                       catch(type#2 @ 00000000) { ... } // from try @ 039213dc with catch @ 039213e4
                        */
              if (*(int *)(*(long *)
                            Method_System_Configuration_ConfigurationSection_DeserializeSection__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_System_Configuration_ConfigurationSection_DeserializeSection__
                                  );
              }
              plVar6 = (long *)FUN_029da4a8(*(undefined8 *)
                                             Method_System_Configuration_ConfigurationElement_ResetModified__
                                           );
              puVar2 = Method_System_Configuration_ConfigurationElement_IsModified__;
              if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              plVar7 = (long *)FUN_029da4a8(*(undefined8 *)
                                             Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                                           );
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar3 = FUN_0390c3d4();
              if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<int,_int>__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar13 = FUN_03918fd4();
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c(uVar13,uVar13);
              }
              FUN_0391d334(lVar3);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar3 = FUN_0390b368();
              uVar13 = FUN_03918fd4();
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c(uVar13,uVar13);
              }
              FUN_0391d334(lVar3);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar13 = FUN_039109dc();
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar8 = FUN_029dad5c(plVar6,*(undefined8 *)
                                           Method_System_Configuration_ConfigurationElement_get_Properties__
                                  );
              System_Array__InternalArray__ICollection_Remove<StylePropertyAnimationSystem_Values_TimingData<object>>
                        (param_1,uVar13,0,&local_48,uVar8,*(undefined8 *)StringLiteral_3566);
              if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              plVar9 = (long *)FUN_039109dc();
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              (**(code **)(*plVar9 + 0x208))(plVar9,0,*(undefined8 *)(*plVar9 + 0x210));
              if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar8 = FUN_039109dc();
              uVar13 = local_48;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar10 = FUN_029dad5c(plVar7,*(undefined8 *)
                                            Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__
                                   );
              param_1 = (long *)FUN_023f6df8(uVar8,0,uVar13,uVar10,*(undefined8 *)StringLiteral_3565
                                            );
              lVar3 = *plVar7;
              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar4 != 0) {
                piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    puVar11 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_039215e0;
                  }
                  uVar4 = uVar4 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar4 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_01ecb238(plVar7,*(long *)
                                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     ,0);
LAB_039215e0:
              (*(code *)*puVar11)(plVar7,puVar11[1]);
              if (plVar6 != (long *)0x0) {
                lVar3 = *plVar6;
                uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar4 != 0) {
                  piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) ==
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                      puVar11 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_0392164c;
                    }
                    uVar4 = uVar4 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar4 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01ecb238(plVar6,*(long *)
                                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       ,0);
LAB_0392164c:
                (*(code *)*puVar11)(plVar6,puVar11[1]);
              }
              if (plVar5 != (long *)0x0) {
                lVar3 = *plVar5;
                uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar4 != 0) {
                  piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) ==
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                      puVar11 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_039216b8;
                    }
                    uVar4 = uVar4 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar4 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01ecb238(plVar5,*(long *)
                                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       ,0);
LAB_039216b8:
                (*(code *)*puVar11)(plVar5,puVar11[1]);
              }
            }
          }
        }
      }
    }
  }
  return param_1;
}


