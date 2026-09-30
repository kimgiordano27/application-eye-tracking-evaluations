/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorAdded$$BeginInvoke
ENTRY_POINT: 06dc719c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorAdded__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x9;
  int *in_x10;
  long *unaff_x19;
  undefined8 *unaff_x21;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_03cf1348();
      goto LAB_06dc71c8;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar2 + 2) * 0x10 + 0x138);
LAB_06dc71c8:
  lVar4 = (*(code *)*puVar3)();
  uVar5 = thunk_FUN_03cf5234(*unaff_x21);
  if ((unaff_x19 != (long *)0x0) && (FUN_05d60b38(), lVar4 != 0)) {
    FUN_05d68e60(lVar4,uVar5,*(undefined8 *)PTR_DAT_08e6c420);
    lVar4 = (**(code **)(*unaff_x19 + 0x548))();
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x90);
      uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90d10);
      FUN_05d60b38();
      if (lVar4 != 0) {
        FUN_05d68e60(lVar4,uVar5,*(undefined8 *)PTR_DAT_08e90d18);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


