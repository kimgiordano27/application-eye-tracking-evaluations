/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_call_stats_get
ENTRY_POINT: 09000668
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_call_stats_get
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
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  puVar9 = (undefined8 *)(unaff_x19 + 0x38);
  *puVar9 = unaff_x25;
  thunk_FUN_044bb4b4(puVar9);
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x24;
  lVar3 = FUN_04447c90(*unaff_x29,5);
  if (lVar3 == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_sessiongroup_handle_set:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* try { // try from 09000698 to 091006a7 has its CatchHandler @ 09000774 */
  if (*(int *)(lVar3 + 0x18) != 0) {
                    /* try { // try from 090006ac to 091006f3 has its CatchHandler @ 09000770 */
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
              uVar4 = *unaff_x23;
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
            in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x40);
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


