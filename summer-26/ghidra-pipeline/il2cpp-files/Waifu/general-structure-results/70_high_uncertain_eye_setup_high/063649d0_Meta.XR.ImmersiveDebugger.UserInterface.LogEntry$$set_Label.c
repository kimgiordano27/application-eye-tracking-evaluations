/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.LogEntry$$set_Label
ENTRY_POINT: 063649d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__set_Label
               (long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long param_6,long param_7,long param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_086de8f7 & 1) == 0) {
    FUN_0335b6c8(&DAT_083eb008,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb0f0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb120,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb440,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebc50,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebc98,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d28,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d38,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412dc8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d40,1);
    DataMemoryBarrier(2,3);
    DAT_086de8f7 = 1;
  }
  if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10) +
            (long)*(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x10) + (long)param_2 * 0x44 + 4) *
            0x50;
    if (*(int *)(lVar5 + 4) != 1) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x14);
      uVar2 = *(undefined4 *)(lVar5 + 0x34);
      uVar3 = *(undefined4 *)(lVar5 + 0x24);
      uVar4 = *(undefined4 *)(lVar5 + 0x44);
      FUN_0405d5ec(*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18),uVar1,param_3,
                   DAT_08412d38);
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        FUN_0405ddc4(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar3,param_4,
                     DAT_08412dc8);
        if ((param_5 != 0) && (*(long *)(param_5 + 0x18) != 0)) {
          lVar5 = *(long *)(param_1 + 0x28);
          if (lVar5 == 0) goto LAB_06364c44;
          FUN_0405d6dc(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar1,param_5,
                       DAT_08412d40);
        }
        if ((param_7 != 0) && (*(long *)(param_7 + 0x18) != 0)) {
          lVar5 = *(long *)(param_1 + 0x48);
          if (lVar5 == 0) goto LAB_06364c44;
          FUN_0405d5ec(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar1,param_7,
                       DAT_08412d38);
        }
        if ((param_8 != 0) && (*(long *)(param_8 + 0x18) != 0)) {
          lVar5 = *(long *)(param_1 + 0x50);
          if (lVar5 == 0) goto LAB_06364c44;
          FUN_0405d51c(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar4,param_8,
                       DAT_08412d28);
        }
        if (param_6 == 0) {
          return;
        }
        if (*(long *)(param_6 + 0x18) == 0) {
          return;
        }
        lVar5 = *(long *)(param_1 + 0x40);
        if (lVar5 != 0) {
          FUN_0405d51c(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar2,param_6,
                       DAT_08412d28);
          return;
        }
      }
    }
  }
LAB_06364c44:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


