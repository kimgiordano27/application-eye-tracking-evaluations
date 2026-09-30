/*
FUNCTION_NAME: FUN_01c34dd4
ENTRY_POINT: 01c34dd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01c34dd4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_38;
  
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__;
  if ((DAT_0377ea50 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_46__);
    thunk_FUN_00d48444(Mono_Globalization_Unicode_NormalizationTableUtil_TypeInfo);
    DAT_0377ea50 = 1;
  }
  puVar2 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  local_38 = 0;
  lVar7 = FUN_00da4fb8(*(undefined8 *)puVar1,0x100);
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_46__;
  puVar1 = Mono_Globalization_Unicode_NormalizationTableUtil_TypeInfo;
  if ((param_1 & 1) == 0) {
    local_38 = local_38 & 0xffffffff00000000;
    do {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01731954(0);
      lVar9 = FUN_0176ecf8(&local_38,*(undefined8 *)puVar3,uVar8,0);
      if (lVar9 == 0) goto LAB_01c34f98;
      uVar4 = (uint)local_38;
      lVar10 = (long)(int)(uint)local_38;
      uVar5 = FUN_015fa29c(lVar9,0,0);
      iVar6 = FUN_015fa29c(lVar9,1,0);
      if (lVar7 == 0) goto LAB_01c34f98;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_01c34f9c;
      *(uint *)(lVar7 + lVar10 * 4 + 0x20) = uVar5 & 0xffff | iVar6 << 0x10;
      iVar6 = (uint)local_38 + 1;
      local_38 = CONCAT44(local_38._4_4_,iVar6);
    } while (iVar6 < 0x100);
  }
  else {
    local_38 = local_38 & 0xffffffff;
    do {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01731954(0);
      lVar9 = FUN_0176ecf8((long)&local_38 + 4,*(undefined8 *)puVar1,uVar8,0);
      if (lVar9 == 0) {
LAB_01c34f98:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = local_38._4_4_;
      lVar10 = (long)(int)local_38._4_4_;
      uVar5 = FUN_015fa29c(lVar9,0,0);
      iVar6 = FUN_015fa29c(lVar9,1,0);
      if (lVar7 == 0) goto LAB_01c34f98;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) {
LAB_01c34f9c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(uint *)(lVar7 + lVar10 * 4 + 0x20) = uVar5 & 0xffff | iVar6 << 0x10;
      iVar6 = local_38._4_4_ + 1;
      local_38 = CONCAT44(iVar6,(uint)local_38);
    } while (iVar6 < 0x100);
  }
  return lVar7;
}


