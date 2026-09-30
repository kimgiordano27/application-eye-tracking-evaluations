/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$Invalidate
ENTRY_POINT: 05b5f198
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 191
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_10;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5f748) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */
/* WARNING: Removing unreachable block (ram,0x05b5fae4) */

void UnityEngine_Timeline_TrackAsset__Invalidate(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined4 unaff_w20;
  long lVar13;
  int unaff_w21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 unaff_s8;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000098;
  
  if (param_1 != 0) {
    lVar4 = FUN_05b14cfc(param_1,unaff_w20,0);
    if (unaff_x23 != 0) {
      _in_stack_00000080 = FUN_05a6f908();
      if (in_stack_00000000._4_4_ == unaff_w21) {
        lVar9 = *(long *)(unaff_x23 + 0x58);
        if (lVar9 == 0) goto LAB_05b5fadc;
        unaff_x26 = (undefined8 *)(lVar9 + 0x28);
        puVar6 = (undefined8 *)(lVar9 + 0x30);
      }
      else {
        puVar6 = unaff_x26 + 1;
      }
      in_stack_00000070 = *unaff_x26;
      in_stack_00000078 = *puVar6;
      FUN_034e36d4(0x2e,*(undefined8 *)Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
      plVar5 = (long *)FUN_03526ed8();
      uVar7 = *unaff_x22;
      if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined8 *)(in_stack_00000098 + 0x18) = unaff_x22[1];
      *(undefined8 *)(in_stack_00000098 + 0x10) = uVar7;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar9 = *plVar5;
      uVar7 = *unaff_x22;
      uVar1 = unaff_x22[1];
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05b5f2c0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                            ,0);
LAB_05b5f2c0:
      (*(code *)*puVar6)(plVar5,uVar7,uVar1,0,2,puVar6[1]);
      uVar7 = *unaff_x29;
      if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined8 *)(in_stack_00000098 + 0x28) = unaff_x29[1];
      *(undefined8 *)(in_stack_00000098 + 0x20) = uVar7;
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)
               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
             ) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto UnityEngine_Timeline_TrackAsset__remove_OnClipPlayableCreate;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                            ,0);
UnityEngine_Timeline_TrackAsset__remove_OnClipPlayableCreate:
      (*(code *)*puVar6)(plVar5);
      uVar7 = *unaff_x28;
      if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined8 *)(in_stack_00000098 + 0x38) = unaff_x28[1];
      *(undefined8 *)(in_stack_00000098 + 0x30) = uVar7;
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)
               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
             ) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05b5f3c8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                            ,0);
LAB_05b5f3c8:
      (*(code *)*puVar6)(plVar5);
      if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined8 *)(in_stack_00000098 + 0x48) = in_stack_00000078;
      *(undefined8 *)(in_stack_00000098 + 0x40) = in_stack_00000070;
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)
               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
             ) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05b5f448;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                            ,0);
LAB_05b5f448:
      (*(code *)*puVar6)(plVar5,&stack0x00000070,1,puVar6[1]);
      if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined1 (*) [16])(in_stack_00000098 + 0x50) = _in_stack_00000080;
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)
               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
             ) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05b5f4c8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                            ,0);
