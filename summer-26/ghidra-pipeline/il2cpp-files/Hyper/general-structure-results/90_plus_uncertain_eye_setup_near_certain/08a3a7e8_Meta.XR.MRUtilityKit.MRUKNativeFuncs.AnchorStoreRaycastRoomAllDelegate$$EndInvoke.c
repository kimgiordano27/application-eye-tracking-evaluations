/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomAllDelegate$$EndInvoke
ENTRY_POINT: 08a3a7e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__EndInvoke(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  undefined8 unaff_x21;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  lVar3 = thunk_FUN_04983f60();
  FUN_097a9f64();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(undefined8 *)(lVar3 + 0x38) = unaff_x21;
  thunk_FUN_049ee3d8();
  if (*(int *)(*(long *)PTR_DAT_0ac46f10 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar3 = FUN_05a94418();
  if (lVar3 != 0) {
    in_stack_00000018 = FUN_07764808(lVar3,*(undefined8 *)PTR_DAT_0ac52e38);
    uVar4 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac52e30);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05496ce8(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar5 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac52e28);
      puVar2 = PTR_DAT_0ac52e10;
      iVar1 = *(int *)(*unaff_x24 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar1 == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


