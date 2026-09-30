/*
FUNCTION_NAME: FUN_0594b59c
ENTRY_POINT: 0594b59c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
FUN_0594b59c(long param_1,long param_2,undefined8 param_3,void *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_240 [128];
  long local_1c0;
  long **local_1b8;
  long local_140;
  long *local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_5;
  uStack_68 = param_6;
  if ((DAT_066d3716 & 1) == 0) {
    FUN_02b3c81c(Method_System_ValueTuple<List<OVRSpaceUser>,_List<OVRSpatialAnchor>>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_System_ValueTuple<NativeList<int>,_NativeList<int>>__ctor__);
    FUN_02b3c81c(PTR_DAT_06312c90);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__
                );
    FUN_02b3c81c(Method_System_ValueTuple<Task<BufferOffsetSize>,_WebException>__ctor__);
    FUN_02b3c81c(Method_System_ValueTuple<IntPtr[],_IntPtr[]>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector3Int>_Init__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary_ValueCollection<Guid,_List<IDisposable>>_GetEnumerator__
                );
    FUN_02b3c81c(Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__);
    FUN_02b3c81c(Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>_Init__);
    DAT_066d3716 = 1;
  }
  puVar8 = Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__;
  puVar7 = PTR_DAT_06312c90;
  local_110._0_8_ = 0;
  local_110._8_8_ = 0;
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  local_130._0_8_ = 0;
  local_130._8_8_ = 0;
  local_140 = 0;
  local_138 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  auVar4 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x1d0) != 0) &&
     (plVar15 = *(long **)(*(long *)(param_1 + 0x1d0) + 0xb8), auVar4 = ZEXT816(0),
     auVar5 = ZEXT816(0), auVar6 = ZEXT816(0), plVar15 != (long *)0x0)) {
    iVar12 = (**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220));
    iVar1 = *(int *)((long)param_4 + 4);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar7);
    }
    puVar11 = Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__;
    puVar10 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>_Init__;
    puVar9 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
    puVar7 = 
    Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__;
    iVar3 = 0;
    if (iVar12 != 0) {
      iVar3 = iVar1 / iVar12;
    }
    uVar13 = FUN_04d7c48c(iVar3,1,0);
    iVar1 = 0;
    if (iVar12 != 0) {
      iVar1 = *(int *)((long)param_4 + 8) / iVar12;
    }
    uVar14 = FUN_04d7c48c(iVar1,1,0);
    memcpy(&local_1c0,param_4,0x80);
    uVar2 = *(undefined4 *)(param_1 + 0x220);
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    memcpy(auStack_240,&local_1c0,0x80);
    FUN_0594480c(&local_100,auStack_240,uVar13,uVar14,uVar2);
    local_110 = FUN_059446a8(param_2,&local_100,*(undefined8 *)puVar10,1,1);
    local_120 = FUN_059446a8(param_2,&local_100,*(undefined8 *)puVar9,1,1);
    local_130 = FUN_059446a8(param_2,&local_100,*(undefined8 *)puVar11,1,1);
    uVar16 = FUN_032b1148(0x1d,*(undefined8 *)puVar7);
    auVar4 = local_130;
    auVar5 = local_120;
    auVar6 = local_110;
    if (param_2 != 0) {
      plVar15 = (long *)FUN_032fab48(param_2,*(undefined8 *)
                                              Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__
                                     ,&local_140,uVar16,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_ValueCollection<Guid,_List<IDisposable>>_GetEnumerator__
                                     ,0x4fe,*(undefined8 *)
                                             Method_System_ValueTuple<Task<BufferOffsetSize>,_WebException>__ctor__
                                    );
      local_1b8 = &local_138;
      local_1c0 = 0;
      local_138 = plVar15;
      if (local_140 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined1 (*) [16])(local_140 + 0x10) = local_110;
      puVar7 = Method_Unity_Collections_NativeArray<Plane>_GetSubArray__;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar19 = *plVar15;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0594b8c0;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_02b7654c(plVar15,*(long *)
                                      Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0);
LAB_0594b8c0:
      (*(code *)*puVar17)(plVar15,local_110,3,puVar17[1]);
      plVar15 = local_138;
      if (local_140 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined1 (*) [16])(local_140 + 0x20) = local_120;
      if (local_138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar19 = *local_138;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0594b938;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar17 = (undefined8 *)FUN_02b7654c(local_138,*(long *)puVar7,0);
LAB_0594b938:
      (*(code *)*puVar17)(plVar15,local_120,3,puVar17[1]);
      plVar15 = local_138;
      if (local_140 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_140 + 0x48) = uStack_78;
      *(undefined8 *)(local_140 + 0x40) = local_80;
      if (local_138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar19 = *local_138;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0594b9b0;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar17 = (undefined8 *)FUN_02b7654c(local_138,*(long *)puVar7,0);
LAB_0594b9b0:
      (*(code *)*puVar17)(plVar15,&local_80,3,puVar17[1]);
      plVar15 = local_138;
      if (local_140 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_140 + 0x38) = uStack_68;
      *(undefined8 *)(local_140 + 0x30) = local_70;
      if ((param_9 & 1) == 0) {
        if (local_138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar19 = *local_138;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
              puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0594ba30;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar17 = (undefined8 *)FUN_02b7654c(local_138,*(long *)puVar7,0);
LAB_0594ba30:
        (*(code *)*puVar17)(plVar15,&local_70,3,puVar17[1]);
        if (local_140 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
      }
      uVar16 = *(undefined8 *)((long)param_4 + 4);
      *(undefined8 *)(local_140 + 0x68) = param_3;
      *(undefined8 *)(local_140 + 0x60) = uVar16;
      thunk_FUN_02bb0e9c();
      if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (local_140 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_140 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x90);
      thunk_FUN_02bb0e9c();
      if (local_140 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_140 + 0x78) = *(undefined8 *)(param_1 + 0x1d0);
      thunk_FUN_02bb0e9c();
      plVar15 = local_138;
      if (local_140 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(int *)(local_140 + 0x80) = iVar12;
      *(undefined1 (*) [16])(local_140 + 0x50) = local_130;
      if (local_138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar19 = *local_138;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0594baf8;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar17 = (undefined8 *)FUN_02b7654c(local_138,*(long *)puVar7,0);
LAB_0594baf8:
      (*(code *)*puVar17)(plVar15,local_130,3,puVar17[1]);
      plVar15 = local_138;
      puVar7 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector3Int>_Init__;
      lVar19 = *(long *)Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector3Int>_Init__;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar19 = *(long *)puVar7;
      }
      puVar17 = *(undefined8 **)(lVar19 + 0xb8);
      lVar22 = puVar17[0x12];
      if (lVar22 == 0) {
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar17 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
        }
        uVar16 = *puVar17;
        lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_System_ValueTuple<List<OVRSpaceUser>,_List<OVRSpatialAnchor>>__ctor__
                                   );
        FUN_03e026bc(lVar22,uVar16,
                     *(undefined8 *)Method_System_ValueTuple<IntPtr[],_IntPtr[]>__ctor__,0);
        plVar18 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x90);
        *plVar18 = lVar22;
        thunk_FUN_02bb0e9c(plVar18,lVar22);
      }
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar19 = *plVar15;
      lVar23 = *(long *)Method_System_ValueTuple<NativeList<int>,_NativeList<int>>__ctor__;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)(lVar23 + 0x20)) {
            lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_0594bbf0;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      lVar19 = FUN_02b7654c(plVar15);
LAB_0594bbf0:
      lVar19 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar19 + 8),lVar23);
      (**(code **)(lVar19 + 8))(plVar15,lVar22,lVar19);
      plVar15 = *local_1b8;
      if (plVar15 != (long *)0x0) {
        lVar19 = *plVar15;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06312f78) {
              puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0594bc70;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar17 = (undefined8 *)FUN_02b7654c(plVar15,*(long *)PTR_DAT_06312f78,0);
LAB_0594bc70:
        (*(code *)*puVar17)(plVar15,puVar17[1]);
      }
      if (local_1c0 == 0) {
        auVar4._8_8_ = uStack_68;
        auVar4._0_8_ = local_70;
        return auVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc();
    }
  }
  local_130 = auVar4;
  local_120 = auVar5;
  local_110 = auVar6;
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


