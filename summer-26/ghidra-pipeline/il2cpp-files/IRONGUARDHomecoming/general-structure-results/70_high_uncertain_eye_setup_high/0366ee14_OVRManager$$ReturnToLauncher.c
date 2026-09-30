/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 0366ee14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__ReturnToLauncher(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  uStack0000000000000048 = in_stack_000000d8;
  uStack0000000000000040 = in_stack_000000d0;
  uStack0000000000000058 = in_stack_000000e8;
  uStack0000000000000050 = in_stack_000000e0;
  uStack0000000000000060 = in_stack_000000f0;
  FUN_03133480(param_1,&stack0x00000040,
               *(undefined8 *)(*(long *)(*(long *)(in_x10 + 0x20) + 0xc0) + 0x70));
  lVar2 = *(long *)(unaff_x20 + 0xe0);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(unaff_x20 + 0xd8),
               *(undefined8 *)(lVar2 + 0x28));
    lVar2 = *(long *)(unaff_x20 + 0x130);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      plVar5 = *(long **)(unaff_x20 + 0x78);
      *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
      if (plVar5 != (long *)0x0) {
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
                                      Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__
                              ,3);
LAB_0366eed0:
        (*(code *)*puVar1)(plVar5,puVar1[1]);
        unaff_x19[4] = in_stack_000000a0;
        unaff_x19[1] = in_stack_00000088;
        *unaff_x19 = in_stack_00000080;
        unaff_x19[3] = in_stack_00000098;
        unaff_x19[2] = in_stack_00000090;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


