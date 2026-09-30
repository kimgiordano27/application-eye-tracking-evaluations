/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeObjectArray
ENTRY_POINT: 0580a3bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint ExitGames_Client_Photon_Protocol16__DeserializeObjectArray
               (long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  uint uStack000000000000001c;
  undefined8 uStack0000000000000024;
  long in_stack_00000038;
  
  if ((bRam00000000071c5f4d & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d36fa0);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(PTR_DAT_06d5dbb8);
    bRam00000000071c5f4d = 1;
  }
  uStack0000000000000024 = 0;
  uStack000000000000000c = 0;
  uStack000000000000001c = 0;
  uStack0000000000000014 = 0;
  lVar5 = FUN_05649850(0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 6) {
      lVar5 = FUN_05649850(0);
      if (lVar5 == 0) goto LAB_0580a540;
      if (*(int *)(lVar5 + 0x18) != 4) {
        lVar5 = *(long *)(param_1 + 0x100);
        if (lVar5 == 0) goto LAB_0580a540;
        uVar4 = (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),param_2,param_3,
                           *(undefined8 *)(lVar5 + 0x28));
        goto LAB_0580a528;
      }
    }
    puVar3 = PTR_DAT_06d5dbb8;
    puVar2 = PTR_DAT_06d36fa0;
    puVar1 = PTR_DAT_06d01eb0;
                    /* try { // try from 0580a454 to 0590a463 has its CatchHandler @ 0580a46c */
                    /* try { // try from 0580a464 to 0590a473 has its CatchHandler @ 05809e1c */
    uStack0000000000000024 = 0;
    uStack000000000000000c = 0;
    uStack000000000000001c = 0;
    uStack0000000000000014 = 0;
                    /* catch() { ... } // from try @ 0580a454 with catch @ 0580a46c */
    in_stack_00000038 = 0;
                    /* catch() { ... } // from try @ 0580a234 with catch @ 0580a470 */
    thunk_FUN_02f411dc(&stack0x00000038,0);
                    /* try { // try from 0580a474 to 0590a477 has its CatchHandler @ 0580a480 */
    in_stack_00000038 = *(long *)(param_1 + 0x100);
                    /* try { // try from 0580a478 to 0590a483 has its CatchHandler @ 05809e1c */
                    /* catch() { ... } // from try @ 0580a474 with catch @ 0580a480 */
    thunk_FUN_02f411dc(&stack0x00000038);
    lVar5 = in_stack_00000038;
    uVar6 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_056109c0(uVar6,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar2);
    }
    thunk_FUN_02f337c0(uVar6,0);
    if (lVar5 != 0) {
      uVar4 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2[3] = (ulong)uStack0000000000000014;
      param_2[2] = (ulong)uStack000000000000000c;
      param_2[5] = uStack0000000000000024;
      param_2[4] = (ulong)uStack000000000000001c;
LAB_0580a528:
      return uVar4 & 1;
    }
  }
LAB_0580a540:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


