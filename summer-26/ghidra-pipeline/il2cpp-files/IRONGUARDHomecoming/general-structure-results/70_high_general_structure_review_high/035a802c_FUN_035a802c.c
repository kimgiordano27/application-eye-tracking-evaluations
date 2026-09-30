/*
FUNCTION_NAME: FUN_035a802c
ENTRY_POINT: 035a802c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined8 FUN_035a802c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  
  if ((DAT_0483351b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_SetEvent<VoiceServiceRequest>__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483351b = 1;
  }
  if (param_2 != 0) {
    plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Meta_WitAi_Events_SpeechEvents_SetEvent<VoiceServiceRequest>__
                                  ,*(undefined4 *)(param_2 + 0x18));
    uVar4 = (**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
    if ((uVar4 & 1) == 0) {
      uVar7 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar7 = FUN_01f08890(uVar7,1);
      FUN_01bc50c0();
      FUN_01bc56ec(uVar7,param_1);
      FUN_01bc5408(uVar7,0,param_1);
      uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubl_high_s16__);
      uVar7 = FUN_035ae81c(uVar8,uVar7,0);
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      FUN_0356adc8(uVar8,uVar7,0);
    }
    else {
      lVar5 = (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
      puVar2 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
      puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      if (lVar5 == 0) goto LAB_035a8388;
      iVar10 = (int)*(ulong *)(lVar5 + 0x18);
      if (iVar10 == *(int *)(param_2 + 0x18)) {
        if (0 < iVar10) {
          uVar4 = 0;
          uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          lVar5 = 0x20;
          do {
            if (uVar11 <= uVar4) goto LAB_035a8384;
            plVar12 = *(long **)(param_2 + lVar5);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_03582560(plVar12,0,0);
            if ((uVar11 & 1) != 0) {
                    /* try { // try from 035a83a0 to 036a83cb has its CatchHandler @ 035a834c */
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__)
              ;
              uVar7 = thunk_FUN_01f117cc();
              FUN_034f7cb4(uVar7,0);
              goto LAB_035a83b4;
            }
            lVar6 = *(long *)puVar2;
            if (plVar12 == (long *)0x0) {
LAB_035a8158:
              plVar13 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar6 + 0x130)) goto LAB_035a8158;
              plVar13 = plVar12;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
                  lVar6) {
                plVar13 = (long *)0x0;
              }
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (plVar13 == (long *)0x0) {
              if (plVar12 == (long *)0x0) goto LAB_035a8388;
              uVar4 = (**(code **)(*plVar12 + 0x638))(plVar12,*(undefined8 *)(*plVar12 + 0x640));
              if ((uVar4 & 1) != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar7 = FUN_03585608(param_1,param_2,0);
                return uVar7;
              }
              plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                             Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                            ,*(undefined4 *)(param_2 + 0x18));
              if ((int)*(ulong *)(param_2 + 0x18) < 1) goto LAB_035a832c;
              uVar4 = 0;
              uVar11 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
              plVar12 = plVar3 + 4;
              goto LAB_035a82d0;
            }
            if (plVar3 == (long *)0x0) goto LAB_035a8388;
            lVar6 = thunk_FUN_01f116d0(plVar13,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar6 == 0) goto LAB_035a838c;
            if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_035a8384;
            *(undefined8 *)((long)plVar3 + lVar5) = plVar13;
            thunk_FUN_01f51358((undefined8 *)((long)plVar3 + lVar5),plVar13);
            uVar11 = (ulong)*(uint *)(param_2 + 0x18);
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + 8;
          } while ((long)uVar4 < (long)(int)*(uint *)(param_2 + 0x18));
        }
        uVar7 = FUN_035a7f14(param_1);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        FUN_035a2eb8(plVar3,uVar7);
        uVar7 = FUN_01f0de90(param_1,plVar3);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar4 = FUN_03582560(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
          return uVar7;
        }
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                          );
        uVar7 = thunk_FUN_01f117cc();
        FUN_035ad208(uVar7,0);
        goto LAB_035a83b4;
      }
      uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubl_high_s32__);
      uVar7 = FUN_035ac8e0(uVar7,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar8 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubhn_s64__);
      FUN_034efd98(uVar8,uVar7,uVar9,0);
    }
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubhn_s32__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar7);
  }
                    /* try { // try from 035a83cc to 036a83db has its CatchHandler @ 035a83dc */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar7 = thunk_FUN_01f117cc();
                    /* catch() { ... } // from try @ 035a8388 with catch @ 035a83dc
                       catch() { ... } // from try @ 035a83cc with catch @ 035a83dc */
                    /* try { // try from 035a83e0 to 036a83e3 has its CatchHandler @ 035a83ec */
                    /* try { // try from 035a83e4 to 036a83ef has its CatchHandler @ 035a834c */
  uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubhn_s64__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a83e0 with catch @ 035a83ec
                        */
                    /* try { // try from 035a83f0 to 036a8443 has its CatchHandler @ 035a83f0
                       catch() { ... } // from try @ 035a83f0 with catch @ 035a83f0
                       catch() { ... } // from try @ 035a844c with catch @ 035a83f0
                       catch() { ... } // from try @ 035a84c8 with catch @ 035a83f0
                       catch() { ... } // from try @ 035a8508 with catch @ 035a83f0 */
  FUN_034efd20(uVar7,uVar8,0);
  goto LAB_035a83b4;
LAB_035a82d0:
  do {
    if (uVar11 <= uVar4) {
LAB_035a8384:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (plVar3 == (long *)0x0) goto LAB_035a8388;
    lVar5 = *(long *)(param_2 + 0x20 + uVar4 * 8);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_035a838c:
      uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,0);
    }
    if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_035a8384;
    *plVar12 = lVar5;
    thunk_FUN_01f51358(plVar12,lVar5);
    uVar11 = (ulong)*(uint *)(param_2 + 0x18);
    uVar4 = uVar4 + 1;
    plVar12 = plVar12 + 1;
  } while ((long)uVar4 < (long)(int)*(uint *)(param_2 + 0x18));
LAB_035a832c:
  uVar4 = FUN_034a70b0(0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar2;
    }
                    /* catch() { ... } // from try @ 035a8370 with catch @ 035a834c
                       catch() { ... } // from try @ 035a83a0 with catch @ 035a834c
                       catch() { ... } // from try @ 035a83e4 with catch @ 035a834c */
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar5 != 0) {
                    /* try { // try from 035a8360 to 036a836f has its CatchHandler @ 035a8370 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035a8360 with catch @ 035a8370
                       try { // try from 035a8370 to 036a8387 has its CatchHandler @ 035a834c */
                    /* WARNING: Could not recover jumptable at 0x035a8380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),param_1,plVar3,*(undefined8 *)(lVar5 + 0x28))
      ;
      return uVar7;
    }
LAB_035a8388:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a8388 to 036a839f has its CatchHandler @ 035a83dc */
    FUN_01f08a3c();
  }
                    /* catch() { ... } // from try @ 035a84c4 with catch @ 035a84fc */
                    /* try { // try from 035a8500 to 036a8507 has its CatchHandler @ 035a851c */
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<Collider>__);
                    /* try { // try from 035a8508 to 036a8513 has its CatchHandler @ 035a83f0 */
  uVar7 = thunk_FUN_01f117cc();
                    /* try { // try from 035a8514 to 036a851b has its CatchHandler @ 035a851c */
  FUN_0357b574(uVar7,0);
LAB_035a83b4:
  uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubhn_s32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar8);
}


