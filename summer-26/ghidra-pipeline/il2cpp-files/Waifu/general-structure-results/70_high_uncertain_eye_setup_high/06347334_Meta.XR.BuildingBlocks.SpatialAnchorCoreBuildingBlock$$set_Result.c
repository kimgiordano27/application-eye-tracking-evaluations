/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock$$set_Result
ENTRY_POINT: 06347334
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock__set_Result(long param_1,int param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_086de880 & 1) == 0) {
    FUN_0335b6c8(&DAT_083dfcb0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eaff8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb2a0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb2c8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb970,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb988,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebce0,1);
    DataMemoryBarrier(2,3);
    DAT_086de880 = 1;
  }
  lVar2 = FUN_05b961dc(DAT_083dfcb0);
  if (((lVar2 != 0) && (lVar2 = FUN_0631798c(lVar2,0), lVar2 != 0)) &&
     (*(long *)(lVar2 + 0x18) != 0)) {
    uVar1 = *(ushort *)(*(long *)(*(long *)(lVar2 + 0x18) + 0x10) + (long)param_2 * 0xfc + 0xda);
    if ((short)uVar1 < 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
      lVar2 = lVar3 + (ulong)uVar1 * 0x34;
      uVar4 = *(ulong *)(lVar2 + 0x24);
      uVar5 = *(undefined8 *)(lVar2 + 0x2c);
      if (0 < *(int *)(lVar3 + (ulong)uVar1 * 0x34 + 0x1c)) {
        FUN_042aac84(*(long *)(param_1 + 0x20),*(undefined8 *)(lVar2 + 0x14),
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083eb2a0 + 0x20) + 0xc0) + 0x60));
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        if ((int)uVar5 < 1) {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_06347504;
        }
        else {
          FUN_042aba84(*(long *)(param_1 + 0x28),uVar4 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083eb2c8 + 0x20) + 0xc0) + 0x60));
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_06347504;
          FUN_0429e43c(*(long *)(param_1 + 0x38),uVar4 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083eaff8 + 0x20) + 0xc0) + 0x60));
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          FUN_0438a6ec(*(long *)(param_1 + 0x30),(int)(short)uVar1,DAT_083eb970);
          return;
        }
      }
    }
  }
LAB_06347504:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


