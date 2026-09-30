/*
FUNCTION_NAME: FUN_01806c54
ENTRY_POINT: 01806c54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] FUN_01806c54(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((DAT_0377939c & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<byte>_GetHashCode__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_0377939c = 1;
  }
  uVar6 = FUN_01805c44(param_1);
  puVar4 = Method_Unity_Collections_NativeArray<byte>_GetHashCode__;
  puVar2 = PTR_DAT_033f2f78;
  if (0xe < uVar6) {
LAB_01806ed4:
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar8 = FUN_01731954(0);
    local_38 = CONCAT44(local_38._4_4_,uVar6);
    uVar12 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__);
    uVar12 = thunk_FUN_00d61fa0(uVar12,&local_38);
    uVar11 = thunk_FUN_00d48444(
                               Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__
                               );
    uVar8 = FUN_018651d4(uVar11,uVar8,uVar12,0);
    uVar8 = FUN_018056b4(param_1,uVar8);
    uVar12 = thunk_FUN_00d48444(StringLiteral_14256);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar12);
  }
  uVar1 = 1 << (ulong)(uVar6 & 0x1f);
  if ((uVar1 & 0x4801) != 0) {
    return ZEXT816(0);
  }
  if ((uVar1 & 0x180) == 0) {
    if (uVar6 == 9) {
      plVar7 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if ((plVar7 != (long *)0x0) &&
         (*plVar7 !=
          *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar7);
      }
      auVar14 = FUN_01806f58(param_1,plVar7);
      return auVar14;
    }
    goto LAB_01806ed4;
  }
  plVar7 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar3 = System_ComponentModel_ListBindableAttribute_TypeInfo;
  if (plVar7 == (long *)0x0) {
LAB_01806d50:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    uVar8 = FUN_01700318(plVar7,uVar8,0);
  }
  else {
    if (*plVar7 == *(long *)puVar2) {
      puVar10 = (undefined8 *)thunk_FUN_00d624a0(plVar7);
      local_38 = *puVar10;
      uVar12 = *(undefined8 *)puVar4;
      goto LAB_01806e78;
    }
    if (*plVar7 != *(long *)System_ComponentModel_ListBindableAttribute_TypeInfo) goto LAB_01806d50;
    puVar10 = (undefined8 *)thunk_FUN_00d624a0(plVar7);
    uVar8 = *puVar10;
    uVar12 = puVar10[1];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01e19f90(uVar8,uVar12,0);
  }
  local_58 = uVar8;
  lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_58);
  if ((DAT_037793a8 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_037793a8 = 1;
  }
  uVar13 = 8;
  *(undefined4 *)(param_1 + 2) = 8;
  param_1[3] = lVar9;
  if (((int)param_1[5] == 0) && (uVar13 = 0xc, *(char *)((long)param_1 + 0x71) != '\0')) {
    uVar13 = 8;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar13;
  uVar12 = *(undefined8 *)puVar4;
  local_38 = uVar8;
LAB_01806e78:
  uStack_48 = 0;
  local_50 = 0;
  FUN_01347274(&local_50,&local_38,uVar12);
  auVar14._8_8_ = uStack_48;
  auVar14._0_8_ = local_50;
  return auVar14;
}


