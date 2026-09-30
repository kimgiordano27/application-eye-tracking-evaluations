/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$Invoke
ENTRY_POINT: 06931c08
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__Invoke
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *puVar4;
  long *unaff_x21;
  undefined4 uVar5;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  *(undefined8 *)(unaff_x19 + 0x34) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x2c) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0x3c) = in_stack_00000028;
  if ((*(char *)(unaff_x19 + 0xd0) != '\0') && (*(char *)(unaff_x19 + 0x28) == '\0')) {
    uStack0000000000000038 = *(undefined8 *)(unaff_x19 + 0x34);
    uStack0000000000000030 = *(undefined8 *)(unaff_x19 + 0x2c);
    uStack0000000000000040 = *(undefined8 *)(unaff_x19 + 0x3c);
    if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_07d28f48(0x44160000);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_07d2feec(unaff_x19 + 0x44,0);
      if (lVar2 != 0) {
        uVar3 = FUN_0447aad0(lVar2,*(undefined8 *)PTR_DAT_084872e8);
        puVar4 = (undefined8 *)(unaff_x19 + 0x20);
        *puVar4 = uVar3;
        thunk_FUN_03afed3c(puVar4,uVar3);
        uVar3 = *puVar4;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar1 = FUN_07c9c218(uVar3,0,0);
        if ((uVar1 & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x28) = 0;
          goto LAB_06931d20;
        }
        *(undefined1 *)(unaff_x19 + 0x28) = 1;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          lVar2 = FUN_07c98f88(*(long *)(unaff_x19 + 0x20),0);
          FUN_07d2fd90(unaff_x19 + 0x44,0);
          if (lVar2 != 0) {
            uVar5 = FUN_07cadf5c(lVar2,0);
            *(undefined4 *)(unaff_x19 + 0x70) = uVar5;
            *(undefined4 *)(unaff_x19 + 0x74) = param_2;
            *(undefined4 *)(unaff_x19 + 0x78) = param_3;
            goto LAB_06931d20;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
LAB_06931d20:
  if (*(char *)(unaff_x19 + 0xd1) != '\0') {
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  }
  return;
}


