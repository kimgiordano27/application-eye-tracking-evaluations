/*
FUNCTION_NAME: FUN_017f9b94
ENTRY_POINT: 017f9b94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;functionality_gaze_retrieval_or_extraction
*/


void FUN_017f9b94(long *param_1,long param_2,int param_3,long param_4,int param_5,uint param_6,
                 int *param_7,undefined4 *param_8,undefined8 param_9)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    puVar1 = System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TypeInfo;
    if (param_4 != 0) {
      puVar1 = UnityEngine_SubsystemManager_TypeInfo;
    }
    uVar6 = thunk_FUN_00d48444(puVar1);
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(StringLiteral_535);
    FUN_016f4460(uVar9,uVar6,uVar7,0);
  }
  else {
    if ((-1 < param_5) && (-1 < param_3)) {
      *param_7 = param_3;
      iVar4 = param_3;
      if (0 < param_3) {
        do {
          iVar4 = (**(code **)(*param_1 + 0x198))
                            (param_1,param_2,iVar4,param_6 & 1,*(undefined8 *)(*param_1 + 0x1a0));
          iVar2 = *param_7;
          if (iVar4 <= param_5) {
            uVar5 = (**(code **)(*param_1 + 0x1b8))
                              (param_1,param_2,iVar2,param_4,param_5,param_6 & 1,
                               *(undefined8 *)(*param_1 + 0x1c0));
            *param_8 = uVar5;
            if (*param_7 == param_3) {
              plVar8 = (long *)param_1[3];
              if (plVar8 == (long *)0x0) {
                bVar3 = true;
              }
              else {
                iVar4 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                bVar3 = iVar4 == 0;
              }
            }
            else {
              bVar3 = false;
            }
            *(bool *)param_9 = bVar3;
            return;
          }
          iVar4 = iVar2;
          if (iVar2 < 0) {
            iVar4 = iVar2 + 1;
          }
          param_6 = 0;
          *param_7 = iVar4 >> 1;
          iVar4 = iVar4 >> 1;
        } while (1 < iVar2);
      }
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar6 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar7 = thunk_FUN_00d48444(
                                Oculus_Interaction_PoseDetection_FingerFeatureStateDictionary_TypeInfo
                                );
      FUN_016f2f28(uVar6,uVar7,0);
      uVar7 = thunk_FUN_00d48444(
                                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_get_Task__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,uVar7);
    }
    puVar1 = Meta_XR_MRUtilityKit_AnchorPrefabSpawner_TypeInfo;
    if (-1 < param_3) {
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s8__;
    }
    uVar6 = thunk_FUN_00d48444(puVar1);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(
                              Method_System_Xml_Schema_XmlSchemaValidator_InternalValidateEndElement__
                              );
    FUN_016efd4c(uVar9,uVar6,uVar7,0);
  }
  uVar6 = thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_get_Task__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar6);
}


