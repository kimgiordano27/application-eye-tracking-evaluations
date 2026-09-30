/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking.<JoinOpenRoom>d__27$$MoveNext
ENTRY_POINT: 072efe34
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking_<JoinOpenRoom>d__27__MoveNext(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  int unaff_w21;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x788));
  FUN_04077588(PTR_DAT_092c4790);
  FUN_04077588(PTR_DAT_092c4798);
  *(undefined1 *)(unaff_x20 + 0xbfd) = 1;
  puVar1 = PTR_DAT_092c4788;
  if (*(int *)(unaff_x19 + 0x20) == unaff_w21) {
    return;
  }
  plVar8 = *(long **)(unaff_x19 + 0x60);
  *(int *)(unaff_x19 + 0x20) = unaff_w21;
  in_stack_00000018 = *(undefined8 *)puVar1;
  in_stack_00000020 = 0xffffffffffffffff;
  uVar2 = FUN_076b01b4(&stack0x00000018,0);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_092c4798;
    uVar10 = *(undefined8 *)PTR_DAT_092c4790;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092b9200) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_072eff0c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092b9200,7);
LAB_072eff0c:
    (*(code *)*puVar3)(plVar8,uVar2,0,0,0,0,uVar9,uVar10);
    lVar5 = *(long *)(unaff_x19 + 0x38);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),*(undefined4 *)(unaff_x19 + 0x20),
                 *(undefined8 *)(lVar5 + 0x28));
    }
    if (*(int *)(unaff_x19 + 0x20) == 0) {
      plVar8 = (long *)(unaff_x19 + 0x48);
      lVar4 = *plVar8;
      lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a2470);
      FUN_065f29b8(lVar5,*(undefined8 *)PTR_DAT_092a2460);
      *plVar8 = lVar5;
      thunk_FUN_040ec700(plVar8,lVar5);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
        uVar6 = FUN_076f1c1c(*(long *)(lVar4 + 0x10),0);
        if ((uVar6 & 1) != 0) {
          return;
        }
        uVar2 = 0;
LAB_072efff8:
        FUN_065f2c5c(lVar4,uVar2,*(undefined8 *)PTR_DAT_092a2570);
        return;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x20) != 2) {
        return;
      }
      if ((*(long *)(unaff_x19 + 0x48) != 0) &&
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x10), lVar5 != 0)) {
        uVar6 = FUN_076f1c1c(lVar5,0);
        if ((uVar6 & 1) != 0) {
          return;
        }
        lVar4 = *(long *)(unaff_x19 + 0x48);
        if (lVar4 != 0) {
          uVar2 = 1;
          goto LAB_072efff8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


