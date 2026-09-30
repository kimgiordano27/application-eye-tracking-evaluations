/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$UpgradeToLatestVersion
ENTRY_POINT: 05b5f234
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 187
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_10;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5f748) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */
/* WARNING: Removing unreachable block (ram,0x05b5fae4) */

void UnityEngine_Timeline_TrackAsset__UpgradeToLatestVersion(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long lVar12;
  int unaff_w21;
  undefined8 *unaff_x22;
  long unaff_x27;
  long lVar13;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 unaff_s8;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000098;
  
  plVar4 = (long *)FUN_03526ed8();
  uVar6 = *unaff_x22;
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000098 + 0x18) = unaff_x22[1];
  *(undefined8 *)(in_stack_00000098 + 0x10) = uVar6;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar8 = *plVar4;
  uVar6 = *unaff_x22;
  uVar1 = unaff_x22[1];
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05b5f2c0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02d9a5d4(plVar4,*(long *)
                                Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                        ,0);
LAB_05b5f2c0:
  (*(code *)*puVar5)(plVar4,uVar6,uVar1,0,2,puVar5[1]);
  uVar6 = *unaff_x29;
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000098 + 0x28) = unaff_x29[1];
  *(undefined8 *)(in_stack_00000098 + 0x20) = uVar6;
  lVar8 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto UnityEngine_Timeline_TrackAsset__remove_OnClipPlayableCreate;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02d9a5d4(plVar4,*(long *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                        ,0);
UnityEngine_Timeline_TrackAsset__remove_OnClipPlayableCreate:
  (*(code *)*puVar5)(plVar4);
  uVar6 = *unaff_x28;
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000098 + 0x38) = unaff_x28[1];
  *(undefined8 *)(in_stack_00000098 + 0x30) = uVar6;
  lVar8 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05b5f3c8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02d9a5d4(plVar4,*(long *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                        ,0);
LAB_05b5f3c8:
  (*(code *)*puVar5)(plVar4);
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000098 + 0x48) = in_stack_00000078;
  *(undefined8 *)(in_stack_00000098 + 0x40) = in_stack_00000070;
  lVar8 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05b5f448;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02d9a5d4(plVar4,*(long *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                        ,0);
LAB_05b5f448:
  (*(code *)*puVar5)(plVar4,&stack0x00000070,1,puVar5[1]);
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000098 + 0x58) = in_stack_00000088;
  *(undefined8 *)(in_stack_00000098 + 0x50) = in_stack_00000080;
  lVar8 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05b5f4c8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02d9a5d4(plVar4,*(long *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                        ,0);
LAB_05b5f4c8:
  (*(code *)*puVar5)(plVar4,&stack0x00000080,1,puVar5[1]);
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(long *)(in_stack_00000098 + 0x60) = in_stack_00000008;
  thunk_FUN_02dd37b4();
  lVar8 = in_stack_00000098;
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
                  Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__ +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_05b5e2e4((int *)(unaff_x19 + 0x210));
    *(undefined8 *)(lVar8 + 0x78) = uVar6;
    thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x78));
  }
  else {
    *(undefined8 *)(in_stack_00000098 + 0x78) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000098 + 0x78),0);
  }
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(unaff_x27 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar2 = FUN_0604bd34(*(long *)(unaff_x27 + 0x18),0);
  if (((iVar2 == 8) || (iVar2 == 0x3b)) || (iVar2 == 0x4a)) {
    if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar9 = 1;
  }
  else {
    if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar9 = 0;
  }
  *(undefined1 *)(in_stack_00000098 + 0x80) = uVar9;
  *(undefined1 *)(in_stack_00000098 + 0x81) = *(undefined1 *)(unaff_x19 + 399);
  lVar8 = *(long *)
           Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  }
  lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar13 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    uVar6 = **(undefined8 **)(lVar8 + 0xb8);
    lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                               );
    FUN_04180bc0(lVar13,uVar6,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)
                                 Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                               + 0xb8) + 8);
    *plVar7 = lVar13;
    thunk_FUN_02dd37b4(plVar7,lVar13);
  }
  lVar12 = *(long *)
            Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
  ;
  lVar8 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar8 = lVar8 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_05b5f6ac;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  lVar8 = FUN_02d9a5d4(plVar4);
LAB_05b5f6ac:
  lVar8 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar8 + 8),lVar12);
  (**(code **)(lVar8 + 8))(plVar4,lVar13,lVar8);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05b5f72c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5f72c:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (iStack0000000000000004 == unaff_w21) {
    return;
  }
  if ((in_stack_00000008 != 0) && (lVar8 = FUN_06036b0c(in_stack_00000008,0), lVar8 != 0)) {
    iVar2 = FUN_06036024(lVar8,0);
    FUN_034e36d4(0x2f,*(undefined8 *)Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
    plVar4 = (long *)FUN_03526ed8();
    uVar1 = in_stack_00000088;
    uVar6 = in_stack_00000080;
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000068 + 0x18) = in_stack_00000088;
    *(undefined8 *)(in_stack_00000068 + 0x10) = in_stack_00000080;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05b5f83c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02d9a5d4(plVar4,*(long *)
                                  Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                          ,0);
LAB_05b5f83c:
    (*(code *)*puVar5)(plVar4,uVar6,uVar1,0,2,puVar5[1]);
    uVar6 = *unaff_x22;
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000068 + 0x28) = unaff_x22[1];
    *(undefined8 *)(in_stack_00000068 + 0x20) = uVar6;
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
           ) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05b5f8c4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02d9a5d4(plVar4,*(long *)
                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                          ,0);
LAB_05b5f8c4:
    (*(code *)*puVar5)(plVar4);
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
    lVar8 = *(long *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar13 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar8);
        lVar8 = *(long *)
                 Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
        ;
      }
      uVar6 = **(undefined8 **)(lVar8 + 0xb8);
      lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                 );
      FUN_04180bc0(lVar13,uVar6,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)
                                   Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                                 + 0xb8) + 0x10);
      *plVar7 = lVar13;
      thunk_FUN_02dd37b4(plVar7,lVar13);
    }
    lVar12 = *(long *)
              Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
    ;
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)(lVar12 + 0x20)) {
          lVar8 = lVar8 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
          goto LAB_05b5f9f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar8 = FUN_02d9a5d4(plVar4);
LAB_05b5f9f8:
    lVar8 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar8 + 8),lVar12);
    (**(code **)(lVar8 + 8))(plVar4,lVar13,lVar8);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05b5fa78;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5fa78:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    lVar8 = *(long *)(unaff_x19 + 0x200);
    uVar3 = FUN_06063868(0);
    if (lVar8 != 0) {
      FUN_05b14d60(lVar8,uStack0000000000000000,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


