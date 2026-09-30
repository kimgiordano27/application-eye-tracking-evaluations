/*
FUNCTION_NAME: Oculus.Interaction.BestHoverInteractorGroup$$TryReplaceHover
ENTRY_POINT: 035095cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 128
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035097f8) */
/* WARNING: Removing unreachable block (ram,0x03509818) */

long Oculus_Interaction_BestHoverInteractorGroup__TryReplaceHover(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  char cStack000000000000000c;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_FullSerializer_fsResult_AssertSuccessWithoutWarnings__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__);
  *(undefined1 *)(unaff_x19 + 4000) = 1;
  puVar2 = Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__;
  plVar6 = (long *)(unaff_x20 + 0x30);
  lVar5 = *plVar6;
  if (lVar5 == 0) {
    lVar5 = *(long *)Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      puVar1 = Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__;
      if (*(int *)(*(long *)
                    Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0483301d == '\0') {
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__
                          );
        DAT_0483301d = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_VisualScripting_FullSerializer_fsResult_AssertSuccessWithoutWarnings__
                                );
      FUN_02b6aa94(uVar3,uVar7,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_FullSerializer_fsReflectionUtility_GetInterface__);
      FUN_01ec97e0(*(long *)(*(long *)puVar2 + 0xb8) + 8,uVar3,0);
      lVar5 = *(long *)puVar2;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar2;
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    cStack000000000000000c = '\0';
    FUN_035ce230(uVar3,&stack0x0000000c,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                      (lVar5,*(undefined8 *)(unaff_x20 + 0x18),plVar6,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_GetAttribute<fsPropertyAttribute>__
                      );
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_035351a0(uVar7,0);
      lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                                );
      FUN_033f7ad4(lVar5,uVar7,0);
      *plVar6 = lVar5;
      thunk_FUN_01f51358(plVar6,lVar5);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b6b2d0(lVar5,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x30),
                   *(undefined8 *)
                    Method_Unity_VisualScripting_FullSerializer_fsResult_AssertSuccess__);
    }
    if (cStack000000000000000c != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar3,0);
    }
    lVar5 = *plVar6;
  }
  return lVar5;
}


