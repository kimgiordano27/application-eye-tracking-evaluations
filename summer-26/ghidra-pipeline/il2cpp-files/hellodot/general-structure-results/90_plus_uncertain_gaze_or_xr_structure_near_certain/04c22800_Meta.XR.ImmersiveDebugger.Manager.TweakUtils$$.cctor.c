/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$.cctor
ENTRY_POINT: 04c22800
PROGRAM: hellodot-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int *unaff_x19;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
  *(undefined1 *)(unaff_x20 + 0x689) = 1;
  puVar3 = PTR_DAT_065c84d8;
  if (*unaff_x19 == 0) {
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x19 + 8);
    uVar2 = *(undefined8 *)(unaff_x19 + 10);
    if (*(int *)(*(long *)PTR_DAT_065c89a0 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar4 = Niantic_Platform_Analytics_Telemetry_ClientTelemetryCommonFilterProto__set_OperatingSystemName
                      (uVar1,uVar2,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar6 = FUN_04fa5130(lVar4,0,0);
    uVar5 = FUN_04e5bb90();
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0336124c(unaff_x19 + 2);
      return;
    }
  }
  FUN_04e5bbac();
  *unaff_x19 = -2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04e5a1e4(unaff_x19 + 2,0);
  return;
}


