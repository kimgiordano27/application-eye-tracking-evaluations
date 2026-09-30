/*
FUNCTION_NAME: FUN_01b7c5f4
ENTRY_POINT: 01b7c5f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01b7c5f4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long local_48;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__;
  if ((DAT_0377e53c & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_u16__);
    thunk_FUN_00d48444(
                      <>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<Collider>_Invoke__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                      );
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_System_Collections_Specialized_OrderedDictionary_set_Item__);
    thunk_FUN_00d48444(System_Collections_Generic_List<Module>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13491);
    thunk_FUN_00d48444(PTR_DAT_033f5f78);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_TryGetComponent<TagSet>__);
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_DeserializeMember<string>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<KeyValuePair<string,_Delegate>>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrun_n_s64__);
    thunk_FUN_00d48444(StringLiteral_2205);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<IRuntimePanelComponent>_GetEnumerator__
                      );
    DAT_0377e53c = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar2 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
  puVar1 = Method_UnityEngine_Events_UnityEvent<Collider>_Invoke__;
  puVar3 = Method_System_Collections_Generic_List<IRuntimePanelComponent>_GetEnumerator__;
  if (lVar5 != 0) {
    FUN_026481e8(lVar5,*(undefined8 *)System_Collections_Generic_List<Module>_TypeInfo,0);
    FUN_010a5b84(lVar5,*(undefined8 *)puVar3,&local_48,*(undefined8 *)puVar1);
    lVar8 = *(long *)puVar2;
    lVar5 = *(long *)(lVar8 + 0x38);
    if (lVar5 == 0) {
      FUN_00d59478(lVar8);
      lVar5 = *(long *)(lVar8 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar3 = 
    Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__;
    lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar3 = StringLiteral_3033;
    if (lVar5 != 0) {
      FUN_0264afb0(lVar5,*(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<TagSet>__,
                   uVar9,0);
      plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,1);
      puVar1 = PTR_DAT_033f5f78;
      if (plVar6 != (long *)0x0) {
        if ((*(long *)PTR_DAT_033f5f78 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5f78,*(undefined8 *)(*plVar6 + 0x40)),
           lVar8 == 0)) {
LAB_01b7c994:
          uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar9,0);
        }
        puVar4 = Method_FullSerializer_fsBaseConverter_DeserializeMember<string>__;
        puVar2 = <>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_TypeInfo;
        if ((int)plVar6[3] != 0) {
          plVar6[4] = *(long *)puVar1;
          FUN_010a50bc(lVar5,*(undefined8 *)puVar4,plVar6,&local_48,*(undefined8 *)puVar2);
          plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,1);
          puVar1 = StringLiteral_13491;
          if (plVar6 == (long *)0x0) goto Sirenix_Utilities_TypeExtensions__GetEnumBitmask;
          if ((*(long *)StringLiteral_13491 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(*(long *)StringLiteral_13491,
                                         *(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_01b7c994;
          puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrun_n_s64__;
          if ((int)plVar6[3] != 0) {
            plVar6[4] = *(long *)puVar1;
            FUN_010a50bc(lVar5,*(undefined8 *)puVar4,plVar6,&local_48,*(undefined8 *)puVar2);
            plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
            puVar1 = StringLiteral_2205;
            if (plVar6 == (long *)0x0) goto Sirenix_Utilities_TypeExtensions__GetEnumBitmask;
            if ((*(long *)StringLiteral_2205 != 0) &&
               (lVar8 = thunk_FUN_00d6225c(*(long *)StringLiteral_2205,
                                           *(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_01b7c994;
            uVar7 = *(uint *)(plVar6 + 3);
            if (uVar7 != 0) {
              plVar6[4] = *(long *)puVar1;
              if (param_2 != 0) {
                lVar8 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(*plVar6 + 0x40));
                if (lVar8 == 0) goto LAB_01b7c994;
                uVar7 = *(uint *)(plVar6 + 3);
              }
              puVar1 = 
              Method_System_Collections_Generic_List<KeyValuePair<string,_Delegate>>_GetEnumerator__
              ;
              if (1 < uVar7) {
                plVar6[5] = param_2;
                FUN_010a50bc(lVar5,*(undefined8 *)puVar1,plVar6,&local_48,*(undefined8 *)puVar2);
                plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,1);
                if (plVar6 != (long *)0x0) {
                  lVar8 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40));
                  if (lVar8 == 0) goto LAB_01b7c994;
                  if ((int)plVar6[3] == 0) goto LAB_01b7c990;
                  plVar6[4] = lVar5;
                  if (local_48 != 0) {
                    thunk_FUN_0264afe8(local_48,*(undefined8 *)
                                                 Method_System_Collections_Specialized_OrderedDictionary_set_Item__
                                       ,plVar6,0);
                    return;
                  }
                }
                goto Sirenix_Utilities_TypeExtensions__GetEnumBitmask;
              }
            }
          }
        }
LAB_01b7c990:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
  }
Sirenix_Utilities_TypeExtensions__GetEnumBitmask:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


