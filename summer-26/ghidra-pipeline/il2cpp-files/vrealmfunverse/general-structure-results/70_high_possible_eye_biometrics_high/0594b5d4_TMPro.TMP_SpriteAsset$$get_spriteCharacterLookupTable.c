/*
FUNCTION_NAME: TMPro.TMP_SpriteAsset$$get_spriteCharacterLookupTable
ENTRY_POINT: 0594b5d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] TMPro_TMP_SpriteAsset__get_spriteCharacterLookupTable(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar18;
  void *unaff_x21;
  long lVar19;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar20;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  long in_stack_00000110;
  long *in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  byte in_stack_00000250;
  
  uStack00000000000001d0 = in_x6;
  uStack00000000000001d8 = in_x7;
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x22 + 0x716) = 1;
  }
  puVar8 = Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__;
  puVar7 = PTR_DAT_06312c90;
  in_stack_00000140 = 0;
  in_stack_00000148 = 0;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  in_stack_00000110 = 0;
  in_stack_00000118 = (long *)0x0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001a0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  auVar4 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  if ((*(long *)(unaff_x19 + 0x1d0) != 0) &&
     (plVar12 = *(long **)(*(long *)(unaff_x19 + 0x1d0) + 0xb8), auVar4 = ZEXT816(0),
     auVar5 = ZEXT816(0), auVar6 = ZEXT816(0), plVar12 != (long *)0x0)) {
    iVar9 = (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
    iVar1 = *(int *)((long)unaff_x21 + 4);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar7);
    }
    puVar7 = 
    Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__;
    iVar3 = 0;
    if (iVar9 != 0) {
      iVar3 = iVar1 / iVar9;
    }
    uVar10 = FUN_04d7c48c(iVar3,1,0);
    iVar1 = 0;
    if (iVar9 != 0) {
      iVar1 = *(int *)((long)unaff_x21 + 8) / iVar9;
    }
    uVar11 = FUN_04d7c48c(iVar1,1,0);
    memcpy(&stack0x00000090,unaff_x21,0x80);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x220);
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    memcpy(&stack0x00000010,&stack0x00000090,0x80);
    FUN_0594480c(&stack0x00000150,&stack0x00000010,uVar10,uVar11,uVar2);
    _in_stack_00000140 = FUN_059446a8();
    _in_stack_00000130 = FUN_059446a8();
    _in_stack_00000120 = FUN_059446a8();
    FUN_032b1148(0x1d,*(undefined8 *)puVar7);
    auVar4 = _in_stack_00000120;
    auVar5 = _in_stack_00000130;
    auVar6 = _in_stack_00000140;
    if (unaff_x23 != 0) {
      plVar12 = (long *)FUN_032fab48();
      in_stack_00000098 = &stack0x00000118;
      in_stack_00000090 = 0;
      in_stack_00000118 = plVar12;
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined1 (*) [16])(in_stack_00000110 + 0x10) = _in_stack_00000140;
      puVar7 = Method_Unity_Collections_NativeArray<Plane>_GetSubArray__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0594b8c0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_02b7654c(plVar12,*(long *)
                                      Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0);
LAB_0594b8c0:
      (*(code *)*puVar13)(plVar12,&stack0x00000140,3,puVar13[1]);
      plVar12 = in_stack_00000118;
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined1 (*) [16])(in_stack_00000110 + 0x20) = _in_stack_00000130;
      if (in_stack_00000118 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *in_stack_00000118;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0594b938;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_02b7654c(in_stack_00000118,*(long *)puVar7,0);
LAB_0594b938:
      (*(code *)*puVar13)(plVar12,&stack0x00000130,3,puVar13[1]);
      plVar12 = in_stack_00000118;
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(in_stack_00000110 + 0x48) = uStack00000000000001d8;
      *(undefined8 *)(in_stack_00000110 + 0x40) = uStack00000000000001d0;
      if (in_stack_00000118 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *in_stack_00000118;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0594b9b0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_02b7654c(in_stack_00000118,*(long *)puVar7,0);
LAB_0594b9b0:
      (*(code *)*puVar13)(plVar12,&stack0x000001d0,3,puVar13[1]);
      plVar12 = in_stack_00000118;
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(in_stack_00000110 + 0x38) = in_stack_000001e8;
      *(undefined8 *)(in_stack_00000110 + 0x30) = in_stack_000001e0;
      if ((in_stack_00000250 & 1) == 0) {
        if (in_stack_00000118 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar15 = *in_stack_00000118;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0594ba30;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_02b7654c(in_stack_00000118,*(long *)puVar7,0);
LAB_0594ba30:
        (*(code *)*puVar13)(plVar12,&stack0x000001e0,3,puVar13[1]);
        if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
      }
      uVar20 = *(undefined8 *)((long)unaff_x21 + 4);
      *(undefined8 *)(in_stack_00000110 + 0x68) = unaff_x20;
      *(undefined8 *)(in_stack_00000110 + 0x60) = uVar20;
      thunk_FUN_02bb0e9c();
      if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(in_stack_00000110 + 0x70) =
           *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x90);
      thunk_FUN_02bb0e9c();
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(in_stack_00000110 + 0x78) = *(undefined8 *)(unaff_x19 + 0x1d0);
      thunk_FUN_02bb0e9c();
      plVar12 = in_stack_00000118;
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(int *)(in_stack_00000110 + 0x80) = iVar9;
      *(undefined1 (*) [16])(in_stack_00000110 + 0x50) = _in_stack_00000120;
      if (in_stack_00000118 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *in_stack_00000118;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0594baf8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_02b7654c(in_stack_00000118,*(long *)puVar7,0);
LAB_0594baf8:
      (*(code *)*puVar13)(plVar12,&stack0x00000120,3,puVar13[1]);
      plVar12 = in_stack_00000118;
      puVar7 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector3Int>_Init__;
      lVar15 = *(long *)Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector3Int>_Init__;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar15 = *(long *)puVar7;
      }
      puVar13 = *(undefined8 **)(lVar15 + 0xb8);
      lVar18 = puVar13[0x12];
      if (lVar18 == 0) {
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar13 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
        }
        uVar20 = *puVar13;
        lVar18 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_System_ValueTuple<List<OVRSpaceUser>,_List<OVRSpatialAnchor>>__ctor__
                                   );
        FUN_03e026bc(lVar18,uVar20,
                     *(undefined8 *)Method_System_ValueTuple<IntPtr[],_IntPtr[]>__ctor__,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x90);
        *plVar14 = lVar18;
        thunk_FUN_02bb0e9c(plVar14,lVar18);
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *plVar12;
      lVar19 = *(long *)Method_System_ValueTuple<NativeList<int>,_NativeList<int>>__ctor__;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)(lVar19 + 0x20)) {
            lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_0594bbf0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      lVar15 = FUN_02b7654c(plVar12);
LAB_0594bbf0:
      lVar15 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar15 + 8),lVar19);
      (**(code **)(lVar15 + 8))(plVar12,lVar18,lVar15);
      plVar12 = (long *)*in_stack_00000098;
      if (plVar12 != (long *)0x0) {
        lVar15 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06312f78) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0594bc70;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06312f78,0);
LAB_0594bc70:
        (*(code *)*puVar13)(plVar12,puVar13[1]);
      }
      if (in_stack_00000090 == 0) {
        auVar4._8_8_ = in_stack_000001e8;
        auVar4._0_8_ = in_stack_000001e0;
        return auVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc();
    }
  }
  _in_stack_00000120 = auVar4;
  _in_stack_00000130 = auVar5;
  _in_stack_00000140 = auVar6;
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


