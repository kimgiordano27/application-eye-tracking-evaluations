/*
FUNCTION_NAME: FUN_01548cc4
ENTRY_POINT: 01548cc4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


long FUN_01548cc4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar4 = StringLiteral_13069;
  if ((DAT_03777af0 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<SimpleTuple<Face,_Face>>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_u16__);
    thunk_FUN_00d48444(Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Single_CompareTo__);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_MulInstruction_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_ObjectModel_ReadOnlyCollection<Vector2>__ctor__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<int>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<TrackableId>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_13069);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeOffsetAsync>d__47>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<MethodInfo>_TypeInfo);
    DAT_03777af0 = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeOffsetAsync>d__47>__
  ;
  if (lVar8 != 0) {
    FUN_017b46ec(lVar8,0);
    *(long *)(lVar8 + 0x10) = param_1;
    uVar9 = FUN_015ff8a0(param_2,0);
    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_u16__;
    puVar6 = Method_System_Single_CompareTo__;
    puVar5 = Method_TMPro_TMP_TextProcessingStack<int>__ctor__;
    puVar3 = Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo;
    puVar2 = System_Collections_Generic_List<MethodInfo>_TypeInfo;
    puVar1 = System_Collections_Generic_IEnumerable<SimpleTuple<Face,_Face>>_TypeInfo;
    uVar12 = *(undefined8 *)puVar4;
    if ((uVar9 & 1) == 0) {
      uVar12 = param_2;
    }
    if (*(long *)(param_1 + 0xf0) != 0) {
      FUN_01323390(*(long *)(param_1 + 0xf0),&local_98,
                   *(undefined8 *)
                    Method_System_Collections_ObjectModel_ReadOnlyCollection<Vector2>__ctor__);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      while (uVar9 = FUN_012b894c(&local_80,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        lVar10 = FUN_00bcbd94(&local_80,*(undefined8 *)puVar6);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar9 = thunk_FUN_015fe514(*(undefined8 *)(lVar10 + 0xb0),uVar12,0);
        if ((uVar9 & 1) != 0) {
          FUN_012b8948(&local_80,*(undefined8 *)puVar7);
          return lVar10;
        }
      }
      FUN_012b8948(&local_80,*(undefined8 *)puVar7);
      if ((param_3 & 1) == 0) {
        return 0;
      }
      if ((*(long *)(param_1 + 0xe0) != 0) &&
         (lVar10 = FUN_01552494(*(long *)(param_1 + 0xe0),0), lVar10 != 0)) {
        lVar10 = FUN_010c5ec8(lVar10,uVar12,*(undefined8 *)puVar1);
        *(long *)(lVar8 + 0x18) = lVar10;
        uVar11 = FUN_01145458(*(undefined8 *)puVar2,*(undefined8 *)puVar5);
        if (lVar10 != 0) {
          FUN_01541ed8(lVar10,uVar11);
          if (*(long *)(lVar8 + 0x18) != 0) {
            FUN_015419c4(*(long *)(lVar8 + 0x18),uVar12);
            lVar13 = *(long *)(lVar8 + 0x18);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__
                                       );
            if ((lVar10 != 0) &&
               (FUN_016f27fc(lVar10,lVar8,
                             *(undefined8 *)
                              Method_Unity_Collections_NativeArray<TrackableId>_GetEnumerator__,0),
               lVar13 != 0)) {
              *(long *)(lVar13 + 0x78) = lVar10;
              if (*(long *)(param_1 + 0xf0) != 0) {
                FUN_00bcbe9c(*(long *)(param_1 + 0xf0),*(undefined8 *)(lVar8 + 0x18),
                             *(undefined8 *)
                              System_Linq_Expressions_Interpreter_MulInstruction_TypeInfo);
                uVar12 = *(undefined8 *)(param_1 + 0xf8);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar9 = FUN_0268b4e0(uVar12,0,0);
                if ((uVar9 & 1) != 0) {
                  FUN_0154956c(param_1,*(undefined8 *)(lVar8 + 0x18));
                }
                return *(long *)(lVar8 + 0x18);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


