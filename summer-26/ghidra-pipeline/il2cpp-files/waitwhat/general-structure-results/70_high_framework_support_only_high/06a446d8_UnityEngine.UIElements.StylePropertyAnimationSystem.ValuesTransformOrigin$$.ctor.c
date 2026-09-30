/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.ValuesTransformOrigin$$.ctor
ENTRY_POINT: 06a446d8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTransformOrigin___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 unaff_s8;
  
  FUN_06a444e0();
  FUN_03523100(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x22);
  }
  plVar3 = (long *)FUN_06a38e10(unaff_s8);
  *(long **)(unaff_x19 + 0x28) = plVar3;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
  ;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    *(undefined1 *)(lVar4 + 0x10) = 0;
    *(undefined4 *)(lVar4 + 0x14) = 0xffffffff;
    *(undefined2 *)(lVar4 + 0x18) = 0;
    *(undefined1 *)(lVar4 + 0x1a) = 0;
    *(undefined8 *)(lVar4 + 0x1c) = 0;
    *(undefined8 *)(lVar4 + 0x34) = 0;
    FUN_05971910(lVar4,0);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    *(long *)(unaff_x19 + 0x18) = lVar4;
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_Clear__
    ;
    puVar1 = PTR_DAT_070c2c58;
    if (lVar5 == 0) goto LAB_06a44980;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar7 = FUN_06a2cca8(lVar5,0);
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar5 + 0x30) = 0;
    FUN_05971910(lVar5,0);
    uVar6 = *(undefined8 *)puVar1;
    *(long *)(lVar5 + 0x10) = lVar4;
    *(undefined8 *)(lVar5 + 0x18) = uVar8;
    lVar4 = *(long *)(unaff_x19 + 0x10);
    *(undefined8 *)(lVar5 + 0x38) = uVar7;
    *(long *)(unaff_x19 + 0x20) = lVar5;
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
    FUN_058a163c();
    if (lVar4 == 0) goto LAB_06a44980;
    FUN_06a2fe4c(lVar4,uVar7,0);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if (lVar4 == 0) goto LAB_06a44980;
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_058a163c();
    plVar3 = (long *)FUN_05974b90(uVar6,uVar7,0);
    lVar5 = *(long *)puVar1;
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)(lVar4 + 0x28) = 0;
    }
    else if ((*plVar3 != lVar5) || (*(long **)(lVar4 + 0x28) = plVar3, *plVar3 != lVar5))
    goto LAB_06a44958;
    lVar4 = *(long *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20;
    if (lVar4 == 0) goto LAB_06a44980;
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar5);
    FUN_058a163c();
    plVar3 = (long *)FUN_05974b90(uVar6,uVar7,0);
    lVar5 = *(long *)puVar1;
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)(lVar4 + 0x40) = 0;
    }
    else if ((*plVar3 != lVar5) || (*(long **)(lVar4 + 0x40) = plVar3, *plVar3 != lVar5))
    goto LAB_06a44958;
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(lVar4 + 0x48);
      uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar5);
      FUN_058a163c();
      plVar3 = (long *)FUN_05974b90(uVar6,uVar7,0);
      if (plVar3 == (long *)0x0) {
        *(undefined8 *)(lVar4 + 0x48) = 0;
      }
      else {
        lVar5 = *(long *)puVar1;
        if ((*plVar3 != lVar5) || (*(long **)(lVar4 + 0x48) = plVar3, *plVar3 != lVar5)) {
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


