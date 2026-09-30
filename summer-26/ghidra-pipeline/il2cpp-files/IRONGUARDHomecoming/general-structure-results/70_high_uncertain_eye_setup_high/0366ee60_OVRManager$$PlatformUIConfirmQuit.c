/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 0366ee60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PlatformUIConfirmQuit(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int in_w9;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = in_w9 + 1;
  plVar5 = *(long **)(unaff_x20 + 0x78);
  *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_0366eed0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__,3);
LAB_0366eed0:
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  unaff_x19[4] = in_stack_000000a0;
  unaff_x19[1] = in_stack_00000088;
  *unaff_x19 = in_stack_00000080;
  unaff_x19[3] = in_stack_00000098;
  unaff_x19[2] = in_stack_00000090;
  return;
}


