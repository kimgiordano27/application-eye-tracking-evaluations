/*
FUNCTION_NAME: Oculus.Interaction.Throw.StandardVelocityCalculator$$InjectBufferingParams
ENTRY_POINT: 018ca53c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Oculus_Interaction_Throw_StandardVelocityCalculator__InjectBufferingParams(void)

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
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar11;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  *(undefined1 *)(unaff_x22 + 0x9f9) = 1;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (unaff_x19 == (long *)0x0) {
LAB_018ca700:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar3 = (**(code **)(*unaff_x19 + 0x228))();
  if (iVar3 == 8) {
    if (unaff_x20 == (long *)0x0) goto LAB_018ca700;
    iVar3 = (**(code **)(*unaff_x20 + 0x228))();
    puVar2 = StringLiteral_11703;
    puVar1 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
    if (iVar3 == 8) {
      plVar11 = (long *)unaff_x20[7];
      if (plVar11 == (long *)0x0) goto LAB_018ca700;
      if (*plVar11 !=
          *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar11);
      }
      iVar3 = FUN_01605160(plVar11,0x2f,0);
      uVar6 = FUN_01601d40(plVar11,1,iVar3 + -1,0);
      uVar7 = FUN_01603ec8(plVar11,iVar3 + 1,0);
      if (unaff_x21 == 0) {
        uStack0000000000000000 = 0;
        uStack0000000000000008 = 0;
      }
      else {
        uStack0000000000000008 = *(undefined8 *)(unaff_x21 + 0x18);
        uStack0000000000000000 = *(undefined8 *)(unaff_x21 + 0x10);
      }
      lVar8 = *(long *)(*(long *)puVar2 + 0x20);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
      pcVar9 = (char *)thunk_FUN_00d32ed4();
      if (*pcVar9 == '\0') {
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar2;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x38);
      }
      else {
        uVar10 = FUN_00bec5c8();
      }
      plVar11 = (long *)unaff_x19[7];
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


