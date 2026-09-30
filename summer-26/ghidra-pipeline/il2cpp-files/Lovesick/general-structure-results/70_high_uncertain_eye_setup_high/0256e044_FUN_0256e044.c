/*
FUNCTION_NAME: FUN_0256e044
ENTRY_POINT: 0256e044
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0256e044(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  ushort uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  
  if ((DAT_03782e07 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(StringLiteral_11537);
    thunk_FUN_00d48444(Sirenix_Serialization_IFormatter<Keyframe>_TypeInfo);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_11__);
    thunk_FUN_00d48444(Method_System_Span<Vector2Int>_get_Length__);
    DAT_03782e07 = 1;
  }
  if (param_1 == 0) goto LAB_0256e21c;
  uVar7 = FUN_015fe854(param_1,*(undefined8 *)Method_System_Span<Vector2Int>_get_Length__,0);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_015fe854(param_1,*(undefined8 *)StringLiteral_11537,0);
    if ((uVar7 & 1) != 0) {
      uVar10 = 1;
      iVar11 = -1;
      goto LAB_0256e100;
    }
  }
  else {
    uVar10 = 2;
    iVar11 = -2;
LAB_0256e100:
    param_1 = FUN_01601d40(param_1,uVar10,*(int *)(param_1 + 0x10) + iVar11,0);
    if (param_1 == 0) goto LAB_0256e21c;
  }
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  sVar5 = FUN_015fa29c(param_1,0,0);
  if (sVar5 == 0x6b) {
    uVar6 = FUN_015fa29c(param_1,1,0);
    if ((0x40 < uVar6) && (uVar6 = FUN_015fa29c(param_1,1,0), uVar6 < 0x5b)) {
      param_1 = FUN_01601d40(param_1,1,*(int *)(param_1 + 0x10) + -1,0);
    }
  }
  puVar3 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_11__;
  puVar2 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  puVar1 = Sirenix_Serialization_IFormatter<Keyframe>_TypeInfo;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_02020414(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  plVar8 = (long *)FUN_017319b4(0);
  if (plVar8 != (long *)0x0) {
    lVar9 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
    if (lVar9 != 0) {
      FUN_01727b78(lVar9,uVar10,0);
      return;
    }
  }
LAB_0256e21c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


