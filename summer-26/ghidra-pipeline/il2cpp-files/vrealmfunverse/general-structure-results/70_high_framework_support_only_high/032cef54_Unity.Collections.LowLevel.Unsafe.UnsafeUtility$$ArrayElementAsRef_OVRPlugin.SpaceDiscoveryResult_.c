/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ArrayElementAsRef<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 032cef54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *in_x9;
  long lVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  long unaff_x23;
  
                    /* catch() { ... } // from try @ 032cef38 with catch @ 032cef54 */
                    /* try { // try from 032cef58 to 033cef5f has its CatchHandler @ 032cef68 */
  uVar4 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x2f0));
  uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(unaff_x23 + 0xe0));
  }
  plVar5 = (long *)FUN_04d8a7b0(uVar10,0);
  if (plVar5 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
    uVar6 = FUN_04cc1830(uVar4,uVar10,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218();
    }
    **(undefined8 **)(lVar7 + 0xb8) = unaff_x20;
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(undefined8 *)(lVar7 + 0xb8));
    puVar3 = PTR_DAT_0631fe88;
    lVar7 = *(long *)PTR_DAT_0631fe88;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar7 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_06312310;
    lVar7 = **(long **)(lVar7 + 0xb8);
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    uVar4 = FUN_04d8a7b0(uVar4,0);
    if (lVar7 != 0) {
      uVar6 = FUN_042f4cec(lVar7,uVar4,*(undefined8 *)PTR_DAT_0631fe90);
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar7 = *(long *)puVar3;
        }
        lVar8 = *(long *)(puVar2 + 0xe0);
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar8);
        }
        uVar4 = FUN_04d8a7b0(uVar4,0);
        if (lVar7 == 0) goto LAB_032cf184;
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar9 = *(long *)PTR_DAT_0631feb0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_032cf184;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar3;
      }
      lVar8 = *(long *)(puVar2 + 0xe0);
      lVar7 = **(long **)(lVar7 + 0xb8);
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar8);
      }
      uVar4 = FUN_04d8a7b0(uVar4,0);
      if (lVar7 != 0) {
        FUN_042f6600(lVar7,uVar4);
        return;
      }
    }
  }
LAB_032cf184:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


