/*
FUNCTION_NAME: OVRPlugin$$GetPerfMetricsInt
ENTRY_POINT: 03221e1c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPerfMetricsInt(void)

{
  bool in_ZR;
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  undefined4 uVar3;
  long unaff_x19;
  short unaff_w23;
  long unaff_x25;
  long *unaff_x26;
  double dVar4;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000098;
  
  if (in_ZR) {
    uVar3 = 7;
    if (7 < in_stack_00000008._4_4_) {
      uVar3 = 9;
    }
LAB_03221ef0:
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_03221280((double)unaff_s8,uVar3,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) {
      uVar2 = FUN_031c833c(&stack0x00000010,0);
joined_r0x03221f44:
      if (unaff_x19 == 0) goto LAB_03222030;
      if ((uVar2 & 1) == 0) {
        uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
      }
      else {
        uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
      }
      goto LAB_03221ff8;
    }
    if (in_stack_00000010._4_4_ != -0x80000000) {
      if (unaff_w23 != 0) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        goto LAB_03221fe8;
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_0321f874();
LAB_03221ff4:
      uVar1 = 0;
      goto LAB_03221ff8;
    }
  }
  else {
    if (in_w8 != 0x52) {
      uVar3 = 7;
      goto LAB_03221ef0;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_03221280((double)unaff_s8,7,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) {
      uVar2 = FUN_031c833c(&stack0x00000010,0);
      goto joined_r0x03221f44;
    }
    if (in_stack_00000010._4_4_ != -0x80000000) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      dVar4 = (double)FUN_032216fc(&stack0x00000010);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if ((float)dVar4 != unaff_s8) {
        FUN_03221280((double)unaff_s8,9,&stack0x00000010);
      }
LAB_03221fe8:
      FUN_0321f2f4();
      goto LAB_03221ff4;
    }
  }
  if (unaff_x19 == 0) {
LAB_03222030:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
LAB_03221ff8:
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


