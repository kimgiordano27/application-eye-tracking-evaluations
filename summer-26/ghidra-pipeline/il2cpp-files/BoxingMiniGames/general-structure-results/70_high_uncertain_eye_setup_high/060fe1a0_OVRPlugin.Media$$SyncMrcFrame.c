/*
FUNCTION_NAME: OVRPlugin.Media$$SyncMrcFrame
ENTRY_POINT: 060fe1a0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SyncMrcFrame(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  
  do {
    *(int *)(unaff_x19 + 0x20) = param_4;
    if (param_3 == 0) {
LAB_060fe21c:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    unaff_w22 = unaff_w22 - unaff_w21;
    iVar4 = (int)*(undefined8 *)(param_3 + 0x18);
    if (iVar4 < param_4) {
      thunk_FUN_036aa1c8(PTR_DAT_079f4ff8);
      uVar2 = thunk_FUN_0367fe20();
      FUN_05e4fb38(uVar2,0);
      uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a24e50);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar2,uVar3);
    }
    if (param_4 == iVar4) {
      param_4 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
    if (unaff_w22 < 1) {
      *(float *)(unaff_x19 + 0x28) =
           *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_016510f0;
      if ((*(long *)(unaff_x19 + 0x10) != 0) &&
         (lVar1 = FUN_07165710(*(long *)(unaff_x19 + 0x10),0), lVar1 != 0)) {
        Unity_Properties_TypeConversion_PrimitiveConverters_<>c__<RegisterUInt64Converters>b__8_8
                  (lVar1,*(undefined8 *)(unaff_x19 + 0x18),0,0);
        return;
      }
      goto LAB_060fe21c;
    }
    unaff_w21 = unaff_w22;
    if (iVar4 - param_4 <= unaff_w22) {
      unaff_w21 = iVar4 - param_4;
    }
    FUN_05e3b3a4();
    param_3 = *(long *)(unaff_x19 + 0x18);
    param_4 = unaff_w21 + *(int *)(unaff_x19 + 0x20);
  } while( true );
}


