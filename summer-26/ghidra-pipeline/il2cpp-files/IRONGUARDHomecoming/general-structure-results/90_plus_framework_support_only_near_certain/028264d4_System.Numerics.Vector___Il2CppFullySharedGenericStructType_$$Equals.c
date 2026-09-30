/*
FUNCTION_NAME: System.Numerics.Vector<__Il2CppFullySharedGenericStructType>$$Equals
ENTRY_POINT: 028264d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02826874) */
/* WARNING: Removing unreachable block (ram,0x02826914) */

void System_Numerics_Vector<__Il2CppFullySharedGenericStructType>__Equals(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined1 in_w8;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar19;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  *(undefined1 *)(unaff_x20 + 0x7c6) = in_w8;
  FUN_02801340();
  uVar19 = *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x10);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar8 = (long *)FUN_03579868(uVar19,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x5c8))(plVar8,*(undefined8 *)(*plVar8 + 0x5d0));
    puVar6 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<PropertyInfo>>__;
    puVar2 = Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<IGraphParentElement>>__;
    puVar5 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
    puVar4 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__;
    puVar3 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
    if ((uVar9 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar19 = thunk_FUN_01f117cc();
      uVar16 = thunk_FUN_01efb3a4(
                                 Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<Type>>__
                                 );
      FUN_034f6754(uVar19,uVar16,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar19);
    }
    if (unaff_x19 != 0) {
      *(undefined8 *)(unaff_x19 + 0x20) =
           *(undefined8 *)
            Method_Unity_VisualScripting_EnsureThat_IsNotNull<IEnumerable<MethodInfo>>__;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)puVar6;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x28));
      uVar7 = FUN_02153b10(*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
      *(undefined4 *)(unaff_x19 + 0x40) = uVar7;
      lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_04257dc8(lVar10,0);
      lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
      FUN_030f2380(lVar11,*(undefined8 *)puVar5);
      uVar19 = *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x10);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar19 = FUN_03579868(uVar19,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      lVar12 = FUN_0359e654(uVar19,0);
      if (lVar12 != 0) {
        plVar8 = (long *)FUN_0358ffe4(lVar12,0);
        puVar5 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
        puVar4 = Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar17 = *plVar8;
          lVar12 = *(long *)puVar3;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar12) {
                puVar13 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_02826688;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_02826688:
          uVar9 = (*(code *)*puVar13)(plVar8,puVar13[1]);
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          if ((uVar9 & 1) == 0) {
            plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                               );
            if (plVar8 == (long *)0x0) goto LAB_02826868;
            lVar12 = *plVar8;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar9 == 0) goto LAB_02826840;
            piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_02826828;
          }
          lVar17 = *plVar8;
          lVar12 = *(long *)puVar3;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar12) {
                puVar13 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_028266e8;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,1);
LAB_028266e8:
          plVar14 = (long *)(*(code *)*puVar13)(plVar8,puVar13[1]);
          lVar12 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(*plVar14 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar14);
          }
          puVar15 = (undefined4 *)thunk_FUN_01f11920(plVar14);
          uVar7 = *puVar15;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar19 = FUN_03532f80(0);
          lVar12 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44();
          }
          in_stack_00000010 = 0xffffffffffffffff;
          in_stack_00000008 = lVar12;
          in_stack_00000018 = uVar7;
          uVar19 = FUN_035a04a4(&stack0x00000008,uVar19,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar17 = *(long *)puVar5;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar19;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(lVar11,uVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
  goto LAB_028268d0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_02826828:
    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
      puVar13 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0282685c;
    }
  }
LAB_02826840:
  puVar13 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_0282685c:
  (*(code *)*puVar13)(plVar8,puVar13[1]);
LAB_02826868:
  if (lVar10 != 0) {
    FUN_04257c30(lVar10,lVar11,0);
    *(long *)(unaff_x19 + 0x38) = lVar10;
    thunk_FUN_01f51358((long *)(unaff_x19 + 0x38),lVar10);
    return;
  }
LAB_028268d0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


