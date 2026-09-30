/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_added_t_sessiongroup_handle_get
ENTRY_POINT: 090012c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_added_t_sessiongroup_handle_get
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *puVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *unaff_x27;
  
  *(undefined8 *)(unaff_x24 + 0x40) = *param_1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x24 + 0x40));
  if (5 < *(uint *)(unaff_x24 + 0x18)) {
    *(undefined8 *)(unaff_x24 + 0x48) = unaff_x20;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x24 + 0x48));
    puVar2 = PTR_DAT_09f1ee00;
    puVar1 = PTR_DAT_09f1ede0;
    if (6 < *(uint *)(unaff_x24 + 0x18)) {
                    /* try { // try from 09001324 to 091013eb has its CatchHandler @ 09001324
                       catch() { ... } // from try @ 09001324 with catch @ 09001324
                       catch() { ... } // from try @ 090015dc with catch @ 09001324
                       catch() { ... } // from try @ 090016d8 with catch @ 09001324
                       catch() { ... } // from try @ 09001760 with catch @ 09001324
                       catch() { ... } // from try @ 09001834 with catch @ 09001324
                       catch() { ... } // from try @ 0900186c with catch @ 09001324
                       catch() { ... } // from try @ 090018e4 with catch @ 09001324 */
      *(undefined8 *)(unaff_x24 + 0x50) = *(undefined8 *)PTR_DAT_09fbf390;
      thunk_FUN_044bb4b4();
      uVar3 = FUN_078b57fc();
      puVar7 = (undefined8 *)(unaff_x19 + 0x48);
      *puVar7 = uVar3;
      thunk_FUN_044bb4b4(puVar7,uVar3);
      lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
      FUN_05bad610(lVar4,*(undefined8 *)puVar1);
      uVar5 = FUN_078b4450(*(undefined8 *)(unaff_x19 + 0x30),0);
      if ((uVar5 & 1) == 0) {
        lVar6 = *unaff_x27;
        uVar3 = *unaff_x23;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          lVar6 = thunk_FUN_044a54b4();
        }
        FUN_08ffea3c(lVar6,lVar4,*(undefined8 *)PTR_DAT_09fbec68,uVar3);
      }
      puVar1 = PTR_DAT_09f20d00;
      if (lVar4 != 0) {
        if (0 < *(int *)(lVar4 + 0x18)) {
          uVar8 = *puVar7;
          uVar3 = FUN_078b5fc0(*(undefined8 *)PTR_DAT_09f20d08,lVar4,0);
          uVar3 = FUN_078b4f58(uVar8,*(undefined8 *)puVar1,uVar3,0);
          *puVar7 = uVar3;
          thunk_FUN_044bb4b4(puVar7,uVar3);
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


