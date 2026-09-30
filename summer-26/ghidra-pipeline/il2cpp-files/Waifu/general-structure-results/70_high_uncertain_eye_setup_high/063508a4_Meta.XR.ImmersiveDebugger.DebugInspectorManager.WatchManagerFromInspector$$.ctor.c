/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.WatchManagerFromInspector$$.ctor
ENTRY_POINT: 063508a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_WatchManagerFromInspector___ctor
               (long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_086de8a6 & 1) == 0) {
    FUN_0335b6c8(&DAT_083dfcb0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb148,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb040,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb460,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebb30,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebb48,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebce0,1);
    DataMemoryBarrier(2,3);
    DAT_086de8a6 = 1;
  }
  lVar6 = FUN_05b961dc(DAT_083dfcb0);
  if (((lVar6 != 0) && (lVar6 = FUN_0631798c(lVar6,0), lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x18) != 0)) {
    uVar5 = *(ushort *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x10) + (long)param_2 * 0xfc + 0xf2);
    if ((short)uVar5 < 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
      lVar6 = lVar7 + (ulong)uVar5 * 0x60;
      uVar1 = *(ulong *)(lVar6 + 0x40);
      uVar3 = *(undefined8 *)(lVar6 + 0x48);
      uVar2 = *(ulong *)(lVar6 + 0x50);
      uVar4 = *(undefined8 *)(lVar6 + 0x58);
      if (0 < *(int *)(lVar7 + (ulong)uVar5 * 0x60 + 0x38)) {
        FUN_042b4804(*(long *)(param_1 + 0x20),*(undefined8 *)(lVar6 + 0x30),
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083eb460 + 0x20) + 0xc0) + 0x60));
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        if (0 < (int)uVar3) {
          FUN_0429f208(*(long *)(param_1 + 0x28),uVar1 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083eb040 + 0x20) + 0xc0) + 0x60));
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          if (0 < (int)uVar4) {
            FUN_042a5698(*(long *)(param_1 + 0x30),uVar2 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eb148 + 0x20) + 0xc0) + 0x60));
          }
          if (*(long *)(param_1 + 0x38) != 0) {
            FUN_0438dc88(*(long *)(param_1 + 0x38),(int)(short)uVar5,DAT_083ebb30);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


