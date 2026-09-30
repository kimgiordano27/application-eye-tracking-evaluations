/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureWidth
ENTRY_POINT: 05be6a54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureWidth(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
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
  
  FUN_03188a78(*(undefined8 *)(param_3 + 0xb70));
  FUN_03188a78(PTR_DAT_070f1bd0);
  *(undefined1 *)(unaff_x21 + 0xd23) = 1;
  fVar6 = (float)FUN_05be6ba0();
  if (DAT_0754761d == '\0') {
    FUN_03188a78(PTR_DAT_070cf448);
    DAT_0754761d = '\x01';
  }
  fVar7 = fVar6 - **(float **)(*(long *)PTR_DAT_070cf448 + 0xb8);
  fVar8 = param_2 - (*(float **)(*(long *)PTR_DAT_070cf448 + 0xb8))[1];
  if (DAT_012e345c <= fVar7 * fVar7 + fVar8 * fVar8) {
    lVar3 = *(long *)(unaff_x20 + 0x50);
    if (lVar3 != 0) {
      *(float *)(lVar3 + 0x13c) = fVar6;
      *(float *)(lVar3 + 0x140) = param_2;
      puVar1 = PTR_DAT_070f1bd0;
      if ((unaff_x19 != 0) && (lVar3 = *(long *)(unaff_x20 + 0x50), lVar3 != 0)) {
        uVar9 = *(undefined4 *)(unaff_x19 + 0x108);
        *(undefined4 *)(lVar3 + 0x104) = *(undefined4 *)(unaff_x19 + 0x104);
        lVar2 = *(long *)puVar1;
        *(undefined4 *)(lVar3 + 0x108) = uVar9;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x50);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        if (DAT_0754ede0 == '\0') {
          FUN_03188a78(PTR_DAT_070f1bd0);
          DAT_0754ede0 = '\x01';
        }
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar3 = *(long *)puVar1;
        }
        FUN_03ab53f4(uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x58),
                     *(undefined8 *)PTR_DAT_07116b70);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  return;
}


