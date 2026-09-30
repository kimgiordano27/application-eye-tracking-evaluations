/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_added_t$$Dispose
ENTRY_POINT: 085e5c7c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_evt_session_added_t__Dispose(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar4 [16];
  
  lVar2 = thunk_FUN_040b4efc(*unaff_x28);
  auVar4 = FUN_076bca34(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = unaff_x25;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar2 + 0x18) = unaff_x24;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar2 + 0x20) = unaff_x22;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar2 + 0x28) = unaff_x21;
    *(long *)(unaff_x23 + 0x28) = lVar2;
    uVar3 = thunk_FUN_040ec700((long *)(unaff_x23 + 0x28),lVar2);
    if (unaff_x20 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(unaff_x20 + 0x10) != '\0';
    }
    auVar4._8_8_ = *unaff_x27;
    auVar4._0_8_ = uVar3;
    *(bool *)(unaff_x23 + 0x20) = bVar1;
    if (unaff_x19 != 0) {
      FUN_085e57fc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830(auVar4._0_8_,auVar4._8_8_);
}


