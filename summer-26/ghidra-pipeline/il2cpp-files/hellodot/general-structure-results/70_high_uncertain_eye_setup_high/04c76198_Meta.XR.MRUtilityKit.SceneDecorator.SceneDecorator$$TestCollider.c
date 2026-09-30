/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$TestCollider
ENTRY_POINT: 04c76198
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__TestCollider(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *plVar4;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar5 [16];
  
  while( true ) {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar2 = (**(code **)(*unaff_x20 + 0x198))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1a0));
    if (((uVar2 & 0xff00) != 0) && ((uVar2 & 0xff) != 0)) {
      uVar3 = (**(code **)(*unaff_x20 + 0x1f8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x200));
      *(undefined8 *)(unaff_x19 + 0x16) = 0;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_065e7b40 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04266690(unaff_x19 + 2,uVar3,*(undefined8 *)PTR_DAT_065e8040);
      return;
    }
    plVar4 = *(long **)(unaff_x19 + 0x16);
    uVar3 = (**(code **)(*unaff_x20 + 0x218))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x220));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar3,uVar3);
    }
    (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
    if (*(long *)(unaff_x19 + 0x16) == 0) break;
    lVar1 = FUN_043d0cd8(*(long *)(unaff_x19 + 0x16),*(undefined8 *)(unaff_x19 + 0x14),*unaff_x23);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar5 = FUN_0404bcb8(lVar1,0,*unaff_x24);
    uVar2 = FUN_044a8fc8();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar5;
      if (*(int *)(*(long *)PTR_DAT_065e7b40 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b855c(unaff_x19 + 2);
      return;
    }
    param_1 = (long *)FUN_044a9014();
    unaff_x20 = param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


