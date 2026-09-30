/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$HookGetInstanceProcAddr
ENTRY_POINT: 076dd9d4
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_UnityOpenXR__HookGetInstanceProcAddr
          (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],float param_5
          ,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000008;
  
  param_3 = param_3 * param_3;
  fVar8 = (unaff_s8 - unaff_s10) * (unaff_s8 - unaff_s10);
  param_5 = SQRT(param_3 + (param_1 - unaff_s11) * (param_1 - unaff_s11) + fVar8) / param_5;
  uVar7 = FUN_0853dbe0(unaff_s14,param_6,0);
  fVar9 = fVar8;
  fVar10 = param_3;
  fVar4 = (float)FUN_0853dbe0(param_5,&stack0x00000058,0);
  if ((unaff_s15 <= 0.0) || (fVar5 = (float)FUN_076dd2c0(unaff_s14), fVar5 <= unaff_s15)) {
    fVar5 = *(float *)(unaff_x20 + 0x2c);
    bVar1 = false;
    bVar2 = false;
    if (fVar5 * 0.5 < ABS(fVar8)) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar5) && !NAN(unaff_s8)) {
        bVar1 = fVar5 == unaff_s8;
        bVar2 = unaff_s8 <= fVar5;
      }
    }
    bVar2 = bVar2 && !bVar1;
    if (0.0 < unaff_s15) goto LAB_076dda74;
LAB_076dda94:
    if (0.0 < fVar5) {
      bVar1 = fVar5 * 0.5 < ABS(fVar9);
      goto LAB_076ddab0;
    }
    if (!(bool)(unaff_w21 == 1 | bVar2)) goto LAB_076ddb88;
LAB_076ddad4:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar3 == 0)) goto LAB_076ddcdc;
    fVar8 = fVar10;
    uVar6 = FUN_08596980(fVar4,lVar3,0);
    *unaff_x19 = uVar6;
    unaff_x19[1] = fVar9;
    unaff_x19[2] = fVar8;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    param_3 = SQRT(fVar10 * fVar10 + fVar4 * fVar4);
    if (param_3 <= in_stack_00000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar4 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      param_3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar4 = 0.0 / param_3;
      param_3 = -fVar10 / param_3;
    }
  }
  else {
    bVar2 = true;
LAB_076dda74:
    fVar5 = (float)FUN_076dd2c0(param_5);
    if (fVar5 <= unaff_s15) {
      fVar5 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_076dda94;
    }
    bVar1 = true;
LAB_076ddab0:
    if ((unaff_w21 == 1) || (bVar2)) {
      if (bVar1) {
        return 0;
      }
      goto LAB_076ddad4;
    }
LAB_076ddb88:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar3 == 0)) goto LAB_076ddcdc;
    fVar9 = param_3;
    uVar6 = FUN_08596980(uVar7,lVar3,0);
    *unaff_x19 = uVar6;
    unaff_x19[1] = fVar8;
    unaff_x19[2] = fVar9;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar9 = SQRT(param_3 * param_3 + (float)uVar7 * (float)uVar7);
    param_5 = unaff_s14;
    if (fVar9 <= in_stack_00000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar4 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      param_3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar4 = 0.0 / fVar9;
      param_3 = param_3 / fVar9;
    }
  }
  if (lVar3 != 0) {
    uVar6 = FUN_08599d5c(lVar3,0);
    unaff_x19[3] = uVar6;
    unaff_x19[4] = fVar4;
    unaff_x19[5] = param_3;
    uVar6 = FUN_076dd2c0(param_5);
    unaff_x19[6] = uVar6;
    return 1;
  }
LAB_076ddcdc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


