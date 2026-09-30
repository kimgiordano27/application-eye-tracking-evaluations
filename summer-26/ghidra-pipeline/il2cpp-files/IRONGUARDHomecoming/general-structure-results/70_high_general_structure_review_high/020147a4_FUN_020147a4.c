/*
FUNCTION_NAME: FUN_020147a4
ENTRY_POINT: 020147a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_020147a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if ((DAT_0482f01e & 1) == 0) {
                    /* try { // try from 020147cc to 02114807 has its CatchHandler @ 020147cc
                       catch(type#1 @ 00000000) { ... } // from try @ 020147cc with catch @ 020147cc
                       catch(type#1 @ 00000000) { ... } // from try @ 020149b0 with catch @ 020147cc
                        */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Properties_Property<BoundsInt,_Vector3Int>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_GetEnumerator__
                      );
    DAT_0482f01e = 1;
  }
  puVar4 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_GetEnumerator__
  ;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 02014808 to 02114817 has its CatchHandler @ 020149a4 */
    thunk_FUN_01ee6d7c();
  }
  FUN_0403ea2c(*(undefined8 *)puVar4,0);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar5 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(lVar5 + 0x110);
                    /* try { // try from 02014838 to 0211483f has its CatchHandler @ 020149a0 */
    if (*(int *)(*(long *)Method_Unity_Properties_Property<BoundsInt,_Vector3Int>__ctor__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_02011f3c(uVar1,uVar2,uVar6);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_02012550(*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x78));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


