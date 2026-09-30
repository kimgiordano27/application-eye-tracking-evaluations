/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_disconnect_t_session_handle_get
ENTRY_POINT: 0901cac4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_disconnect_t_session_handle_get
          (void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 *unaff_x23;
  undefined8 uVar8;
  
  iVar2 = FUN_04ce58e8();
  puVar1 = PTR_DAT_09fc0188;
  if (iVar2 == 0) {
                    /* try { // try from 0901cb50 to 0911cb53 has its CatchHandler @ 0901cb7c */
                    /* try { // try from 0901cb54 to 0911cb57 has its CatchHandler @ 0901cb5c */
    thunk_FUN_044adef4(PTR_DAT_09fc0188);
    FUN_03db7f50();
    lVar5 = thunk_FUN_044adef4(puVar1);
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f21278);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
    uVar3 = thunk_FUN_04fd4178(uVar3,uVar6,uVar4);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
  }
  else {
    iVar2 = FUN_04ce58e8();
    if (iVar2 < 2) {
      uVar3 = FUN_04cecb64();
                    /* try { // try from 0901cafc to 0911caff has its CatchHandler @ 0901cb58 */
                    /* try { // try from 0901cb00 to 0911cb4b has its CatchHandler @ 0901c918 */
      FUN_04cecb64();
      uVar4 = thunk_FUN_0448520c(*unaff_x23);
      FUN_0901c4d4(uVar4,uVar3,extraout_x1);
      return uVar4;
    }
    lVar5 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar5 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f21278);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      puVar1 = PTR_DAT_09fc01a8;
      lVar5 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      thunk_FUN_044adef4(PTR_DAT_09fba8f0);
      uVar6 = thunk_FUN_0448520c();
      uVar7 = thunk_FUN_044adef4(PTR_DAT_09fc01b0);
      FUN_05555340(uVar6,uVar8,uVar7,0);
      lVar5 = thunk_FUN_044adef4(puVar1);
      *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8) = uVar6;
      lVar5 = thunk_FUN_044adef4(puVar1);
      thunk_FUN_044bb4b4(*(long *)(lVar5 + 0xb8) + 8,uVar6);
    }
    thunk_FUN_044adef4(PTR_DAT_09fba900);
    uVar6 = thunk_FUN_04cfebe4();
    uVar7 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
    uVar3 = thunk_FUN_04fd4178(uVar3,uVar6,uVar7);
  }
  uVar3 = FUN_078a7764(uVar4,uVar3,0);
  thunk_FUN_044adef4(PTR_DAT_09f273d8);
  uVar4 = thunk_FUN_0448520c();
  FUN_090250b8(uVar4,uVar3,0);
  uVar3 = thunk_FUN_044adef4(PTR_DAT_09fc01b8);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar4,uVar3);
}


