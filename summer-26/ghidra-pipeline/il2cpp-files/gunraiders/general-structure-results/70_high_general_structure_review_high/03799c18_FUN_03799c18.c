/*
FUNCTION_NAME: FUN_03799c18
ENTRY_POINT: 03799c18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


void FUN_03799c18(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_04538e41 & 1) == 0) {
    FUN_01c5d288(Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<ZBinningJob>__);
    FUN_01c5d288(Method_Unity_Jobs_IJobParallelForExtensions_Schedule<GetPosition>__);
    FUN_01c5d288(Method_Unity_Jobs_IJobParallelForExtensions_Schedule<GetPositionTangentNormal>__);
    FUN_01c5d288(
                Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRMeshJobs_TransformToUnitySpaceJob>__
                );
    FUN_01c5d288(Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__);
    FUN_01c5d288(
                Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRMeshJobs_TransformTrianglesJob>__
                );
    FUN_01c5d288(
                Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OpacityIdAccelerator_OpacityIdUpdateJob>__
                );
    DAT_04538e41 = 1;
  }
  if ((*(long *)(param_1 + 0x210) != 0) &&
     (uVar6 = FUN_0290ca2c(*(long *)(param_1 + 0x210),param_2,
                           *(undefined8 *)
                            Method_Unity_Jobs_IJobParallelForExtensions_Schedule<GetPosition>__),
     (uVar6 & 1) != 0)) {
    FUN_019b2708(param_2);
    puVar4 = Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
    uVar6 = FUN_019b8e2c(4,*(undefined8 *)Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__,
                         param_2);
    puVar1 = (undefined8 *)
             Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OpacityIdAccelerator_OpacityIdUpdateJob>__
    ;
    if ((uVar6 & 1) == 0) {
      puVar1 = (undefined8 *)
               Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRMeshJobs_TransformTrianglesJob>__
      ;
    }
    uVar10 = *puVar1;
    FUN_019b2708(param_2);
    uVar7 = FUN_019b8e2c(0,*(undefined8 *)puVar4,param_2);
    uVar8 = *(undefined8 *)(param_1 + 0x150);
    iVar2 = *(int *)(param_1 + 0x158);
    FUN_019b2708(uVar8);
    lVar9 = FUN_01baee70(uVar8,(long)iVar2);
    uVar8 = *(undefined8 *)(param_1 + 0x150);
    uVar3 = *(undefined4 *)(lVar9 + 0x48);
    iVar2 = *(int *)(param_1 + 0x158);
    FUN_019b2708(uVar8);
    uVar8 = FUN_01baee70(uVar8,(long)iVar2);
    uVar5 = FUN_03853874(uVar8,0);
    FUN_019b2708(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_03791754(param_1,uVar10,uVar7,uVar3,uVar5);
  }
  iVar2 = *(int *)(param_1 + 0x1dc);
  *(long *)(param_1 + 0x90) = param_2;
  *(int *)(param_1 + 0x1dc) = iVar2 + 1;
  *(int *)(param_1 + 0x98) = iVar2;
  if (param_2 == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x210);
  if (lVar9 == 0) {
    lVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRMeshJobs_TransformToUnitySpaceJob>__
                              );
    FUN_0290bee4(lVar9,*(undefined8 *)
                        Method_Unity_Jobs_IJobParallelForExtensions_Schedule<GetPositionTangentNormal>__
                );
    *(long *)(param_1 + 0x210) = lVar9;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  FUN_0290c838(lVar9,param_2,param_2,
               *(undefined8 *)Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<ZBinningJob>__);
  return;
}


