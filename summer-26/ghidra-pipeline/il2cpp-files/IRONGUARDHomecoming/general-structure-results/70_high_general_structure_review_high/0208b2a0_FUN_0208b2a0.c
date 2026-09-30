/*
FUNCTION_NAME: FUN_0208b2a0
ENTRY_POINT: 0208b2a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_0208b2a0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_0482f755 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_Vector4>__ctor__)
    ;
                    /* try { // try from 0208b2d4 to 0218b2db has its CatchHandler @ 0208b30c */
                    /* try { // try from 0208b2dc to 0218b2ff has its CatchHandler @ 0208b140 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_0482f755 = 1;
  }
  if (*(long *)(param_5 + 0x90) != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x80);
    uVar4 = FUN_0407d3c8(*(long *)(param_5 + 0x90),0);
    puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_Vector4>__ctor__;
    puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
                    /* try { // try from 0208b300 to 0218b307 has its CatchHandler @ 0208b30c */
    if (*(long *)(param_5 + 0x90) != 0) {
      uVar6 = param_2;
      uVar7 = param_3;
                    /* try { // try from 0208b308 to 0218b327 has its CatchHandler @ 0208b140 */
                    /* catch() { ... } // from try @ 0208b2d4 with catch @ 0208b30c
                       catch() { ... } // from try @ 0208b300 with catch @ 0208b30c */
      uVar5 = FUN_0407bae8(*(long *)(param_5 + 0x90),0);
                    /* try { // try from 0208b328 to 0218b3ef has its CatchHandler @ 0208b328
                       catch() { ... } // from try @ 0208b328 with catch @ 0208b328
                       catch() { ... } // from try @ 0208b434 with catch @ 0208b328
                       catch() { ... } // from try @ 0208b48c with catch @ 0208b328
                       catch() { ... } // from try @ 0208b4dc with catch @ 0208b328 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_023aaa3c(uVar4,param_2,param_3,uVar5,uVar6,uVar7,param_4,uVar3,*(undefined8 *)puVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


