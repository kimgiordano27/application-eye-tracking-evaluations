/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ArrayElementAsRef<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 032cef60
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


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar9;
  
                    /* try { // try from 032cef60 to 033cef6b has its CatchHandler @ 032ced24 */
                    /* catch() { ... } // from try @ 032cef58 with catch @ 032cef68 */
  uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(param_1);
  }
  plVar4 = (long *)FUN_04d8a7b0(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
    uVar5 = FUN_04cc1830(param_2,uVar9,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218();
    }
    **(undefined8 **)(lVar6 + 0xb8) = unaff_x20;
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(undefined8 *)(lVar6 + 0xb8));
    puVar3 = PTR_DAT_0631fe88;
    lVar6 = *(long *)PTR_DAT_0631fe88;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_06312310;
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    uVar9 = FUN_04d8a7b0(uVar9,0);
    if (lVar6 != 0) {
      uVar5 = FUN_042f4cec(lVar6,uVar9,*(undefined8 *)PTR_DAT_0631fe90);
      if ((uVar5 & 1) == 0) {
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar6 = *(long *)puVar3;
        }
        lVar7 = *(long *)(puVar2 + 0xe0);
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar7);
        }
        uVar9 = FUN_04d8a7b0(uVar9,0);
        if (lVar6 == 0) goto LAB_032cf184;
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *(long *)PTR_DAT_0631feb0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_032cf184;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar6,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *(long *)puVar3;
      }
      lVar7 = *(long *)(puVar2 + 0xe0);
      lVar6 = **(long **)(lVar6 + 0xb8);
      uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar7);
      }
      uVar9 = FUN_04d8a7b0(uVar9,0);
      if (lVar6 != 0) {
        FUN_042f6600(lVar6,uVar9);
        return;
      }
    }
  }
LAB_032cf184:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


