/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_set_tx_all_sessions_t_base__set
ENTRY_POINT: 0858b68c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_set_tx_all_sessions_t_base__set
               (undefined1 param_1 [16])

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  int unaff_w23;
  long unaff_x24;
  float fVar4;
  float unaff_s8;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined5 uStack0000000000000050;
  undefined2 uStack0000000000000056;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined8 in_stack_00000168;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
code_r0x0858b68c:
  _uStack0000000000000050 = 0;
  uStack0000000000000010 = uStack0000000000000000;
  uStack0000000000000018 = uStack0000000000000008;
  uStack0000000000000020 = uStack0000000000000000;
  uStack0000000000000028 = uStack0000000000000008;
  uStack0000000000000030 = uStack0000000000000000;
  uStack0000000000000038 = uStack0000000000000008;
  uStack0000000000000040 = uStack0000000000000000;
  uStack0000000000000048 = uStack0000000000000008;
  FUN_08a0f660(unaff_x21);
  fVar4 = (float)FUN_08999fb4(unaff_x21,0);
  _uStack0000000000000050 = CONCAT15(unaff_w22,uStack0000000000000050);
  _uStack0000000000000050 = CONCAT44(stack0x00000054,fVar4 * unaff_s8);
  FUN_08a0f044(&stack0x00000110);
  do {
    while( true ) {
      in_stack_00000168._7_1_ = 0;
      memmove((void *)(unaff_x19 + (long)(int)unaff_x24 * (long)unaff_w23),&stack0x00000110,0x60);
                    /* try { // try from 0858b6e4 to 0868b6e7 has its CatchHandler @ 0858bb40 */
                    /* try { // try from 0858b6e8 to 0868b6ff has its CatchHandler @ 0858bb48 */
      uVar1 = (int)unaff_x24 + 1;
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)uVar1) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      unaff_x24 = (long)(int)uVar1;
      unaff_x21 = *(long *)(unaff_x20 + unaff_x24 * 8 + 0x20);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar2 = FUN_08999cb4(unaff_x21,0);
      if (iVar2 < 2) break;
      if (iVar2 == 2) {
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        FUN_08a0f4b0(unaff_x21,&stack0x00000060,0);
        FUN_08a0efd0(&stack0x00000110,&stack0x00000060,0);
      }
      else {
LAB_0858b630:
        uVar3 = FUN_089d0058(unaff_x21,0);
        FUN_08a0f070(&stack0x00000110,uVar3,0);
      }
    }
    if (iVar2 == 0) break;
    if (iVar2 != 1) goto LAB_0858b630;
    in_stack_00000100 = 0;
    in_stack_000000c8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000e0 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    FUN_08a0f318(unaff_x21,&stack0x000000b0,0);
    FUN_08a0ef58(&stack0x00000110,&stack0x000000b0,0);
  } while( true );
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  goto code_r0x0858b68c;
}


