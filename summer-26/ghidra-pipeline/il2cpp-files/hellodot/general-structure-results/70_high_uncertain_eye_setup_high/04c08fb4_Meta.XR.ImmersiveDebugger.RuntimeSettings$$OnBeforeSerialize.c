/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 04c08fb4
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar2 = FUN_044a8fc8();
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000000;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030b74bc(unaff_x19 + 2);
  }
  else {
    uVar3 = FUN_044a9014();
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e13a8);
    FUN_04bde8a0(lVar4,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(unaff_x20 + 0x58);
    uVar3 = FUN_04bde8a8(lVar4,uVar3,0);
                    /* try { // try from 04c09070 to 04d09097 has its CatchHandler @ 04c092e4 */
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_065e50e0;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,uVar3,*(undefined8 *)puVar1);
  }
                    /* try { // try from 04c090b0 to 04d0910f has its CatchHandler @ 04c092e8 */
  return;
}


