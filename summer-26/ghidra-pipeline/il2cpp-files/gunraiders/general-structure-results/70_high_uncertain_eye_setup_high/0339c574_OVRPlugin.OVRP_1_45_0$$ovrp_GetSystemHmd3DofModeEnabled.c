/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_GetSystemHmd3DofModeEnabled
ENTRY_POINT: 0339c574
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_45_0__ovrp_GetSystemHmd3DofModeEnabled(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
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
  undefined8 in_stack_00000020;
  
  uVar3 = FUN_03393964();
  puVar1 = Method_System_Collections_Generic_HashSet<Interactable>__ctor__;
  if ((int)uVar3 == 1) {
LAB_0339c5f8:
    *unaff_x23 = (char)uVar3;
  }
  else {
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(long *)(unaff_x21 + 0x20) == 0) {
LAB_0339c83c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar4 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    if ((uVar4 & 1) != 0) {
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339c83c;
      uVar2 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                           *(undefined8 *)puVar1);
      if (((uVar2 >> 1 & 1) == 0) && (uVar4 = FUN_0337d8fc(unaff_w26,0), (uVar4 & 1) != 0)) {
        uVar3 = (**(code **)(*unaff_x20 + 0x198))();
        uVar5 = FUN_033931b0();
        uVar4 = FUN_0337de00(uVar3,uVar5,0);
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_0339c5f8;
        }
      }
    }
    if (*unaff_x22 == 0) {
      *unaff_x29 = *(long *)(unaff_x19 + 0x48);
      uVar3 = 0;
    }
    else {
      thunk_FUN_01c5d21c(*unaff_x22,0);
      lVar6 = FUN_03395e54();
      *unaff_x29 = lVar6;
      if (lVar6 == *(long *)(unaff_x19 + 0x48)) {
        uVar3 = 0;
      }
      else {
        uVar5 = FUN_03396234();
        uVar3 = 0;
        *in_stack_00000018 = uVar5;
      }
    }
  }
  return uVar3;
}


