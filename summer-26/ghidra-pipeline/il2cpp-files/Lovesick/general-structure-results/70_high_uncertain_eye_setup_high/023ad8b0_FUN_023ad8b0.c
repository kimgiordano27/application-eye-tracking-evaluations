/*
FUNCTION_NAME: FUN_023ad8b0
ENTRY_POINT: 023ad8b0
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


void FUN_023ad8b0(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_033f5400;
  if ((DAT_03781f6d & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f5400);
    thunk_FUN_00d48444(StringLiteral_5293);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_136__);
    DAT_03781f6d = 1;
  }
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_02888070(0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar5 = FUN_02681b9c(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = FUN_02888070(0);
    if (lVar6 == 0) goto LAB_023ada04;
    plVar7 = *(long **)(lVar6 + 0x20);
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)StringLiteral_5293 + 300);
      if ((bVar1 <= *(byte *)(*plVar7 + 300)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_5293
         )) {
        lVar6 = thunk_FUN_00d93c64(plVar7,0);
        if (lVar6 == 0) {
LAB_023ada04:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar6 = FUN_0178c390(lVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_136__,0);
        uVar5 = FUN_016ac4bc(lVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar6 == 0) goto LAB_023ada04;
          FUN_016ac474(lVar6,plVar7,0,0);
        }
      }
    }
  }
  FUN_023ad784();
  return;
}