LAB_05b5f4c8:
      (*(code *)*puVar6)(plVar5,&stack0x00000080,1,puVar6[1]);
      if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(long *)(in_stack_00000098 + 0x60) = in_stack_00000008;
      thunk_FUN_02dd37b4();
      lVar9 = in_stack_00000098;
      if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar2 = *(int *)(unaff_x19 + 0x210);
      *(undefined4 *)(in_stack_00000098 + 0x6c) = unaff_s8;
      *(int *)(in_stack_00000098 + 0x68) = iVar2;
      *(undefined4 *)(in_stack_00000098 + 0x70) = *(undefined4 *)(unaff_x19 + 0x220);
      if (iVar2 == 4) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_05b5e2e4((int *)(unaff_x19 + 0x210));
        *(undefined8 *)(lVar9 + 0x78) = uVar7;
        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x78));
      }
      else {
        *(undefined8 *)(in_stack_00000098 + 0x78) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000098 + 0x78),0);
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar2 = FUN_0604bd34(*(long *)(lVar4 + 0x18),0);
      if (((iVar2 == 8) || (iVar2 == 0x3b)) || (iVar2 == 0x4a)) {
        if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar10 = 1;
      }
      else {
        if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar10 = 0;
      }
      *(undefined1 *)(in_stack_00000098 + 0x80) = uVar10;
      *(undefined1 *)(in_stack_00000098 + 0x81) = *(undefined1 *)(unaff_x19 + 399);
      lVar4 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar4);
        lVar4 = *(long *)
                 Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
        ;
      }
      lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar9 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar4);
          lVar4 = *(long *)
                   Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
          ;
        }
        uVar7 = **(undefined8 **)(lVar4 + 0xb8);
        lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                  );
        FUN_04180bc0(lVar9,uVar7,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                     ,0);
        plVar8 = (long *)(*(long *)(*(long *)
                                     Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                                   + 0xb8) + 8);
        *plVar8 = lVar9;
        thunk_FUN_02dd37b4(plVar8,lVar9);
      }
      lVar13 = *(long *)
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
      ;
      lVar4 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)(lVar13 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
            goto LAB_05b5f6ac;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      lVar4 = FUN_02d9a5d4(plVar5);
LAB_05b5f6ac:
      lVar4 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar4 + 8),lVar13);
      (**(code **)(lVar4 + 8))(plVar5,lVar9,lVar4);
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05b5f72c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5f72c:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      if (in_stack_00000000._4_4_ == unaff_w21) {
        return;
      }
      if (in_stack_00000008 != 0) {
        lVar4 = FUN_06036b0c(in_stack_00000008,0);
        if (lVar4 != 0) {
          iVar2 = FUN_06036024(lVar4,0);
          FUN_034e36d4(0x2f,*(undefined8 *)Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
          plVar5 = (long *)FUN_03526ed8();
          uVar1 = in_stack_00000088;
          uVar7 = in_stack_00000080;
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined1 (*) [16])(in_stack_00000068 + 0x10) = _in_stack_00000080;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar4 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                 ) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_05b5f83c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_02d9a5d4(plVar5,*(long *)
                                        Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                                ,0);
LAB_05b5f83c:
          (*(code *)*puVar6)(plVar5,uVar7,uVar1,0,2,puVar6[1]);
          uVar7 = *unaff_x22;
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined8 *)(in_stack_00000068 + 0x28) = unaff_x22[1];
          *(undefined8 *)(in_stack_00000068 + 0x20) = uVar7;
          lVar4 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)
                   Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                 ) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_05b5f8c4;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_02d9a5d4(plVar5,*(long *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                ,0);
LAB_05b5f8c4:
          (*(code *)*puVar6)(plVar5);
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(long *)(in_stack_00000068 + 0x60) = in_stack_00000008;
          thunk_FUN_02dd37b4((long *)(in_stack_00000068 + 0x60),in_stack_00000008);
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(int *)(in_stack_00000068 + 0x68) = iVar2 + -1;
          lVar4 = *(long *)
                   Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
          ;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar4);
            lVar4 = *(long *)
                     Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
            ;
          }
          lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
          if (lVar9 == 0) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar4);
              lVar4 = *(long *)
                       Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
              ;
            }
            uVar7 = **(undefined8 **)(lVar4 + 0xb8);
            lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                      );
            FUN_04180bc0(lVar9,uVar7,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                         ,0);
            plVar8 = (long *)(*(long *)(*(long *)
                                         Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                                       + 0xb8) + 0x10);
            *plVar8 = lVar9;
            thunk_FUN_02dd37b4(plVar8,lVar9);
          }
          lVar13 = *(long *)
                    Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
          ;
          lVar4 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar13 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_05b5f9f8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          lVar4 = FUN_02d9a5d4(plVar5);
LAB_05b5f9f8:
          lVar4 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar4 + 8),lVar13);
          (**(code **)(lVar4 + 8))(plVar5,lVar9,lVar4);
          if (plVar5 != (long *)0x0) {
            lVar4 = *plVar5;
            uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_05b5fa78;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5fa78:
            (*(code *)*puVar6)(plVar5,puVar6[1]);
          }
          lVar4 = *(long *)(unaff_x19 + 0x200);
          uVar3 = FUN_06063868(0);
          if (lVar4 != 0) {
            FUN_05b14d60(lVar4,unaff_w20,uVar3,0);
            return;
          }
        }
      }
    }
  }
LAB_05b5fadc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


