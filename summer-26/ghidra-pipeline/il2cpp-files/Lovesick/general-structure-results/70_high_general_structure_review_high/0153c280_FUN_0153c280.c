/*
FUNCTION_NAME: FUN_0153c280
ENTRY_POINT: 0153c280
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0153c280(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_033ece88;
  if ((DAT_03777a7f & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<GradientColorKey[]>_WriteValue__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_709);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcagtq_f32__);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(PTR_DAT_033ece88);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_fsData>_get_Keys__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__);
    thunk_FUN_00d48444(Method_System_Reflection_SignatureType_GetConstructorImpl__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10399);
    thunk_FUN_00d48444(Oculus_Interaction_DebugTree_INodeUI<IActiveState>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef508);
    DAT_03777a7f = 1;
  }
  puVar2 = PTR_DAT_033f3868;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01560108(0);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcagtq_f32__;
  if (lVar4 != 0) {
    FUN_0268afbc(lVar4,*(undefined8 *)StringLiteral_10399,0);
    FUN_010e5800(lVar4,*(undefined8 *)puVar1);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      FUN_0268afbc(lVar5,*(undefined8 *)PTR_DAT_033ef508,0);
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar5,0);
      uVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar4,0);
      puVar2 = StringLiteral_709;
      puVar1 = Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__;
      if (lVar6 != 0) {
        FUN_0269fff8(lVar6,uVar7,0);
        FUN_010e5800(lVar5,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar5 = FUN_0153b754();
        puVar3 = Method_System_Reflection_SignatureType_GetConstructorImpl__;
        puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
        puVar1 = Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__;
        if (lVar5 != 0) {
          uVar7 = *(undefined8 *)(lVar5 + 0x68);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          plVar8 = (long *)FUN_00da52a8(uVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
          lVar5 = FUN_0153b754();
          if (lVar5 != 0) {
            if (*(char *)(lVar5 + 0x60) != '\0') {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar9 = FUN_0178a8c4(plVar8,0,0);
              if ((uVar9 & 1) != 0) {
                uVar7 = *(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<string,_fsData>_get_Keys__;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar10 = (long *)FUN_01780344(uVar7,0);
                if (plVar10 == (long *)0x0) goto LAB_0153c5b0;
                uVar9 = (**(code **)(*plVar10 + 0x2c8))
                                  (plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x2d0));
                if ((uVar9 & 1) != 0) {
                  uVar7 = *(undefined8 *)
                           Method_Sirenix_Serialization_Serializer<GradientColorKey[]>_WriteValue__;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar7 = FUN_01780344(uVar7,0);
                  if (plVar8 == (long *)0x0) goto LAB_0153c5b0;
                  uVar9 = (**(code **)(*plVar8 + 0x2b8))
                                    (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x2c0));
                  if ((uVar9 & 1) != 0) {
                    FUN_0268abe8(lVar4,plVar8,0);
                    goto LAB_0153c580;
                  }
                }
                puVar1 = Oculus_Interaction_DebugTree_INodeUI<IActiveState>_TypeInfo;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02661754(*(undefined8 *)puVar1,0);
              }
            }
LAB_0153c580:
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0268c3e0(lVar4,0);
            return;
          }
        }
      }
    }
  }
LAB_0153c5b0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


