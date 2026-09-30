/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityHelper$$GetChildParentJointMapping
ENTRY_POINT: 06daa5ac
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


void Meta_XR_Movement_NativeUtilityHelper__GetChildParentJointMapping(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  double dVar7;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  
  while (lVar1 = **(long **)(param_1 + 0xb8), !(bool)in_ZR) {
    if (lVar1 == 0) goto LAB_06daa830;
    if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_06daa82c;
    lVar1 = *(long *)(lVar1 + 0x28);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (lVar1 == 0) goto LAB_06daa830;
    if ((ulong)*(uint *)(lVar1 + 0x18) <= unaff_x19 - 8U) goto LAB_06daa82c;
    dVar7 = sin(((double)((int)unaff_x19 + -8) + unaff_d10 + unaff_d11) * unaff_d9);
    *(float *)(lVar1 + unaff_x19 * 4) = (float)dVar7;
    param_1 = *unaff_x21;
    unaff_x19 = unaff_x19 + 1;
    in_ZR = unaff_x19 == 0x26;
  }
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    lVar4 = 0x26;
    do {
      uVar2 = (uint)uVar3;
      if (uVar2 < 2) goto LAB_06daa82c;
      lVar6 = *(long *)(lVar1 + 0x28);
      if (lVar6 == 0) goto LAB_06daa830;
      if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar4 - 8U) goto LAB_06daa82c;
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x2c);
    uVar5 = 0;
    do {
      if (uVar2 < 4) goto LAB_06daa82c;
      lVar4 = *(long *)(lVar1 + 0x38);
      if (lVar4 == 0) goto LAB_06daa830;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_06daa82c;
      lVar6 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + lVar6 + 0x20) = 0;
    } while (uVar5 != 6);
    lVar4 = 0xe;
    do {
      if (lVar1 == 0) goto LAB_06daa830;
      if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_06daa82c;
      lVar1 = *(long *)(lVar1 + 0x38);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (lVar1 == 0) goto LAB_06daa830;
      if ((ulong)*(uint *)(lVar1 + 0x18) <= lVar4 - 8U) goto LAB_06daa82c;
      dVar7 = sin(((double)((int)lVar4 + -8) + 0.5 + -6.0) * unaff_d9);
      *(float *)(lVar1 + lVar4 * 4) = (float)dVar7;
      lVar4 = lVar4 + 1;
      lVar1 = **(long **)(*unaff_x21 + 0xb8);
    } while (lVar4 != 0x14);
    if (lVar1 != 0) {
      uVar2 = *(uint *)(lVar1 + 0x18);
      lVar4 = 0x14;
      do {
        if (uVar2 < 4) goto LAB_06daa82c;
        lVar6 = *(long *)(lVar1 + 0x38);
        if (lVar6 == 0) goto LAB_06daa830;
        if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar4 - 8U) goto LAB_06daa82c;
        *(undefined4 *)(lVar6 + lVar4 * 4) = 0x3f800000;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x1a);
      lVar4 = 0x1a;
      do {
        if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_06daa82c;
        lVar1 = *(long *)(lVar1 + 0x38);
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (lVar1 == 0) break;
        if ((ulong)*(uint *)(lVar1 + 0x18) <= lVar4 - 8U) goto LAB_06daa82c;
        dVar7 = sin(((double)((int)lVar4 + -8) + 0.5) * unaff_d8);
        *(float *)(lVar1 + lVar4 * 4) = (float)dVar7;
        if (lVar4 == 0x2b) {
          uVar5 = 0;
          goto LAB_06daa764;
        }
        lVar4 = lVar4 + 1;
        lVar1 = **(long **)(*unaff_x21 + 0xb8);
      } while (lVar1 != 0);
    }
  }
  goto LAB_06daa830;
  while( true ) {
    if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_06daa82c;
    lVar1 = *(long *)(lVar1 + 0x30);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (lVar1 == 0) goto LAB_06daa830;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_06daa82c;
    dVar7 = sin(((double)(int)uVar5 + 0.5) * unaff_d9);
    lVar4 = uVar5 * 4;
    uVar5 = uVar5 + 1;
    *(float *)(lVar1 + lVar4 + 0x20) = (float)dVar7;
    if (uVar5 == 0xc) break;
LAB_06daa764:
    lVar1 = **(long **)(*unaff_x21 + 0xb8);
    if (lVar1 == 0) goto LAB_06daa830;
  }
  lVar1 = **(long **)(*unaff_x21 + 0xb8);
  if (lVar1 != 0) {
    uVar2 = *(uint *)(lVar1 + 0x18);
    lVar4 = 0x14;
    do {
      if (uVar2 < 3) {
LAB_06daa82c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar6 = *(long *)(lVar1 + 0x30);
      if (lVar6 == 0) break;
      if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar4 - 8U) goto LAB_06daa82c;
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
      if (lVar4 == 0x2c) {
        return;
      }
    } while( true );
  }
LAB_06daa830:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


