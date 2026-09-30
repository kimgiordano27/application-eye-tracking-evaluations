/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JToken$$Parse
ENTRY_POINT: 017b9144
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_data_collection_or_telemetry_hits_1
*/


long * Newtonsoft_Json_Linq_JToken__Parse(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 uVar15;
  ulong unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  long *unaff_x25;
  long *plVar16;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__;
  if ((param_1 & 1) != 0) {
    if ((unaff_x21 & 1) == 0) {
      return (long *)0x0;
    }
    uVar15 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar6 = thunk_FUN_00d48444(Method_System_Array_SetValue__);
    uVar7 = thunk_FUN_00d48444(
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                              );
    uVar6 = FUN_01600424(uVar6,uVar15,uVar7,0);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<byte>__);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016c0e20(uVar7,uVar6,0);
LAB_017b96e8:
    uVar6 = thunk_FUN_00d48444(Obi_OniPinConstraintsBatchImpl_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar6);
  }
  plVar16 = *(long **)(unaff_x19 + 0x10);
  if (plVar16 == (long *)0x0) goto LAB_017b97dc;
  lVar12 = *plVar16;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_017b920c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_00d59724(plVar16,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__,0);
LAB_017b920c:
  (*(code *)*puVar8)(plVar16,puVar8[1]);
  if (unaff_x23 == 0) {
    if (unaff_x25 == (long *)0x0) goto LAB_017b97dc;
    plVar16 = (long *)(**(code **)(*unaff_x25 + 0x298))();
  }
  else {
    in_stack_00000058._4_1_ = unaff_w22 & 1;
    (**(code **)(unaff_x23 + 0x18))(*(undefined8 *)(unaff_x23 + 0x40));
    plVar16 = in_stack_00000008;
  }
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_01789ac0(plVar16,0,0);
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_17__;
  puVar2 = OVRPlugin_OVRP_1_88_0_TypeInfo;
  if ((uVar13 & 1) != 0) {
    if ((unaff_x21 & 1) == 0) {
      return (long *)0x0;
    }
    plVar16 = *(long **)(unaff_x19 + 0x10);
LAB_017b92a8:
    uVar6 = thunk_FUN_00d48444(StringLiteral_1459);
    if (plVar16 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar6 = thunk_FUN_00d48444(StringLiteral_1459);
      uVar7 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
    }
    uVar15 = thunk_FUN_00d48444(
                               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                               );
    uVar6 = FUN_01600424(uVar6,uVar7,uVar15,0);
    thunk_FUN_00d48444(StringLiteral_3979);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_017b50e4(uVar7,uVar6);
    goto LAB_017b96e8;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_01323390(*(long *)(unaff_x19 + 0x20),&stack0x00000008,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_string>_set_Item__);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar13 = FUN_012b894c(&stack0x00000040,*(undefined8 *)puVar4), (uVar13 & 1) != 0) {
      plVar9 = (long *)FUN_00be7310(&stack0x00000040,*(undefined8 *)puVar2);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_017b9378;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar3,0);
LAB_017b9378:
      uVar6 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar6,uVar6);
      }
      plVar16 = (long *)(**(code **)(*plVar16 + 0x7d8))
                                  (plVar16,uVar6,0x30,*(undefined8 *)(*plVar16 + 0x7e0));
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01789ac0(plVar16,0,0);
      if ((uVar13 & 1) != 0) {
        if ((unaff_x21 & 1) == 0) {
          FUN_012b8948(&stack0x00000040,*(undefined8 *)PTR_DAT_033f3ff8);
          return (long *)0x0;
        }
        thunk_FUN_00d48444(StringLiteral_1459);
        uVar6 = thunk_FUN_00d48444(StringLiteral_1459);
        uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        uVar15 = thunk_FUN_00d48444(
                                   Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                   );
        uVar6 = FUN_01600424(uVar6,uVar7,uVar15,0);
        thunk_FUN_00d48444(StringLiteral_3979);
        lVar12 = thunk_FUN_00d62348();
        if (lVar12 != 0) {
          FUN_01780598(lVar12,uVar6,0);
          FUN_017a9d84(lVar12,0x80131522,0);
          uVar6 = thunk_FUN_00d48444(Obi_OniPinConstraintsBatchImpl_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar12,uVar6);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    FUN_012b8948(&stack0x00000040,*(undefined8 *)PTR_DAT_033f3ff8);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,
                                  *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar9 == (long *)0x0) goto LAB_017b97dc;
    if (0 < (int)plVar9[3]) {
      uVar13 = 0;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar13 & 0xffffffff,&stack0x00000008,
                         *(undefined8 *)UnityEngine_Pool_ObjectPool<HashSet<int>>_TypeInfo),
           in_stack_00000008 == (long *)0x0)) goto LAB_017b97dc;
        lVar12 = FUN_017b8f5c();
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar10 = FUN_01789ac0(lVar12,0,0);
        if ((uVar10 & 1) != 0) {
          if ((unaff_x21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar12 = *(long *)(unaff_x19 + 0x28);
          if (lVar12 == 0) goto LAB_017b97dc;
          uVar6 = thunk_FUN_00d48444(UnityEngine_Pool_ObjectPool<HashSet<int>>_TypeInfo);
          FUN_0132138c(lVar12,uVar13 & 0xffffffff,&stack0x00000008,uVar6);
          if (in_stack_00000008 == (long *)0x0) goto LAB_017b97dc;
          plVar16 = (long *)in_stack_00000008[2];
          goto LAB_017b92a8;
        }
        if ((lVar12 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
          uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar6,0);
        }
        uVar1 = *(uint *)(plVar9 + 3);
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[uVar13 + 4] = lVar12;
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)uVar1);
    }
    if (plVar16 == (long *)0x0) goto LAB_017b97dc;
    plVar16 = (long *)(**(code **)(*plVar16 + 0x928))
                                (plVar16,plVar9,*(undefined8 *)(*plVar16 + 0x930));
  }
  puVar5 = StringLiteral_4967;
  puVar4 = Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_xrOrigin__
  ;
  puVar3 = Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TryAdd__;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_01323390(*(long *)(unaff_x19 + 0x30),&stack0x00000008,
                 *(undefined8 *)Method_System_ValueTuple<int,_int>__ctor__);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar13 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar5), (uVar13 & 1) != 0) {
      plVar9 = (long *)FUN_00be7418(&stack0x00000020,*(undefined8 *)puVar2);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_017b95e4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_017b95e4:
      plVar16 = (long *)(*(code *)*puVar8)(plVar9,plVar16,puVar8[1]);
    }
    FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar3);
  }
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    return plVar16;
  }
  if (plVar16 != (long *)0x0) {
    plVar16 = (long *)(**(code **)(*plVar16 + 0x918))(plVar16,*(undefined8 *)(*plVar16 + 0x920));
    return plVar16;
  }
LAB_017b97dc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


