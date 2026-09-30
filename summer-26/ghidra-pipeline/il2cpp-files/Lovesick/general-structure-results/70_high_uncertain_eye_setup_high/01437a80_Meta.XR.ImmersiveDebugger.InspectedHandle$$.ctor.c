/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedHandle$$.ctor
ENTRY_POINT: 01437a80
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


long Meta_XR_ImmersiveDebugger_InspectedHandle___ctor(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 in_CY;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  uint unaff_w20;
  long lVar11;
  long *plVar12;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  uint unaff_w25;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (!(bool)in_CY) {
    param_1 = param_1 + unaff_x29 * 8;
    while( true ) {
      lVar11 = *(long *)(param_1 + 0x20);
      if (lVar11 == 0) goto LAB_01437a90;
      if ((unaff_x22[0xa0b] & 1) == 0) {
        thunk_FUN_00d48444(unaff_x23);
        thunk_FUN_00d48444(System_Security_Cryptography_TailStream_TypeInfo);
        unaff_x22[0xa0b] = 1;
      }
      uVar7 = FUN_0143b020(lVar11);
      if ((uVar7 & 1) != 0) break;
      lVar10 = *(long *)(lVar11 + 0x18);
      if (lVar10 == 0) goto LAB_01437a90;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w25) goto LAB_01437acc;
      lVar10 = *(long *)(lVar10 + unaff_x29 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_01437a90;
      lVar10 = FUN_0143773c(lVar10,unaff_x19,unaff_w20);
      if (lVar10 != 0) {
        return lVar10;
      }
      param_1 = *(long *)(lVar11 + 0x18);
      if (param_1 == 0) goto LAB_01437a90;
      if (*(uint *)(param_1 + 0x18) <= unaff_w20) goto LAB_01437acc;
      param_1 = param_1 + unaff_x28 * 8;
    }
    if (*(long *)(lVar11 + 0x28) != 0) {
      return 0;
    }
    lVar10 = *(long *)(lVar11 + 0x20);
    if ((lVar10 == 0) || (unaff_x19 == 0)) {
LAB_01437a90:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar10 + 0x18) < *(int *)(unaff_x19 + 0x14)) {
      return 0;
    }
    if (*(int *)(lVar10 + 0x1c) < *(int *)(unaff_x19 + 0x18)) {
      return 0;
    }
    if ((*(int *)(lVar10 + 0x18) == *(int *)(unaff_x19 + 0x14)) &&
       (*(int *)(lVar10 + 0x1c) == *(int *)(unaff_x19 + 0x18))) {
      *(long *)(lVar11 + 0x28) = unaff_x19;
      return lVar11;
    }
    plVar12 = *(long **)(lVar11 + 0x18);
    lVar10 = thunk_FUN_00d62348(*unaff_x23);
    if ((lVar10 == 0) || (FUN_014376d0(lVar10,2), plVar12 == (long *)0x0)) goto LAB_01437a90;
    lVar8 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40));
    if (lVar8 == 0) {
LAB_01437ad0:
      uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar9,0);
    }
    if (*(uint *)(plVar12 + 3) <= unaff_w25) break;
    plVar12[unaff_x29 + 4] = lVar10;
    plVar12 = *(long **)(lVar11 + 0x18);
    lVar10 = thunk_FUN_00d62348(*unaff_x23);
    if ((lVar10 == 0) || (FUN_014376d0(lVar10,2), plVar12 == (long *)0x0)) goto LAB_01437a90;
    lVar8 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40));
    if (lVar8 == 0) goto LAB_01437ad0;
    if (*(uint *)(plVar12 + 3) <= unaff_w20) break;
    plVar12[unaff_x28 + 4] = lVar10;
    lVar10 = *(long *)(lVar11 + 0x20);
    if ((lVar10 == 0) || (lVar8 = *(long *)(lVar11 + 0x18), lVar8 == 0)) goto LAB_01437a90;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w25) break;
    iVar1 = *(int *)(lVar10 + 0x18);
    iVar3 = *(int *)(lVar10 + 0x1c);
    uVar2 = *(undefined4 *)(lVar10 + 0x10);
    uVar4 = *(undefined4 *)(lVar10 + 0x14);
    iVar5 = *(int *)(unaff_x19 + 0x14);
    iVar6 = *(int *)(unaff_x19 + 0x18);
    lVar8 = *(long *)(lVar8 + unaff_x29 * 8 + 0x20);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)System_Security_Cryptography_TailStream_TypeInfo);
    if (iVar3 - iVar6 < iVar1 - iVar5) {
      if (lVar10 == 0) goto LAB_01437a90;
      FUN_017b46ec(lVar10,0);
      *(undefined4 *)(lVar10 + 0x10) = uVar2;
      *(undefined4 *)(lVar10 + 0x14) = uVar4;
      *(int *)(lVar10 + 0x18) = iVar5;
      *(int *)(lVar10 + 0x1c) = iVar3;
      if (lVar8 == 0) goto LAB_01437a90;
      *(long *)(lVar8 + 0x20) = lVar10;
      lVar10 = *(long *)(lVar11 + 0x18);
      if (lVar10 == 0) goto LAB_01437a90;
      if (*(uint *)(lVar10 + 0x18) <= in_stack_00000018._4_4_) break;
      lVar8 = *(long *)(lVar11 + 0x20);
      if (lVar8 == 0) goto LAB_01437a90;
      lVar10 = *(long *)(lVar10 + unaff_x28 * 8 + 0x20);
      iVar5 = *(int *)(in_stack_00000010 + 0x14);
      iVar1 = *(int *)(lVar8 + 0x10);
      uVar2 = *(undefined4 *)(lVar8 + 0x14);
      iVar3 = *(int *)(lVar8 + 0x18);
      uVar4 = *(undefined4 *)(lVar8 + 0x1c);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)System_Security_Cryptography_TailStream_TypeInfo);
      if (lVar8 == 0) goto LAB_01437a90;
      FUN_017b46ec(lVar8,0);
      *(int *)(lVar8 + 0x10) = iVar5 + iVar1;
      *(undefined4 *)(lVar8 + 0x14) = uVar2;
      *(int *)(lVar8 + 0x18) = iVar3 - iVar5;
      *(undefined4 *)(lVar8 + 0x1c) = uVar4;
    }
    else {
      if (lVar10 == 0) goto LAB_01437a90;
      FUN_017b46ec(lVar10,0);
      *(undefined4 *)(lVar10 + 0x10) = uVar2;
      *(undefined4 *)(lVar10 + 0x14) = uVar4;
      *(int *)(lVar10 + 0x18) = iVar1;
      *(int *)(lVar10 + 0x1c) = iVar6;
      if (lVar8 == 0) goto LAB_01437a90;
      *(long *)(lVar8 + 0x20) = lVar10;
      lVar10 = *(long *)(lVar11 + 0x18);
      if (lVar10 == 0) goto LAB_01437a90;
      if (*(uint *)(lVar10 + 0x18) <= in_stack_00000018._4_4_) break;
      lVar8 = *(long *)(lVar11 + 0x20);
      if (lVar8 == 0) goto LAB_01437a90;
      lVar10 = *(long *)(lVar10 + unaff_x28 * 8 + 0x20);
      uVar2 = *(undefined4 *)(lVar8 + 0x10);
      iVar1 = *(int *)(lVar8 + 0x14);
      iVar5 = *(int *)(in_stack_00000010 + 0x18);
      uVar4 = *(undefined4 *)(lVar8 + 0x18);
      iVar3 = *(int *)(lVar8 + 0x1c);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)System_Security_Cryptography_TailStream_TypeInfo);
      if (lVar8 == 0) goto LAB_01437a90;
      FUN_017b46ec(lVar8,0);
      *(undefined4 *)(lVar8 + 0x10) = uVar2;
      *(int *)(lVar8 + 0x14) = iVar5 + iVar1;
      *(undefined4 *)(lVar8 + 0x18) = uVar4;
      *(int *)(lVar8 + 0x1c) = iVar3 - iVar5;
    }
    if (lVar10 == 0) goto LAB_01437a90;
    *(long *)(lVar10 + 0x20) = lVar8;
    param_1 = *(long *)(lVar11 + 0x18);
    if (param_1 == 0) goto LAB_01437a90;
    unaff_x22 = &DAT_03776000;
    unaff_x19 = in_stack_00000010;
    unaff_x23 = (undefined8 *)
                Method_System_IO_Enumeration_FileSystemEnumerableFactory_NormalizeInputs__;
    unaff_x29 = in_stack_00000008;
    unaff_w20 = in_stack_00000018._4_4_;
    unaff_w25 = in_stack_00000000._4_4_;
    in_CY = *(uint *)(param_1 + 0x18) <= in_stack_00000000._4_4_;
  }
LAB_01437acc:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


