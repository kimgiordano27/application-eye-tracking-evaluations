/*
FUNCTION_NAME: Meta.XR.Acoustics.MaterialData$$get_IsEmpty
ENTRY_POINT: 089e50b8
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_MaterialData__get_IsEmpty(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined4 uVar4;
  
  do {
    uVar3 = FUN_088ed628(param_1);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
    thunk_FUN_049ee3d8(unaff_x20 + 0x10,uVar3);
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = FUN_088e7824();
          if ((uVar1 == 0) || ((uVar1 & 7) == 4)) {
            return;
          }
          if (uVar1 != 0xd) break;
          uVar4 = FUN_088e80a8();
          *(undefined4 *)(unaff_x20 + 0x18) = uVar4;
        }
        if (uVar1 != 0x15) break;
        uVar4 = FUN_088e80a8();
        *(undefined4 *)(unaff_x20 + 0x1c) = uVar4;
      }
      if (uVar1 != 0x18) break;
      lVar2 = FUN_088e79c4();
      *(bool *)(unaff_x20 + 0x20) = lVar2 != 0;
    }
    param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  } while( true );
}


