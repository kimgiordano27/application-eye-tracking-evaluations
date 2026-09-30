/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeHeight
ENTRY_POINT: 06af68ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeHeight(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  puVar1 = (undefined8 *)FUN_0338f71c();
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083c2dd8) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_1_0___cctor;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c2dd8,2);
OVRPlugin_OVRP_1_1_0___cctor:
    uVar5 = (*(code *)*puVar1)(plVar2,unaff_w20,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      FUN_06af64e4();
      if (*(long *)(unaff_x21 + 0x80) == 0) goto LAB_06af69cc;
      FUN_06aca474(*(long *)(unaff_x21 + 0x80),unaff_w20,0);
      uVar3 = 1;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      unaff_x19[1] = in_stack_00000008;
      *unaff_x19 = in_stack_00000000;
    }
    return uVar3;
  }
LAB_06af69cc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


