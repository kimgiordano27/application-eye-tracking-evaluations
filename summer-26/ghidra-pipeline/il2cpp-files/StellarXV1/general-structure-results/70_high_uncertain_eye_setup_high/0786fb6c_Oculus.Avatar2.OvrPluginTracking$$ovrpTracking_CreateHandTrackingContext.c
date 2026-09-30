/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateHandTrackingContext
ENTRY_POINT: 0786fb6c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateHandTrackingContext(code *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long in_stack_00000018;
  
  uVar1 = (*param_1)();
  if ((uVar1 & 1) == 0) {
    FUN_0786fd40();
    uVar3 = 0;
  }
  else {
    plVar6 = *(long **)(in_stack_00000018 + 0x48);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0928f438) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0786fbe8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_0928f438,0);
LAB_0786fbe8:
    uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    *(undefined8 *)(in_stack_00000018 + 0x38) = uVar3;
    thunk_FUN_040ec700();
    plVar6 = *(long **)(in_stack_00000018 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = (**(code **)(*plVar6 + 0x1c8))
                      (plVar6,*(undefined8 *)(in_stack_00000018 + 0x38),
                       *(undefined8 *)(*plVar6 + 0x1d0));
    *(undefined8 *)(in_stack_00000018 + 0x40) = uVar3;
    thunk_FUN_040ec700();
    if (*(long *)(in_stack_00000018 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_00000018 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined8 *)(*(long *)(in_stack_00000018 + 0x40) + 0x10) =
         *(undefined8 *)(*(long *)(in_stack_00000018 + 0x20) + 0x20);
    thunk_FUN_040ec700();
    plVar6 = *(long **)(in_stack_00000018 + 0x40);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    (**(code **)(*plVar6 + 0x178))
              (plVar6,*(undefined8 *)(in_stack_00000018 + 0x28),*(undefined8 *)(*plVar6 + 0x180));
    *(undefined8 *)(in_stack_00000018 + 0x10) = *(undefined8 *)(in_stack_00000018 + 0x40);
    thunk_FUN_040ec700();
    uVar3 = 1;
    *(undefined4 *)(in_stack_00000018 + 0x18) = 2;
  }
  return uVar3;
}


