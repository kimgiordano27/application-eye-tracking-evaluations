/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 05d8e190
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 113
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(float param_1)

{
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar2;
  uint in_w8;
  long in_x9;
  long lVar3;
  ulong in_x10;
  ulong in_x11;
  long in_x12;
  long in_x13;
  long unaff_x19;
  undefined8 uVar4;
  float fVar5;
  
  while( true ) {
    fVar5 = param_1;
    uVar1 = (uint)in_x10;
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar1 = in_w8;
    }
    in_x10 = in_x10 + 1;
    if (in_x9 == 0) goto LAB_05d8e19c;
    if (in_x13 <= (long)in_x10) break;
    if (in_x11 <= in_x10) goto LAB_05d8e228;
    param_1 = *(float *)(in_x12 + in_x10 * 4);
    in_OV = NAN(param_1) || NAN(fVar5);
    in_ZR = param_1 == fVar5;
    in_NG = param_1 < fVar5;
    in_w8 = uVar1;
    if (param_1 <= fVar5) {
      param_1 = fVar5;
    }
  }
  if (uVar1 != 0xffffffff) {
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 == 0) {
LAB_05d8e19c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((int)uVar1 < (int)*(uint *)(lVar3 + 0x18)) {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_05d8e228:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar4 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar2 = FUN_06be9890(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_06bc3b68(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_072aca58,uVar4,0);
          return;
        }
        goto LAB_05d8e19c;
      }
    }
  }
  return;
}


