/*
FUNCTION_NAME: CustomWebSocketSharp.CloseEventArgs$$get_PayloadData
ENTRY_POINT: 038b829c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void CustomWebSocketSharp_CloseEventArgs__get_PayloadData(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(byte *)(unaff_x20 + 0xc85) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86398);
    *(undefined1 *)(unaff_x20 + 0xc85) = 1;
  }
  puVar1 = PTR_DAT_07d86398;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar2 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar3 = *(long *)(lVar4 + 0x20 + uVar5 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar2 = FUN_075aa744(lVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if ((lVar3 == 0) || (lVar3 = FUN_075a73b4(lVar3,0), lVar3 == 0)) goto LAB_038b8364;
          FUN_075ba188(lVar3,0);
          FUN_07564f50(0);
        }
        uVar2 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    return;
  }
LAB_038b8364:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


