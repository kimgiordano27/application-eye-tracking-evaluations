/*
FUNCTION_NAME: FUN_017b8f5c
ENTRY_POINT: 017b8f5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


long * FUN_017b8f5c(long param_1,long param_2,long param_3,uint param_4,byte param_5,
                   undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  byte local_64 [4];
  
  if ((DAT_037790b5 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_ReduceAndCheck__);
    thunk_FUN_00d48444(PTR_DAT_033f3ff8);
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TryAdd__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_17__);
    thunk_FUN_00d48444(StringLiteral_4967);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_xrOrigin__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_88_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Type,_string>_set_Item__);
    thunk_FUN_00d48444(Method_System_ValueTuple<int,_int>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033eb318);
    thunk_FUN_00d48444(UnityEngine_Pool_ObjectPool<HashSet<int>>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_037790b5 = 1;
  }
  puVar3 = Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = (long *)0x0;
  if ((param_3 == 0) && (param_2 == 0)) {
    lVar15 = *(long *)(param_1 + 0x40);
    if (lVar15 == 0) {
      lVar15 = FUN_017c9dd8(param_1,0);
      *(long *)(param_1 + 0x40) = lVar15;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)Newtonsoft_Json_Linq_JObject__TryGetValue
                               (lVar15,param_4 & 1,param_5 & 1,0,param_6,0);
    return plVar6;
  }
  lVar15 = *(long *)(param_1 + 0x18);
  plVar6 = (long *)0x0;
  if (lVar15 != 0) {
    if (param_2 == 0) {
      plVar6 = (long *)FUN_016b3f88(lVar15,0);
    }
    else {
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Linq_Expressions_Expression_ReduceAndCheck__);
      if (lVar7 == 0) goto LAB_017b97dc;
      FUN_016b42e0(lVar7,lVar15,0);
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),lVar7,&local_b8,*(undefined8 *)(param_2 + 0x28));
      plVar6 = local_b8;
    }
    uVar8 = FUN_016b4204(plVar6,0,0);
    if ((uVar8 & 1) != 0) {
      if ((param_4 & 1) == 0) {
        return (long *)0x0;
      }
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      uVar9 = thunk_FUN_00d48444(Method_System_Array_SetValue__);
      uVar10 = thunk_FUN_00d48444(
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                 );
      uVar9 = FUN_01600424(uVar9,uVar14,uVar10,0);
      thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<byte>__);
      uVar10 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_016c0e20(uVar10,uVar9,0);
      goto LAB_017b96e8;
    }
  }
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__;
  plVar16 = *(long **)(param_1 + 0x10);
  if (plVar16 == (long *)0x0) goto LAB_017b97dc;
  lVar15 = *plVar16;
  uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar8 != 0) {
    piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__) {
        puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_017b920c;
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_00d59724(plVar16,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__,0);
LAB_017b920c:
  uVar9 = (*(code *)*puVar11)(plVar16,puVar11[1]);
  if (param_3 == 0) {
    if (plVar6 == (long *)0x0) goto LAB_017b97dc;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x298))
                               (plVar6,uVar9,0,param_5 & 1,*(undefined8 *)(*plVar6 + 0x2a0));
  }
  else {
    local_64[0] = param_5 & 1;
    (**(code **)(param_3 + 0x18))
              (*(undefined8 *)(param_3 + 0x40),plVar6,uVar9,local_64,&local_b8,
               *(undefined8 *)(param_3 + 0x28));
    plVar6 = local_b8;
  }
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_01789ac0(plVar6,0,0);
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_17__;
  puVar2 = OVRPlugin_OVRP_1_88_0_TypeInfo;
  if ((uVar8 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      return (long *)0x0;
    }
    plVar6 = *(long **)(param_1 + 0x10);
LAB_017b92a8:
    uVar9 = thunk_FUN_00d48444(StringLiteral_1459);
    if (plVar6 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar9 = thunk_FUN_00d48444(StringLiteral_1459);
      uVar10 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    uVar14 = thunk_FUN_00d48444(
                               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                               );
    uVar9 = FUN_01600424(uVar9,uVar10,uVar14,0);
    thunk_FUN_00d48444(StringLiteral_3979);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_017b50e4(uVar10,uVar9);
LAB_017b96e8:
    uVar9 = thunk_FUN_00d48444(Obi_OniPinConstraintsBatchImpl_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar9);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x20),&local_b8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_string>_set_Item__);
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    local_70 = local_a8;
    while (uVar8 = FUN_012b894c(&local_80,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      plVar16 = (long *)FUN_00be7310(&local_80,*(undefined8 *)puVar2);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = *plVar16;
      uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_017b9378;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar3,0);
LAB_017b9378:
      uVar9 = (*(code *)*puVar11)(plVar16,puVar11[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar9,uVar9);
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x7d8))
                                 (plVar6,uVar9,0x30,*(undefined8 *)(*plVar6 + 0x7e0));
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01789ac0(plVar6,0,0);
      if ((uVar8 & 1) != 0) {
        if ((param_4 & 1) == 0) {
          FUN_012b8948(&local_80,*(undefined8 *)PTR_DAT_033f3ff8);
          return (long *)0x0;
        }
        thunk_FUN_00d48444(StringLiteral_1459);
        uVar9 = thunk_FUN_00d48444(StringLiteral_1459);
        uVar10 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
        uVar14 = thunk_FUN_00d48444(
                                   Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                   );
        uVar9 = FUN_01600424(uVar9,uVar10,uVar14,0);
        thunk_FUN_00d48444(StringLiteral_3979);
        lVar15 = thunk_FUN_00d62348();
        if (lVar15 != 0) {
          FUN_01780598(lVar15,uVar9,0);
          FUN_017a9d84(lVar15,0x80131522,0);
          uVar9 = thunk_FUN_00d48444(Obi_OniPinConstraintsBatchImpl_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar15,uVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    FUN_012b8948(&local_80,*(undefined8 *)PTR_DAT_033f3ff8);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)
                                    Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,
                                   *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
    if (plVar16 == (long *)0x0) goto LAB_017b97dc;
    if (0 < (int)plVar16[3]) {
      uVar8 = 0;
      do {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (FUN_0132138c(*(long *)(param_1 + 0x28),uVar8 & 0xffffffff,&local_b8,
                         *(undefined8 *)UnityEngine_Pool_ObjectPool<HashSet<int>>_TypeInfo),
           local_b8 == (long *)0x0)) goto LAB_017b97dc;
        lVar15 = FUN_017b8f5c(local_b8,param_2,param_3,param_4 & 1,param_5 & 1,param_6);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar12 = FUN_01789ac0(lVar15,0,0);
        if ((uVar12 & 1) != 0) {
          if ((param_4 & 1) == 0) {
            return (long *)0x0;
          }
          lVar15 = *(long *)(param_1 + 0x28);
          if (lVar15 == 0) goto LAB_017b97dc;
          uVar9 = thunk_FUN_00d48444(UnityEngine_Pool_ObjectPool<HashSet<int>>_TypeInfo);
          FUN_0132138c(lVar15,uVar8 & 0xffffffff,&local_b8,uVar9);
          if (local_b8 == (long *)0x0) goto LAB_017b97dc;
          plVar6 = (long *)local_b8[2];
          goto LAB_017b92a8;
        }
        if ((lVar15 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar7 == 0)) {
          uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar9,0);
        }
        uVar1 = *(uint *)(plVar16 + 3);
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar16[uVar8 + 4] = lVar15;
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)uVar1);
    }
    if (plVar6 == (long *)0x0) goto LAB_017b97dc;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x928))(plVar6,plVar16,*(undefined8 *)(*plVar6 + 0x930))
    ;
  }
  puVar5 = StringLiteral_4967;
  puVar4 = Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_xrOrigin__
  ;
  puVar3 = Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TryAdd__;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x30),&local_b8,
                 *(undefined8 *)Method_System_ValueTuple<int,_int>__ctor__);
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    local_90 = local_a8;
    while (uVar8 = FUN_012b894c(&local_a0,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
      plVar16 = (long *)FUN_00be7418(&local_a0,*(undefined8 *)puVar2);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = *plVar16;
      uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_017b95e4;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar4,0);
LAB_017b95e4:
      plVar6 = (long *)(*(code *)*puVar11)(plVar16,plVar6,puVar11[1]);
    }
    FUN_012b8948(&local_a0,*(undefined8 *)puVar3);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    return plVar6;
  }
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x918))(plVar6,*(undefined8 *)(*plVar6 + 0x920));
    return plVar6;
  }
LAB_017b97dc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


