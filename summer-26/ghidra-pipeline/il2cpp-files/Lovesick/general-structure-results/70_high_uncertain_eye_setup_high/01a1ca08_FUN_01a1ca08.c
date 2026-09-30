/*
FUNCTION_NAME: FUN_01a1ca08
ENTRY_POINT: 01a1ca08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01a1ca08(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377a9d1 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_64__);
    DAT_0377a9d1 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_02681b9c(uVar5,0,0);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_64__;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar3 = FUN_01991930(*(long *)(param_1 + 0x20),0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar4);
      }
      if (lVar3 != 0) {
        uVar6 = 0x3f800000;
        if ((param_2 & 1) == 0) {
          uVar6 = 0;
        }
        FUN_0267be98(uVar6,lVar3,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_019a1c58(*(long *)(param_1 + 0x20),0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return;
}


