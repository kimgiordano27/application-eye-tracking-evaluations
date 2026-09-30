/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$Dispose
ENTRY_POINT: 05e24f38
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__Dispose(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  int in_w8;
  long unaff_x19;
  int iVar4;
  long unaff_x24;
  long *unaff_x25;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_06;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  undefined8 uStack000000000000007a;
  long in_stack_00000098;
  
  uStack000000000000007a = param_1;
  if (in_w8 == 0) {
    thunk_FUN_036a1978();
  }
  uVar1 = FUN_05e24594();
  if ((uVar1 & 1) == 0) {
    FUN_05e19bec();
    uVar2 = FUN_05e19cd8();
    uVar5 = extraout_d0_00;
    if (unaff_x19 == 0) goto LAB_05e251fc;
    uVar1 = *(ulong *)(unaff_x19 + 0x70);
    if (DAT_07ed8f51 == '\0') {
      uVar5 = FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07ed8f51 = '\x01';
      if (uVar1 != 0) goto LAB_05e24fbc;
LAB_05e24fec:
      uVar3 = 0;
    }
    else {
      if (uVar1 == 0) goto LAB_05e24fec;
LAB_05e24fbc:
      uVar3 = FUN_05c94ef4(uVar1,0);
      uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
      uVar5 = extraout_d0_01;
    }
    if (DAT_07ede698 == '\0') {
      FUN_03642964(PTR_DAT_07a0b7b8);
      uVar5 = FUN_03642964(PTR_DAT_07a0b588);
      DAT_07ede698 = '\x01';
    }
    iVar4 = (int)extraout_x1;
    if ((iVar4 == (int)uVar1) &&
       ((iVar4 == 0 ||
        (uVar1 = FUN_05c9e23c(uVar2,extraout_x1,uVar3,uVar1,*(undefined8 *)PTR_DAT_07a0b7b8),
        uVar5 = extraout_d0_02, (uVar1 & 1) != 0)))) {
      uVar5 = 0x7ff0000000000000;
    }
    else {
      uVar1 = *(ulong *)(unaff_x19 + 0x78);
      if (DAT_07ed8f51 == '\0') {
        uVar5 = FUN_03642964(PTR_DAT_079ffcf8);
        DAT_07ed8f51 = '\x01';
        if (uVar1 != 0) goto LAB_05e25064;
LAB_05e25094:
        uVar3 = 0;
      }
      else {
        if (uVar1 == 0) goto LAB_05e25094;
LAB_05e25064:
        uVar3 = FUN_05c94ef4(uVar1,0);
        uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
        uVar5 = extraout_d0_03;
      }
      if (DAT_07ede698 == '\0') {
        FUN_03642964(PTR_DAT_07a0b7b8);
        uVar5 = FUN_03642964(PTR_DAT_07a0b588);
        DAT_07ede698 = '\x01';
      }
      if ((iVar4 == (int)uVar1) &&
         ((iVar4 == 0 ||
          (uVar1 = FUN_05c9e23c(uVar2,extraout_x1,uVar3,uVar1,*(undefined8 *)PTR_DAT_07a0b7b8),
          uVar5 = extraout_d0_04, (uVar1 & 1) != 0)))) {
        uVar5 = 0xfff0000000000000;
      }
      else {
        uVar1 = *(ulong *)(unaff_x19 + 0x68);
        if (DAT_07ed8f51 == '\0') {
          uVar5 = FUN_03642964(PTR_DAT_079ffcf8);
          DAT_07ed8f51 = '\x01';
          if (uVar1 != 0) goto LAB_05e25108;
LAB_05e25138:
          uVar3 = 0;
        }
        else {
          if (uVar1 == 0) goto LAB_05e25138;
LAB_05e25108:
          uVar3 = FUN_05c94ef4(uVar1,0);
          uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
          uVar5 = extraout_d0_05;
        }
        if (DAT_07ede698 == '\0') {
          FUN_03642964(PTR_DAT_07a0b7b8);
          uVar5 = FUN_03642964(PTR_DAT_07a0b588);
          DAT_07ede698 = '\x01';
        }
        if ((iVar4 != (int)uVar1) ||
           ((iVar4 != 0 &&
            (uVar1 = FUN_05c9e23c(uVar2,extraout_x1,uVar3,uVar1,*(undefined8 *)PTR_DAT_07a0b7b8),
            uVar5 = extraout_d0_06, (uVar1 & 1) == 0)))) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            uVar5 = thunk_FUN_036a1978();
          }
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
            uVar5 = FUN_05e22028(0,0);
          }
          goto LAB_05e2523c;
        }
        uVar5 = 0x7ff8000000000000;
      }
    }
  }
  else {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar1 = FUN_05e25240(&stack0x00000010,&stack0x00000008);
    uVar5 = in_stack_00000008;
    if ((uVar1 & 1) == 0) {
      uVar5 = extraout_d0;
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        uVar5 = thunk_FUN_036a1978();
      }
      if (*(long *)(unaff_x24 + 0x28) != in_stack_00000098) goto LAB_05e2523c;
      uVar5 = FUN_05e22028(1,*(undefined8 *)PTR_DAT_07a15260);
LAB_05e251fc:
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_05e2523c;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_05e2523c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


