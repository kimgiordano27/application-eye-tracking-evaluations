/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 05d1abe8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__SetTrackingOriginType(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong in_x9;
  long lVar4;
  int *in_x10;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
code_r0x05d1abe8:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_05d1abdc;
LAB_05d1abf4:
  puVar2 = (undefined8 *)FUN_02feb5b8(unaff_x22,param_3,0);
  do {
    fVar5 = (float)(*(code *)*puVar2)(unaff_x22,unaff_x21 & 0xffffffff,puVar2[1]);
    if (*(long *)(unaff_x20 + 0xd0) == 0) {
LAB_05d1adbc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    fVar6 = *(float *)(*(long *)(unaff_x20 + 0xd0) + 0xd8);
    lVar4 = *unaff_x19;
    fVar6 = (fVar5 - fVar6) / (unaff_s9 - fVar6);
    fVar5 = fVar6;
    if (unaff_s9 < fVar6) {
      fVar5 = unaff_s9;
    }
    if (fVar6 < 0.0) {
      fVar5 = unaff_s8;
    }
    if (lVar4 == 0) goto LAB_05d1adbc;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x21) {
LAB_05d1adc0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(float *)(lVar4 + unaff_x21 * 4 + 0x20) = fVar5;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar1 = FUN_05d34be4();
    if (iVar1 == 2) {
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto LAB_05d1adbc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
      fVar5 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
      unaff_x26 = 1;
      if (fVar5 <= unaff_s10) {
        unaff_s10 = fVar5;
      }
    }
    else {
      if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_05d1adbc;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar1 = FUN_05d34be4();
      lVar4 = *unaff_x19;
      if (iVar1 == 1) {
        if (lVar4 == 0) goto LAB_05d1adbc;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
        fVar5 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
        if (unaff_s11 <= fVar5) {
          unaff_s11 = fVar5;
        }
      }
      else if (lVar4 == 0) goto LAB_05d1adbc;
    }
    if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
    uVar3 = unaff_w25 << (ulong)((uint)unaff_x21 & 0x1f);
    if (*(float *)(lVar4 + unaff_x21 * 4 + 0x20) <= 0.0) {
      uVar3 = *(uint *)(unaff_x20 + 0x158) & (uVar3 ^ 0xffffffff);
    }
    else {
      uVar3 = *(uint *)(unaff_x20 + 0x158) | uVar3;
    }
    *(uint *)(unaff_x20 + 0x158) = uVar3;
    while( true ) {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 5) {
        if ((unaff_x26 & 1) == 0) {
          unaff_s10 = unaff_s11;
        }
        return unaff_s10;
      }
      if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_05d1adbc;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar1 = FUN_05d34be4();
      if (iVar1 != 0) break;
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto LAB_05d1adbc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
      *(undefined4 *)(lVar4 + unaff_x21 * 4 + 0x20) = 0;
    }
    unaff_x22 = *(long **)(unaff_x20 + 0x130);
    if (unaff_x22 == (long *)0x0) goto LAB_05d1adbc;
    param_1 = *unaff_x22;
    param_3 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_05d1abf4;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_05d1abdc:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x05d1abe8;
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


