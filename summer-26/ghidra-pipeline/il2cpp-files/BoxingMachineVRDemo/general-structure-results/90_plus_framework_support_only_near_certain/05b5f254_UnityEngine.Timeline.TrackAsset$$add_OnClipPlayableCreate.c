/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$add_OnClipPlayableCreate
ENTRY_POINT: 05b5f254
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 187
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5f748) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */
/* WARNING: Removing unreachable block (ram,0x05b5fae4) */

void UnityEngine_Timeline_TrackAsset__add_OnClipPlayableCreate(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int unaff_w21;
  undefined8 *unaff_x22;
  long *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 unaff_s8;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000008;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000098;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(param_1 + 0x18) = in_stack_00000058;
  *(undefined8 *)(param_1 + 0x10) = in_stack_00000050;
  if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar7 = *unaff_x26;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05b5f2c0;
      }
      uVar9 = uVar9 - 1;
                    /* try { // try from 05b5f29c to 05c5f2ef has its CatchHandler @ 05b5f29c
                       catch() { ... } // from try @ 05b5f29c with catch @ 05b5f29c
                       catch() { ... } // from try @ 05b5f308 with catch @ 05b5f29c
                       catch() { ... } // from try @ 05b5f33c with catch @ 05b5f29c
                       catch() { ... } // from try @ 05b5f374 with catch @ 05b5f29c */
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5f2c0:
  (*(code *)*puVar3)();
  uVar4 = *unaff_x29;
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* try { // try from 05b5f2f0 to 05c5f2f7 has its CatchHandler @ 05b5f308 */
  *(undefined8 *)(in_stack_00000098 + 0x28) = unaff_x29[1];
  *(undefined8 *)(in_stack_00000098 + 0x20) = uVar4;
  lVar7 = *unaff_x26;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 05b5f304 to 05c5f307 has its CatchHandler @ 05b5f30c */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b5f2f0 with catch @ 05b5f308
                       try { // try from 05b5f308 to 05c5f337 has its CatchHandler @ 05b5f29c */
  if (uVar9 != 0) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b5f304 with catch @ 05b5f30c
                        */
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
                    /* try { // try from 05b5f33c to 05c5f35b has its CatchHandler @ 05b5f29c */
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto UnityEngine_Timeline_TrackAsset__remove_OnClipPlayableCreate;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
                    /* try { // try from 05b5f338 to 05c5f33b has its CatchHandler @ 05b5f36c */
UnityEngine_Timeline_TrackAsset__remove_OnClipPlayableCreate:
  (*(code *)*puVar3)();
  uVar4 = *unaff_x28;
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000098 + 0x38) = unaff_x28[1];
  *(undefined8 *)(in_stack_00000098 + 0x30) = uVar4;
  lVar7 = *unaff_x26;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05b5f3c8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5f3c8:
  (*(code *)*puVar3)();
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000098 + 0x48) = in_stack_00000078;
  *(undefined8 *)(in_stack_00000098 + 0x40) = in_stack_00000070;
  lVar7 = *unaff_x26;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05b5f448;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5f448:
  (*(code *)*puVar3)();
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000098 + 0x58) = in_stack_00000088;
  *(undefined8 *)(in_stack_00000098 + 0x50) = in_stack_00000080;
  lVar7 = *unaff_x26;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05b5f4c8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5f4c8:
  (*(code *)*puVar3)();
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(long *)(in_stack_00000098 + 0x60) = in_stack_00000008;
  thunk_FUN_02dd37b4();
  if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar1 = *(int *)(unaff_x19 + 0x210);
  *(undefined4 *)(in_stack_00000098 + 0x6c) = unaff_s8;
  *(int *)(in_stack_00000098 + 0x68) = iVar1;
  *(undefined4 *)(in_stack_00000098 + 0x70) = *(undefined4 *)(unaff_x19 + 0x220);
  if (iVar1 == 4) {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__ +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_05b5e2e4((int *)(unaff_x19 + 0x210));
    *(undefined8 *)(in_stack_00000098 + 0x78) = uVar4;
    thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000098 + 0x78));
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
  iVar1 = FUN_0604bd34(*(long *)(unaff_x27 + 0x18),0);
  if (((iVar1 == 8) || (iVar1 == 0x3b)) || (iVar1 == 0x4a)) {
    if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar8 = 1;
  }
  else {
    if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar8 = 0;
  }
  *(undefined1 *)(in_stack_00000098 + 0x80) = uVar8;
  *(undefined1 *)(in_stack_00000098 + 0x81) = *(undefined1 *)(unaff_x19 + 399);
  lVar7 = *(long *)
           Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  }
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                              );
    FUN_04180bc0(uVar4,uVar11,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                 ,0);
    puVar3 = (undefined8 *)
             (*(long *)(*(long *)
                         Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                       + 0xb8) + 8);
    *puVar3 = uVar4;
    thunk_FUN_02dd37b4(puVar3,uVar4);
  }
  lVar12 = *(long *)
            Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
  ;
  lVar7 = *unaff_x26;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_05b5f6ac;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar7 = FUN_02d9a5d4();
