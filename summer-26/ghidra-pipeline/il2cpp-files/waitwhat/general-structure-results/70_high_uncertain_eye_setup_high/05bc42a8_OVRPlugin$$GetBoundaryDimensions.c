/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 05bc42a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryDimensions(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  uint uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  ulong uStack0000000000000034;
  
  plVar9 = *(long **)(unaff_x20 + 0xb68);
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07113d48);
    FUN_03188a78(PTR_DAT_07113600);
    FUN_03188a78(PTR_DAT_070c1b68);
    *(undefined1 *)(unaff_x21 + 0xad9) = 1;
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0xd0);
  uStack000000000000000c = 0;
  iVar1 = *(int *)(*plVar9 + 0xe4);
  uStack0000000000000014 = 0;
  *(undefined1 *)(unaff_x19 + 0x179) = 0;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
  }
  uVar5 = FUN_069d8404(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
LAB_05bc4448:
    *(undefined1 *)(unaff_x19 + 0x179) = 1;
    return;
  }
  FUN_05bc4464();
  FUN_05bc2454();
  puVar2 = PTR_DAT_07113d48;
  plVar9 = *(long **)(unaff_x19 + 0x198);
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07113d48) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_05bc438c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)PTR_DAT_07113d48,3);
LAB_05bc438c:
    uStack0000000000000034 = (ulong)uStack0000000000000014;
    uStack0000000000000028 = 0;
    in_stack_00000020 = 0;
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000030 = 0;
    (*(code *)*puVar6)(plVar9,&stack0x00000020,puVar6[1]);
    plVar9 = *(long **)(unaff_x19 + 0x198);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_05bc4408;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar2,5);
LAB_05bc4408:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
      uVar3 = FUN_05bc3020();
      uVar4 = FUN_05bc3250();
      uVar3 = (*(uint *)(unaff_x19 + 400) | uVar3) & (uVar4 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 400) = uVar3;
      if (uVar4 == 0) {
        return;
      }
      if (uVar3 != 0) {
        return;
      }
      goto LAB_05bc4448;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


