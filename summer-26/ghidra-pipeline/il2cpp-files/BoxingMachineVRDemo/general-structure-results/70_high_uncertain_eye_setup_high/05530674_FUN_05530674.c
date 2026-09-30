/*
FUNCTION_NAME: FUN_05530674
ENTRY_POINT: 05530674
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05530674(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_06b7ef62 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782488);
    DAT_06b7ef62 = 1;
  }
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      do {
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 == 0) goto LAB_05530710;
        if (*(long *)(lVar4 + 0x28) == *(long *)(param_2 + 0x28)) {
          thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
          uVar1 = thunk_FUN_02d9d534();
          uVar2 = thunk_FUN_02dc61f4(
                                    System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                    );
          FUN_05007004(uVar1,uVar2,0);
          uVar2 = thunk_FUN_02dc61f4(
                                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar1,uVar2);
        }
      } while (lVar4 != lVar3);
    }
    lVar3 = param_2;
    if (*(long *)(param_2 + 0x10) != 0) {
      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782488);
      FUN_0552a834(lVar3,param_2);
    }
    FUN_0553075c(param_1,lVar3);
    return;
  }
LAB_05530710:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


