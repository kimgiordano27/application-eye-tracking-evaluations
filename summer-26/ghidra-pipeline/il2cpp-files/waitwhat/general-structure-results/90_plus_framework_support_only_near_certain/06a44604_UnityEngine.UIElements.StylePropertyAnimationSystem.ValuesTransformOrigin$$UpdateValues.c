/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.ValuesTransformOrigin$$UpdateValues
ENTRY_POINT: 06a44604
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTransformOrigin__UpdateValues
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xa8));
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
              );
  *(undefined1 *)(unaff_x21 + 0x67d) = 1;
  puVar1 = PTR_DAT_070f0a70;
  uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x20);
  FUN_06a30084(uVar5,0);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
  cVar3 = DAT_0754761d;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
  *(undefined2 *)(unaff_x19 + 0x48) = 0;
  if (cVar3 == '\0') {
    FUN_03188a78(PTR_DAT_070cf448);
    DAT_0754761d = '\x01';
  }
  lVar10 = *(long *)PTR_DAT_070cf448;
  *(undefined8 *)(unaff_x19 + 0x78) = **(undefined8 **)(lVar10 + 0xb8);
  puVar2 = Method_Oculus_Platform_Models_DeserializableList<BlockedUser>_get_NextUrl__;
  *(undefined8 *)(unaff_x19 + 0x80) = **(undefined8 **)(lVar10 + 0xb8);
  FUN_05971910();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar5 = FUN_06a2ec78(0);
  uVar12 = *(undefined4 *)(unaff_x19 + 0x60);
  uVar13 = *(undefined4 *)(unaff_x19 + 100);
  uVar14 = *(undefined4 *)(unaff_x19 + 0x68);
  uVar15 = *(undefined4 *)(unaff_x19 + 0x6c);
  uVar6 = FUN_06a444e0();
  uVar4 = FUN_03523100(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)puVar2);
  }
  plVar7 = (long *)FUN_06a38e10(uVar12,uVar13,uVar14,uVar15,uVar5,uVar6,uVar4,0);
  *(long **)(unaff_x19 + 0x28) = plVar7;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
  ;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar1);
    *(undefined1 *)(lVar10 + 0x10) = 0;
    *(undefined4 *)(lVar10 + 0x14) = 0xffffffff;
    *(undefined2 *)(lVar10 + 0x18) = 0;
    *(undefined1 *)(lVar10 + 0x1a) = 0;
    *(undefined8 *)(lVar10 + 0x1c) = 0;
    *(undefined8 *)(lVar10 + 0x34) = 0;
    FUN_05971910(lVar10,0);
    lVar8 = *(long *)(unaff_x19 + 0x10);
    *(undefined8 *)(lVar10 + 0x28) = uVar6;
    *(long *)(unaff_x19 + 0x18) = lVar10;
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_Clear__
    ;
    puVar1 = PTR_DAT_070c2c58;
    if (lVar8 == 0) goto LAB_06a44980;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar6 = FUN_06a2cca8(lVar8,0);
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar8 + 0x30) = 0;
    FUN_05971910(lVar8,0);
    uVar9 = *(undefined8 *)puVar1;
    *(long *)(lVar8 + 0x10) = lVar10;
    *(undefined8 *)(lVar8 + 0x18) = uVar11;
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *(undefined8 *)(lVar8 + 0x38) = uVar6;
    *(long *)(unaff_x19 + 0x20) = lVar8;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar9);
    FUN_058a163c();
    if (lVar10 == 0) goto LAB_06a44980;
    FUN_06a2fe4c(lVar10,uVar6,0);
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if (lVar10 == 0) goto LAB_06a44980;
    uVar9 = *(undefined8 *)(lVar10 + 0x28);
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_058a163c();
    plVar7 = (long *)FUN_05974b90(uVar9,uVar6,0);
    lVar8 = *(long *)puVar1;
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)(lVar10 + 0x28) = 0;
    }
    else if ((*plVar7 != lVar8) || (*(long **)(lVar10 + 0x28) = plVar7, *plVar7 != lVar8))
    goto LAB_06a44958;
    lVar10 = *(long *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
    if (lVar10 == 0) goto LAB_06a44980;
    uVar6 = *(undefined8 *)(lVar10 + 0x40);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar8);
    FUN_058a163c();
    plVar7 = (long *)FUN_05974b90(uVar6,uVar5,0);
    lVar8 = *(long *)puVar1;
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)(lVar10 + 0x40) = 0;
    }
    else if ((*plVar7 != lVar8) || (*(long **)(lVar10 + 0x40) = plVar7, *plVar7 != lVar8))
    goto LAB_06a44958;
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 != 0) {
      uVar6 = *(undefined8 *)(lVar10 + 0x48);
      uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar8);
      FUN_058a163c();
      plVar7 = (long *)FUN_05974b90(uVar6,uVar5,0);
      if (plVar7 == (long *)0x0) {
        *(undefined8 *)(lVar10 + 0x48) = 0;
      }
      else {
        lVar8 = *(long *)puVar1;
        if ((*plVar7 != lVar8) || (*(long **)(lVar10 + 0x48) = plVar7, *plVar7 != lVar8)) {
LAB_06a44958:
                    /* WARNING: Subroutine does not return */
          FUN_03189058();
        }
      }
      return;
    }
  }
LAB_06a44980:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


