/*
FUNCTION_NAME: FUN_06419e74
ENTRY_POINT: 06419e74
PROGRAM: Untangled-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_17;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_06419e74(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar7 = System_Collections_Generic_Dictionary<ConnectionProtocol,_int>_TypeInfo;
  puVar6 = PTR_DAT_06d02220;
  if ((bRam00000000071cd790 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_Dictionary<ES3Spreadsheet_Index,_string>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo)
    ;
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_Dictionary<ConnectionProtocol,_int>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Dictionary<FieldInfo,_IOptimizedAccessor>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d03438);
    bRam00000000071cd790 = 1;
  }
  puVar16 = (undefined8 *)(param_1 + 0x40);
  *puVar16 = *(undefined8 *)puVar7;
  thunk_FUN_02f411dc(puVar16);
  lVar8 = FUN_02f07f14(*(undefined8 *)puVar6,5);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x20) =
           *(undefined8 *)
            System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
      ;
      thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
      uVar9 = FUN_066cd398(param_1,0);
      if (1 < *(uint *)(lVar8 + 0x18)) {
        *(undefined8 *)(lVar8 + 0x28) = uVar9;
        thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x28),uVar9);
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x30) =
               *(undefined8 *)
                System_Collections_Generic_Dictionary<FieldInfo,_IOptimizedAccessor>_TypeInfo;
          thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x30));
          if (3 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar8 + 0x38) = *puVar16;
            thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x38));
            puVar6 = PTR_DAT_06d02708;
            if (4 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_06d03438;
              thunk_FUN_02f411dc();
              uVar9 = FUN_0546583c(lVar8,0);
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_02f12b58(*(long *)puVar6);
              }
              FUN_06693798(uVar9,param_1,0);
              lVar8 = *(long *)(param_1 + 0xb0);
              if (lVar8 != 0) {
                iVar15 = *(int *)(lVar8 + 0x18);
                *(undefined4 *)(lVar8 + 0x18) = 0;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (0 < iVar15) {
                  FUN_05624da8(*(undefined8 *)(lVar8 + 0x10),0,iVar15,0);
                }
                lVar8 = *(long *)(param_1 + 0xc0);
                if (lVar8 != 0) {
                  iVar15 = *(int *)(lVar8 + 0x18);
                  *(undefined4 *)(lVar8 + 0x18) = 0;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (0 < iVar15) {
                    FUN_05624da8(*(undefined8 *)(lVar8 + 0x10),0,iVar15,0);
                  }
                  puVar7 = 
                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                  ;
                  puVar6 = 
                  System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TypeInfo
                  ;
                  lVar8 = *(long *)(param_1 + 0xd0);
                  if (lVar8 != 0) {
                    iVar15 = 0;
                    do {
                      if (*(int *)(lVar8 + 0x18) <= iVar15) {
                        FUN_06419850(param_1);
                        return;
                      }
                      lVar8 = FUN_03fd09cc(lVar8,iVar15,
                                           *(undefined8 *)
                                            System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                          );
                      lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                      
                                                  System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                                                 );
                      FUN_067546e0(lVar10,0);
                      if ((lVar10 == 0) || (FUN_0675467c(lVar10,iVar15,0), lVar8 == 0)) break;
                      *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar8 + 0x50);
                      thunk_FUN_02f411dc();
                      uStack_78 = 0;
                      uStack_70 = 0;
                      uStack_68 = 0;
                      FUN_067544d4(*(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar8 + 0x20),
                                   *(undefined4 *)(lVar8 + 0x24),*(undefined4 *)(lVar8 + 0x28),
                                   *(undefined4 *)(lVar8 + 0x2c),&uStack_78,0);
                      uStack_88 = uStack_70;
                      uStack_90 = uStack_78;
                      uStack_80 = uStack_68;
                      FUN_06754698(lVar10,&uStack_90,0);
                      iVar4 = -0x80000000;
                      if (*(float *)(lVar8 + 0x14) != INFINITY) {
                        iVar4 = (int)*(float *)(lVar8 + 0x14);
                      }
                      iVar1 = -0x80000000;
                      if (*(float *)(lVar8 + 0x18) != INFINITY) {
                        iVar1 = (int)*(float *)(lVar8 + 0x18);
                      }
                      iVar2 = -0x80000000;
                      if (*(float *)(lVar8 + 0x1c) != INFINITY) {
                        iVar2 = (int)*(float *)(lVar8 + 0x1c);
                      }
                      iVar3 = -0x80000000;
                      if (*(float *)(lVar8 + 0x20) != INFINITY) {
                        iVar3 = (int)*(float *)(lVar8 + 0x20);
                      }
                      uStack_a0 = 0;
                      uStack_98 = 0;
                      FUN_067542e8(&uStack_a0,iVar4,iVar1,iVar2,iVar3,0);
                      FUN_067546b8(lVar10,uStack_a0,uStack_98,0);
                      FUN_067546c8(0x3f800000,lVar10,0);
                      FUN_067546d8(lVar10,0,0);
                      lVar11 = *(long *)(param_1 + 0xc0);
                      if (lVar11 == 0) break;
                      lVar12 = *(long *)(lVar11 + 0x10);
                      lVar14 = *(long *)
                                System_Collections_Generic_Dictionary<ES3Spreadsheet_Index,_string>_TypeInfo
                      ;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar12 == 0) break;
                      uVar5 = *(uint *)(lVar11 + 0x18);
                      if (uVar5 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar11 + 0x18) = uVar5 + 1;
                        plVar13 = (long *)(lVar12 + (long)(int)uVar5 * 8 + 0x20);
                        *plVar13 = lVar10;
                        thunk_FUN_02f411dc(plVar13,lVar10);
                      }
                      else {
                        FUN_03fd0c9c(lVar11,lVar10,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
                      FUN_05645a04(lVar11,0);
                      *(undefined1 *)(lVar11 + 0x10) = 2;
                      *(long *)(lVar11 + 0x20) = lVar10;
                      thunk_FUN_02f411dc((long *)(lVar11 + 0x20),lVar10);
                      iVar4 = 0xfffe;
                      if (*(int *)(lVar8 + 0x44) != 0) {
                        iVar4 = *(int *)(lVar8 + 0x44);
                      }
                      *(int *)(lVar11 + 0x14) = iVar4;
                      FUN_0641b34c(lVar11,*(undefined8 *)(lVar8 + 0x38));
                      *(undefined4 *)(lVar11 + 0x2c) = *(undefined4 *)(lVar8 + 0x30);
                      lVar8 = *(long *)(param_1 + 0xb0);
                      if (lVar8 == 0) break;
                      lVar10 = *(long *)(lVar8 + 0x10);
                      lVar12 = *(long *)puVar6;
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar10 == 0) break;
                      uVar5 = *(uint *)(lVar8 + 0x18);
                      if (uVar5 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar5 + 1;
                        plVar13 = (long *)(lVar10 + (long)(int)uVar5 * 8 + 0x20);
                        *plVar13 = lVar11;
                        thunk_FUN_02f411dc(plVar13,lVar11);
                      }
                      else {
                        FUN_03fd0c9c(lVar8,lVar11,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar8 = *(long *)(param_1 + 0xd0);
                      iVar15 = iVar15 + 1;
                    } while (lVar8 != 0);
                  }
                }
              }
              goto LAB_0641a354;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
LAB_0641a354:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


