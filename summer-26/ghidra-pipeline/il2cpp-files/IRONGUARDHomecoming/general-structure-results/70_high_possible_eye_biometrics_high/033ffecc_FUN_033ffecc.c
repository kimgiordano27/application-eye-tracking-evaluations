/*
FUNCTION_NAME: FUN_033ffecc
ENTRY_POINT: 033ffecc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_033ffecc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int local_38;
  undefined4 local_34;
  
  puVar2 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
  if ((DAT_04832669 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    thunk_FUN_01efb3a4(Method_OVRFaceExpressions_CheckValidity__);
    thunk_FUN_01efb3a4(Method_OVRFaceExpressions_CopyTo__);
    thunk_FUN_01efb3a4(Method_OVRFaceExpressions_OnPermissionGranted__);
    thunk_FUN_01efb3a4(Method_OVRFaceExpressions_get_Item__);
    thunk_FUN_01efb3a4(Method_OVRGLTFAnimatinonNode_CopyData<float>__);
    thunk_FUN_01efb3a4(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    DAT_04832669 = 1;
  }
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_03416d98(plVar5,0);
  uVar6 = FUN_035b04c8(0);
  if (plVar5 != (long *)0x0) {
    FUN_0341944c(plVar5,*(undefined8 *)Method_OVRFaceExpressions_OnPermissionGranted__,uVar6,0);
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar9 + 0x18);
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) != 0)) {
        FUN_0341944c(plVar5,*(undefined8 *)Method_OVRFaceExpressions_get_Item__,lVar8,0);
        lVar9 = *(long *)(param_1 + 0x10);
        if (lVar9 == 0) goto LAB_034000dc;
      }
      puVar4 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
      puVar3 = Method_OVRFaceExpressions_CheckValidity__;
      puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      local_34 = *(undefined4 *)(lVar9 + 0x10);
      uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&local_34);
      uVar7 = FUN_035b04c8(0);
      FUN_03419fc0(plVar5,*(undefined8 *)puVar3,uVar6,uVar7,0);
      uVar6 = FUN_033fedac(param_1);
      uVar7 = FUN_035b04c8(0);
      FUN_03419fc0(plVar5,*(undefined8 *)puVar4,uVar6,uVar7,0);
      puVar4 = Method_OVRGLTFAnimatinonNode_CopyData<float>__;
      puVar3 = Method_OVRFaceExpressions_CopyTo__;
      if (*(long *)(param_1 + 0x10) != 0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x28);
        if (iVar1 != -1) {
          local_38 = iVar1;
          uVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_38);
          FUN_0341944c(plVar5,*(undefined8 *)puVar4,uVar6,0);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        uVar6 = FUN_035b04c8(0);
        FUN_03419fc0(plVar5,*(undefined8 *)puVar3,uVar7,uVar6,0);
        (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        return;
      }
    }
  }
LAB_034000dc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


