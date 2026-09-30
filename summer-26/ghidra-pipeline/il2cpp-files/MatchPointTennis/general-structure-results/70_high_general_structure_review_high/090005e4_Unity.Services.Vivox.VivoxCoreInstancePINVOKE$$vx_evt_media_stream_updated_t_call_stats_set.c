/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_call_stats_set
ENTRY_POINT: 090005e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_call_stats_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar9;
  long unaff_x23;
  undefined8 *puVar10;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  undefined8 uStack0000000000000008;
  
                    /* try { // try from 090005e4 to 091005e7 has its CatchHandler @ 09000788 */
                    /* try { // try from 090005e8 to 091005ff has its CatchHandler @ 09000790 */
  *(undefined1 *)(unaff_x23 + 0x540) = 1;
  puVar1 = PTR_DAT_09f1e5f0;
  uStack0000000000000008 = 0;
                    /* try { // try from 09000600 to 09100613 has its CatchHandler @ 090000a8 */
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a80df4();
                    /* try { // try from 09000614 to 09100623 has its CatchHandler @ 09000790 */
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_044bb4b4();
                    /* try { // try from 09000628 to 0910062b has its CatchHandler @ 09000784 */
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  thunk_FUN_044bb4b4();
                    /* try { // try from 09000634 to 09100637 has its CatchHandler @ 09000780 */
  puVar10 = (undefined8 *)(unaff_x19 + 0x20);
  *puVar10 = unaff_x27;
                    /* try { // try from 0900063c to 0910063f has its CatchHandler @ 0900077c */
                    /* try { // try from 09000640 to 09100687 has its CatchHandler @ 09000778 */
  thunk_FUN_044bb4b4(puVar10);
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x26;
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x22;
  thunk_FUN_044bb4b4();
  puVar9 = (undefined8 *)(unaff_x19 + 0x38);
  *puVar9 = unaff_x25;
  thunk_FUN_044bb4b4(puVar9);
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x24;
  lVar3 = FUN_04447c90(*(undefined8 *)puVar1,5);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_09fbf2e0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20));
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = unaff_x21;
        thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_09fbc998;
          thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x30));
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = unaff_x20;
            thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x38));
            puVar2 = PTR_DAT_09f1ee00;
            puVar1 = PTR_DAT_09f1ede0;
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_09fbf388;
              thunk_FUN_044bb4b4();
              uVar4 = FUN_078b57fc(lVar3,0);
              puVar8 = (undefined8 *)(unaff_x19 + 0x48);
              *puVar8 = uVar4;
              thunk_FUN_044bb4b4(puVar8,uVar4);
              lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
              FUN_05bad610(lVar3,*(undefined8 *)puVar1);
              uVar5 = FUN_078b4450(*(undefined8 *)(unaff_x19 + 0x20),0);
              if ((uVar5 & 1) == 0) {
                lVar6 = *unaff_x28;
                uVar4 = *puVar10;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  lVar6 = thunk_FUN_044a54b4();
                }
                FUN_08ffea3c(lVar6,lVar3,*(undefined8 *)PTR_DAT_09fbec68,uVar4);
              }
              puVar1 = PTR_DAT_09f22ba0;
              uVar5 = FUN_078b4450(*puVar9,0);
              if ((uVar5 & 1) == 0) {
                lVar6 = *unaff_x28;
                uVar4 = *puVar9;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  lVar6 = thunk_FUN_044a54b4();
                }
                FUN_08ffea3c(lVar6,lVar3,*(undefined8 *)PTR_DAT_09f29838,uVar4);
              }
              puVar2 = PTR_DAT_09fbf340;
              uStack0000000000000008 = *(undefined8 *)(unaff_x19 + 0x40);
              uVar7 = FUN_0613c790(&stack0x00000008,*(undefined8 *)puVar1);
              uVar4 = uVar7;
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                uVar4 = thunk_FUN_044a54b4(*unaff_x28);
              }
              FUN_08ffea3c(uVar4,lVar3,*(undefined8 *)puVar2,uVar7);
              puVar1 = PTR_DAT_09f20d00;
              if (lVar3 != 0) {
                if (0 < *(int *)(lVar3 + 0x18)) {
                  uVar7 = *puVar8;
                  uVar4 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar3,0);
                  uVar4 = FUN_078b4f58(uVar7,*(undefined8 *)puVar1,uVar4,0);
                  *puVar8 = uVar4;
                  thunk_FUN_044bb4b4(puVar8,uVar4);
                }
                return;
              }
              goto 
              Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_sessiongroup_handle_set
              ;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_sessiongroup_handle_set:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


