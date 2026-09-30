/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeObjectArray
ENTRY_POINT: 0566d1b4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566d040) */
/* WARNING: Removing unreachable block (ram,0x0566d07c) */
/* WARNING: Removing unreachable block (ram,0x0566d048) */

uint ExitGames_Client_Photon_Protocol16__SerializeObjectArray(void)

{
  int iVar1;
  uint unaff_w19;
  long lVar2;
  long unaff_x20;
  long in_stack_00000000;
  char *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000060;
  
  iVar1 = *(int *)(in_stack_00000060 + 0x10);
  thunk_FUN_02e4aa50();
  if (iVar1 < 1) {
    if (unaff_x20 != 0) {
      thunk_FUN_02ea289c(PTR_DAT_06a863e8);
                    /* WARNING: Subroutine does not return */
      FUN_02e3cb88();
    }
  }
  else {
    iVar1 = *(int *)(in_stack_00000060 + 0x10);
    thunk_FUN_02e4aa50();
    thunk_FUN_02e4aa50();
    unaff_w19 = 1;
    *(int *)(in_stack_00000060 + 0x10) = iVar1 + -1;
  }
  lVar2 = *(long *)(in_stack_00000060 + 0x28);
  thunk_FUN_02e4aa50();
  if ((lVar2 != 0) && (iVar1 = *(int *)(in_stack_00000060 + 0x10), thunk_FUN_02e4aa50(), iVar1 == 0)
     ) {
    lVar2 = *(long *)(in_stack_00000060 + 0x28);
    thunk_FUN_02e4aa50();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_0566d6f0(lVar2);
  }
  if (*in_stack_00000008 != '\0') {
    iVar1 = *(int *)(*in_stack_00000010 + 0x18);
    thunk_FUN_02e4aa50();
    thunk_FUN_02e4aa50();
    lVar2 = *in_stack_00000010;
    *(int *)(lVar2 + 0x18) = iVar1 + -1;
    FUN_02e4a4d0(*(undefined8 *)(lVar2 + 0x20));
  }
  FUN_0566a818(in_stack_00000018);
  if (in_stack_00000000 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccbc();
  }
  return unaff_w19 & 1;
}


