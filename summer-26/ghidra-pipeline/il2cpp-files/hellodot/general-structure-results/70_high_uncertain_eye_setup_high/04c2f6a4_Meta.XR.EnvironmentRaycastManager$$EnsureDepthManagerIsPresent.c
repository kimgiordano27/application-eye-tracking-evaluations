/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$EnsureDepthManagerIsPresent
ENTRY_POINT: 04c2f6a4
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


void Meta_XR_EnvironmentRaycastManager__EnsureDepthManagerIsPresent(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *unaff_x19;
  undefined8 uVar4;
  long *unaff_x23;
  
  uVar2 = FUN_044a9014();
  uVar4 = *(undefined8 *)(unaff_x19 + 0xc);
  lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e1518);
                    /* try { // try from 04c2f6c0 to 04d2f87b has its CatchHandler @ 04c2f6c0
                       catch() { ... } // from try @ 04c2f6c0 with catch @ 04c2f6c0
                       catch() { ... } // from try @ 04c2f900 with catch @ 04c2f6c0
                       catch() { ... } // from try @ 04c2fae8 with catch @ 04c2f6c0
                       catch() { ... } // from try @ 04c2fb80 with catch @ 04c2f6c0
                       catch() { ... } // from try @ 04c2fc34 with catch @ 04c2f6c0
                       catch() { ... } // from try @ 04c2fc44 with catch @ 04c2f6c0
                       catch() { ... } // from try @ 04c2fcf0 with catch @ 04c2f6c0
                       catch() { ... } // from try @ 04c2fda8 with catch @ 04c2f6c0 */
  FUN_04c17ea4(lVar3,uVar4,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar3 + 0x98) = uVar2;
  if (*(long *)(unaff_x19 + 10) != 0) {
    *(undefined4 *)(lVar3 + 0xa0) = *(undefined4 *)(*(long *)(unaff_x19 + 10) + 0x20);
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    puVar1 = PTR_DAT_065e6250;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar3,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


