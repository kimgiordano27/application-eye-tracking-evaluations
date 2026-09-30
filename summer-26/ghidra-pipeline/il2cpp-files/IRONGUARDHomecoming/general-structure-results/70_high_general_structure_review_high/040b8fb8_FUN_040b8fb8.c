/*
FUNCTION_NAME: FUN_040b8fb8
ENTRY_POINT: 040b8fb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_040b8fb8(long *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_0483f918 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_0457c388);
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    DAT_0483f918 = 1;
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*param_1 + 0x130);
    bVar2 = *(byte *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                     0x130);
    if ((bVar2 <= bVar1) &&
       (lVar5 = *(long *)(*param_1 + 200),
       *(long *)(lVar5 + (ulong)bVar2 * 8 + -8) ==
       *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__)) {
      bVar2 = *(byte *)(*(long *)Method_Unity_Collections_NativeArray<float>_Dispose__ + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(lVar5 + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_Unity_Collections_NativeArray<float>_Dispose__)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_0457c388 + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar5 + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457c388)) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar3 = thunk_FUN_01f117cc();
          uVar4 = thunk_FUN_01efb3a4(PTR_DAT_045883a8);
          FUN_034f6754(uVar3,uVar4,0);
          uVar4 = thunk_FUN_01efb3a4(PTR_DAT_045883b0);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar3,uVar4);
        }
      }
    }
    if (DAT_0483f908 == (code *)0x0) {
      DAT_0483f908 = (code *)FUN_01f087c4(
                                         "UnityEngine.JsonUtility::ToJsonInternal(System.Object,System.Boolean)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x040b90c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*DAT_0483f908)(param_1,param_2 & 1);
    return uVar3;
  }
  return *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
}


