/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameSize
ENTRY_POINT: 05693324
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcFrameSize(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02d965b8();
  FUN_02d965b8(System_Func<InteractorRegisteredEventArgs>_TypeInfo);
  FUN_02d965b8(OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x7d2) = 1;
  if (unaff_x19 != 0) {
    uVar2 = thunk_FUN_06354368();
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      uVar3 = FUN_03c2311c(*(long *)(unaff_x20 + 0x10),uVar2,
                           *(undefined8 *)System_Func<InteractorRegisteredEventArgs>_TypeInfo);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0569342c;
        FUN_03c23c0c(*(long *)(unaff_x20 + 0x10),uVar2,
                     *(undefined8 *)System_Func<MouseCaptureEvent>_TypeInfo);
        puVar1 = OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo;
        if (*(int *)(*(long *)
                      OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo + 0xe4
                    ) == 0) {
          thunk_FUN_02df485c();
        }
        uVar3 = FUN_05693c30(uVar2);
        if ((uVar3 & 1) != 0) {
          uVar3 = FUN_05693b34();
          if ((uVar3 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar3 = FUN_05693c90(uVar2);
            if ((uVar3 & 1) == 0) {
              return;
            }
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar3 = FUN_05693d28(uVar2);
          if ((uVar3 & 1) == 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05693db4(uVar2);
            return;
          }
        }
      }
      return;
    }
  }
LAB_0569342c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


