/*
FUNCTION_NAME: FUN_01feff38
ENTRY_POINT: 01feff38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_01feff38(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_0378081f & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRFaceSubsystem,_XRFaceSubsystem_Provider>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_ReflectionObject>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0378081f = 1;
  }
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRFaceSubsystem,_XRFaceSubsystem_Provider>__ctor__
  ;
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (param_2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar4 = (long *)FUN_01ff5160(uVar6);
  }
  else {
    if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar4 = (long *)FUN_01ff6800(param_2);
  }
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01780344(uVar6,0);
  if (plVar4 == (long *)0x0) {
LAB_01ff00c8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x1e0));
  if (plVar4 != (long *)0x0) {
    if (*plVar4 !=
        *(long *)Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_ReflectionObject>__ctor__) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar4);
    }
    if (plVar4[2] != 0) {
      if (param_2 == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar5 = (long *)FUN_01ff6a5c(uVar6);
      }
      else {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar5 = (long *)FUN_01ff6a00(param_2);
      }
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01ff008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar5 + 0x288))(plVar5,plVar4[2],*(undefined8 *)(*plVar5 + 0x290));
        return uVar6;
      }
      goto LAB_01ff00c8;
    }
  }
  return 0;
}


