/*
FUNCTION_NAME: FUN_026a8388
ENTRY_POINT: 026a8388
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_026a8388(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  puVar1 = StringLiteral_3033;
  if ((DAT_03786755 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(UnityEngine_Pool_CollectionPool<List<Mask>,_Mask>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                      );
    DAT_03786755 = 1;
  }
  plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,4);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((param_1 != 0) &&
     (lVar3 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_026a84d0:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = param_1;
    lVar3 = FUN_017b7e58(0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_026a84d0;
    puVar1 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
    ;
    uVar6 = *(uint *)(plVar2 + 3);
    if (1 < uVar6) {
      plVar2[5] = lVar3;
      lVar3 = *(long *)puVar1;
      if (lVar3 != 0) {
        lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar3 == 0) goto LAB_026a84d0;
        uVar6 = *(uint *)(plVar2 + 3);
      }
      if (2 < uVar6) {
        plVar2[6] = *(long *)puVar1;
        if (param_2 != 0) {
          lVar3 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(*plVar2 + 0x40));
          if (lVar3 == 0) goto LAB_026a84d0;
          uVar6 = *(uint *)(plVar2 + 3);
        }
        puVar1 = UnityEngine_Pool_CollectionPool<List<Mask>,_Mask>_TypeInfo;
        if (3 < uVar6) {
          plVar2[7] = param_2;
          FUN_026f7364(*(undefined8 *)puVar1,plVar2,0);
          FUN_026a829c();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


