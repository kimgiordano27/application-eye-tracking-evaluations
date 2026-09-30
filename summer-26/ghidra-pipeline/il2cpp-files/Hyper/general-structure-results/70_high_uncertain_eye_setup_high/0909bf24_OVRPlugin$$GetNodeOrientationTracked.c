/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationTracked
ENTRY_POINT: 0909bf24
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeOrientationTracked(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_x9;
  long unaff_x19;
  undefined8 uVar5;
  
  (**(code **)(in_x9 + 0x368))(param_2,*param_1,*(undefined8 *)(in_x9 + 0x370));
  if (*(long *)(unaff_x19 + 200) != 0) {
    uVar2 = FUN_05b00790(*(long *)(unaff_x19 + 200),*(undefined8 *)PTR_DAT_0ac76680);
    *(undefined8 *)(unaff_x19 + 0x138) = uVar2;
    thunk_FUN_049ee3d8(unaff_x19 + 0x138,uVar2);
    if (*(long *)(unaff_x19 + 0x120) == 0) {
      lVar3 = FUN_0a178414();
      if (lVar3 == 0) goto LAB_0909bff8;
      FUN_05bde8d8(lVar3,*(undefined8 *)PTR_DAT_0ac76688);
      FUN_0909bffc();
    }
    puVar1 = PTR_DAT_0ac78be8;
    if (*(long *)(unaff_x19 + 200) != 0) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x130);
      uVar2 = FUN_0a17834c(*(long *)(unaff_x19 + 200),0);
      uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_0909ab00(uVar4,uVar5,uVar2);
      *(undefined8 *)(unaff_x19 + 0x140) = uVar4;
      thunk_FUN_049ee3d8(unaff_x19 + 0x140,uVar4);
      FUN_08fdfedc();
      return;
    }
  }
LAB_0909bff8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


