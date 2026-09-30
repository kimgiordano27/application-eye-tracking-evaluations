/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$System.IDisposable.Dispose
ENTRY_POINT: 05e24ec8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__System_IDisposable_Dispose
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  int iVar5;
  long unaff_x23;
  long unaff_x24;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_06;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined2 in_stack_00000078;
  undefined6 uStack000000000000007a;
  undefined2 in_stack_00000080;
  undefined8 uStack0000000000000082;
  long lStack0000000000000098;
  
  puVar1 = PTR_DAT_07a115a8;
  lStack0000000000000098 = *(long *)(unaff_x24 + 0x28);
  if ((*(byte *)(unaff_x23 + 0xcf8) & 1) == 0) {
    FUN_03642964(PTR_DAT_07a115a8);
    FUN_03642964(PTR_DAT_07a15260);
    *(undefined1 *)(unaff_x23 + 0xcf8) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000082 = 0;
  uStack000000000000007a = 0;
  in_stack_00000080 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar2 = FUN_05e24594(param_1,param_2,param_3,&stack0x00000010,param_4,0);
  if ((uVar2 & 1) == 0) {
    FUN_05e19bec(param_1,param_2);
    uVar3 = FUN_05e19cd8();
    uVar6 = extraout_d0_00;
    if (param_4 == 0) goto LAB_05e251fc;
    uVar2 = *(ulong *)(param_4 + 0x70);
    if (DAT_07ed8f51 == '\0') {
      uVar6 = FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07ed8f51 = '\x01';
      if (uVar2 != 0) goto LAB_05e24fbc;
LAB_05e24fec:
      uVar4 = 0;
    }
    else {
      if (uVar2 == 0) goto LAB_05e24fec;
LAB_05e24fbc:
      uVar4 = FUN_05c94ef4(uVar2,0);
      uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
      uVar6 = extraout_d0_01;
    }
    if (DAT_07ede698 == '\0') {
      FUN_03642964(PTR_DAT_07a0b7b8);
      uVar6 = FUN_03642964(PTR_DAT_07a0b588);
      DAT_07ede698 = '\x01';
    }
    iVar5 = (int)extraout_x1;
    if ((iVar5 == (int)uVar2) &&
       ((iVar5 == 0 ||
        (uVar2 = FUN_05c9e23c(uVar3,extraout_x1,uVar4,uVar2,*(undefined8 *)PTR_DAT_07a0b7b8),
        uVar6 = extraout_d0_02, (uVar2 & 1) != 0)))) {
      uVar6 = 0x7ff0000000000000;
    }
    else {
      uVar2 = *(ulong *)(param_4 + 0x78);
      if (DAT_07ed8f51 == '\0') {
        uVar6 = FUN_03642964(PTR_DAT_079ffcf8);
        DAT_07ed8f51 = '\x01';
        if (uVar2 != 0) goto LAB_05e25064;
LAB_05e25094:
        uVar4 = 0;
      }
      else {
        if (uVar2 == 0) goto LAB_05e25094;
LAB_05e25064:
        uVar4 = FUN_05c94ef4(uVar2,0);
        uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
        uVar6 = extraout_d0_03;
      }
      if (DAT_07ede698 == '\0') {
        FUN_03642964(PTR_DAT_07a0b7b8);
        uVar6 = FUN_03642964(PTR_DAT_07a0b588);
        DAT_07ede698 = '\x01';
      }
      if ((iVar5 == (int)uVar2) &&
         ((iVar5 == 0 ||
          (uVar2 = FUN_05c9e23c(uVar3,extraout_x1,uVar4,uVar2,*(undefined8 *)PTR_DAT_07a0b7b8),
          uVar6 = extraout_d0_04, (uVar2 & 1) != 0)))) {
        uVar6 = 0xfff0000000000000;
      }
      else {
        uVar2 = *(ulong *)(param_4 + 0x68);
        if (DAT_07ed8f51 == '\0') {
          uVar6 = FUN_03642964(PTR_DAT_079ffcf8);
          DAT_07ed8f51 = '\x01';
          if (uVar2 != 0) goto LAB_05e25108;
LAB_05e25138:
          uVar4 = 0;
        }
        else {
          if (uVar2 == 0) goto LAB_05e25138;
LAB_05e25108:
          uVar4 = FUN_05c94ef4(uVar2,0);
          uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
          uVar6 = extraout_d0_05;
        }
        if (DAT_07ede698 == '\0') {
          FUN_03642964(PTR_DAT_07a0b7b8);
          uVar6 = FUN_03642964(PTR_DAT_07a0b588);
          DAT_07ede698 = '\x01';
        }
        if ((iVar5 != (int)uVar2) ||
           ((iVar5 != 0 &&
            (uVar2 = FUN_05c9e23c(uVar3,extraout_x1,uVar4,uVar2,*(undefined8 *)PTR_DAT_07a0b7b8),
            uVar6 = extraout_d0_06, (uVar2 & 1) == 0)))) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            uVar6 = thunk_FUN_036a1978();
          }
          if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000098) {
            uVar6 = FUN_05e22028(0,0);
          }
          goto LAB_05e2523c;
        }
        uVar6 = 0x7ff8000000000000;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar2 = FUN_05e25240(&stack0x00000010,&stack0x00000008);
    uVar6 = in_stack_00000008;
    if ((uVar2 & 1) == 0) {
      uVar6 = extraout_d0;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        uVar6 = thunk_FUN_036a1978();
      }
      if (*(long *)(unaff_x24 + 0x28) != lStack0000000000000098) goto LAB_05e2523c;
      uVar6 = FUN_05e22028(1,*(undefined8 *)PTR_DAT_07a15260);
LAB_05e251fc:
      if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000098) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_05e2523c;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000098) {
    return;
  }
LAB_05e2523c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


