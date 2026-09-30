/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector.InspectionRegistry$$TryGetHandle
ENTRY_POINT: 014378c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_DebugInspector_InspectionRegistry__TryGetHandle(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long in_x9;
  int unaff_w19;
  long unaff_x21;
  undefined4 unaff_w22;
  long *plVar10;
  undefined4 unaff_w23;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  long lVar11;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    lVar11 = *(long *)(in_x9 + unaff_x29 * 8 + 0x20);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)param_1[0x1b8]);
    if (unaff_w25 - unaff_w27 < unaff_w26 - unaff_w19) {
      if (lVar8 == 0) goto LAB_01437a90;
      FUN_017b46ec(lVar8,0);
      *(undefined4 *)(lVar8 + 0x10) = unaff_w23;
      *(undefined4 *)(lVar8 + 0x14) = unaff_w22;
      *(int *)(lVar8 + 0x18) = unaff_w19;
      *(int *)(lVar8 + 0x1c) = unaff_w25;
      if (lVar11 == 0) goto LAB_01437a90;
      *(long *)(lVar11 + 0x20) = lVar8;
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) goto LAB_01437a90;
      if (*(uint *)(lVar8 + 0x18) <= in_stack_00000018._4_4_) {
LAB_01437acc:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar11 = *(long *)(unaff_x21 + 0x20);
      if (lVar11 == 0) goto LAB_01437a90;
      lVar8 = *(long *)(lVar8 + unaff_x28 * 8 + 0x20);
      iVar5 = *(int *)(in_stack_00000010 + 0x14);
      iVar1 = *(int *)(lVar11 + 0x10);
      uVar3 = *(undefined4 *)(lVar11 + 0x14);
      iVar2 = *(int *)(lVar11 + 0x18);
      uVar4 = *(undefined4 *)(lVar11 + 0x1c);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)System_Security_Cryptography_TailStream_TypeInfo);
      if (lVar11 == 0) goto LAB_01437a90;
      FUN_017b46ec(lVar11,0);
      *(int *)(lVar11 + 0x10) = iVar5 + iVar1;
      *(undefined4 *)(lVar11 + 0x14) = uVar3;
      *(int *)(lVar11 + 0x18) = iVar2 - iVar5;
      *(undefined4 *)(lVar11 + 0x1c) = uVar4;
    }
    else {
      if (lVar8 == 0) goto LAB_01437a90;
      FUN_017b46ec(lVar8,0);
      *(undefined4 *)(lVar8 + 0x10) = unaff_w23;
      *(undefined4 *)(lVar8 + 0x14) = unaff_w22;
      *(int *)(lVar8 + 0x18) = unaff_w26;
      *(int *)(lVar8 + 0x1c) = unaff_w27;
      if (lVar11 == 0) goto LAB_01437a90;
      *(long *)(lVar11 + 0x20) = lVar8;
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) goto LAB_01437a90;
      if (*(uint *)(lVar8 + 0x18) <= in_stack_00000018._4_4_) goto LAB_01437acc;
      lVar11 = *(long *)(unaff_x21 + 0x20);
      if (lVar11 == 0) goto LAB_01437a90;
      lVar8 = *(long *)(lVar8 + unaff_x28 * 8 + 0x20);
      uVar3 = *(undefined4 *)(lVar11 + 0x10);
      iVar1 = *(int *)(lVar11 + 0x14);
      iVar5 = *(int *)(in_stack_00000010 + 0x18);
      uVar4 = *(undefined4 *)(lVar11 + 0x18);
      iVar2 = *(int *)(lVar11 + 0x1c);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)System_Security_Cryptography_TailStream_TypeInfo);
      if (lVar11 == 0) goto LAB_01437a90;
      FUN_017b46ec(lVar11,0);
      *(undefined4 *)(lVar11 + 0x10) = uVar3;
      *(int *)(lVar11 + 0x14) = iVar5 + iVar1;
      *(undefined4 *)(lVar11 + 0x18) = uVar4;
      *(int *)(lVar11 + 0x1c) = iVar2 - iVar5;
    }
    if (lVar8 == 0) {
LAB_01437a90:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(long *)(lVar8 + 0x20) = lVar11;
    puVar6 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_NormalizeInputs__;
    lVar8 = *(long *)(unaff_x21 + 0x18);
    if (lVar8 == 0) goto LAB_01437a90;
    if (*(uint *)(lVar8 + 0x18) <= in_stack_00000000._4_4_) goto LAB_01437acc;
    lVar8 = lVar8 + in_stack_00000008 * 8;
    while( true ) {
      unaff_x21 = *(long *)(lVar8 + 0x20);
      if (unaff_x21 == 0) goto LAB_01437a90;
      if ((DAT_03776a0b & 1) == 0) {
        thunk_FUN_00d48444(puVar6);
        thunk_FUN_00d48444(System_Security_Cryptography_TailStream_TypeInfo);
        DAT_03776a0b = 1;
      }
      uVar7 = FUN_0143b020(unaff_x21);
      if ((uVar7 & 1) != 0) break;
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) goto LAB_01437a90;
      if (*(uint *)(lVar8 + 0x18) <= in_stack_00000000._4_4_) goto LAB_01437acc;
      lVar8 = *(long *)(lVar8 + in_stack_00000008 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01437a90;
      lVar8 = FUN_0143773c(lVar8,in_stack_00000010,in_stack_00000018._4_4_);
      if (lVar8 != 0) {
        return lVar8;
      }
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) goto LAB_01437a90;
      if (*(uint *)(lVar8 + 0x18) <= in_stack_00000018._4_4_) goto LAB_01437acc;
      lVar8 = lVar8 + unaff_x28 * 8;
    }
    if (*(long *)(unaff_x21 + 0x28) != 0) {
      return 0;
    }
    lVar8 = *(long *)(unaff_x21 + 0x20);
    if ((lVar8 == 0) || (in_stack_00000010 == 0)) goto LAB_01437a90;
    if (*(int *)(lVar8 + 0x18) < *(int *)(in_stack_00000010 + 0x14)) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x1c) < *(int *)(in_stack_00000010 + 0x18)) {
      return 0;
    }
    if ((*(int *)(lVar8 + 0x18) == *(int *)(in_stack_00000010 + 0x14)) &&
       (*(int *)(lVar8 + 0x1c) == *(int *)(in_stack_00000010 + 0x18))) {
      *(long *)(unaff_x21 + 0x28) = in_stack_00000010;
      return unaff_x21;
    }
    plVar10 = *(long **)(unaff_x21 + 0x18);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if ((lVar8 == 0) || (FUN_014376d0(lVar8,2), plVar10 == (long *)0x0)) goto LAB_01437a90;
    lVar11 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40));
    if (lVar11 == 0) {
LAB_01437ad0:
      uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar9,0);
    }
    if (*(uint *)(plVar10 + 3) <= in_stack_00000000._4_4_) goto LAB_01437acc;
    plVar10[in_stack_00000008 + 4] = lVar8;
    plVar10 = *(long **)(unaff_x21 + 0x18);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if ((lVar8 == 0) || (FUN_014376d0(lVar8,2), plVar10 == (long *)0x0)) goto LAB_01437a90;
    lVar11 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40));
    if (lVar11 == 0) goto LAB_01437ad0;
    if (*(uint *)(plVar10 + 3) <= in_stack_00000018._4_4_) goto LAB_01437acc;
    plVar10[unaff_x28 + 4] = lVar8;
    lVar8 = *(long *)(unaff_x21 + 0x20);
    if ((lVar8 == 0) || (in_x9 = *(long *)(unaff_x21 + 0x18), in_x9 == 0)) goto LAB_01437a90;
    if (*(uint *)(in_x9 + 0x18) <= in_stack_00000000._4_4_) goto LAB_01437acc;
    unaff_w26 = *(int *)(lVar8 + 0x18);
    unaff_w25 = *(int *)(lVar8 + 0x1c);
    unaff_w23 = *(undefined4 *)(lVar8 + 0x10);
    unaff_w22 = *(undefined4 *)(lVar8 + 0x14);
    param_1 = &Mono_Security_X509_SafeBag_TypeInfo;
    unaff_w19 = *(int *)(in_stack_00000010 + 0x14);
    unaff_w27 = *(int *)(in_stack_00000010 + 0x18);
    unaff_x29 = in_stack_00000008;
  } while( true );
}


