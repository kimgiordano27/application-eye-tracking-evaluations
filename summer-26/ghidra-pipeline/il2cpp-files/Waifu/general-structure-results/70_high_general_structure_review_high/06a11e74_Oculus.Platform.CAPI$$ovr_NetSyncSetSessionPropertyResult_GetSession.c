/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncSetSessionPropertyResult_GetSession
ENTRY_POINT: 06a11e74
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


void Oculus_Platform_CAPI__ovr_NetSyncSetSessionPropertyResult_GetSession(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f3e78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cf7d8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xc49) = unaff_w22;
  if (unaff_x20 != 0) {
    if (DAT_086f1fd8 == (code *)0x0) {
      DAT_086f1fd8 = (code *)FUN_033d1b68("UnityEngine.Collider::get_attachedRigidbody()");
    }
    uVar1 = (*DAT_086f1fd8)();
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083cf7d8);
    }
    uVar2 = FUN_07a119fc(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      uVar2 = FUN_04ab1208(*(long *)(unaff_x19 + 0x28),uVar1,DAT_083f3e58);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_04ab22a0(*(long *)(unaff_x19 + 0x28),uVar1,DAT_083f3e78);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


