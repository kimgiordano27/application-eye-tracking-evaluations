/*
FUNCTION_NAME: OVRPlugin.OVRP_1_42_0$$.cctor
ENTRY_POINT: 076e4e08
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_42_0___cctor(void)

{
  int iVar1;
  ulong uVar2;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  undefined4 unaff_s10;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08fae310);
  *(undefined1 *)(unaff_x22 + 0x2c6) = 1;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar2 = FUN_076e3724(unaff_s10);
  if ((uVar2 & 1) != 0) {
    fVar6 = *unaff_x19;
    fVar9 = unaff_x19[1];
    fVar8 = unaff_x19[2];
    if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar4 = (float)FUN_076e2da4();
    if (DAT_09539e19 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e19 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar7 = unaff_x19[7];
    fVar5 = *(float *)(unaff_x21 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x19 + 10);
    fVar6 = SQRT((fVar8 - unaff_s8) * (fVar8 - unaff_s8) +
                 (fVar6 - fVar4) * (fVar6 - fVar4) + (fVar9 - unaff_s9) * (fVar9 - unaff_s9));
    if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar8 = -fVar6;
    uVar2 = FUN_08589e5c(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (fVar5 <= ABS(fVar6 + fVar7)) {
        if (unaff_x19[7] <= fVar8) {
          return;
        }
      }
      else {
        iVar1 = (**(code **)(*unaff_x21 + 0x548))();
        if (iVar1 < 1) {
          return;
        }
      }
    }
    unaff_x19[7] = fVar8;
    unaff_x19[0x14] = 0.0;
    unaff_x19[0x15] = 0.0;
    unaff_x19[0xe] = 0.0;
    unaff_x19[0xf] = 0.0;
    unaff_x19[0xc] = 0.0;
    unaff_x19[0xd] = 0.0;
    unaff_x19[0x12] = 0.0;
    unaff_x19[0x13] = 0.0;
    unaff_x19[0x10] = 0.0;
    unaff_x19[0x11] = 0.0;
    *(long *)(unaff_x19 + 10) = unaff_x20;
    return;
  }
  return;
}


