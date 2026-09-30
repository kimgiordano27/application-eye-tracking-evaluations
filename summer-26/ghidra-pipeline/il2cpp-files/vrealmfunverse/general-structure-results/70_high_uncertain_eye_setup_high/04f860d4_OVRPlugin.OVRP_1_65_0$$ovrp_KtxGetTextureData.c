/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 04f860d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(undefined1 param_1 [16],float param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 in_w8;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  *(undefined1 *)(unaff_x21 + 0xd27) = in_w8;
  fVar6 = (float)FUN_04f86208();
  if (DAT_066c1e96 == '\0') {
    FUN_02b3c81c(PTR_DAT_063132f8);
    DAT_066c1e96 = '\x01';
  }
  fVar7 = fVar6 - **(float **)(*(long *)PTR_DAT_063132f8 + 0xb8);
  fVar8 = param_2 - (*(float **)(*(long *)PTR_DAT_063132f8 + 0xb8))[1];
  if (DAT_01031cf4 <= fVar7 * fVar7 + fVar8 * fVar8) {
    lVar3 = *(long *)(unaff_x20 + 0x50);
    if (lVar3 != 0) {
      *(float *)(lVar3 + 0x17c) = fVar6;
      *(float *)(lVar3 + 0x180) = param_2;
      puVar1 = PTR_DAT_06319a68;
      if ((unaff_x19 != 0) && (lVar3 = *(long *)(unaff_x20 + 0x50), lVar3 != 0)) {
        uVar9 = *(undefined4 *)(unaff_x19 + 0x148);
        *(undefined4 *)(lVar3 + 0x144) = *(undefined4 *)(unaff_x19 + 0x144);
        lVar2 = *(long *)puVar1;
        *(undefined4 *)(lVar3 + 0x148) = uVar9;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x50);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066c9db7 == '\0') {
          FUN_02b3c81c(PTR_DAT_06319a68);
          DAT_066c9db7 = '\x01';
        }
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        FUN_031cd248(uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x58),
                     *(undefined8 *)System_Func<InputDevice>_TypeInfo);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  return;
}


