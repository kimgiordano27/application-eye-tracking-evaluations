/*
FUNCTION_NAME: FUN_02016aa0
ENTRY_POINT: 02016aa0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_2
*/


void FUN_02016aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_34 [4];
  
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
                    /* try { // try from 02016aa8 to 02116ab3 has its CatchHandler @ 02016b00 */
                    /* try { // try from 02016ac8 to 02116ad3 has its CatchHandler @ 02016af8 */
  if ((DAT_0482f02d & 1) == 0) {
                    /* try { // try from 02016ad4 to 02116b23 has its CatchHandler @ 020169dc */
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
                    /* catch() { ... } // from try @ 02016ac8 with catch @ 02016af8 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_get_Item__
                      );
                    /* catch() { ... } // from try @ 02016aa8 with catch @ 02016b00 */
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<float>__ctor__);
                    /* catch() { ... } // from try @ 02016a64 with catch @ 02016b14 */
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__);
    DAT_0482f02d = 1;
  }
                    /* try { // try from 02016b24 to 02116b53 has its CatchHandler @ 02016b24
                       catch() { ... } // from try @ 02016b24 with catch @ 02016b24
                       catch() { ... } // from try @ 02016b60 with catch @ 02016b24 */
  lVar2 = FUN_01f08890(*(undefined8 *)puVar1,6);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_get_Item__;
                    /* try { // try from 02016b54 to 02116b5f has its CatchHandler @ 02016b78 */
      thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x20));
                    /* try { // try from 02016b60 to 02116b8b has its CatchHandler @ 02016b24 */
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = param_2;
        thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x28),param_2);
                    /* catch() { ... } // from try @ 02016b54 with catch @ 02016b78 */
        if (2 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 02016b8c to 02116c03 has its CatchHandler @ 02016b8c
                       catch() { ... } // from try @ 02016b8c with catch @ 02016b8c
                       catch() { ... } // from try @ 02016c18 with catch @ 02016b8c */
          *(undefined8 *)(lVar2 + 0x30) =
               *(undefined8 *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__
          ;
          thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x30));
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = param_3;
            thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x38),param_3);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) =
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<float>__ctor__;
              thunk_FUN_01f51358();
              if (param_4 == 0) goto LAB_02016c80;
              local_34[0] = *(undefined1 *)(param_4 + 0x120);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar3 = FUN_034f92ac(local_34,0);
              puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = uVar3;
                thunk_FUN_01f51358();
                uVar3 = FUN_0340efe8(lVar2,0);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)puVar1);
                }
                FUN_0403ea2c(uVar3,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_02016c80:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


