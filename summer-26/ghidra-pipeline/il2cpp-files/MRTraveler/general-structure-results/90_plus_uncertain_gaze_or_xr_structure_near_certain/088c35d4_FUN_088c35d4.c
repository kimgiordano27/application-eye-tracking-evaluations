/*
FUNCTION_NAME: FUN_088c35d4
ENTRY_POINT: 088c35d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_088c35d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  int local_44;
  
  if ((DAT_0943e1bc & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e7de80);
    FUN_03c8f898(System_Collections_Generic_List<StyleSyntaxToken>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e69d30);
    FUN_03c8f898(PTR_DAT_08e90338);
    FUN_03c8f898(OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    FUN_03c8f898(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e80eb8);
    FUN_03c8f898(PTR_DAT_08ec4098);
    FUN_03c8f898(PTR_DAT_08e911b8);
    FUN_03c8f898(PTR_DAT_08e82db8);
    FUN_03c8f898(PTR_DAT_08ec40b0);
    FUN_03c8f898(PTR_DAT_08ec4090);
    FUN_03c8f898(PTR_DAT_08e813e0);
    FUN_03c8f898(PTR_DAT_08ec4120);
    FUN_03c8f898(PTR_DAT_08ec4178);
    DAT_0943e1bc = 1;
  }
  puVar2 = PTR_DAT_08ec40b0;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_088c38f8;
  lVar4 = FUN_07c4047c(*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_08ec40b0,0);
  if (lVar4 != 0) {
    lVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e7de80,1);
    puVar3 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
    if (lVar5 == 0) goto LAB_088c38f8;
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(undefined2 *)(lVar5 + 0x20) = 0x2c;
    uVar6 = System_IO_FileStatus__GetLength(lVar4,lVar5,0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar4);
      lVar4 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_08e69d30;
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar5 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar4);
        lVar4 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar4 + 0xb8);
      lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90338);
      FUN_04d5ef3c(lVar5,uVar9,
                   *(undefined8 *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar7 = lVar5;
      thunk_FUN_03d233cc(plVar7,lVar5);
    }
    puVar3 = System_Collections_Generic_List<StyleSyntaxToken>_TypeInfo;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar8 = FUN_0465a3c8(uVar6,lVar5,*(undefined8 *)puVar3);
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) goto LAB_088c38f8;
    uVar6 = *(undefined8 *)puVar2;
    if ((uVar8 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      FUN_07c4048c(lVar4,uVar6,*(undefined8 *)PTR_DAT_08ec4120,0);
      lVar4 = *(long *)(param_1 + 0x18);
      uVar6 = FUN_088c3e04();
      if (lVar4 == 0) goto LAB_088c38f8;
      FUN_07c4048c(lVar4,*(undefined8 *)PTR_DAT_08ec4090,uVar6,0);
      lVar4 = *(long *)(param_1 + 0x18);
      local_44 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = local_44;
      uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e80eb8,&local_44);
      uVar9 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08ec4178,uVar6,0);
      if (lVar4 == 0) goto LAB_088c38f8;
      uVar6 = *(undefined8 *)PTR_DAT_08ec4098;
    }
    FUN_07c4048c(lVar4,uVar6,uVar9,0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_07c4048c(*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_08e813e0,
                 *(undefined8 *)PTR_DAT_08e82db8,0);
    lVar4 = *(long *)(param_1 + 0x18);
    uVar6 = FUN_088c3f64(lVar4);
    if (lVar4 != 0) {
      FUN_07c4048c(lVar4,*(undefined8 *)PTR_DAT_08e911b8,uVar6,0);
      return;
    }
  }
LAB_088c38f8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


