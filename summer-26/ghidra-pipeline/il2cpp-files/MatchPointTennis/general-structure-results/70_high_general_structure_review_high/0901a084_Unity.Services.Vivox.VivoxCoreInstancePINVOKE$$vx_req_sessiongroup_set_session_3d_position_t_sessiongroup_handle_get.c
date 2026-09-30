/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_sessiongroup_handle_get
ENTRY_POINT: 0901a084
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_sessiongroup_handle_get
               (void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
                    /* try { // try from 0901a084 to 0911a0d7 has its CatchHandler @ 0901a084
                       catch() { ... } // from try @ 0901a084 with catch @ 0901a084
                       catch() { ... } // from try @ 0901a164 with catch @ 0901a084
                       catch() { ... } // from try @ 0901a190 with catch @ 0901a084
                       catch() { ... } // from try @ 0901a228 with catch @ 0901a084
                       catch() { ... } // from try @ 0901a268 with catch @ 0901a084
                       catch() { ... } // from try @ 0901a2ac with catch @ 0901a084
                       catch() { ... } // from try @ 0901a2fc with catch @ 0901a084 */
  FUN_0744298c();
  FUN_07a4ce38(*unaff_x21,0);
  FUN_0744298c();
  FUN_07a4ce38(*unaff_x22,0);
  FUN_0744298c();
                    /* try { // try from 0901a0d8 to 0911a0df has its CatchHandler @ 0901a1a0 */
                    /* try { // try from 0901a0e0 to 0911a0eb has its CatchHandler @ 0901a1a4 */
  **(undefined8 **)(*unaff_x20 + 0xb8) = unaff_x19;
  thunk_FUN_044bb4b4(*(undefined8 *)(*unaff_x20 + 0xb8));
                    /* try { // try from 0901a0f0 to 0911a0f7 has its CatchHandler @ 0901a19c */
  lVar3 = thunk_FUN_0448520c(*unaff_x24);
                    /* try { // try from 0901a0fc to 0911a107 has its CatchHandler @ 0901a198 */
  FUN_05bad610(lVar3,*unaff_x23);
  uVar4 = FUN_07a4ce38(*unaff_x21,0);
  puVar2 = PTR_DAT_09f211b0;
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    lVar7 = *(long *)PTR_DAT_09f211b0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_044bb4b4();
      }
      else {
        FUN_05bade44(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      uVar4 = FUN_07a4ce38(*unaff_x22,0);
      lVar6 = *(long *)(lVar3 + 0x10);
      lVar7 = *(long *)puVar2;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        plVar5 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
        *plVar5 = lVar3;
        thunk_FUN_044bb4b4(plVar5,lVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


