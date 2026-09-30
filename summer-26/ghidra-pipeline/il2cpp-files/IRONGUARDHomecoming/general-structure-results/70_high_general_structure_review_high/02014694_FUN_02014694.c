/*
FUNCTION_NAME: FUN_02014694
ENTRY_POINT: 02014694
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_02014694(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte local_24 [4];
  
                    /* try { // try from 02014694 to 021146a3 has its CatchHandler @ 0201474c */
  puVar2 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  local_24[0] = param_2 & 1;
  if ((DAT_0482f01d & 1) == 0) {
                    /* try { // try from 020146c4 to 021146cb has its CatchHandler @ 02014748 */
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Enqueue__
                      );
    DAT_0482f01d = 1;
  }
  puVar3 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Enqueue__;
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_034f92ac(local_24,0);
  uVar4 = FUN_03405678(*(undefined8 *)puVar3,uVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  FUN_0403ea2c(uVar4,0);
  if (local_24[0] == 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      FUN_02013e70(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x40) ^ 1;
    if (*(byte *)(param_1 + 0x40) != 0) {
      FUN_02013ef4(param_1);
    }
  }
  return;
}


