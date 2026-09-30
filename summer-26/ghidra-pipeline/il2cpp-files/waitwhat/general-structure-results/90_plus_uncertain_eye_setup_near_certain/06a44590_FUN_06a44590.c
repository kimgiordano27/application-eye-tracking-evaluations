/*
FUNCTION_NAME: FUN_06a44590
ENTRY_POINT: 06a44590
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06a44590(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar1 = PTR_DAT_070f63d0;
  if ((DAT_0755e67d & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2c58);
    FUN_03188a78(PTR_DAT_070f63d0);
    FUN_03188a78(PTR_DAT_070f0a70);
    FUN_03188a78(Method_Oculus_Platform_Models_DeserializableList<BlockedUser>_get_NextUrl__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_Clear__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_GetEnumerator__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
                );
    DAT_0755e67d = 1;
  }
  puVar2 = PTR_DAT_070f0a70;
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_06a30084(lVar6,0);
  param_1[2] = lVar6;
  cVar4 = DAT_0754761d;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  if (cVar4 == '\0') {
    FUN_03188a78(PTR_DAT_070cf448);
    DAT_0754761d = '\x01';
  }
  lVar6 = *(long *)PTR_DAT_070cf448;
  param_1[0xf] = **(long **)(lVar6 + 0xb8);
  puVar1 = Method_Oculus_Platform_Models_DeserializableList<BlockedUser>_get_NextUrl__;
  param_1[0x10] = **(long **)(lVar6 + 0xb8);
  FUN_05971910(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar7 = FUN_06a2ec78(0);
  lVar6 = param_1[0xc];
  uVar13 = *(undefined4 *)((long)param_1 + 100);
  lVar10 = param_1[0xd];
  uVar14 = *(undefined4 *)((long)param_1 + 0x6c);
  uVar8 = FUN_06a444e0(param_1);
  uVar5 = FUN_03523100(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)puVar1);
  }
  plVar9 = (long *)FUN_06a38e10((int)lVar6,uVar13,(int)lVar10,uVar14,lVar7,uVar8,uVar5,0);
  param_1[5] = (long)plVar9;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
  ;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    lVar12 = param_1[5];
    lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    *(undefined1 *)(lVar6 + 0x10) = 0;
    *(undefined4 *)(lVar6 + 0x14) = 0xffffffff;
    *(undefined2 *)(lVar6 + 0x18) = 0;
    *(undefined1 *)(lVar6 + 0x1a) = 0;
    *(undefined8 *)(lVar6 + 0x1c) = 0;
    *(undefined8 *)(lVar6 + 0x34) = 0;
    FUN_05971910(lVar6,0);
    lVar10 = param_1[2];
    *(long *)(lVar6 + 0x28) = lVar12;
    param_1[3] = lVar6;
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
    ;
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_Clear__
    ;
    puVar1 = PTR_DAT_070c2c58;
    if (lVar10 == 0) goto LAB_06a44980;
    lVar12 = param_1[5];
    uVar8 = FUN_06a2cca8(lVar10,0);
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar2);
    *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar10 + 0x30) = 0;
    FUN_05971910(lVar10,0);
    uVar11 = *(undefined8 *)puVar1;
    *(long *)(lVar10 + 0x10) = lVar6;
    *(long *)(lVar10 + 0x18) = lVar12;
    lVar6 = param_1[2];
    *(undefined8 *)(lVar10 + 0x38) = uVar8;
    param_1[4] = lVar10;
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
    FUN_058a163c(uVar8,param_1,*(undefined8 *)puVar3,0);
    if (lVar6 == 0) goto LAB_06a44980;
    FUN_06a2fe4c(lVar6,uVar8,0);
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_GetEnumerator__
    ;
    lVar6 = param_1[4];
    if (lVar6 == 0) goto LAB_06a44980;
    uVar11 = *(undefined8 *)(lVar6 + 0x28);
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_058a163c(uVar8,param_1,*(undefined8 *)puVar2,0);
    plVar9 = (long *)FUN_05974b90(uVar11,uVar8,0);
    lVar10 = *(long *)puVar1;
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(lVar6 + 0x28) = 0;
    }
    else if ((*plVar9 != lVar10) || (*(long **)(lVar6 + 0x28) = plVar9, *plVar9 != lVar10))
    goto LAB_06a44958;
    lVar6 = param_1[3];
    param_1[8] = lVar7;
    if (lVar6 == 0) goto LAB_06a44980;
    uVar11 = *(undefined8 *)(lVar6 + 0x40);
    uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar10);
    FUN_058a163c(uVar8,param_1,*(undefined8 *)(*param_1 + 400),0);
    plVar9 = (long *)FUN_05974b90(uVar11,uVar8,0);
    lVar10 = *(long *)puVar1;
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(lVar6 + 0x40) = 0;
    }
    else if ((*plVar9 != lVar10) || (*(long **)(lVar6 + 0x40) = plVar9, *plVar9 != lVar10))
    goto LAB_06a44958;
    lVar6 = param_1[3];
    if (lVar6 != 0) {
      uVar11 = *(undefined8 *)(lVar6 + 0x48);
      uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar10);
      FUN_058a163c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x1a0),0);
      plVar9 = (long *)FUN_05974b90(uVar11,uVar8,0);
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(lVar6 + 0x48) = 0;
      }
      else {
        lVar10 = *(long *)puVar1;
        if ((*plVar9 != lVar10) || (*(long **)(lVar6 + 0x48) = plVar9, *plVar9 != lVar10)) {
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


