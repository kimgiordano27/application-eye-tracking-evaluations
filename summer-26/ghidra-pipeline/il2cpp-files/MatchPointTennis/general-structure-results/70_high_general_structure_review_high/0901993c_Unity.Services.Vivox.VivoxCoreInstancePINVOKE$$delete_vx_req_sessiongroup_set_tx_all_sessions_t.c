/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_sessiongroup_set_tx_all_sessions_t
ENTRY_POINT: 0901993c
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
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_sessiongroup_set_tx_all_sessions_t
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long lVar10;
  long unaff_x19;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  
  while( true ) {
    FUN_06c733e0(param_1,param_2,unaff_x22,param_4);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar10 == 0) break;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar5 = (undefined8 *)(lVar10 + 0x20);
      *puVar5 = in_stack_00000008;
      *(undefined8 *)(lVar10 + 0x28) = in_stack_00000010;
                    /* try { // try from 09019988 to 091199cb has its CatchHandler @ 09019ac8 */
      thunk_FUN_044bb4b4(puVar5,0);
    }
    else {
      FUN_059fee5c();
    }
    uVar4 = FUN_0768d020(&stack0x00000020,*unaff_x27);
    unaff_x22 = in_stack_00000030;
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 09019a0c to 09119a0f has its CatchHandler @ 09019ac4 */
      FUN_0768d01c(&stack0x00000020,*unaff_x26);
                    /* try { // try from 09019a10 to 09119a53 has its CatchHandler @ 090198c0 */
      iVar3 = FUN_04ce58e8();
      puVar2 = PTR_DAT_09fc0098;
      if (iVar3 == 0) {
                    /* try { // try from 09019a9c to 09119a9f has its CatchHandler @ 09019abc */
                    /* try { // try from 09019aa0 to 09119aa3 has its CatchHandler @ 09019ab8 */
                    /* try { // try from 09019aa4 to 09119aa7 has its CatchHandler @ 09019ac8 */
                    /* catch() { ... } // from try @ 09019a54 with catch @ 09019aa8
                       try { // try from 09019aa8 to 09119adf has its CatchHandler @ 090198c0 */
        thunk_FUN_044adef4(PTR_DAT_09fc0098);
                    /* catch() { ... } // from try @ 09019a68 with catch @ 09019aac */
        FUN_03db7f50();
                    /* catch() { ... } // from try @ 090199f0 with catch @ 09019ab0 */
                    /* catch() { ... } // from try @ 090199dc with catch @ 09019ab4 */
        lVar10 = thunk_FUN_044adef4(puVar2);
        uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09f21278);
        uVar7 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
        uVar6 = thunk_FUN_04fd4178(uVar6,uVar8,uVar7);
        uVar7 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
      }
      else {
        iVar3 = FUN_04ce58e8();
        if (iVar3 < 2) {
          uVar6 = FUN_04cecb64();
          FUN_04cecb64();
          uVar7 = thunk_FUN_0448520c(*unaff_x23);
          FUN_09019420(uVar7,uVar6,extraout_x1);
          return uVar7;
        }
        lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc00b8);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc00b8);
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09f21278);
        uVar7 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
        if (lVar10 == 0) {
          lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc00b8);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          puVar2 = PTR_DAT_09fc00b8;
          lVar10 = thunk_FUN_044adef4(PTR_DAT_09fc00b8);
          uVar11 = **(undefined8 **)(lVar10 + 0xb8);
          thunk_FUN_044adef4(PTR_DAT_09fba8f0);
          uVar8 = thunk_FUN_0448520c();
          uVar9 = thunk_FUN_044adef4(PTR_DAT_09fc00c0);
          FUN_05555340(uVar8,uVar11,uVar9,0);
          lVar10 = thunk_FUN_044adef4(puVar2);
          *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8) = uVar8;
          lVar10 = thunk_FUN_044adef4(puVar2);
          thunk_FUN_044bb4b4(*(long *)(lVar10 + 0xb8) + 8,uVar8);
        }
        thunk_FUN_044adef4(PTR_DAT_09fba900);
        uVar8 = thunk_FUN_04cfebe4();
        uVar9 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
        uVar6 = thunk_FUN_04fd4178(uVar6,uVar8,uVar9);
      }
      uVar6 = FUN_078a7764(uVar7,uVar6,0);
      thunk_FUN_044adef4(PTR_DAT_09f273d8);
      uVar7 = thunk_FUN_0448520c();
      FUN_090250b8(uVar7,uVar6,0);
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc00c8);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar7,uVar6);
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    param_2 = FUN_07acb74c();
    param_4 = *unaff_x29;
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    param_1 = &stack0x00000008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


