/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_HookGetInstanceProcAddr
ENTRY_POINT: 076dda98
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_HookGetInstanceProcAddr(float param_1)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  float in_stack_00000008;
  float in_stack_00000030;
  undefined8 in_stack_00000040;
  
  if (!in_CY || in_ZR) {
    if (unaff_w21 != 1 && (unaff_x24 & 1) == 0) goto LAB_076ddb88;
LAB_076ddad4:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar1 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar1 == 0)) goto LAB_076ddcdc;
    fVar4 = in_stack_00000030;
    uVar2 = FUN_08596980(unaff_s10,lVar1,0);
    *unaff_x19 = uVar2;
    unaff_x19[1] = unaff_s12;
    unaff_x19[2] = fVar4;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar1 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar4 = SQRT(in_stack_00000030 * in_stack_00000030 + unaff_s10 * unaff_s10);
    if (fVar4 <= in_stack_00000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar3 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar3 = 0.0 / fVar4;
      fVar4 = -in_stack_00000030 / fVar4;
    }
  }
  else {
    if ((unaff_w21 == 1) || ((unaff_x24 & 1) != 0)) {
      if (param_1 * 0.5 < ABS(unaff_s12)) {
        return 0;
      }
      goto LAB_076ddad4;
    }
LAB_076ddb88:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar1 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar1 == 0)) goto LAB_076ddcdc;
    fVar4 = unaff_s11;
    uVar2 = FUN_08596980(in_stack_00000040,lVar1,0);
    *unaff_x19 = uVar2;
    unaff_x19[1] = unaff_s13;
    unaff_x19[2] = fVar4;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar1 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar4 = SQRT(unaff_s11 * unaff_s11 + (float)in_stack_00000040 * (float)in_stack_00000040);
    unaff_s9 = unaff_s14;
    if (fVar4 <= in_stack_00000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar3 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar3 = 0.0 / fVar4;
      fVar4 = unaff_s11 / fVar4;
    }
  }
  if (lVar1 != 0) {
    uVar2 = FUN_08599d5c(lVar1,0);
    unaff_x19[3] = uVar2;
    unaff_x19[4] = fVar3;
    unaff_x19[5] = fVar4;
    uVar2 = FUN_076dd2c0(unaff_s9);
    unaff_x19[6] = uVar2;
    return 1;
  }
LAB_076ddcdc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


