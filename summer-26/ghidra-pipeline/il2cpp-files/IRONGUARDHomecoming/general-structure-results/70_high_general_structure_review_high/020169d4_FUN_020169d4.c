/*
FUNCTION_NAME: FUN_020169d4
ENTRY_POINT: 020169d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


void FUN_020169d4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 local_14 [4];
  
                    /* catch() { ... } // from try @ 02016ad4 with catch @ 020169dc */
  if ((DAT_0482f02c & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_GetEnumerator__
                      );
    DAT_0482f02c = 1;
  }
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_GetEnumerator__;
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (param_2 != 0) {
    local_14[0] = *(undefined1 *)(param_2 + 0x120);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_034f92ac(local_14,0);
                    /* try { // try from 02016a64 to 02116a6f has its CatchHandler @ 02016b14 */
    uVar3 = FUN_03405678(*(undefined8 *)puVar2,uVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    FUN_0403ea2c(uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


