/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$ovrp_SetExternalCameraProperties
ENTRY_POINT: 0339c85c
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


bool OVRPlugin_OVRP_1_48_0__ovrp_SetExternalCameraProperties
               (ulong param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    *(undefined1 *)(unaff_x23 + 0x6c0) = 1;
  }
  if ((unaff_x20 == 0) && (iVar3 = FUN_03393964(param_2,param_4,param_3), iVar3 == 1)) {
LAB_0339c90c:
    bVar2 = false;
  }
  else {
    puVar1 = Method_System_Collections_Generic_HashSet<Interactable>__ctor__;
    if (param_3 == 0) {
LAB_0339c934:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    in_stack_00000008 = *(undefined8 *)(param_3 + 0x90);
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_0339c934;
    uVar5 = FUN_02f211a0(&stack0x00000008,*(undefined4 *)(*(long *)(param_2 + 0x20) + 0x2c),
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    if ((uVar5 & 1) != 0) {
      in_stack_00000008 = *(undefined8 *)(param_3 + 0x90);
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_0339c934;
      uVar4 = FUN_02f211a0(&stack0x00000008,*(undefined4 *)(*(long *)(param_2 + 0x20) + 0x2c),
                           *(undefined8 *)puVar1);
      if ((uVar4 >> 1 & 1) == 0) {
        FUN_033931b0(param_3);
        uVar5 = FUN_0337de00();
        if ((uVar5 & 1) != 0) goto LAB_0339c90c;
      }
    }
    bVar2 = *(char *)(param_3 + 0x82) != '\0';
  }
  return bVar2;
}


