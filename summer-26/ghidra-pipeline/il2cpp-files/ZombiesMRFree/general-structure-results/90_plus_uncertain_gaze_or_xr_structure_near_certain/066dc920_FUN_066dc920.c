/*
FUNCTION_NAME: FUN_066dc920
ENTRY_POINT: 066dc920
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_066dc920(long param_1,long param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar3 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  if ((DAT_073a112f & 1) == 0) {
    FUN_02fe925c(Pathfinding_Pooling_ListPool<NativeQueue<byte>>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f992e0);
    FUN_02fe925c(OVRTask<OVRResult<Int32Enum>>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
                );
    FUN_02fe925c(OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(System_Collections_Generic_List<SystemBaseRegistry_RegistrationEntry>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<TMP_Dropdown_OptionData>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo);
    FUN_02fe925c(OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9a540);
    FUN_02fe925c(OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_TypeInfo
                );
    FUN_02fe925c(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    DAT_073a112f = 1;
  }
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0671f8a0(param_1,param_2,0);
  puVar9 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
  puVar8 = OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
  puVar7 = OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_TypeInfo;
  puVar6 = OVRTask<OVRResult<Int32Enum>>_TypeInfo;
  puVar4 = 
  System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_TypeInfo
  ;
  puVar5 = System_Collections_Generic_List<TMP_Dropdown_OptionData>_TypeInfo;
  puVar3 = System_Collections_Generic_List<SystemBaseRegistry_RegistrationEntry>_TypeInfo;
  if (param_2 != 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x98);
    if (*(int *)(*(long *)PTR_DAT_06f992e0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar14 = FUN_0669a3b8(uVar14,0);
    *(undefined8 *)(param_1 + 0x200) = uVar14;
    thunk_FUN_03048534(param_1 + 0x200);
    uVar14 = FUN_0669a3b8(*(undefined8 *)(param_2 + 0xa0),0);
    *(undefined8 *)(param_1 + 0x208) = uVar14;
    thunk_FUN_03048534(param_1 + 0x208);
    uVar14 = FUN_0669a3b8(*(undefined8 *)(param_2 + 0xb0),0);
    *(undefined8 *)(param_1 + 0x210) = uVar14;
    thunk_FUN_03048534(param_1 + 0x210);
    uVar15 = *(undefined8 *)(param_1 + 0x200);
    uVar16 = *(undefined8 *)(param_1 + 0x210);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
    FUN_066d3260(uVar14,param_2,uVar15,uVar16);
    *(undefined8 *)(param_1 + 0x1a8) = uVar14;
    thunk_FUN_03048534(param_1 + 0x1a8,uVar14);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
    FUN_066d2fe4(uVar14,500);
    *(undefined8 *)(param_1 + 0x1b0) = uVar14;
    thunk_FUN_03048534(param_1 + 0x1b0,uVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x200);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
    FUN_066d8118(uVar14,600,uVar15);
    *(undefined8 *)(param_1 + 0x1b8) = uVar14;
    thunk_FUN_03048534(param_1 + 0x1b8,uVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x200);
    uVar16 = *(undefined8 *)(param_1 + 0x208);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
    FUN_0678ef90(uVar14,0x3e9,uVar15,uVar16,0);
    *(undefined8 *)(param_1 + 0x1c0) = uVar14;
    thunk_FUN_03048534(param_1 + 0x1c0,uVar14);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
    FUN_06736604(uVar14,0x226,1,0);
    *(undefined8 *)(param_1 + 0x1c8) = uVar14;
    thunk_FUN_03048534(param_1 + 0x1c8,uVar14);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
    FUN_06736604(uVar14,0x3ea,0,0);
    *(undefined8 *)(param_1 + 0x1d0) = uVar14;
    thunk_FUN_03048534(param_1 + 0x1d0,uVar14);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
    FUN_067945cc(uVar14,*(undefined8 *)puVar9,0);
    *(undefined8 *)(param_1 + 0x1e0) = uVar14;
    thunk_FUN_03048534(param_1 + 0x1e0,uVar14);
    FUN_067430c0(0);
    local_70 = *(undefined8 *)(param_1 + 0x200);
    local_68 = extraout_x1;
    thunk_FUN_03048534(&local_70);
    local_68 = CONCAT44(local_68._4_4_,0x4a);
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_06743174(&local_b0,*(undefined8 *)(param_2 + 0xe0),&local_70,0);
    *(undefined8 *)(param_1 + 0x248) = uStack_88;
    *(undefined8 *)(param_1 + 0x240) = local_90;
    *(undefined8 *)(param_1 + 600) = uStack_78;
    *(undefined8 *)(param_1 + 0x250) = uStack_80;
    *(undefined8 *)(param_1 + 0x228) = uStack_a8;
    *(undefined8 *)(param_1 + 0x220) = local_b0;
    *(undefined8 *)(param_1 + 0x238) = uStack_98;
    *(undefined8 *)(param_1 + 0x230) = uStack_a0;
    thunk_FUN_03048534(param_1 + 0x220,0);
    uVar1 = *(undefined1 *)(param_2 + 0x60);
    *(long *)(param_1 + 0x218) = param_2;
    *(undefined1 *)(param_1 + 0x1e8) = uVar1;
    thunk_FUN_03048534(param_1 + 0x218,param_2);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo);
    FUN_0672e074(uVar14,0);
    *(undefined8 *)(param_1 + 0xe8) = uVar14;
    thunk_FUN_03048534((undefined8 *)(param_1 + 0xe8),uVar14);
    uVar14 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo);
    FUN_066d182c();
    *(undefined8 *)(param_1 + 0x1d8) = uVar14;
    thunk_FUN_03048534(param_1 + 0x1d8,uVar14);
    puVar5 = Pathfinding_Pooling_ListPool<NativeQueue<byte>>_TypeInfo;
    puVar3 = PTR_DAT_06f6d618;
    lVar12 = *(long *)(param_1 + 0x218);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x158) = *(undefined8 *)(param_1 + 0x1d8);
      thunk_FUN_03048534(lVar12 + 0x158);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      puVar4 = PTR_DAT_06f9a540;
      uVar14 = FUN_0669a96c(2,0,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar3);
      }
      uVar10 = FUN_068f9b78(uVar14,0,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar4);
      }
      lVar12 = FUN_067676ac(0);
      uVar11 = FUN_068f8810(lVar12,0,0);
      if ((uVar11 & 1) != 0) {
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x40), lVar12 == 0)) goto LAB_066dcec4;
        if ((0 < (int)*(ulong *)(lVar12 + 0x18)) &&
           (uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff, uVar11 != 0)) {
          plVar13 = (long *)(lVar12 + 0x20);
          do {
            if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            if ((long *)*plVar13 != (long *)0x0) {
              lVar12 = *(long *)*plVar13;
              bVar2 = *(byte *)(*(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo +
                               0x130);
              if ((bVar2 <= *(byte *)(lVar12 + 0x130)) &&
                 (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
                  *(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo))
              goto LAB_066dce54;
            }
            uVar11 = uVar11 - 1;
            plVar13 = plVar13 + 1;
          } while (uVar11 != 0);
        }
      }
      if ((uVar10 & 1) != 0) {
        uVar15 = *(undefined8 *)(param_2 + 0x98);
        uVar14 = *(undefined8 *)(param_2 + 0xa8);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_06699e50(uVar15,uVar14,0);
      }
LAB_066dce54:
      puVar5 = System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo;
      puVar3 = 
      System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
      ;
      lVar12 = *(long *)
                System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
      ;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar12 = *(long *)puVar3;
      }
      *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x24) = DAT_0136baf0;
      FUN_06683240(0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      return;
    }
  }
LAB_066dcec4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


