/*
FUNCTION_NAME: FUN_090004ec
ENTRY_POINT: 090004ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_090004ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_68;
  
                    /* catch() { ... } // from try @ 090001a4 with catch @ 090004ec
                       catch() { ... } // from try @ 0900037c with catch @ 090004ec */
  puVar3 = PTR_DAT_09fbf370;
                    /* catch() { ... } // from try @ 09000184 with catch @ 090004f0 */
                    /* catch() { ... } // from try @ 090002a4 with catch @ 090004f4
                       catch() { ... } // from try @ 09000358 with catch @ 090004f4 */
                    /* catch() { ... } // from try @ 09000284 with catch @ 090004f8 */
                    /* catch() { ... } // from try @ 090001e8 with catch @ 090004fc
                       catch() { ... } // from try @ 09000384 with catch @ 090004fc */
                    /* try { // try from 09000520 to 09100537 has its CatchHandler @ 090007a0 */
                    /* try { // try from 09000538 to 09100593 has its CatchHandler @ 090000a8 */
  if ((DAT_0a533540 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fbf370);
    FUN_04447ba8(PTR_DAT_09f1ede0);
    FUN_04447ba8(PTR_DAT_09f1fbb8);
    FUN_04447ba8(PTR_DAT_09f1ee00);
    FUN_04447ba8(PTR_DAT_09f22ba0);
    FUN_04447ba8(PTR_DAT_09f1e5f0);
    FUN_04447ba8(PTR_DAT_09fbec68);
    FUN_04447ba8(PTR_DAT_09f29838);
    FUN_04447ba8(PTR_DAT_09f20d00);
    FUN_04447ba8(PTR_DAT_09fbc998);
    FUN_04447ba8(PTR_DAT_09f20d08);
    FUN_04447ba8(PTR_DAT_09fbf340);
    FUN_04447ba8(PTR_DAT_09fbf2e0);
    FUN_04447ba8(PTR_DAT_09fbf388);
    DAT_0a533540 = 1;
  }
  puVar1 = PTR_DAT_09f1e5f0;
  local_68 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a80df4(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x18),param_3);
  puVar11 = (undefined8 *)(param_1 + 0x20);
  *puVar11 = param_4;
  thunk_FUN_044bb4b4(puVar11,param_4);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x28),param_5);
  *(undefined8 *)(param_1 + 0x30) = param_6;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x30),param_6);
  puVar10 = (undefined8 *)(param_1 + 0x38);
  *puVar10 = param_7;
  thunk_FUN_044bb4b4(puVar10,param_7);
  *(undefined8 *)(param_1 + 0x40) = param_8;
  lVar4 = FUN_04447c90(*(undefined8 *)puVar1,5);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_09fbf2e0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x20));
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x28) = param_2;
        thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x28),param_2);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_09fbc998;
          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x30));
          if (3 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x38) = param_3;
            thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x38),param_3);
            puVar2 = PTR_DAT_09f1ee00;
            puVar1 = PTR_DAT_09f1ede0;
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_09fbf388;
              thunk_FUN_044bb4b4();
              uVar5 = FUN_078b57fc(lVar4,0);
              puVar9 = (undefined8 *)(param_1 + 0x48);
              *puVar9 = uVar5;
              thunk_FUN_044bb4b4(puVar9,uVar5);
              lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
              FUN_05bad610(lVar4,*(undefined8 *)puVar1);
              uVar6 = FUN_078b4450(*(undefined8 *)(param_1 + 0x20),0);
              if ((uVar6 & 1) == 0) {
                lVar7 = *(long *)puVar3;
                uVar5 = *puVar11;
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  lVar7 = thunk_FUN_044a54b4();
                }
                FUN_08ffea3c(lVar7,lVar4,*(undefined8 *)PTR_DAT_09fbec68,uVar5);
              }
              puVar1 = PTR_DAT_09f22ba0;
              uVar6 = FUN_078b4450(*puVar10,0);
              if ((uVar6 & 1) == 0) {
                lVar7 = *(long *)puVar3;
                uVar5 = *puVar10;
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  lVar7 = thunk_FUN_044a54b4();
                }
                FUN_08ffea3c(lVar7,lVar4,*(undefined8 *)PTR_DAT_09f29838,uVar5);
              }
              puVar2 = PTR_DAT_09fbf340;
              local_68 = *(undefined8 *)(param_1 + 0x40);
              uVar8 = FUN_0613c790(&local_68,*(undefined8 *)puVar1);
              uVar5 = uVar8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                uVar5 = thunk_FUN_044a54b4(*(long *)puVar3);
              }
              FUN_08ffea3c(uVar5,lVar4,*(undefined8 *)puVar2,uVar8);
              puVar3 = PTR_DAT_09f20d00;
              if (lVar4 != 0) {
                if (0 < *(int *)(lVar4 + 0x18)) {
                  uVar8 = *puVar9;
                  uVar5 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar4,0);
                  uVar5 = FUN_078b4f58(uVar8,*(undefined8 *)puVar3,uVar5,0);
                  *puVar9 = uVar5;
                  thunk_FUN_044bb4b4(puVar9,uVar5);
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


