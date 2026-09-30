/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 046ceca4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
               (long param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x21;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244(lVar1);
  }
  if ((*(byte *)(lVar1 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1)) {
    memcpy(unaff_x21 + 6,&stack0x00000000,0xa0);
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244(lVar1);
    }
    if ((*(byte *)(lVar1 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1))
    {
      thunk_FUN_03d233cc(unaff_x21 + 7,0);
      FUN_06579dbc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fecc();
}


