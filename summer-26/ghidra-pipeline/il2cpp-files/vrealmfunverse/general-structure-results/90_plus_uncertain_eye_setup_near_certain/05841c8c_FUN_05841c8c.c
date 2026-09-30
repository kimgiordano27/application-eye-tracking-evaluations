/*
FUNCTION_NAME: FUN_05841c8c
ENTRY_POINT: 05841c8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_05841c8c(long param_1,int param_2,long *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [112];
  
  puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
  puVar2 = Method_System_Memory<byte>_op_Implicit__;
  if ((DAT_066d2dc1 & 1) == 0) {
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<AABB>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<AABB>_AsReadOnly__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<AABB>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<AABB>_GetSubArray__);
    FUN_02b3c81c(Method_System_Memory<byte>_op_Implicit__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<AffineTransform>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<AffineTransform>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<AttachmentDescriptor>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<AttachmentDescriptor>_Dispose__);
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    DAT_066d2dc1 = 1;
  }
  lVar5 = *(long *)puVar3;
  lVar8 = *(long *)(param_1 + 0x40);
  iVar4 = *(int *)(lVar5 + 0xe4);
  **(int **)(*(long *)puVar2 + 0xb8) = param_2;
  if (iVar4 == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *(long *)puVar3;
  }
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar9 = puVar7[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar10 = *puVar7;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<AABB>_GetSubArray__);
    FUN_03bfe598(lVar9,uVar10,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<AttachmentDescriptor>_Dispose__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar9;
    thunk_FUN_02bb0e9c(plVar6,lVar9);
  }
  if (lVar8 != 0) {
    iVar4 = FUN_037a6d9c(lVar8,0,lVar9,
                         *(undefined8 *)
                          Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    FUN_058419ac(auStack_c0,param_1,param_2);
    memcpy(param_4,auStack_c0,0x70);
    puVar2 = Method_Unity_Collections_NativeArray<AABB>_Dispose__;
    if (iVar4 == -1) {
      uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_Unity_Collections_NativeArray<AffineTransform>__ctor__);
      FUN_0584200c(uVar10,param_2);
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 != 0) {
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *puVar7 = uVar10;
            thunk_FUN_02bb0e9c(puVar7,uVar10);
          }
          else {
            FUN_037a6538(lVar5,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0x40) != 0) {
            FUN_037a7eac(*(long *)(param_1 + 0x40),
                         *(undefined8 *)Method_Unity_Collections_NativeArray<AABB>__ctor__);
LAB_05841fa0:
            lVar5 = FUN_05841c08(param_1,param_2,param_5 & 1);
            *param_3 = lVar5;
            thunk_FUN_02bb0e9c(param_3,lVar5);
            return 1;
          }
        }
      }
    }
    else if (((*(long *)(param_1 + 0x40) != 0) &&
             (lVar5 = FUN_037a6268(*(long *)(param_1 + 0x40),iVar4,
                                   *(undefined8 *)
                                    Method_Unity_Collections_NativeArray<AABB>_Dispose__),
             lVar5 != 0)) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
      if (*(int *)(lVar5 + 0x18) < 1) {
        lVar5 = *(long *)(param_1 + 0x40);
        if (lVar5 != 0) {
          do {
            if (*(int *)(lVar5 + 0x18) <= iVar4) {
LAB_05841fe0:
              if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x38) + param_2) {
                *param_3 = 0;
                thunk_FUN_02bb0e9c(param_3,0);
                return 0;
              }
              goto LAB_05841fa0;
            }
            lVar5 = FUN_037a6268(lVar5,iVar4,*(undefined8 *)puVar2);
            if (lVar5 == 0) break;
            if (param_2 * 2 <= *(int *)(lVar5 + 0x10)) goto LAB_05841fe0;
            lVar5 = *(long *)(lVar5 + 0x18);
            if (lVar5 == 0) break;
            if (0 < *(int *)(lVar5 + 0x18)) goto LAB_05841e74;
            lVar5 = *(long *)(param_1 + 0x40);
            iVar4 = iVar4 + 1;
          } while (lVar5 != 0);
        }
      }
      else {
LAB_05841e74:
        lVar5 = UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>__PreprocessTween
                          (lVar5,*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<AffineTransform>_Dispose__);
        *param_3 = lVar5;
        thunk_FUN_02bb0e9c(param_3,lVar5);
        if (*param_3 != 0) {
          FUN_05839f78(*param_3,0);
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


