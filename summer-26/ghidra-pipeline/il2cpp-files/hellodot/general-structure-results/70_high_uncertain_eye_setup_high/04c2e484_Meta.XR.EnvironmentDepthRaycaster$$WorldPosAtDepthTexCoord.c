/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosAtDepthTexCoord
ENTRY_POINT: 04c2e484
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__WorldPosAtDepthTexCoord(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *in_x9;
  undefined4 uVar5;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*in_x9 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_04f93e40(&stack0x00000008,0);
                    /* try { // try from 04c2e4a0 to 04d2e4ab has its CatchHandler @ 04c2e1ac */
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 04c2e4ac to 04d2e4b3 has its CatchHandler @ 04c2e4b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c2e478 with catch @ 04c2e4b4
                       catch(type#2 @ 00000000) { ... } // from try @ 04c2e4ac with catch @ 04c2e4b4
                        */
                    /* try { // try from 04c2e4b8 to 04d2e51b has its CatchHandler @ 04c2e4b8
                       catch() { ... } // from try @ 04c2e4b8 with catch @ 04c2e4b8
                       catch() { ... } // from try @ 04c2e548 with catch @ 04c2e4b8
                       catch() { ... } // from try @ 04c2e584 with catch @ 04c2e4b8
                       catch() { ... } // from try @ 04c2e5d8 with catch @ 04c2e4b8 */
    if (((*(long *)(unaff_x19 + 0x10) == 0) || (*(long *)(unaff_x20 + 0x10) == 0)) ||
       (plVar3 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0x30), plVar3 == (long *)0x0))
    goto LAB_04c2e53c;
    uVar2 = (**(code **)(*plVar3 + 0x138))
                      (plVar3,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x40),
                       *(undefined8 *)(*plVar3 + 0x140));
    if ((uVar2 & 1) == 0) goto LAB_04c2e4e4;
    FUN_04c2e284();
    uVar5 = 1;
  }
  else {
LAB_04c2e4e4:
    uVar5 = 0;
  }
  puVar1 = PTR_DAT_065ce330;
  lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce328);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Int32Enum>__SetResult
            (lVar4,*(undefined8 *)puVar1);
  if (lVar4 != 0) {
                    /* try { // try from 04c2e51c to 04d2e523 has its CatchHandler @ 04c2e594 */
    FUN_0401f380(lVar4,uVar5,*(undefined8 *)PTR_DAT_065ce418);
    return *(undefined8 *)(lVar4 + 0x10);
  }
LAB_04c2e53c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


