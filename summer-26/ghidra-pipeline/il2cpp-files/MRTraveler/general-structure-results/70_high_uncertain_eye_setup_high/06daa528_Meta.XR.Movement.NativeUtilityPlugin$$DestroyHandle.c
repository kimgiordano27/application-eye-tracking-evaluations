/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin$$DestroyHandle
ENTRY_POINT: 06daa528
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_NativeUtilityPlugin__DestroyHandle(long param_1)

{
  double dVar1;
  uint in_w9;
  uint uVar2;
  undefined8 uVar3;
  long in_x10;
  ulong uVar4;
  undefined4 in_w11;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long *unaff_x21;
  long lVar7;
  double dVar8;
  double unaff_d8;
  
  while (dVar1 = DAT_018ae7a0, lVar6 = in_x10 + 1, lVar6 != 0x20) {
    if (in_w9 < 2) goto LAB_06daa82c;
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 == 0) goto LAB_06daa830;
    if ((ulong)*(uint *)(lVar7 + 0x18) <= in_x10 - 7U) goto LAB_06daa82c;
    *(undefined4 *)(lVar7 + lVar6 * 4) = in_w11;
    in_x10 = lVar6;
  }
  lVar6 = 0x20;
  do {
    if (param_1 == 0) goto LAB_06daa830;
    if (*(uint *)(param_1 + 0x18) < 2) goto LAB_06daa82c;
    lVar7 = *(long *)(param_1 + 0x28);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (lVar7 == 0) goto LAB_06daa830;
    if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 - 8U) goto LAB_06daa82c;
    dVar8 = sin(((double)((int)lVar6 + -8) + 0.5 + -18.0) * dVar1);
    *(float *)(lVar7 + lVar6 * 4) = (float)dVar8;
    lVar6 = lVar6 + 1;
    param_1 = **(long **)(*unaff_x21 + 0xb8);
  } while (lVar6 != 0x26);
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar6 = 0x26;
    do {
      uVar2 = (uint)uVar3;
      if (uVar2 < 2) goto LAB_06daa82c;
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 == 0) goto LAB_06daa830;
      if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 - 8U) goto LAB_06daa82c;
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x2c);
    uVar4 = 0;
    do {
      if (uVar2 < 4) goto LAB_06daa82c;
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 == 0) goto LAB_06daa830;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_06daa82c;
      lVar7 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar6 + lVar7 + 0x20) = 0;
    } while (uVar4 != 6);
    lVar6 = 0xe;
    do {
      if (param_1 == 0) goto LAB_06daa830;
      if (*(uint *)(param_1 + 0x18) < 4) goto LAB_06daa82c;
      lVar7 = *(long *)(param_1 + 0x38);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (lVar7 == 0) goto LAB_06daa830;
      if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 - 8U) goto LAB_06daa82c;
      dVar8 = sin(((double)((int)lVar6 + -8) + 0.5 + -6.0) * dVar1);
      *(float *)(lVar7 + lVar6 * 4) = (float)dVar8;
      lVar6 = lVar6 + 1;
      param_1 = **(long **)(*unaff_x21 + 0xb8);
    } while (lVar6 != 0x14);
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0x18);
      lVar6 = 0x14;
      do {
        if (uVar2 < 4) goto LAB_06daa82c;
        lVar7 = *(long *)(param_1 + 0x38);
        if (lVar7 == 0) goto LAB_06daa830;
        if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 - 8U) goto LAB_06daa82c;
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0x3f800000;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x1a);
      lVar6 = 0x1a;
      do {
        if (*(uint *)(param_1 + 0x18) < 4) goto LAB_06daa82c;
        lVar7 = *(long *)(param_1 + 0x38);
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (lVar7 == 0) break;
        if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 - 8U) goto LAB_06daa82c;
        dVar8 = sin(((double)((int)lVar6 + -8) + 0.5) * unaff_d8);
        *(float *)(lVar7 + lVar6 * 4) = (float)dVar8;
        if (lVar6 == 0x2b) {
          uVar4 = 0;
          goto LAB_06daa764;
        }
        lVar6 = lVar6 + 1;
        param_1 = **(long **)(*unaff_x21 + 0xb8);
      } while (param_1 != 0);
    }
  }
  goto LAB_06daa830;
  while( true ) {
    if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06daa82c;
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (lVar6 == 0) goto LAB_06daa830;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_06daa82c;
    dVar8 = sin(((double)(int)uVar4 + 0.5) * dVar1);
    lVar7 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(float *)(lVar6 + lVar7 + 0x20) = (float)dVar8;
    if (uVar4 == 0xc) break;
LAB_06daa764:
    lVar6 = **(long **)(*unaff_x21 + 0xb8);
    if (lVar6 == 0) goto LAB_06daa830;
  }
  lVar6 = **(long **)(*unaff_x21 + 0xb8);
  if (lVar6 != 0) {
    uVar2 = *(uint *)(lVar6 + 0x18);
    lVar7 = 0x14;
    do {
      if (uVar2 < 3) {
LAB_06daa82c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar5 = *(long *)(lVar6 + 0x30);
      if (lVar5 == 0) break;
      if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar7 - 8U) goto LAB_06daa82c;
      *(undefined4 *)(lVar5 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
      if (lVar7 == 0x2c) {
        return;
      }
    } while( true );
  }
LAB_06daa830:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


