/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 06af6888
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight(undefined1 param_1 [16])

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  *(long *)((long)unaff_x19 + 0x14) = param_1._8_8_;
  *(long *)((long)unaff_x19 + 0xc) = param_1._0_8_;
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  uVar1 = FUN_06af6084();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_06af6004();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083cd0e8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06af6900;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cd0e8,0);
LAB_06af6900:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_083c2dd8) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_1_0___cctor;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c2dd8,2);
OVRPlugin_OVRP_1_1_0___cctor:
      uVar1 = (*(code *)*puVar3)(plVar2,unaff_w20,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      FUN_06af64e4();
      if (*(long *)(unaff_x21 + 0x80) != 0) {
        FUN_06aca474(*(long *)(unaff_x21 + 0x80),unaff_w20,0);
        *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_)
        ;
        unaff_x19[1] = in_stack_00000008;
        *unaff_x19 = in_stack_00000000;
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


