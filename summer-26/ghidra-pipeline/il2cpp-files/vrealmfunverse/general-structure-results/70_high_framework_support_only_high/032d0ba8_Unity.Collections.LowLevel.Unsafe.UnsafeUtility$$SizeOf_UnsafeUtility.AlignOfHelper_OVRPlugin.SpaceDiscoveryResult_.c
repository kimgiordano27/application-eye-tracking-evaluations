/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<OVRPlugin.SpaceDiscoveryResult>>
ENTRY_POINT: 032d0ba8
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


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_SpaceDiscoveryResult>>
               (long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar8;
  
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
    uVar4 = FUN_04cc1830();
    if ((uVar4 & 1) != 0) {
      return;
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
    }
    **(undefined8 **)(lVar5 + 0xb8) = unaff_x20;
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(undefined8 *)(lVar5 + 0xb8));
    puVar3 = PTR_DAT_0631fe88;
    lVar5 = *(long *)PTR_DAT_0631fe88;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_06312310;
    lVar5 = **(long **)(lVar5 + 0xb8);
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    uVar8 = FUN_04d8a7b0(uVar8,0);
    if (lVar5 != 0) {
      uVar4 = FUN_042f4cec(lVar5,uVar8,*(undefined8 *)PTR_DAT_0631fe90);
      if ((uVar4 & 1) == 0) {
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar5 = *(long *)puVar3;
        }
        lVar6 = *(long *)(puVar2 + 0xe0);
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar6);
        }
        uVar8 = FUN_04d8a7b0(uVar8,0);
        if (lVar5 == 0) goto LAB_032d0da4;
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *(long *)PTR_DAT_0631feb0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_032d0da4;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar5,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar5 = *(long *)puVar3;
      }
      lVar6 = *(long *)(puVar2 + 0xe0);
      lVar5 = **(long **)(lVar5 + 0xb8);
      uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar6);
      }
      uVar8 = FUN_04d8a7b0(uVar8,0);
      if (lVar5 != 0) {
        FUN_042f6600(lVar5,uVar8);
        return;
      }
    }
  }
LAB_032d0da4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


