/*
FUNCTION_NAME: DG.Tweening.Plugins.Core.PathCore.Path$$Draw
ENTRY_POINT: 02016b9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void DG_Tweening_Plugins_Core_PathCore_Path__Draw(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01f51358();
  if (3 < *(uint *)(unaff_x22 + -0x18)) {
    *(undefined8 *)(unaff_x20 + 0x38) = unaff_x21;
    thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x38));
    if (4 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x40) =
           *(undefined8 *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<float>__ctor__;
      thunk_FUN_01f51358();
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_00000008._4_1_ = *(undefined1 *)(unaff_x19 + 0x120);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_034f92ac((long)&stack0x00000008 + 4,0);
      puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
      if (5 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
        thunk_FUN_01f51358();
        uVar2 = FUN_0340efe8();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        FUN_0403ea2c(uVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


