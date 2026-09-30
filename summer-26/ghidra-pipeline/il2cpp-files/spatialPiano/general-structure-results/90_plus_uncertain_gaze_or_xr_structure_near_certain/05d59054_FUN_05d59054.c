/*
FUNCTION_NAME: FUN_05d59054
ENTRY_POINT: 05d59054
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_05d59054(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined1 local_2e4 [4];
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 *puStack_2b0;
  undefined1 auStack_188 [304];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_2c0 = param_2;
  if ((DAT_06bc3920 & 1) == 0) {
    FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cbf10);
    DAT_06bc3920 = 1;
  }
  memset(auStack_188,0,0x130);
  puVar3 = Method_System_DateTimeOffset_ValidateStyles__;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2d0 = 0;
  local_2e4[0] = 0;
  if (*param_3 != 0) {
    uVar4 = FUN_05d4c208(*param_3,*(undefined8 *)
                                   Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_05d593f0(param_1,uVar4,param_1 + 0xf8);
    puVar5 = (undefined8 *)FUN_05ddf250(param_3,0);
    uVar8 = *puVar5;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (DAT_06bc38b4 == '\0') {
      FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
      DAT_06bc38b4 = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar3;
    }
    puVar2 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
    ;
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dabb74(lVar6,param_3,0);
      if (*param_3 != 0) {
        uVar8 = FUN_05d4c208(*param_3,*(undefined8 *)
                                       Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
        puVar2 = PTR_DAT_067cbf10;
        if (*param_3 != 0) {
          uVar7 = FUN_05d4c208(*param_3,*(undefined8 *)
                                         Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
          FUN_05d58f2c(&local_2b8,param_1,uVar8,uVar4,uVar7);
          memcpy(auStack_188,&local_2b8,0x130);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_0612a0dc(&local_300,&local_2c0,auStack_188,0);
          uStack_2d8 = uStack_2f8;
          local_2e0 = local_300;
          local_2d0 = local_2f0;
          puVar5 = (undefined8 *)FUN_05ddf250(param_3,0);
          uVar8 = *puVar5;
          uVar4 = FUN_05d4d060(param_1);
          FUN_05c5cb48(local_2e4,uVar8,uVar4,0);
          local_2b8 = 0;
          puStack_2b0 = local_2e4;
          puVar5 = (undefined8 *)FUN_05ddf250(param_3,0);
          uVar4 = *puVar5;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (DAT_06bc38b4 == '\0') {
            FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
            DAT_06bc38b4 = '\x01';
          }
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar6 = *(long *)puVar3;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          if (lVar6 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else {
            *(undefined8 *)(lVar6 + 0x10) = uVar4;
            uStack_318 = uStack_2d8;
            local_320 = local_2e0;
            local_310 = local_2d0;
            FUN_05d594a0(lVar6,*(undefined8 *)(param_1 + 0xf8),&local_320);
            FUN_05c5cb50(local_2e4,0);
            if (*(long *)(lVar1 + 0x28) == local_58) {
              return;
            }
          }
          goto LAB_05d593e8;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05d593e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


