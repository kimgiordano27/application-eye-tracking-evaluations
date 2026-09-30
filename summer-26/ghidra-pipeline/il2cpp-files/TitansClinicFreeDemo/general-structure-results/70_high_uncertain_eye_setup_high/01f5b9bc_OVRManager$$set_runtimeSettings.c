/*
FUNCTION_NAME: OVRManager$$set_runtimeSettings
ENTRY_POINT: 01f5b9bc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool OVRManager__set_runtimeSettings(ushort param_1)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  uint in_w8;
  undefined4 uVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  int iVar5;
  int unaff_w24;
  ulong unaff_x25;
  
code_r0x01f5b9bc:
  iVar5 = unaff_w24;
  if (in_w8 == 0x27) goto LAB_01f5b9d4;
  if (in_w8 != 0x5c) goto LAB_01f5b960;
LAB_01f5b9cc:
  unaff_w21 = unaff_w21 + 1;
  do {
    while( true ) {
      if ((1 < unaff_w24) || (unaff_w21 = unaff_w21 + 1, *(int *)(unaff_x20 + 0x10) <= unaff_w21)) {
        uVar4 = 5;
        if (unaff_w22 != 0 || unaff_w23 != 1) {
          uVar4 = 0xffffffff;
        }
        uVar1 = 4;
        if (unaff_w22 != 1 || unaff_w23 != 0) {
          uVar1 = uVar4;
        }
        *unaff_x19 = uVar1;
        return unaff_w22 == 1 && unaff_w23 == 0 || unaff_w22 == 0 && unaff_w23 == 1;
      }
      param_1 = FUN_01e60d24();
      in_w8 = (uint)param_1;
      if (0x26 < in_w8) goto code_r0x01f5b9bc;
      iVar5 = unaff_w24;
      if (in_w8 != 0x22) break;
LAB_01f5b9d4:
      unaff_w24 = iVar5;
      if ((unaff_x25 & 1) == 0) goto LAB_01f5b9d8;
OVRManager__get_runtimeSettings:
      if (param_1 == 0x4d) {
        iVar2 = unaff_w21;
        do {
          unaff_w21 = iVar2;
          if (*(int *)(unaff_x20 + 0x10) <= unaff_w21 + 1) break;
          sVar3 = FUN_01e60d24();
          iVar2 = unaff_w21 + 1;
        } while (sVar3 == 0x4d);
        unaff_x25 = 0;
        unaff_w24 = iVar5 + 1;
        unaff_w22 = iVar5;
      }
      else if (param_1 == 0x79) {
        iVar2 = unaff_w21;
        do {
          unaff_w21 = iVar2;
          if (*(int *)(unaff_x20 + 0x10) <= unaff_w21 + 1) break;
          sVar3 = FUN_01e60d24();
          iVar2 = unaff_w21 + 1;
        } while (sVar3 == 0x79);
        unaff_x25 = 0;
        unaff_w24 = iVar5 + 1;
        unaff_w23 = iVar5;
      }
      else {
        unaff_x25 = 0;
        unaff_w24 = iVar5;
      }
    }
    if (in_w8 == 0x25) goto LAB_01f5b9cc;
LAB_01f5b960:
    unaff_w24 = iVar5;
    if ((unaff_x25 & 1) == 0) goto OVRManager__get_runtimeSettings;
LAB_01f5b9d8:
    unaff_x25 = 1;
  } while( true );
}


