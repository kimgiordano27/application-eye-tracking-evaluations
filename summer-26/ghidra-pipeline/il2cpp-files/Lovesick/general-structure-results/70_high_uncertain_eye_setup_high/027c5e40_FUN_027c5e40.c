/*
FUNCTION_NAME: FUN_027c5e40
ENTRY_POINT: 027c5e40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_027c5e40(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((DAT_0378889b & 1) == 0) {
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<float>_ResizeInitialized__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Models_DeserializableList<ApplicationInvite>__ctor__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5177);
    DAT_0378889b = 1;
  }
  puVar3 = Method_Oculus_Platform_Models_DeserializableList<ApplicationInvite>__ctor__;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 300);
    if ((bVar1 <= *(byte *)(*param_3 + 300)) &&
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_5177)
       ) {
      return param_3[3];
    }
  }
  lVar4 = *(long *)Method_Oculus_Platform_Models_DeserializableList<ApplicationInvite>__ctor__;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar3;
  }
  lVar5 = *(long *)(lVar4 + 0xb8);
  if (param_3 != *(long **)(lVar5 + 0x20)) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar3;
      lVar5 = *(long *)(lVar4 + 0xb8);
    }
    if (param_3 != *(long **)(lVar5 + 0x28)) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar3;
        lVar5 = *(long *)(lVar4 + 0xb8);
      }
      if (param_3 != *(long **)(lVar5 + 0x10)) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar3;
          lVar5 = *(long *)(lVar4 + 0xb8);
        }
        if (param_3 != *(long **)(lVar5 + 0x18)) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar4 = *(long *)puVar3;
            lVar5 = *(long *)(lVar4 + 0xb8);
          }
          if (param_3 != *(long **)(lVar5 + 8)) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar4 = *(long *)puVar3;
            }
            if (param_3 != (long *)**(long **)(lVar4 + 0xb8)) {
              return param_2;
            }
          }
        }
      }
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Method_Obi_ObiNativeList<float>_ResizeInitialized__ + 300);
        if ((*(byte *)(*param_3 + 300) < bVar1) ||
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_Obi_ObiNativeList<float>_ResizeInitialized__)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(param_3);
        }
      }
      lVar4 = FUN_027c60f4(param_1,param_2,param_3);
      return lVar4;
    }
  }
  puVar2 = OVRPlugin_OVRP_1_29_0_TypeInfo;
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar3;
  }
  plVar7 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  if (param_3 == plVar7) {
    if (DAT_037885f2 == '\0') {
      thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
      DAT_037885f2 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar2;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  }
  else {
    if (DAT_037885f1 == '\0') {
      thunk_FUN_00d48444(OVRPlugin_OVRP_1_29_0_TypeInfo);
      DAT_037885f1 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar2;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = FUN_02763f54(lVar5,param_2,*puVar6,0);
  return lVar4;
}


