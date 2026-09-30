/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeDepth
ENTRY_POINT: 06af680c
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


undefined8
OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeDepth(long param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  if ((*(byte *)(unaff_x22 + 0x4eb) & 1) == 0) {
    FUN_0335b6c8(&DAT_083c2dd8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cd0e8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cffc8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x22 + 0x4eb) = 1;
  }
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_07a1747c(0);
  *(undefined8 *)((long)param_3 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  param_3[1] = in_stack_00000008;
  *param_3 = in_stack_00000000;
  uVar1 = FUN_06af6084(param_1);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_06af6004(param_1);
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
      uVar1 = (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      FUN_06af64e4(param_1);
      if (*(long *)(param_1 + 0x80) != 0) {
        FUN_06aca474(*(long *)(param_1 + 0x80),param_2,0);
        *(undefined8 *)((long)param_3 + 0x14) = uStack0000000000000014;
        *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
        param_3[1] = in_stack_00000008;
        *param_3 = in_stack_00000000;
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