LAB_05b5f6ac:
  lVar7 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar7 + 8),lVar12);
  (**(code **)(lVar7 + 8))();
  if (unaff_x26 != (long *)0x0) {
    lVar7 = *unaff_x26;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05b5f72c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5f72c:
    (*(code *)*puVar3)();
  }
  if (iStack0000000000000004 == unaff_w21) {
    return;
  }
  if ((in_stack_00000008 != 0) && (lVar7 = FUN_06036b0c(in_stack_00000008,0), lVar7 != 0)) {
    iVar1 = FUN_06036024(lVar7,0);
    FUN_034e36d4(0x2f,*(undefined8 *)Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
    plVar5 = (long *)FUN_03526ed8();
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000068 + 0x18) = in_stack_00000088;
    *(undefined8 *)(in_stack_00000068 + 0x10) = in_stack_00000080;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05b5f83c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02d9a5d4(plVar5,*(long *)
                                  Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                          ,0);
LAB_05b5f83c:
    (*(code *)*puVar3)(plVar5,in_stack_00000080,in_stack_00000088,0,2,puVar3[1]);
    uVar4 = *unaff_x22;
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000068 + 0x28) = unaff_x22[1];
    *(undefined8 *)(in_stack_00000068 + 0x20) = uVar4;
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
           ) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05b5f8c4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02d9a5d4(plVar5,*(long *)
                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                          ,0);
LAB_05b5f8c4:
    (*(code *)*puVar3)(plVar5);
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
    *(int *)(in_stack_00000068 + 0x68) = iVar1 + -1;
    lVar7 = *(long *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar12 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar7);
        lVar7 = *(long *)
                 Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
        ;
      }
      uVar4 = **(undefined8 **)(lVar7 + 0xb8);
      lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                 );
      FUN_04180bc0(lVar12,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)
                                   Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                                 + 0xb8) + 0x10);
      *plVar6 = lVar12;
      thunk_FUN_02dd37b4(plVar6,lVar12);
    }
    lVar13 = *(long *)
              Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
    ;
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar7 = lVar7 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_05b5f9f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar7 = FUN_02d9a5d4(plVar5);
LAB_05b5f9f8:
    lVar7 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar7 + 8),lVar13);
    (**(code **)(lVar7 + 8))(plVar5,lVar12,lVar7);
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05b5fa78;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5fa78:
      (*(code *)*puVar3)(plVar5,puVar3[1]);
    }
    lVar7 = *(long *)(unaff_x19 + 0x200);
    uVar2 = FUN_06063868(0);
    if (lVar7 != 0) {
      FUN_05b14d60(lVar7,uStack0000000000000000,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


