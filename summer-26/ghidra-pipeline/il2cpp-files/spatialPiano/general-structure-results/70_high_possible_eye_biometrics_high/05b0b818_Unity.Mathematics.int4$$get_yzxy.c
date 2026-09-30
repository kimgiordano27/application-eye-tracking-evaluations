/*
FUNCTION_NAME: Unity.Mathematics.int4$$get_yzxy
ENTRY_POINT: 05b0b818
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_int4__get_yzxy(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  double dVar13;
  double dVar15;
  
  puVar2 = PTR_DAT_067ca498;
  if ((DAT_06bc283f & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_OnBatchSaveAsyncComplete__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<WriteToUnderlyingStreamAsync>d__63>__
                );
    FUN_02f08768(Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__);
    FUN_02f08768(Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
    FUN_02f08768(Method_System_Nullable<XRCameraConfiguration>_get_HasValue__);
    DAT_06bc283f = 1;
  }
  lVar6 = FUN_05abbe04(param_1,0);
  uVar1 = *(uint *)(param_1 + 0x14);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar2);
  }
  puVar5 = Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_OnBatchSaveAsyncComplete__;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<WriteToUnderlyingStreamAsync>d__63>__
  ;
  puVar3 = Method_System_Nullable<XRCameraConfiguration>_get_HasValue__;
  puVar2 = PTR_DAT_067c9848;
  fVar12 = DAT_011afbb8;
  if (0 < (int)((ulong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20)) {
    iVar9 = 0;
    lVar8 = lVar6 + (ulong)uVar1;
    do {
      if (lVar8 + 0x38 == 0) goto LAB_05b0bb34;
      fVar11 = (float)*(undefined8 *)(lVar8 + 0x44);
      fVar14 = (float)((ulong)*(undefined8 *)(lVar8 + 0x44) >> 0x20);
      if (fVar12 <= fVar11 * fVar11 + fVar14 * fVar14) {
        lVar7 = FUN_040499dc();
        if (lVar7 == 0) goto LAB_05b0bb34;
        uVar10 = *(undefined8 *)(lVar7 + 400);
        if (DAT_06bb435f == '\0') {
          FUN_02f08768(puVar2);
          DAT_06bb435f = '\x01';
        }
        FUN_0344e884(**(undefined4 **)(*(long *)puVar2 + 0xb8),
                     (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],uVar10,0,0,*(undefined8 *)puVar4)
        ;
      }
      if (*(char *)(lVar8 + 0x59) != '\0') {
        dVar13 = (double)FUN_05b58bcc(0);
        lVar7 = *(long *)puVar3;
        dVar15 = *(double *)(lVar8 + 0x60);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar7 = *(long *)puVar3;
        }
        if (dVar15 + (double)*(float *)(*(long *)(lVar7 + 0xb8) + 0x18) +
            (double)*(float *)(*(long *)(lVar7 + 0xb8) + 0x1c) <= dVar13) {
          lVar7 = FUN_040499dc();
          if (lVar7 == 0) goto LAB_05b0bb34;
          FUN_0344dbb4(*(undefined8 *)(lVar7 + 0x1c0),0,0,0,*(undefined8 *)puVar5);
        }
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 0x38;
    } while (iVar9 < (int)((ulong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20));
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar6 = (ulong)uVar1 + lVar6;
  if (lVar6 != 0) {
    fVar12 = (float)*(undefined8 *)(lVar6 + 0xc);
    fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0xc) >> 0x20);
    if (DAT_011afbb8 <= fVar12 * fVar12 + fVar11 * fVar11) {
      if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_05b0bb34;
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 400);
      if (DAT_06bb435f == '\0') {
        FUN_02f08768(PTR_DAT_067c9848);
        DAT_06bb435f = '\x01';
      }
      FUN_0344e884(**(undefined4 **)(*(long *)puVar2 + 0xb8),
                   (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],uVar10,0,0,*(undefined8 *)puVar4);
    }
    if (*(char *)(lVar6 + 0x21) != '\0') {
      dVar13 = (double)FUN_05b58bcc(0);
      lVar8 = *(long *)puVar3;
      dVar15 = *(double *)(lVar6 + 0x28);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)puVar3;
      }
      if (dVar15 + (double)*(float *)(*(long *)(lVar8 + 0xb8) + 0x18) +
          (double)*(float *)(*(long *)(lVar8 + 0xb8) + 0x1c) <= dVar13) {
        if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_05b0bb34;
        FUN_0344dbb4(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x1c0),0,0,0,*(undefined8 *)puVar5
                    );
      }
    }
    return;
  }
LAB_05b0bb34:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


