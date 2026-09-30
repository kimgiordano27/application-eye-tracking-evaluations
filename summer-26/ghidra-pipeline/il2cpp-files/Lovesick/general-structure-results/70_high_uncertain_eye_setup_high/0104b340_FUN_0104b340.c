/*
FUNCTION_NAME: FUN_0104b340
ENTRY_POINT: 0104b340
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0104b340(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_38;
  
  puVar1 = PTR_DAT_033f5870;
  if ((DAT_0377602a & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_57__);
    thunk_FUN_00d48444(
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_SetValueSlow__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5870);
    DAT_0377602a = 1;
  }
  lVar3 = *(long *)puVar1;
  lVar5 = *(long *)(param_1 + 0x28);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_57__;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar6 == 0) goto LAB_0104b4a4;
    FUN_0136b58c(lVar6,uVar7,
                 *(undefined8 *)
                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_SetValueSlow__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar6;
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (lVar5 != 0) {
    FUN_01322b20(lVar5,lVar6,&local_38,
                 *(undefined8 *)Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_0268b4e0(local_38,0,0);
    if ((uVar4 & 1) != 0) {
      local_38 = FUN_0104b1bc(param_1);
    }
    if (local_38 != 0) {
      *(undefined1 *)(local_38 + 0x19) = 1;
      return local_38;
    }
  }
LAB_0104b4a4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


