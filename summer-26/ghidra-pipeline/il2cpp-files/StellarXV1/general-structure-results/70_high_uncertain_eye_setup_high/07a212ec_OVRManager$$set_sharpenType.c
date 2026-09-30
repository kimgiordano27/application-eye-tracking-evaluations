/*
FUNCTION_NAME: OVRManager$$set_sharpenType
ENTRY_POINT: 07a212ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_sharpenType(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar1 = PTR_DAT_09285bb0;
  if ((DAT_0989518a & 1) == 0) {
    FUN_04077588(PTR_DAT_092ed130);
    FUN_04077588(PTR_DAT_092efe98);
    FUN_04077588(PTR_DAT_09285bb0);
    DAT_0989518a = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = FUN_089ca704(uVar7,0,0);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((uVar3 & 1) == 0) {
    if (lVar4 == 0) goto LAB_07a214b0;
  }
  else {
    if (lVar4 == 0) goto LAB_07a214b0;
    if (*(int *)(lVar4 + 0x84) == 3) {
      return;
    }
  }
  FUN_07a1f520(&stack0x00000024);
  FUN_07a214b4(param_1);
  plVar8 = *(long **)(param_1 + 0x50);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    lVar10 = *(long *)(param_1 + 0x40);
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092ed130) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07a213fc;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092ed130,0);
LAB_07a213fc:
    uVar11 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    if ((lVar10 != 0) &&
       (lVar4 = *(long *)(param_1 + 0x20), *(undefined4 *)(lVar10 + 0xb0) = uVar11, lVar4 != 0)) {
      lVar4 = *(long *)(param_1 + 0x40);
      uVar11 = FUN_07a20788();
      if (lVar4 != 0) {
        lVar10 = *(long *)puVar1;
        lVar9 = *(long *)(param_1 + 0x40);
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        *(undefined4 *)(lVar4 + 0xac) = uVar11;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar3 = FUN_089cc398(uVar7,0,0);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_07a214b0;
          bVar2 = *(int *)(*(long *)(param_1 + 0x28) + 0x40) == 0;
        }
        else {
          bVar2 = true;
        }
        if (lVar9 != 0) {
          lVar4 = *(long *)(param_1 + 0x20);
          *(bool *)(lVar9 + 0xb4) = bVar2;
          if ((lVar4 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
            *(bool *)(*(long *)(param_1 + 0x40) + 0xa8) = *(int *)(lVar4 + 0x84) == 2;
            FUN_07a1e94c();
            return;
          }
        }
      }
    }
  }
LAB_07a214b0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


