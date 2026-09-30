/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_sessiongroup_set_tx_no_session_t
ENTRY_POINT: 09019cc8
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


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_sessiongroup_set_tx_no_session_t
          (long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  long lVar7;
  undefined8 *unaff_x23;
  undefined8 uVar8;
  undefined8 *unaff_x26;
  
  lVar7 = *param_1;
  __cxa_end_catch();
  FUN_0768d01c(&stack0x00000020,*unaff_x26);
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e3c(lVar7);
  }
  iVar2 = FUN_04ce58e8();
  puVar1 = PTR_DAT_09fc0098;
  if (iVar2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09fc0098);
    FUN_03db7f50();
    lVar7 = thunk_FUN_044adef4(puVar1);
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f21278);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
    uVar3 = thunk_FUN_04fd4178(uVar3,uVar5,uVar4);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
  }
  else {
    iVar2 = FUN_04ce58e8();
    if (iVar2 < 2) {
      uVar3 = FUN_04cecb64();
      FUN_04cecb64();
      uVar4 = thunk_FUN_0448520c(*unaff_x23);
      FUN_09019420(uVar4,uVar3,extraout_x1);
      return uVar4;
    }
                    /* try { // try from 09019b04 to 09119b43 has its CatchHandler @ 09019b88 */
    lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc00b8);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc00b8);
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f21278);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
    if (lVar7 == 0) {
      lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc00b8);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      puVar1 = PTR_DAT_09fc00b8;
      lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc00b8);
      uVar8 = **(undefined8 **)(lVar7 + 0xb8);
      thunk_FUN_044adef4(PTR_DAT_09fba8f0);
      uVar5 = thunk_FUN_0448520c();
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc00c0);
      FUN_05555340(uVar5,uVar8,uVar6,0);
      lVar7 = thunk_FUN_044adef4(puVar1);
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8) = uVar5;
      lVar7 = thunk_FUN_044adef4(puVar1);
      thunk_FUN_044bb4b4(*(long *)(lVar7 + 0xb8) + 8,uVar5);
    }
    thunk_FUN_044adef4(PTR_DAT_09fba900);
    uVar5 = thunk_FUN_04cfebe4();
    uVar6 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
    uVar3 = thunk_FUN_04fd4178(uVar3,uVar5,uVar6);
  }
  uVar3 = FUN_078a7764(uVar4,uVar3,0);
  thunk_FUN_044adef4(PTR_DAT_09f273d8);
  uVar4 = thunk_FUN_0448520c();
  FUN_090250b8(uVar4,uVar3,0);
  uVar3 = thunk_FUN_044adef4(PTR_DAT_09fc00c8);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar4,uVar3);
}


