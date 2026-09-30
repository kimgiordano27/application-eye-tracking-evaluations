/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_disconnect_t_sessiongroup_handle_get
ENTRY_POINT: 0901c998
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_disconnect_t_sessiongroup_handle_get
          (void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_05bae95c();
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while( true ) {
    uVar4 = FUN_0768d020(&stack0x00000020,*unaff_x27);
    uVar7 = in_stack_00000030;
    if ((uVar4 & 1) == 0) {
      FUN_0768d01c(&stack0x00000020,*unaff_x26);
      iVar3 = FUN_04ce58e8();
      puVar2 = PTR_DAT_09fc0188;
      if (iVar3 == 0) {
        thunk_FUN_044adef4(PTR_DAT_09fc0188);
        FUN_03db7f50();
        lVar10 = thunk_FUN_044adef4(puVar2);
        uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
        uVar7 = thunk_FUN_044adef4(PTR_DAT_09f21278);
        uVar5 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
        uVar7 = thunk_FUN_04fd4178(uVar7,uVar8,uVar5);
        uVar5 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
      }
      else {
        iVar3 = FUN_04ce58e8();
        if (iVar3 < 2) {
          uVar7 = FUN_04cecb64();
          FUN_04cecb64();
          uVar5 = thunk_FUN_0448520c(*unaff_x23);
          FUN_0901c4d4(uVar5,uVar7,extraout_x1);
          return uVar5;
        }
        lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        uVar7 = thunk_FUN_044adef4(PTR_DAT_09f21278);
        uVar5 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
        if (lVar10 == 0) {
          lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          puVar2 = PTR_DAT_09fc01a8;
          lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc01a8);
          uVar11 = **(undefined8 **)(lVar10 + 0xb8);
          thunk_FUN_044adef4(PTR_DAT_09fba8f0);
          uVar8 = thunk_FUN_0448520c();
          uVar9 = thunk_FUN_044adef4(PTR_DAT_09fc01b0);
          FUN_05555340(uVar8,uVar11,uVar9,0);
          lVar10 = thunk_FUN_044adef4(puVar2);
          *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8) = uVar8;
          lVar10 = thunk_FUN_044adef4(puVar2);
          thunk_FUN_044bb4b4(*(long *)(lVar10 + 0xb8) + 8,uVar8);
        }
        thunk_FUN_044adef4(PTR_DAT_09fba900);
        uVar8 = thunk_FUN_04cfebe4();
        uVar9 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
        uVar7 = thunk_FUN_04fd4178(uVar7,uVar8,uVar9);
      }
      uVar7 = FUN_078a7764(uVar5,uVar7,0);
      thunk_FUN_044adef4(PTR_DAT_09f273d8);
      uVar5 = thunk_FUN_0448520c();
      FUN_090250b8(uVar5,uVar7,0);
      uVar7 = thunk_FUN_044adef4(PTR_DAT_09fc01b8);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar5,uVar7);
    }
                    /* try { // try from 0901c9bc to 0911c9bf has its CatchHandler @ 0901cb7c */
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
                    /* try { // try from 0901c9d0 to 0911c9d3 has its CatchHandler @ 0901cb6c */
    uVar5 = FUN_07acb74c();
                    /* try { // try from 0901c9e4 to 0911c9eb has its CatchHandler @ 0901cb68 */
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_06c733e0(&stack0x00000008,uVar5,uVar7,*unaff_x29);
    if (unaff_x19 == 0) break;
                    /* try { // try from 0901ca00 to 0911ca07 has its CatchHandler @ 0901cb60 */
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* try { // try from 0901ca14 to 0911ca33 has its CatchHandler @ 0901cb64 */
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar10 + 0x20);
      *puVar6 = in_stack_00000008;
      *(undefined8 *)(lVar10 + 0x28) = in_stack_00000010;
      thunk_FUN_044bb4b4(puVar6,0);
    }
    else {
      FUN_059fee5c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


