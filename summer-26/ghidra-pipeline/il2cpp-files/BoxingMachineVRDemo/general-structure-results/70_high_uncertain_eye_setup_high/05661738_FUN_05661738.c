/*
FUNCTION_NAME: FUN_05661738
ENTRY_POINT: 05661738
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_05661738(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar4 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067654c8);
    FUN_04f77010(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02dc61f4(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar5);
  }
  iVar7 = *(int *)(param_2 + 0x10);
  if (iVar7 == 0) {
    uVar4 = **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x20) + iVar7;
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        uVar2 = FUN_04e87a5c(param_2,iVar7,0);
        iVar7 = iVar7 + 1;
        iVar8 = (uVar2 & 0xffff ^ iVar8 << 7) + iVar8;
      } while (iVar7 < *(int *)(param_2 + 0x10));
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
LAB_0566182c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar8 = iVar8 - (iVar8 >> 0x11);
    iVar8 = iVar8 - (iVar8 >> 0xb);
    uVar1 = iVar8 - (iVar8 >> 5);
    uVar2 = *(uint *)(param_1 + 0x1c) & uVar1;
    if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    for (lVar6 = *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x20)) {
      if (*(uint *)(lVar6 + 0x18) == uVar1) {
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0566182c;
        uVar3 = FUN_04e8ba64(*(long *)(lVar6 + 0x10),param_2,0);
        if ((uVar3 & 1) != 0) {
          return *(undefined8 *)(lVar6 + 0x10);
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


