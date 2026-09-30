/*
FUNCTION_NAME: FUN_02826414
ENTRY_POINT: 02826414
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02826874) */
/* WARNING: Removing unreachable block (ram,0x02826914) */

void FUN_02826414(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  long local_78 [2];
  undefined4 local_68;
  
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_048307c6 & 1) == 0) {
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
    DAT_048307c6 = 1;
  }
  FUN_02801340(param_1,**(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0));
  uVar20 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar9 = (long *)FUN_03579868(uVar20,0);
  if (plVar9 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar9 + 0x5c8))(plVar9,*(undefined8 *)(*plVar9 + 0x5d0));
    puVar7 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<PropertyInfo>>__;
    puVar6 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<IGraphParentElement>>__;
    puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
    puVar5 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__;
    puVar4 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
    if ((uVar10 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar20 = thunk_FUN_01f117cc();
      uVar17 = thunk_FUN_01efb3a4(
                                 Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<Type>>__
                                 );
      FUN_034f6754(uVar20,uVar17,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar20,param_2);
    }
    if (param_1 != 0) {
      *(undefined8 *)(param_1 + 0x20) =
           *(undefined8 *)
            Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<MethodInfo>>__;
      thunk_FUN_01f51358();
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)puVar7;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28));
      uVar8 = FUN_02153b10(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
      *(undefined4 *)(param_1 + 0x40) = uVar8;
      lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
      FUN_04257dc8(lVar11,0);
      lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
      FUN_030f2380(lVar12,*(undefined8 *)puVar3);
      uVar20 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar20 = FUN_03579868(uVar20,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      lVar13 = FUN_0359e654(uVar20,0);
      if (lVar13 != 0) {
        plVar9 = (long *)FUN_0358ffe4(lVar13,0);
        puVar5 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
        puVar4 = Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar18 = *plVar9;
          lVar13 = *(long *)puVar2;
          uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar13) {
                puVar14 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_02826688;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ecb238(plVar9,lVar13,0);
LAB_02826688:
          uVar10 = (*(code *)*puVar14)(plVar9,puVar14[1]);
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          if ((uVar10 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                               );
            if (plVar9 == (long *)0x0) goto LAB_02826868;
            lVar13 = *plVar9;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar10 == 0) goto LAB_02826840;
            piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_02826828;
          }
          lVar18 = *plVar9;
          lVar13 = *(long *)puVar2;
          uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar13) {
                puVar14 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_028266e8;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ecb238(plVar9,lVar13,1);
LAB_028266e8:
          plVar15 = (long *)(*(code *)*puVar14)(plVar9,puVar14[1]);
          lVar13 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01ecaf44(lVar13);
          }
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(*plVar15 + 0x40) != *(long *)(lVar13 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar15);
          }
          puVar16 = (undefined4 *)thunk_FUN_01f11920(plVar15);
          uVar8 = *puVar16;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar20 = FUN_03532f80(0);
          lVar13 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01ecaf44();
          }
          local_78[1] = 0xffffffffffffffff;
          local_78[0] = lVar13;
          local_68 = uVar8;
          uVar20 = FUN_035a04a4(local_78,uVar20,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = *(long *)(lVar12 + 0x10);
          lVar18 = *(long *)puVar5;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar20;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(lVar12,uVar20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
  goto LAB_028268d0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar19 = piVar19 + 4;
    if (uVar10 == 0) break;
LAB_02826828:
    if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0282685c;
    }
  }
LAB_02826840:
  puVar14 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0282685c:
  (*(code *)*puVar14)(plVar9,puVar14[1]);
LAB_02826868:
  if (lVar11 != 0) {
    FUN_04257c30(lVar11,lVar12,0);
    *(long *)(param_1 + 0x38) = lVar11;
    thunk_FUN_01f51358((long *)(param_1 + 0x38),lVar11);
    return;
  }
LAB_028268d0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


