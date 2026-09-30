/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_sessiongroup_handle_set
ENTRY_POINT: 09019fec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_sessiongroup_handle_set
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 *unaff_x21;
  
  uVar10 = *unaff_x21;
                    /* try { // try from 09019ff8 to 0911a007 has its CatchHandler @ 0901a008 */
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
                    /* catch() { ... } // from try @ 09019f90 with catch @ 0901a008
                       catch() { ... } // from try @ 09019ff8 with catch @ 0901a008 */
                    /* try { // try from 0901a00c to 0911a00f has its CatchHandler @ 0901a018 */
                    /* try { // try from 0901a010 to 0911a01b has its CatchHandler @ 09019c98 */
  FUN_07a4ce38(uVar10,0);
  puVar5 = PTR_DAT_09fc0098;
  puVar4 = PTR_DAT_09fc0028;
  puVar3 = PTR_DAT_09f21180;
  puVar2 = PTR_DAT_09f21178;
  if (unaff_x19 != 0) {
                    /* catch() { ... } // from try @ 09019f68 with catch @ 0901a018
                       catch() { ... } // from try @ 0901a00c with catch @ 0901a018 */
    FUN_0744298c();
    FUN_07a4ce38(*(undefined8 *)puVar4,0);
    FUN_0744298c();
    FUN_07a4ce38(*unaff_x21,0);
    FUN_0744298c();
    FUN_07a4ce38(*(undefined8 *)puVar4,0);
    FUN_0744298c();
    **(long **)(*(long *)puVar5 + 0xb8) = unaff_x19;
    thunk_FUN_044bb4b4(*(undefined8 *)(*(long *)puVar5 + 0xb8));
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_05bad610(lVar6,*(undefined8 *)puVar3);
    uVar10 = FUN_07a4ce38(*unaff_x21,0);
    puVar2 = PTR_DAT_09f211b0;
    if (lVar6 != 0) {
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)PTR_DAT_09f211b0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar6,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = FUN_07a4ce38(*(undefined8 *)puVar4,0);
        lVar8 = *(long *)(lVar6 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
            thunk_FUN_044bb4b4();
          }
          else {
            FUN_05bade44(lVar6,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
          *plVar7 = lVar6;
          thunk_FUN_044bb4b4(plVar7,lVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


