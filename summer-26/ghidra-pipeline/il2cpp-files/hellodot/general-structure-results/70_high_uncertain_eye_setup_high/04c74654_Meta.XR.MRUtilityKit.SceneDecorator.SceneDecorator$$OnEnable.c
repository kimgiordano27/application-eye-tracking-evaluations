/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$OnEnable
ENTRY_POINT: 04c74654
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__OnEnable(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *unaff_x19;
  long unaff_x21;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 04c74654 to 04d7465f has its CatchHandler @ 04c746bc */
  _in_stack_00000010 = FUN_0404bcb8(param_2,0,**(undefined8 **)(param_1 + 800));
                    /* try { // try from 04c74670 to 04d7467b has its CatchHandler @ 04c746b8 */
                    /* try { // try from 04c7467c to 04d746d7 has its CatchHandler @ 04c745d4 */
  uVar2 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e6308);
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
    if (*(int *)(*(long *)PTR_DAT_065e7b40 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c74670 with catch @ 04c746b8
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c74654 with catch @ 04c746bc
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c74638 with catch @ 04c746c0
                        */
    FUN_030bc3cc(unaff_x19 + 2,&stack0x00000010);
  }
  else {
                    /* catch() { ... } // from try @ 04c746d8 with catch @ 04c746e8 */
    FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e6300);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* try { // try from 04c746f8 to 04d746ff has its CatchHandler @ 04c74714 */
    if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* try { // try from 04c74700 to 04d7470b has its CatchHandler @ 04c745d4 */
    uVar3 = FUN_04c2ccb4(*(long *)(unaff_x21 + 0x18),0);
    FUN_04c32e9c(uVar3,0);
                    /* try { // try from 04c7470c to 04d74713 has its CatchHandler @ 04c74714 */
    if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c746f8 with catch @ 04c74714
                       catch(type#2 @ 00000000) { ... } // from try @ 04c7470c with catch @ 04c74714
                        */
    plVar4 = *(long **)(*(long *)(unaff_x21 + 0x18) + 0xa8);
                    /* try { // try from 04c74718 to 04d74983 has its CatchHandler @ 04c74718
                       catch() { ... } // from try @ 04c74718 with catch @ 04c74718
                       catch() { ... } // from try @ 04c74a98 with catch @ 04c74718
                       catch() { ... } // from try @ 04c74ba8 with catch @ 04c74718
                       catch() { ... } // from try @ 04c74bb0 with catch @ 04c74718
                       catch() { ... } // from try @ 04c74bbc with catch @ 04c74718
                       catch() { ... } // from try @ 04c74c78 with catch @ 04c74718 */
    *(long **)(unaff_x19 + 0xc) = plVar4;
    if (*(long *)(unaff_x21 + 0x20) == 0) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar3 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    }
    else {
      uVar3 = FUN_04c5f5cc(*(long *)(unaff_x21 + 0x20));
      if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar3 = FUN_04eaf7a8(uVar3,0);
    }
    plVar4 = *(long **)(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0xe) = uVar3;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    uVar2 = FUN_04db8dd0(uVar3,uVar5,0);
    if ((uVar2 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x14) = 0;
      lVar7 = *(long *)(unaff_x21 + 0x30);
      if (lVar7 == 0) {
        uVar3 = 0;
      }
      else {
        lVar7 = (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(unaff_x19 + 0xc),
                           *(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(lVar7 + 0x28));
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar8 = FUN_04fa5130(lVar7,0,0);
        uVar2 = FUN_04e5bb90();
        if ((uVar2 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar8;
          if (*(int *)(*(long *)PTR_DAT_065e7b40 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030c5328(unaff_x19 + 2);
          return;
        }
        FUN_04e5bbac();
        uVar3 = *(undefined8 *)(unaff_x19 + 0x14);
      }
      uVar5 = *(undefined8 *)(unaff_x19 + 0xc);
      uVar1 = *(undefined8 *)(unaff_x19 + 0xe);
      thunk_FUN_02c7737c(PTR_DAT_065e7fe0);
      uVar6 = thunk_FUN_02cea894();
      FUN_04c799a8(uVar6,uVar1,uVar5,uVar3,0);
      uVar3 = thunk_FUN_02c7737c(PTR_DAT_065e8048);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar6,uVar3);
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0xc);
    *unaff_x19 = 0xfffffffe;
    *(long *)(unaff_x19 + 0xc) = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    if (*(int *)(*(long *)PTR_DAT_065e7b40 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,uVar3,*(undefined8 *)PTR_DAT_065e8040);
  }
  return;
}


