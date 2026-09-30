/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Category$$get_Label
ENTRY_POINT: 08a15d7c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Category__get_Label(void)

{
  undefined *puVar1;
  bool in_NG;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 in_w8;
  undefined4 in_w9;
  long unaff_x19;
  undefined8 unaff_d8;
  
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_d8;
  if (!in_NG) {
    in_w8 = in_w9;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = in_w8;
  lVar2 = thunk_FUN_04983f60();
  FUN_08a13d74();
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = 0;
    puVar1 = PTR_DAT_0ac51bb0;
    if (*(long *)(lVar2 + 0x20) != 0) {
      FUN_07506ee8();
      lVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_08dbf2f0(lVar3,0);
      puVar1 = PTR_DAT_0ac51bc0;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = lVar2;
        thunk_FUN_049ee3d8((long *)(lVar3 + 0x18),lVar2);
        uVar4 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar3 + 0x20) = 0x193;
        lVar2 = thunk_FUN_04983f60(uVar4);
        FUN_08a153f0();
        if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
          FUN_07506ee8(*(long *)(lVar2 + 0x18),lVar3,*(undefined8 *)PTR_DAT_0ac51d98);
          FUN_088e5708(lVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


