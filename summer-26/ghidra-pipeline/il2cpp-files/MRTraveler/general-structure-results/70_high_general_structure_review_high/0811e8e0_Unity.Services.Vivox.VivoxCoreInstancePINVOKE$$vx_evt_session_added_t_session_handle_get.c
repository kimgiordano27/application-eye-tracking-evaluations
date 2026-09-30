/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_session_handle_get
ENTRY_POINT: 0811e8e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_session_handle_get(void)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  float fVar6;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
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
  
  FUN_03c8f898(PTR_DAT_08f02828);
  FUN_03c8f898(PTR_DAT_08f02860);
  FUN_03c8f898(PTR_DAT_08f02868);
  FUN_03c8f898(PTR_DAT_08ebd888);
  FUN_03c8f898(PTR_DAT_08f02870);
  *(undefined1 *)(unaff_x20 + 0xcbf) = 1;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    iVar2 = FUN_068159f0(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08f02828);
    if (0 < iVar2) {
      fVar6 = (float)FUN_085e510c(0);
      fVar6 = fVar6 - *(float *)(unaff_x19 + 0x38);
      if (0.25 < fVar6) {
        iVar3 = FUN_085e8280(0);
        iVar2 = *(int *)(unaff_x19 + 0x3c);
        uVar4 = FUN_085e8280(0);
        *(undefined4 *)(unaff_x19 + 0x3c) = uVar4;
        *(float *)(unaff_x19 + 0x40) =
             (*(float *)(unaff_x19 + 0x40) + (float)(iVar3 - iVar2) / fVar6) * 0.5;
        uVar4 = FUN_085e510c(0);
        *(undefined4 *)(unaff_x19 + 0x38) = uVar4;
        uVar5 = FUN_085ef8cc(0);
        uVar1 = uVar5 + 0x3ff;
        if (-1 < (long)uVar5) {
          uVar1 = uVar5;
        }
        uVar4 = FUN_085e8280(0);
        in_stack_000000b8 = 0;
        in_stack_000000b0 = 0;
        in_stack_000000c8 = 0;
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        iVar2 = -0x80000000;
        if (*(float *)(unaff_x19 + 0x40) != INFINITY) {
          iVar2 = (int)*(float *)(unaff_x19 + 0x40);
        }
        FUN_0811dc98(&stack0x000000a0,*(undefined8 *)PTR_DAT_08f02870,
                     *(undefined8 *)PTR_DAT_08ebd888,2,1,uVar4,iVar2,0);
        in_stack_00000078 = in_stack_000000a8;
        in_stack_00000070 = in_stack_000000a0;
        in_stack_00000088 = in_stack_000000b8;
        in_stack_00000080 = in_stack_000000b0;
        in_stack_00000098 = in_stack_000000c8;
        in_stack_00000090 = in_stack_000000c0;
        FUN_0811e5b0();
        uVar4 = FUN_085e8280(0);
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000048 = 0;
        in_stack_00000040 = 0;
        FUN_0811dc98(&stack0x00000040,*(undefined8 *)PTR_DAT_08f02860,
                     *(undefined8 *)PTR_DAT_08f02868,3,2,uVar4,uVar1 >> 10 & 0xffffffff,0);
        FUN_0811e5b0();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


