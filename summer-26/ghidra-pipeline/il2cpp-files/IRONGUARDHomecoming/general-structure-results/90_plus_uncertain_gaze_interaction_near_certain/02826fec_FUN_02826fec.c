/*
FUNCTION_NAME: FUN_02826fec
ENTRY_POINT: 02826fec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 219
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02827530) */
/* WARNING: Removing unreachable block (ram,0x028275e4) */

void FUN_02826fec(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  void *__src;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  void *__s;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if ((DAT_048307c9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<IGraphParentElement>>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<MethodInfo>>__)
    ;
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<PropertyInfo>>__
                      );
    DAT_048307c9 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  lVar16 = *(long *)(param_2 + 0x20);
  lVar5 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x20);
  uVar11 = *(uint *)(lVar5 + 0xfc);
  uVar18 = (ulong)uVar11;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
    uVar11 = *(uint *)(lVar5 + 0xfc);
    lVar16 = *(long *)(param_2 + 0x20);
  }
  lVar13 = (long)&local_90 - ((ulong)(uVar11 + 0x10) + 0xf & 0x1fffffff0);
  uVar14 = uVar18 + 0xf & 0x1fffffff0;
  lVar5 = lVar13 - uVar14;
  __s = (void *)(lVar5 - uVar14);
  memset(__s,0,uVar18);
  (**(code **)**(undefined8 **)(lVar16 + 0xc0))(param_1);
  uVar17 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_03579868(uVar17,0);
  if (plVar6 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
    puVar2 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<PropertyInfo>>__;
    puVar4 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<IGraphParentElement>>__;
    puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
    puVar1 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__;
    if ((uVar14 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar17 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<Type>>__
                                );
      FUN_034f6754(uVar17,uVar9,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar17,param_2);
    }
    local_80 = lVar7;
    if (param_1 != 0) {
      *(undefined8 *)(param_1 + 0x20) =
           *(undefined8 *)
            Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<MethodInfo>>__;
      thunk_FUN_01f51358();
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)puVar2;
      thunk_FUN_01f51358();
      puVar10 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18);
      local_78 = lVar5;
      (*(code *)puVar10[2])(*puVar10,puVar10,0,&local_78,lVar5);
      puVar10 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
      local_88 = param_1;
      local_78 = lVar5;
      (*(code *)puVar10[2])(*puVar10,puVar10,param_1,&local_78,lVar5);
      local_90 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
      FUN_04257dc8(local_90,0);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_030f2380(lVar7,*(undefined8 *)puVar3);
      uVar17 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar17 = FUN_03579868(uVar17,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                          );
      }
      lVar5 = FUN_0359e654(uVar17,0);
      if (lVar5 != 0) {
        plVar6 = (long *)FUN_0358ffe4(lVar5,0);
        puVar4 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
        puVar3 = Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar16 = *plVar6;
          lVar5 = *(long *)puVar1;
          uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar5) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02827328;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,0);
LAB_02827328:
          uVar14 = (*(code *)*puVar10)(plVar6,puVar10[1]);
          lVar5 = local_88;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          if ((uVar14 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                               );
            lVar16 = local_80;
            if (plVar6 == (long *)0x0) goto LAB_02827524;
            lVar13 = *plVar6;
            uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar18 == 0) goto LAB_028274fc;
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_028274e4;
          }
          lVar16 = *plVar6;
          lVar5 = *(long *)puVar1;
          uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar5) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_02827388;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,1);
LAB_02827388:
          plVar8 = (long *)(*(code *)*puVar10)(plVar6,puVar10[1]);
          lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar8);
          }
          __src = (void *)thunk_FUN_01f11920(plVar8);
          memcpy(__s,__src,uVar18);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar5 = FUN_03532f80(0);
          lVar12 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
          lVar16 = *(long *)(lVar12 + 0x20);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01ecaf44();
            lVar12 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
          }
          local_78 = lVar5;
          FUN_01f09244(lVar16,*(undefined8 *)(lVar12 + 0x30),lVar13,__s,&local_78,&local_70);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *(long *)(lVar7 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = *(uint *)(lVar7 + 0x18);
          if (uVar11 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar11 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar11 * 8 + 0x20) = local_70;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(lVar7,local_70,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
  goto LAB_028275a0;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar15 = piVar15 + 4;
    if (uVar18 == 0) break;
LAB_028274e4:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02827518;
    }
  }
LAB_028274fc:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02827518:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
LAB_02827524:
  lVar13 = local_90;
  if (local_90 != 0) {
    FUN_04257c30(local_90,lVar7,0);
    *(long *)(lVar5 + 0x38) = lVar13;
    thunk_FUN_01f51358((long *)(lVar5 + 0x38),lVar13);
    if (*(long *)(lVar16 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_028275a0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


