/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_participant_mute_for_me_t_session_handle_get
ENTRY_POINT: 08564e98
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_session_handle_get
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 auVar11 [16];
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [188];
  int iStack_4;
  
  puVar4 = PTR_DAT_09324758;
  if ((DAT_0989dad6 & 1) == 0) {
    FUN_04077588(PTR_DAT_09327068);
    FUN_04077588(PTR_DAT_0932c870);
    FUN_04077588(PTR_DAT_0932df30);
    FUN_04077588(PTR_DAT_09324758);
    FUN_04077588(PTR_DAT_0932ec28);
    DAT_0989dad6 = 1;
  }
  iStack_4 = 0;
  memset(auStack_c0,0,0xb8);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989d2e9 == '\0') {
    FUN_04077588(PTR_DAT_09324758);
    DAT_0989d2e9 = '\x01';
  }
  puVar5 = PTR_DAT_0932c870;
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar8 = *(long *)puVar4;
  }
  pauVar10 = *(undefined1 (**) [16])(lVar8 + 0xb8);
  auVar11 = *pauVar10;
  auVar3 = *pauVar10;
  auVar2 = *pauVar10;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar5);
  }
  lVar8 = FUN_085057d4(param_3,0);
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar9 = FUN_084eea88(lVar8,&iStack_4,0);
    uVar7 = 0;
    auVar11 = auVar2;
    if (((uVar9 & 1) != 0) && (auVar11 = auVar3, iStack_4 == 7)) {
      if ((param_3 != 0) && (*(long *)(param_3 + 0x1a0) != 0)) {
        uVar7 = *(undefined4 *)(param_3 + 0x160);
        uVar1 = *(undefined4 *)(param_3 + 0x164);
        uVar9 = FUN_083e3844(*(long *)(param_3 + 0x1a0),0);
        if ((uVar9 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          if (*(long *)(param_3 + 0x1a0) == 0) goto LAB_0856517c;
          uVar6 = FUN_083e3974(*(long *)(param_3 + 0x1a0),0);
        }
        FUN_08489130(&uStack_140,uVar7,uVar1,0,uVar6 & 1,0);
        uStack_f0 = *(undefined8 *)PTR_DAT_0932ec28;
        thunk_FUN_040ec700(&uStack_f0);
        uStack_120 = CONCAT44(uStack_120._4_4_,8);
        uStack_e0._0_7_ = CONCAT16(1,(undefined6)uStack_e0);
        uStack_110 = CONCAT71(uStack_110._1_7_,1);
        if (param_1 != 0) {
          auVar11 = FUN_084702cc(param_1,&uStack_140,0);
          uVar7 = FUN_084ee584(lVar8,0);
          if (param_2 != 0) {
            FUN_08519ae4(param_2,auVar11._0_8_,auVar11._8_8_,0);
            goto LAB_085650b4;
          }
        }
      }
LAB_0856517c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
LAB_085650b4:
  if (*(int *)(*(long *)PTR_DAT_0932df30 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar4 = PTR_DAT_09327068;
  FUN_085648f8(param_3,param_4,param_5,param_6,param_7,in_stack_00000060,in_stack_00000068,uVar7,
               auVar11,in_stack_00000070,in_stack_00000078,in_stack_00000080,auStack_c0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_08442a54(param_1,auStack_c0,0);
  return;
}


