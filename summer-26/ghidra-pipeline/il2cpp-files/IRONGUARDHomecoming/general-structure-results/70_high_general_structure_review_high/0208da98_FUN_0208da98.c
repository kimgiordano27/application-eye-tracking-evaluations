/*
FUNCTION_NAME: FUN_0208da98
ENTRY_POINT: 0208da98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0208da98(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  byte local_34 [4];
  
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_bool>__ctor__;
  puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  if ((DAT_0482f773 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
                    /* try { // try from 0208dad8 to 0218daef has its CatchHandler @ 0208dd38 */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_bool>__ctor__
                      );
    DAT_0482f773 = 1;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  local_34[0] = param_2 & 1;
                    /* try { // try from 0208daf8 to 0218daff has its CatchHandler @ 0208dd34 */
                    /* try { // try from 0208db00 to 0218db3b has its CatchHandler @ 0208da0c */
  uVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_34);
  uVar3 = FUN_03406290(*(undefined8 *)puVar2,uVar3,0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
                    /* try { // try from 0208db3c to 0218db4b has its CatchHandler @ 0208dd1c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


