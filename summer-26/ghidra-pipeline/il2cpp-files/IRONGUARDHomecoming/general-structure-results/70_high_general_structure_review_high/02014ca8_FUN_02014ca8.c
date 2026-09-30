/*
FUNCTION_NAME: FUN_02014ca8
ENTRY_POINT: 02014ca8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_02014ca8(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte local_24 [4];
  
  bVar1 = param_2 & 1;
  local_24[0] = bVar1;
  if ((DAT_0482f022 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray_ReadOnly<ContactPairHeader>_get_Length__
                      );
    DAT_0482f022 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_0406f8a4(*(long *)(param_1 + 0x48),param_2 & 1,0);
    *(byte *)(param_1 + 0x8c) = bVar1;
    if (*(long *)(param_1 + 0x20) != 0) {
      *(byte *)(*(long *)(param_1 + 0x20) + 0x85) = bVar1;
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_04073314(*(long *)(param_1 + 0x38),param_2 & 1,0);
        puVar4 = Method_Unity_Collections_NativeArray_ReadOnly<ContactPairHeader>_get_Length__;
        puVar3 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        puVar2 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
        if (*(long *)(param_1 + 0x40) != 0) {
                    /* catch() { ... } // from try @ 02014e68 with catch @ 02014d58
                       catch() { ... } // from try @ 02014f2c with catch @ 02014d58 */
          FUN_04073314(*(long *)(param_1 + 0x40),param_2 & 1,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar5 = FUN_034f92ac(local_24,0);
          uVar5 = FUN_03405678(*(undefined8 *)puVar4,uVar5,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar2);
          }
          FUN_0403ea2c(uVar5,0);
                    /* try { // try from 02014dc0 to 02114dcb has its CatchHandler @ 02014f34 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


