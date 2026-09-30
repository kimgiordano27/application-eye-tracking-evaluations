/*
FUNCTION_NAME: OVRManager$$OnApplicationQuit
ENTRY_POINT: 0366edac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationQuit
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x24;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
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
  
  uVar9 = param_3._8_8_;
  uStack0000000000000020 = param_3._0_8_;
  uVar8 = param_2._8_8_;
  uStack0000000000000010 = param_2._0_8_;
  uStack0000000000000030 = param_1;
  if (param_4 != 0) {
    lVar5 = *unaff_x24;
    lVar3 = *(long *)(param_4 + 0x10);
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    in_stack_000000d0 = uStack0000000000000010;
    in_stack_000000d8 = uVar8;
    in_stack_000000e0 = uStack0000000000000020;
    in_stack_000000e8 = uVar9;
    in_stack_000000f0 = param_1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(param_4 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(param_4 + 0x18) = uVar1 + 1;
        lVar3 = lVar3 + (long)(int)uVar1 * 0x28;
        *(undefined8 *)(lVar3 + 0x40) = param_1;
        *(undefined8 *)(lVar3 + 0x28) = uVar8;
        *(undefined8 *)(lVar3 + 0x20) = uStack0000000000000010;
        *(undefined8 *)(lVar3 + 0x38) = uVar9;
        *(undefined8 *)(lVar3 + 0x30) = uStack0000000000000020;
      }
      else {
        in_stack_00000040 = uStack0000000000000010;
        in_stack_00000048 = uVar8;
        in_stack_00000050 = uStack0000000000000020;
        in_stack_00000058 = uVar9;
        in_stack_00000060 = param_1;
        FUN_03133480(param_4,&stack0x00000040,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar3 = *(long *)(unaff_x20 + 0xe0);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(unaff_x20 + 0xd8),
                   *(undefined8 *)(lVar3 + 0x28));
        lVar3 = *(long *)(unaff_x20 + 0x130);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          plVar7 = *(long **)(unaff_x20 + 0x78);
          *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
          if (plVar7 != (long *)0x0) {
            lVar3 = *plVar7;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) ==
                    *(long *)Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__) {
                  puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                  goto LAB_0366eed0;
                }
                uVar4 = uVar4 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined8 *)
                     FUN_01ecb238(plVar7,*(long *)
                                          Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__
                                  ,3);
LAB_0366eed0:
            (*(code *)*puVar2)(plVar7,puVar2[1]);
            unaff_x19[4] = in_stack_000000a0;
            unaff_x19[1] = in_stack_00000088;
            *unaff_x19 = in_stack_00000080;
            unaff_x19[3] = in_stack_00000098;
            unaff_x19[2] = in_stack_00000090;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


