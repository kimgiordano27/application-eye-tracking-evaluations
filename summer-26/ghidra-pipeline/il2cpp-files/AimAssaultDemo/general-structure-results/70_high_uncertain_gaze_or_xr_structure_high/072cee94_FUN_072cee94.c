/*
FUNCTION_NAME: FUN_072cee94
ENTRY_POINT: 072cee94
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_072cee94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo;
  if ((DAT_08268b00 & 1) == 0) {
    FUN_0373b518(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
    FUN_0373b518(PTR_DAT_07d97ae0);
    FUN_0373b518(RootMotion_FinalIK_RagdollUtility_Rigidbone___TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo);
    DAT_08268b00 = 1;
  }
  puVar2 = RootMotion_FinalIK_RagdollUtility_Rigidbone___TypeInfo;
  uVar3 = FUN_075a1a8c(*(undefined8 *)puVar1,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_075a1a44(*(undefined8 *)puVar1,0);
    lVar9 = *(long *)RootMotion_FinalIK_RagdollUtility_Child___TypeInfo;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_037756d4(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03775678();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03775678();
    }
    local_30 = 0;
    uStack_28 = 0;
    thunk_FUN_072c713c(&local_30,uVar4,**(undefined8 **)(lVar8 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_07d97ae0 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar5 = (long *)FUN_072c5b48(local_30,uStack_28,0,0);
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar5);
      }
    }
    if (DAT_08268bef == '\0') {
      FUN_0373b518(OVRPlugin_Bone___TypeInfo);
      DAT_08268bef = '\x01';
    }
    plVar6 = (long *)(*(long *)(*(long *)OVRPlugin_Bone___TypeInfo + 0xb8) + 8);
    *plVar6 = (long)plVar5;
    thunk_FUN_037aeb94(plVar6,plVar5);
    return;
  }
  uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_072d0300();
  if (DAT_08268bef == '\0') {
    FUN_0373b518(OVRPlugin_Bone___TypeInfo);
    DAT_08268bef = '\x01';
  }
  puVar7 = (undefined8 *)(*(long *)(*(long *)OVRPlugin_Bone___TypeInfo + 0xb8) + 8);
  *puVar7 = uVar4;
  thunk_FUN_037aeb94(puVar7,uVar4);
  return;
}


