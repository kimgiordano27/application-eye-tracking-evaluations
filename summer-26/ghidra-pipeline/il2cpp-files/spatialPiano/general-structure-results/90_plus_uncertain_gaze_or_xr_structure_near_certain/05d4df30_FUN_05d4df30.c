/*
FUNCTION_NAME: FUN_05d4df30
ENTRY_POINT: 05d4df30
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


void FUN_05d4df30(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 local_404 [4];
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined1 auStack_3e0 [200];
  undefined8 local_318;
  undefined1 *puStack_310;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 auStack_188 [304];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_3e8 = param_2;
  if ((DAT_06bc38bf & 1) == 0) {
    FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(Method_OVRAnchor_TryGetComponent<OVRStorable>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cbf10);
    DAT_06bc38bf = 1;
  }
  memset(auStack_188,0,0x130);
  local_400 = 0;
  uStack_3f8 = 0;
  local_3f0 = 0;
  local_404[0] = 0;
  if (*param_3 != 0) {
    lVar5 = FUN_05d4c208(*param_3,*(undefined8 *)
                                   Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    if (*param_3 != 0) {
      lVar6 = FUN_05d4c208(*param_3,*(undefined8 *)
                                     Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
      if ((*param_3 != 0) &&
         (uVar7 = FUN_05d4c208(*param_3,*(undefined8 *)
                                         Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__),
         lVar6 != 0)) {
        uVar1 = *(undefined4 *)(lVar6 + 0x198);
        uVar8 = *(undefined8 *)(param_1 + 0xd8);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05db0678(&local_250,uVar8,lVar5,lVar6,uVar7,uVar1,0);
        puVar4 = Method_OVRAnchor_TryGetComponent<OVRStorable>__;
        puVar3 = PTR_DAT_067cbf10;
        if (lVar5 != 0) {
          uVar7 = *(undefined8 *)(lVar5 + 0x18);
          uVar8 = *(undefined8 *)(lVar5 + 0x20);
          memcpy(&local_318,&local_250,200);
          uStack_428 = *(undefined8 *)(param_1 + 0xc0);
          local_430 = *(undefined8 *)(param_1 + 0xb8);
          uStack_418 = *(undefined8 *)(param_1 + 0xd0);
          uStack_420 = *(undefined8 *)(param_1 + 200);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          memcpy(auStack_3e0,&local_318,200);
          uStack_448 = uStack_428;
          local_450 = local_430;
          uStack_438 = uStack_418;
          uStack_440 = uStack_420;
          FUN_061276f4(auStack_188,uVar7,uVar8,auStack_3e0,&local_450,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_0612a0dc(&local_468,&local_3e8,auStack_188,0);
          uStack_3f8 = uStack_460;
          local_400 = local_468;
          local_3f0 = local_458;
          uVar7 = FUN_05d6dbd4(lVar5,0);
          FUN_05c5cb48(local_404,uVar7,*(undefined8 *)(param_1 + 0xe0),0);
          local_318 = 0;
          puStack_310 = local_404;
          uVar7 = FUN_05d6dbd4(lVar5,0);
          puVar3 = Method_System_DateTimeOffset_ValidateStyles__;
          if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (DAT_06bc38b4 == '\0') {
            FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
            DAT_06bc38b4 = '\x01';
          }
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar5 = *(long *)puVar3;
          }
          lVar5 = **(long **)(lVar5 + 0xb8);
          if (lVar5 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else {
            *(undefined8 *)(lVar5 + 0x10) = uVar7;
            uStack_248 = uStack_3f8;
            local_250 = local_400;
            local_240 = local_3f0;
            FUN_05c41758(lVar5,&local_250,0);
            FUN_05c5cb50(local_404,0);
            if (*(long *)(lVar2 + 0x28) == local_58) {
              return;
            }
          }
          goto LAB_05d4e2b4;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05d4e2b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


