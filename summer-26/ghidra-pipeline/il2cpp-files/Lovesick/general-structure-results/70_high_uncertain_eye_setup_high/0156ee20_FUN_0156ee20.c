/*
FUNCTION_NAME: FUN_0156ee20
ENTRY_POINT: 0156ee20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0156ee20(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_03777c5b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_910);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_GetOrAddComponent<CanvasGroup>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_Character>__ctor__);
    thunk_FUN_00d48444(Method_System_Uri_get_IsUnc__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Text_RegularExpressions_Match_TypeInfo);
    DAT_03777c5b = 1;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar3 = FUN_0129aa60(*(long *)(param_1 + 0x60),param_2,
                         *(undefined8 *)Method_TMPro_TMP_Dropdown_GetOrAddComponent<CanvasGroup>__);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<TMP_Character>__ctor__);
    puVar1 = System_Text_RegularExpressions_Match_TypeInfo;
    if (lVar4 != 0) {
      FUN_017b46ec(lVar4,0);
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar5 = FUN_0159d3c4(param_2,0,uVar8,0);
      puVar2 = Method_System_Uri_get_IsUnc__;
      puVar1 = PTR_DAT_033f3868;
      if (param_2 != 0) {
        uVar8 = FUN_0268b6ac(param_2,0);
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar7 = *(long *)puVar2;
        }
        uVar8 = FUN_015f5b28(uVar8,**(undefined8 **)(lVar7 + 0xb8),0);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar7 != 0) {
          FUN_0268afbc(lVar7,uVar8,0);
          lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar7,0);
          uVar8 = FUN_0268fd10(param_2,0);
          puVar1 = OVRPlugin_OVRP_1_93_0_TypeInfo;
          if (lVar6 != 0) {
            FUN_026a0040(lVar6,uVar8,0,0);
            FUN_0268aca4(lVar7,*(undefined4 *)(param_1 + 0x48),0);
            *(long *)(lVar4 + 0x10) = lVar7;
            lVar6 = FUN_010e5800(lVar7,*(undefined8 *)puVar1);
            puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
            if (lVar6 != 0) {
              FUN_02677530(lVar6,lVar5,0);
              uVar8 = *(undefined8 *)(param_1 + 0x20);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_02681b9c(uVar8,0,0);
              if ((uVar3 & 1) != 0) {
                lVar7 = FUN_010e5800(lVar7,*(undefined8 *)UnityEngine_Pose___TypeInfo);
                if (lVar7 == 0) goto LAB_0156f108;
                FUN_02668990(lVar7,*(undefined8 *)(param_1 + 0x20),0);
                FUN_026682c8(lVar7,*(undefined1 *)(param_1 + 0x34),0);
                FUN_0266622c(lVar7,*(char *)(param_1 + 0x35) == '\0',0);
              }
              uVar8 = FUN_0268b6ac(param_2,0);
              if (lVar5 != 0) {
                uVar8 = FUN_0268b75c(lVar5,uVar8,0);
                *(long *)(lVar4 + 0x18) = lVar5;
                if (*(char *)(param_1 + 0x2c) != '\0') {
                  uVar8 = FUN_0156fdac(uVar8,param_2,lVar4);
                  *(undefined8 *)(lVar4 + 0x20) = uVar8;
                }
                if (*(long *)(param_1 + 0x60) != 0) {
                  FUN_0129a054(*(long *)(param_1 + 0x60),param_2,lVar4,
                               *(undefined8 *)StringLiteral_910);
                  return lVar4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0156f108:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


