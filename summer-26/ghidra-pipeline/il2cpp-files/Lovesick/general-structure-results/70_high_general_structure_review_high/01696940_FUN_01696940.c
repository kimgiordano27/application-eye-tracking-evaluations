/*
FUNCTION_NAME: FUN_01696940
ENTRY_POINT: 01696940
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void FUN_01696940(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_24;
  
  puVar2 = System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo;
  if ((DAT_03778533 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_RCG_Lovesick_ControllerMapping_DialogueSkipReleased__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_03778533 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar3 == 0) goto LAB_01696a98;
  FUN_017b46ec(lVar3,0);
  if (param_2 == 0x14) {
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_RCG_Lovesick_ControllerMapping_DialogueSkipReleased__);
    if (lVar4 == 0) goto LAB_01696a98;
    FUN_017b46ec(lVar4,0);
    FUN_01687e68(lVar4,param_1);
    *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_01696a98;
    plVar5 = (long *)FUN_01691dc0(*(long *)(param_1 + 0x10),*(undefined4 *)(lVar4 + 0x14));
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0x18) = 0;
LAB_01696aa0:
      uVar6 = thunk_FUN_00d48444(StringLiteral_3033);
      uVar6 = FUN_00da4fb8(uVar6,2);
      FUN_00ac2be8();
      puVar2 = Method_BarCrowd_<ResetLineCoroutine>d__10_System_Collections_IEnumerator_Reset__;
      uVar7 = thunk_FUN_00d48444(
                                Method_BarCrowd_<ResetLineCoroutine>d__10_System_Collections_IEnumerator_Reset__
                                );
      FUN_00acb0b4(uVar6,uVar7);
      uVar7 = thunk_FUN_00d48444(puVar2);
      FUN_00adb25c(uVar6,0,uVar7);
      FUN_00ac2be8(lVar4);
      local_24 = *(undefined4 *)(lVar4 + 0x14);
      uVar7 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                );
      uVar7 = thunk_FUN_00d61fa0(uVar7,&local_24);
      FUN_00ac2be8(uVar6);
      FUN_00acb0b4(uVar6,uVar7);
      FUN_00adb25c(uVar6,1,uVar7);
      uVar7 = thunk_FUN_00d48444(StringLiteral_12627);
      uVar6 = FUN_017b63dc(uVar7,uVar6,0);
      thunk_FUN_00d48444(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                        );
      uVar7 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_01679968(uVar7,uVar6,0);
      uVar6 = thunk_FUN_00d48444(System_Runtime_InteropServices_UnmanagedType_var);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,uVar6);
    }
    if (*plVar5 !=
        *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
      plVar5 = (long *)0x0;
    }
    *(long **)(lVar3 + 0x18) = plVar5;
    if (plVar5 == (long *)0x0) goto LAB_01696aa0;
  }
  else {
    FUN_01687e00(lVar3,param_1);
  }
  puVar2 = Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item4__;
  lVar4 = FUN_016967a8(param_1);
  uVar1 = *(undefined4 *)(lVar3 + 0x10);
  uVar6 = *(undefined8 *)(lVar3 + 0x18);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar6;
    if (lVar4 != 0) {
      FUN_01699cc0(lVar4,uVar1,lVar3,0);
      return;
    }
  }
LAB_01696a98:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


