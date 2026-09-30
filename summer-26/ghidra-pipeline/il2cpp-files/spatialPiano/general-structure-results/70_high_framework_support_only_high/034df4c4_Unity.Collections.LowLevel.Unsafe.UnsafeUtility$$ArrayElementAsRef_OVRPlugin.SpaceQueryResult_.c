/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ArrayElementAsRef<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 034df4c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_SpaceQueryResult>
               (long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xcf8));
  FUN_02f08768(PTR_DAT_067cad00);
  if (*(long *)(unaff_x22 + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar3 = thunk_FUN_02f45270();
    uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067cad08);
    FUN_0504ee1c(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3);
  }
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    FUN_02f41e9c(lVar5);
  }
  plVar1 = (long *)thunk_FUN_02f45174();
  if ((plVar1 == (long *)0x0) || (lVar5 = thunk_FUN_02f45174(), lVar5 == 0)) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02f41e9c(lVar5);
    }
    plVar1 = (long *)thunk_FUN_02f45174();
    if ((plVar1 == (long *)0x0) || (lVar5 = thunk_FUN_02f45174(), lVar5 == 0)) {
      lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        FUN_02f41e9c(lVar5);
      }
      plVar1 = (long *)thunk_FUN_02f45174();
      if ((plVar1 == (long *)0x0) || (lVar5 = thunk_FUN_02f45174(), lVar5 == 0)) {
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          FUN_02f41e9c(lVar5);
        }
        plVar1 = (long *)thunk_FUN_02f45174();
        if ((plVar1 == (long *)0x0) || (lVar5 = thunk_FUN_02f45174(), lVar5 == 0)) {
          lVar5 = **(long **)(unaff_x22 + 0x38);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c(lVar5);
          }
          lVar6 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_034df804;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_02f421d0();
LAB_034df804:
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          goto LAB_034df780;
        }
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c(lVar5);
        }
        lVar6 = *plVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) goto LAB_034df768;
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
      }
      else {
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c(lVar5);
        }
        lVar6 = *plVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) goto LAB_034df768;
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
      }
    }
    else {
      lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c(lVar5);
      }
      lVar6 = *plVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) goto LAB_034df768;
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
    }
    lVar6 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_034df768;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_02f421d0(plVar1,lVar5,0);
LAB_034df774:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
LAB_034df780:
                    /* WARNING: Could not recover jumptable at 0x034df794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
LAB_034df768:
  puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
  goto LAB_034df774;
}


