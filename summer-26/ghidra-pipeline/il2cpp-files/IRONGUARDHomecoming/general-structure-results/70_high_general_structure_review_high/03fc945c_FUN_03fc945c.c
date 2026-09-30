/*
FUNCTION_NAME: FUN_03fc945c
ENTRY_POINT: 03fc945c
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


void FUN_03fc945c(undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_44 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((DAT_0483b9b3 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0483b9b3 = 1;
  }
  if (param_5 != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0xa8);
    uVar3 = FUN_040bbb44(param_5,0);
    puVar2 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
    puVar1 = Method_Unity_Collections_NativeArray<float4>_Dispose__;
    if (param_4 != 0) {
      FUN_03faf2e4(param_4,uVar4,uVar3,0);
      uVar4 = *(undefined8 *)(param_3 + 0xb0);
      uVar3 = FUN_040bbc08(param_5,0);
      FUN_03faf2e4(param_4,uVar4,uVar3,0);
      uVar4 = *(undefined8 *)(param_3 + 0xb8);
      local_38 = FUN_040bbbf0(param_5,0);
      uStack_34 = param_2;
      uVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_38);
      FUN_03faf2e4(param_4,uVar4,uVar3,0);
      uVar4 = *(undefined8 *)(param_3 + 0xc0);
      local_44[0] = FUN_040bbbf8(param_5,0);
      local_44[0] = local_44[0] & 1;
      uVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,local_44);
      FUN_03faf2e4(param_4,uVar4,uVar3,0);
      FUN_03faf2e4(param_4,*(undefined8 *)(param_3 + 200),param_5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


