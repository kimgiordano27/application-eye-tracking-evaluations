/*
FUNCTION_NAME: FUN_018ca4e0
ENTRY_POINT: 018ca4e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_018ca4e0(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_037799f9 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8960);
    thunk_FUN_00d48444(StringLiteral_11703);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_037799f9 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  if (param_1 == (long *)0x0) {
LAB_018ca700:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar3 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  if (iVar3 == 8) {
    if (param_2 == (long *)0x0) goto LAB_018ca700;
    iVar3 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    puVar2 = StringLiteral_11703;
    puVar1 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
    if (iVar3 == 8) {
      plVar11 = (long *)param_2[7];
      if (plVar11 == (long *)0x0) goto LAB_018ca700;
      if (*plVar11 !=
          *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar11);
      }
      iVar3 = FUN_01605160(plVar11,0x2f,0);
      uVar6 = FUN_01601d40(plVar11,1,iVar3 + -1,0);
      uVar7 = FUN_01603ec8(plVar11,iVar3 + 1,0);
      if (param_3 == 0) {
        local_50 = 0;
        uStack_48 = 0;
      }
      else {
        uStack_48 = *(undefined8 *)(param_3 + 0x18);
        local_50 = *(undefined8 *)(param_3 + 0x10);
      }
      lVar8 = *(long *)(*(long *)puVar2 + 0x20);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
      pcVar9 = (char *)thunk_FUN_00d32ed4(&local_50,*(undefined8 *)(lVar8 + 0x80));
      if (*pcVar9 == '\0') {
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar2;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x38);
      }
      else {
        uVar10 = FUN_00bec5c8(&local_50,*(undefined8 *)StringLiteral_8960);
      }
      plVar11 = (long *)param_1[7];
      uVar4 = FUN_0185e544(uVar7,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar11);
      }
      uVar5 = FUN_0201fc5c(plVar11,uVar6,uVar4,uVar10,0);
      goto LAB_018ca6e4;
    }
  }
  uVar5 = 0;
LAB_018ca6e4:
  return uVar5 & 1;
}


