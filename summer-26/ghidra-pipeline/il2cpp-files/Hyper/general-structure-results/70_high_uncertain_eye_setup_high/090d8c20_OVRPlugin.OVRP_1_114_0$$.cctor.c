/*
FUNCTION_NAME: OVRPlugin.OVRP_1_114_0$$.cctor
ENTRY_POINT: 090d8c20
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_114_0___cctor(undefined8 param_1)

{
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  while (!(bool)in_ZR && in_NG == in_OV) {
    in_w3 = (int)param_1 - in_w3;
    iVar1 = unaff_w22;
    if (in_w3 <= unaff_w22) {
      iVar1 = in_w3;
    }
    FUN_08d9f1fc();
    in_w3 = iVar1 + *(int *)(unaff_x19 + 0x20);
    *(int *)(unaff_x19 + 0x20) = in_w3;
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_090d8c74;
    param_1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x18);
    unaff_w22 = unaff_w22 - iVar1;
    if ((int)param_1 < in_w3) {
      thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
      uVar3 = thunk_FUN_04983f60();
      FUN_08db3de4(uVar3,0);
      uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac79990);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar3,uVar4);
    }
    if (in_w3 == (int)param_1) {
      in_w3 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
    in_NG = unaff_w22 < 0;
    in_OV = '\0';
    in_ZR = unaff_w22 == 0;
  }
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_01df4e38;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar2 = FUN_0a127920(*(long *)(unaff_x19 + 0x10),0), lVar2 != 0)) {
    FUN_0a1268f0(lVar2,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
LAB_090d8c74:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


