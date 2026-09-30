/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_text_connect_t_session_handle_set
ENTRY_POINT: 0901d0e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_text_connect_t_session_handle_set
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *puVar10;
  
  puVar4 = PTR_DAT_09fc0188;
  puVar3 = PTR_DAT_09f21180;
  puVar2 = PTR_DAT_09f21178;
  puVar10 = *(undefined8 **)(unaff_x22 + 0x28);
                    /* try { // try from 0901d120 to 0911d137 has its CatchHandler @ 0901d368 */
  FUN_0744298c();
  FUN_07a4ce38(*puVar10,0);
                    /* try { // try from 0901d144 to 0911d153 has its CatchHandler @ 0901d38c */
  FUN_0744298c();
  FUN_07a4ce38(*unaff_x21,0);
  FUN_0744298c();
  FUN_07a4ce38(*puVar10,0);
  FUN_0744298c();
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = unaff_x19;
  thunk_FUN_044bb4b4(*(undefined8 *)(*(long *)puVar4 + 0xb8));
  lVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_05bad610(lVar5,*(undefined8 *)puVar3);
  uVar6 = FUN_07a4ce38(*unaff_x21,0);
  puVar2 = PTR_DAT_09f211b0;
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)PTR_DAT_09f211b0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        thunk_FUN_044bb4b4();
      }
      else {
        FUN_05bade44(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = FUN_07a4ce38(*puVar10,0);
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar7 = lVar5;
        thunk_FUN_044bb4b4(plVar7,lVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


