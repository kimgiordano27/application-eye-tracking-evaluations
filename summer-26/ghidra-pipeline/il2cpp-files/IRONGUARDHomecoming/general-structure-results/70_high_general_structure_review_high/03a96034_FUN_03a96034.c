/*
FUNCTION_NAME: FUN_03a96034
ENTRY_POINT: 03a96034
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03a96034(long param_1,int param_2,uint param_3,byte param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte local_54 [4];
  uint local_48;
  int local_44;
  
  puVar1 = StringLiteral_7262;
  if ((DAT_04838eed & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_7262);
    thunk_FUN_01efb3a4(StringLiteral_8405);
    thunk_FUN_01efb3a4(StringLiteral_8406);
    DAT_04838eed = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_03a44858(0);
  if ((uVar2 & 1) != 0) {
    local_44 = param_2;
    uVar3 = thunk_FUN_01f113fc(*(undefined8 *)StringLiteral_8405,&local_44);
    local_48 = param_3;
    uVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,&local_48);
    local_54[0] = param_4 & 1;
    uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                               ,local_54);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar6);
    }
    FUN_03a461dc(param_1,uVar3,uVar4,uVar5,*(undefined8 *)StringLiteral_8406,0);
  }
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  if (param_2 - 1U < 2) {
    if (param_3 != *(uint *)(param_1 + 0x40)) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_03a961f4;
      FUN_03a992d8(*(long *)(param_1 + 0x28),0xffff,0x1005,param_3,param_4 & 1);
      *(uint *)(param_1 + 0x40) = param_3;
    }
    if (param_2 != 2) {
      return;
    }
  }
  else if (param_2 != 0) {
    return;
  }
  if (param_3 != *(uint *)(param_1 + 0x3c)) {
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_03a961f4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03a992d8(*(long *)(param_1 + 0x28),0xffff,0x1006,param_3,param_4 & 1);
    *(uint *)(param_1 + 0x3c) = param_3;
  }
  return;
}


