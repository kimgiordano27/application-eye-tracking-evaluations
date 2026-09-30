/*
FUNCTION_NAME: FUN_031f38e8
ENTRY_POINT: 031f38e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_031f38e8(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined4 in_stack_00000008;
  
  if (2 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x30) = param_1;
    uVar1 = thunk_FUN_01c273e8(PTR_DAT_04231e50);
    if (3 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (4 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x21 + 0x28);
        uVar1 = thunk_FUN_01c273e8(PTR_DAT_04231e50);
        if (5 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
          in_stack_00000008 = *(undefined4 *)(unaff_x21 + 0x10);
          uVar1 = thunk_FUN_01c273e8(OVRManager_PassthroughCapabilities_TypeInfo);
          plVar2 = (long *)thunk_FUN_01c49334(uVar1,&stack0x00000008);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
          }
          FUN_019b2708();
          FUN_019b8e08();
          FUN_031533cc();
          FUN_019b2708();
          FUN_019b8dd4();
          FUN_019b8e08();
          uVar1 = FUN_03315920();
          thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
          uVar3 = thunk_FUN_01c496e0();
          FUN_031dce5c(uVar3,uVar1,0);
          uVar1 = thunk_FUN_01c273e8(OVRManager_XrApi_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar3,uVar1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


