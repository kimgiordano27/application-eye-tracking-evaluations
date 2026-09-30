/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03a80efc
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
          (void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x25;
  long unaff_x29;
  
  if (in_ZR || in_NG != in_OV) {
    uVar1 = FUN_060a449c(0);
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x38);
    lVar2 = *(long *)(lVar3 + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
      lVar3 = *(long *)(unaff_x20 + 0x38);
    }
    FUN_02f08988(lVar2,*(undefined8 *)(lVar3 + 0x18));
    lVar3 = *(long *)(unaff_x20 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
    lVar2 = *(long *)(lVar3 + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
      lVar3 = *(long *)(unaff_x20 + 0x38);
    }
    FUN_02f08988(lVar2,*(undefined8 *)(lVar3 + 0x20));
    FUN_060a1514(unaff_x29 + -0x18,uVar4,unaff_x29 + -0x14,*(undefined4 *)(unaff_x29 + -0x10),0);
    uVar1 = *(undefined4 *)(unaff_x29 + -0x18);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


