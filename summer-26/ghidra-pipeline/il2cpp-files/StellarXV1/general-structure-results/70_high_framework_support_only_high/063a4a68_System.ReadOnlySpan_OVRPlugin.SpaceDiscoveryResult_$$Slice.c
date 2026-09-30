/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$Slice
ENTRY_POINT: 063a4a68
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__Slice
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int iVar8;
  long *plVar9;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_063a4b08;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_063a4b08:
  iVar1 = (*(code *)*puVar2)();
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      plVar9 = *(long **)(unaff_x21 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc(lVar4);
      }
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_063a4b9c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar9,lVar4,0);
LAB_063a4b9c:
      in_stack_00000000._4_4_ = (*(code *)*puVar2)(plVar9,iVar8,puVar2[1]);
      uStack0000000000000008 = param_3;
      uStack000000000000000c = param_4;
      lVar4 = thunk_FUN_040b4b34(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),
                                 (long)&stack0x00000000 + 4);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
        uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar4;
      thunk_FUN_040ec700(unaff_x22 + (long)(int)unaff_w19 + 4,lVar4);
      iVar8 = iVar8 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar8 != iVar1);
  }
  return;
}


