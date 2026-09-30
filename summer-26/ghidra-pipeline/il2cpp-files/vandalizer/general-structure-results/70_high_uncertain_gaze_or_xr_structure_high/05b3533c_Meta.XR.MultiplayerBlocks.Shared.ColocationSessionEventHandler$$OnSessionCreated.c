/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreated
ENTRY_POINT: 05b3533c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreated
               (undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  code *unaff_x26;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    uVar1 = (*unaff_x26)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    memcpy(&stack0x00000048,(void *)(unaff_x21 + (long)(int)unaff_w19 * (long)unaff_w24 + 0x20),0x48
          );
    memcpy(&stack0x00000000,unaff_x20,0x48);
    unaff_x26 = *(code **)(*unaff_x22 + 0x1b8);
    memcpy(&stack0x000000d8,&stack0x00000048,0x48);
    param_1 = &stack0x00000090;
    param_3 = 0x48;
    param_2 = (undefined1 *)register0x00000008;
  }
  return 0xffffffff;
}


