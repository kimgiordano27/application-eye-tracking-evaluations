/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$GetFirstLayerFromLayerMask
ENTRY_POINT: 04c65db0
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__GetFirstLayerFromLayerMask(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *in_x9;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 04c65db0 to 04d65db7 has its CatchHandler @ 04c65db8 */
                    /* catch() { ... } // from try @ 04c65c98 with catch @ 04c65db8
                       catch() { ... } // from try @ 04c65d24 with catch @ 04c65db8
                       catch() { ... } // from try @ 04c65d90 with catch @ 04c65db8
                       catch() { ... } // from try @ 04c65db0 with catch @ 04c65db8 */
  lVar1 = (*in_x9)();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _in_stack_00000010 = FUN_0404bcb8(lVar1,0,*(undefined8 *)PTR_DAT_065e1788);
  uVar2 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1780);
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000010;
    if (*(int *)(*(long *)PTR_DAT_065dfdf8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030b78e4(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    lVar1 = FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1778);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar2 = FUN_054df770(lVar1,0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar1 = FUN_04c2d5f8();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar5 = FUN_0404bcb8(lVar1,0,*(undefined8 *)PTR_DAT_065e1898);
      uVar2 = FUN_044a8fc8();
      if ((uVar2 & 1) != 0) {
        thunk_FUN_02c7737c(PTR_DAT_065e18a0);
        uVar3 = FUN_044a9014();
        uVar4 = thunk_FUN_02c7737c(PTR_DAT_065e7590);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar3,uVar4);
      }
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar5;
      if (*(int *)(*(long *)PTR_DAT_065dfdf8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b78e4(unaff_x19 + 2);
    }
    else {
      lVar1 = FUN_054d8134(lVar1,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar3 = FUN_054eaf68(lVar1,0);
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_065dfdf8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04266690(unaff_x19 + 2,uVar3,*(undefined8 *)PTR_DAT_065e1880);
    }
  }
  return;
}


