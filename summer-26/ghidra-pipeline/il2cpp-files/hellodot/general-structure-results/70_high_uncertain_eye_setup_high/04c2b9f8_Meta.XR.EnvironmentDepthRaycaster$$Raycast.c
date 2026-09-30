/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 04c2b9f8
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__Raycast(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined1 auVar5 [16];
  
  *(undefined1 *)(unaff_x20 + 0x40) = in_w8;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar2 = FUN_054dd400(param_1,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar5 = FUN_0404bcb8(lVar2,0,*(undefined8 *)PTR_DAT_065e1758);
  uVar3 = FUN_044a8fc8();
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 10) = auVar5;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030b91d4(unaff_x19 + 2);
  }
  else {
    uVar4 = FUN_044a9014();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar4,uVar4);
    }
    lVar2 = *(long *)(unaff_x20 + 0x38);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar4,uVar4);
    }
    uVar4 = (**(code **)(lVar2 + 0x18))
                      (*(undefined8 *)(lVar2 + 0x40),uVar4,*(undefined8 *)(lVar2 + 0x28));
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_065e1738;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  }
  return;
}


