/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$.cctor
ENTRY_POINT: 0339c5f0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_45_0___cctor(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x23;
  undefined4 unaff_w26;
  long *unaff_x29;
  undefined8 *in_stack_00000018;
  undefined8 uStack0000000000000020;
  
  puVar1 = Method_System_Collections_Generic_HashSet<Interactable>__ctor__;
  if ((int)param_1 == 1) {
LAB_0339c5f8:
    *unaff_x23 = (char)param_1;
  }
  else {
    uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(long *)(unaff_x21 + 0x20) == 0) {
LAB_0339c83c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar3 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    if ((uVar3 & 1) != 0) {
      uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339c83c;
      uVar2 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                           *(undefined8 *)puVar1);
      if (((uVar2 >> 1 & 1) == 0) && (uVar3 = FUN_0337d8fc(unaff_w26,0), (uVar3 & 1) != 0)) {
        uVar4 = (**(code **)(*unaff_x20 + 0x198))();
        uVar5 = FUN_033931b0();
        uVar3 = FUN_0337de00(uVar4,uVar5,0);
        if ((uVar3 & 1) != 0) {
          param_1 = 1;
          goto LAB_0339c5f8;
        }
      }
    }
    if (*unaff_x22 == 0) {
      *unaff_x29 = *(long *)(unaff_x19 + 0x48);
      param_1 = 0;
    }
    else {
      thunk_FUN_01c5d21c(*unaff_x22,0);
      lVar6 = FUN_03395e54();
      *unaff_x29 = lVar6;
      if (lVar6 == *(long *)(unaff_x19 + 0x48)) {
        param_1 = 0;
      }
      else {
        uVar4 = FUN_03396234();
        param_1 = 0;
        *in_stack_00000018 = uVar4;
      }
    }
  }
  return param_1;
}


