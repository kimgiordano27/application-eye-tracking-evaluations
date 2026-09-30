/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 0313ec44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PlatformUIConfirmQuit(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x24;
  undefined8 unaff_d10;
  undefined4 unaff_s11;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  uStack000000000000008c = (undefined4)unaff_d10;
  uStack0000000000000090 = (undefined4)((ulong)unaff_d10 >> 0x20);
  uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,in_w8);
  uStack0000000000000018 = CONCAT44(uStack000000000000008c,in_stack_00000088);
  uStack0000000000000028 = CONCAT44(param_2,param_1);
  uStack0000000000000020 = CONCAT44(unaff_s11,uStack0000000000000090);
  lVar2 = *(long *)(unaff_x20 + 0xd8);
  uStack0000000000000030 = CONCAT44(uStack00000000000000a4,param_3);
  uStack0000000000000010 = in_stack_00000080;
  uStack0000000000000098 = param_1;
  uStack000000000000009c = param_2;
  uStack00000000000000a0 = param_3;
  if (lVar2 != 0) {
    lVar6 = *unaff_x24;
    in_stack_000000d0 = in_stack_00000080;
    lVar4 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    in_stack_000000d8 = uStack0000000000000018;
    in_stack_000000e0 = uStack0000000000000020;
    in_stack_000000e8 = uStack0000000000000028;
    in_stack_000000f0 = uStack0000000000000030;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      uStack0000000000000094 = unaff_s11;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        lVar4 = lVar4 + (long)(int)uVar1 * 0x28;
        *(undefined8 *)(lVar4 + 0x40) = uStack0000000000000030;
        *(undefined8 *)(lVar4 + 0x28) = uStack0000000000000018;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000080;
        *(undefined8 *)(lVar4 + 0x38) = uStack0000000000000028;
        *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000020;
      }
      else {
        in_stack_00000040 = in_stack_00000080;
        in_stack_00000048 = uStack0000000000000018;
        in_stack_00000050 = uStack0000000000000020;
        in_stack_00000058 = uStack0000000000000028;
        in_stack_00000060 = uStack0000000000000030;
        FUN_02b970b4(lVar2,&stack0x00000040,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      lVar2 = *(long *)(unaff_x20 + 0xe0);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))
                  (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(unaff_x20 + 0xd8),
                   *(undefined8 *)(lVar2 + 0x28));
        lVar2 = *(long *)(unaff_x20 + 0x130);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          plVar8 = *(long **)(unaff_x20 + 0x78);
          *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
          if (plVar8 != (long *)0x0) {
            lVar2 = *plVar8;
            uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d7f9e0) {
                  puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                  goto LAB_0313ed84;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d7f9e0,3);
LAB_0313ed84:
            (*(code *)*puVar3)(plVar8,puVar3[1]);
            unaff_x19[4] = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
            unaff_x19[1] = CONCAT44(uStack000000000000008c,in_stack_00000088);
            *unaff_x19 = in_stack_00000080;
            unaff_x19[3] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
            unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


