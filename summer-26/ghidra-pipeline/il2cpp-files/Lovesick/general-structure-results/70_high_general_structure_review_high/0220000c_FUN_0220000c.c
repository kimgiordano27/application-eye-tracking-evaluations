/*
FUNCTION_NAME: FUN_0220000c
ENTRY_POINT: 0220000c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_0220000c(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_88 [72];
  
  if ((DAT_037818a3 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vclt_u32__);
    thunk_FUN_00d48444(
                      Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetExtenderProviders__
                      );
    thunk_FUN_00d48444(StringLiteral_1751);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__GetFloatTrackedDeviceProperty_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_FromOVRHandDataSource_<Start>b__21_0__);
    thunk_FUN_00d48444(PTR_DAT_033eb000);
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<ProbeVolumeSceneData_SerializableHasPVItem>_TypeInfo
                      );
    thunk_FUN_00d48444(System_IO_TextWriter_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
                      );
    thunk_FUN_00d48444(System_Func<STMAutoDelayData,_string>_TypeInfo);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef070);
    thunk_FUN_00d48444(Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_PointableCanvas_<Start>b__4_0__);
    thunk_FUN_00d48444(System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo);
    DAT_037818a3 = 1;
  }
  puVar4 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
  puVar3 = Method_Oculus_Interaction_PointableCanvas_<Start>b__4_0__;
  puVar2 = Method_Oculus_Interaction_Input_FromOVRHandDataSource_<Start>b__21_0__;
  puVar1 = System_IO_TextWriter_TypeInfo;
  switch(*param_1) {
  case 0:
    puVar10 = (undefined8 *)
              Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
    ;
    break;
  case 1:
    if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_016f5f58(param_1 + 1,0);
    return uVar7;
  case 2:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_01731954(0);
    uVar7 = FUN_01756374(param_1 + 2,uVar7,0);
    return uVar7;
  case 3:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_01731954(0);
    uVar7 = FUN_0176ff9c(param_1 + 4,uVar7,0);
    return uVar7;
  case 4:
    uVar7 = FUN_021ffaa0(param_1 + 6);
    return uVar7;
  case 5:
    lVar11 = *(long *)(param_1 + 0xc);
    puVar10 = (undefined8 *)Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo;
    if (lVar11 != 0) {
      lVar6 = *(long *)System_IO_TextWriter_TypeInfo;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
      puVar2 = StringLiteral_1751;
      uVar7 = *(undefined8 *)puVar4;
      uVar9 = *(undefined8 *)puVar3;
      lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar12 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar1;
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar12 == 0) goto LAB_02200468;
        FUN_012d239c(lVar12,uVar8,*(undefined8 *)PTR_DAT_033eb000,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar12;
      }
      puVar1 = System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo;
      uVar8 = FUN_010dcdb8(lVar11,lVar12,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vclt_u32__);
      uVar7 = FUN_0160107c(uVar7,uVar8,0);
      uVar8 = *(undefined8 *)puVar1;
LAB_022003ec:
      uVar7 = FUN_01600424(uVar9,uVar7,uVar8,0);
      return uVar7;
    }
    break;
  case 6:
    lVar11 = *(long *)(param_1 + 0xe);
    puVar10 = (undefined8 *)PTR_DAT_033ef070;
    if (lVar11 != 0) {
      lVar6 = *(long *)System_IO_TextWriter_TypeInfo;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
      puVar2 = OVR_OpenVR_IVRSystem__GetFloatTrackedDeviceProperty_TypeInfo;
      lVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar12 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar1;
        }
        uVar7 = **(undefined8 **)(lVar6 + 0xb8);
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar12 == 0) goto LAB_02200468;
        FUN_012d239c(lVar12,uVar7,
                     *(undefined8 *)
                      System_Collections_Generic_List<ProbeVolumeSceneData_SerializableHasPVItem>_TypeInfo
                     ,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar12;
      }
      puVar2 = 
      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
      ;
      puVar1 = System_Func<STMAutoDelayData,_string>_TypeInfo;
      uVar7 = FUN_010dcdb8(lVar11,lVar12,
                           *(undefined8 *)
                            Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetExtenderProviders__
                          );
      uVar7 = FUN_0160107c(*(undefined8 *)puVar4,uVar7,0);
      uVar9 = *(undefined8 *)puVar2;
      uVar8 = *(undefined8 *)puVar1;
      goto LAB_022003ec;
    }
    break;
  case 7:
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02200218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return uVar7;
    }
LAB_02200468:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  default:
    memcpy(auStack_88,param_1,0x48);
    uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,auStack_88);
    uVar7 = FUN_017cc6f4(uVar7,0);
    return uVar7;
  }
  return *puVar10;
}


