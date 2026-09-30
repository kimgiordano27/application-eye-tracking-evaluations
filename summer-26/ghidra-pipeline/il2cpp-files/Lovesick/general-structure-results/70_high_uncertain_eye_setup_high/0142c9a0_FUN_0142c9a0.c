/*
FUNCTION_NAME: FUN_0142c9a0
ENTRY_POINT: 0142c9a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_0142c9a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  long local_48;
  
  if ((DAT_037769bf & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_0__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRResources__GetResourceFullPath_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13354);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__);
    thunk_FUN_00d48444(Method_System_Text_EncodingNLS_GetByteCount__);
    DAT_037769bf = 1;
  }
  puVar4 = StringLiteral_13354;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_0__;
  puVar2 = Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__;
  puVar1 = Method_System_Text_EncodingNLS_GetByteCount__;
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar1,0);
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x98);
  if (lVar6 != 0) {
    iVar11 = 0;
    uVar12 = 1;
    while (iVar11 < *(int *)(lVar6 + 0x18)) {
      FUN_0132138c(lVar6,iVar11,&local_48,*(undefined8 *)puVar4);
      if (local_48 == 0) goto LAB_0142cbcc;
      if (*(char *)(local_48 + 0x40) != '\0') {
        if (((*(long *)(param_1 + 0x98) == 0) ||
            (FUN_0132138c(*(long *)(param_1 + 0x98),iVar11,&local_48,*(undefined8 *)puVar4),
            local_48 == 0)) || (plVar7 = *(long **)(local_48 + 0x10), plVar7 == (long *)0x0))
        goto LAB_0142cbcc;
        uVar5 = (**(code **)(*plVar7 + 0x868))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x870));
        if ((*(long *)(param_1 + 0x98) == 0) ||
           (FUN_0132138c(*(long *)(param_1 + 0x98),iVar11,&local_48,*(undefined8 *)puVar4),
           local_48 == 0)) goto LAB_0142cbcc;
        uVar12 = uVar12 & uVar5;
        *(undefined1 *)(local_48 + 0x40) = 0;
      }
      lVar6 = *(long *)(param_1 + 0x98);
      iVar11 = iVar11 + 1;
      if (lVar6 == 0) goto LAB_0142cbcc;
    }
    plVar7 = (long *)FUN_013eae18(param_1,0);
    if (plVar7 != (long *)0x0) {
      lVar6 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar9 == 0) goto LAB_0142cb6c;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_0142cb54;
    }
  }
LAB_0142cbcc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0142cb54:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x22) * 0x10 + 0x138);
      goto LAB_0142cb8c;
    }
  }
LAB_0142cb6c:
  puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0x22);
LAB_0142cb8c:
  uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_0142cbcc;
    FUN_0129a9f4(*(long *)(param_1 + 0x90),*(undefined8 *)puVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return uVar12;
}


