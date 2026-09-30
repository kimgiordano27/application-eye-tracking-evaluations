/*
FUNCTION_NAME: FUN_02312824
ENTRY_POINT: 02312824
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


void FUN_02312824(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781bfd & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03781bfd = 1;
  }
  uVar2 = FUN_0230f540(param_1);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
  }
  uVar3 = FUN_0268b4e0(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_0268fd4c(param_1,0);
    if (lVar4 == 0) goto LAB_02312944;
    uVar2 = FUN_010e5800(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
  }
  lVar4 = FUN_0230c72c(param_1);
  if (lVar4 != 0) {
    uVar3 = FUN_026685d8(lVar4,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar4 = FUN_0230f540(param_1);
    if (lVar4 != 0) {
      uVar2 = FUN_02665318(lVar4,0);
      lVar4 = *(long *)puVar1;
      uVar5 = *(undefined8 *)(param_1 + 0xa8);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar4);
      }
      uVar3 = FUN_02681b9c(uVar2,uVar5,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = FUN_0230f540(param_1);
      if (lVar4 != 0) {
        FUN_02666150(lVar4,*(undefined8 *)(param_1 + 0xa8),0);
        return;
      }
    }
  }
LAB_02312944:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


