/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_67
ENTRY_POINT: 05bfc298
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_67(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03188a78(PTR_DAT_07117020);
  FUN_03188a78(PTR_DAT_07117060);
  *(undefined1 *)(unaff_x20 + 0xe50) = 1;
  puVar3 = PTR_DAT_07117060;
  puVar2 = PTR_DAT_07117020;
  iVar1 = *(int *)(unaff_x19 + 0x28);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 == 0) goto LAB_05bfc4f4;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05bfc4f8:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (*(long *)(lVar6 + 0x20) == 0) {
LAB_05bfc4f4:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_03a67820(*(long *)(lVar6 + 0x20),0,*(undefined8 *)PTR_DAT_07117020);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 == 0) goto LAB_05bfc4f4;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_05bfc4f8;
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 == 0) goto LAB_05bfc4f4;
      uVar5 = *(undefined8 *)puVar2;
      uVar4 = 0;
    }
    else if (iVar1 == 1) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 == 0) goto LAB_05bfc4f4;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_05bfc4f8;
      if (*(long *)(lVar6 + 0x20) == 0) goto LAB_05bfc4f4;
      FUN_03a67820(*(long *)(lVar6 + 0x20),0,*(undefined8 *)PTR_DAT_07117060);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 == 0) goto LAB_05bfc4f4;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_05bfc4f8;
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 == 0) goto LAB_05bfc4f4;
      uVar5 = *(undefined8 *)puVar3;
      uVar4 = 1;
    }
    else {
      if (iVar1 != 2) goto LAB_05bfc4e8;
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 == 0) goto LAB_05bfc4f4;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_05bfc4f8;
      if (*(long *)(lVar6 + 0x20) == 0) goto LAB_05bfc4f4;
      FUN_03a67820(*(long *)(lVar6 + 0x20),1,*(undefined8 *)PTR_DAT_07117020);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 == 0) goto LAB_05bfc4f4;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_05bfc4f8;
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 == 0) goto LAB_05bfc4f4;
      uVar5 = *(undefined8 *)puVar2;
      uVar4 = 2;
    }
  }
  else if (iVar1 == 3) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 == 0) goto LAB_05bfc4f4;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_05bfc4f8;
    if (*(long *)(lVar6 + 0x20) == 0) goto LAB_05bfc4f4;
    FUN_03a67820(*(long *)(lVar6 + 0x20),1,*(undefined8 *)PTR_DAT_07117060);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 == 0) goto LAB_05bfc4f4;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_05bfc4f8;
    lVar6 = *(long *)(lVar6 + 0x28);
    if (lVar6 == 0) goto LAB_05bfc4f4;
    uVar5 = *(undefined8 *)puVar3;
    uVar4 = 3;
  }
  else if (iVar1 == 4) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 == 0) goto LAB_05bfc4f4;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_05bfc4f8;
    if (*(long *)(lVar6 + 0x20) == 0) goto LAB_05bfc4f4;
    FUN_03a67820(*(long *)(lVar6 + 0x20),2,*(undefined8 *)PTR_DAT_07117020);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 == 0) goto LAB_05bfc4f4;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_05bfc4f8;
    lVar6 = *(long *)(lVar6 + 0x28);
    if (lVar6 == 0) goto LAB_05bfc4f4;
    uVar5 = *(undefined8 *)puVar2;
    uVar4 = 4;
  }
  else {
    if (iVar1 != 5) goto LAB_05bfc4e8;
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 == 0) goto LAB_05bfc4f4;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_05bfc4f8;
    if (*(long *)(lVar6 + 0x20) == 0) goto LAB_05bfc4f4;
    FUN_03a67820(*(long *)(lVar6 + 0x20),2,*(undefined8 *)PTR_DAT_07117060);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 == 0) goto LAB_05bfc4f4;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_05bfc4f8;
    lVar6 = *(long *)(lVar6 + 0x28);
    if (lVar6 == 0) goto LAB_05bfc4f4;
    uVar5 = *(undefined8 *)puVar3;
    uVar4 = 5;
  }
  FUN_03a67820(lVar6,uVar4,uVar5);
LAB_05bfc4e8:
  FUN_05bfc4fc();
  return;
}


