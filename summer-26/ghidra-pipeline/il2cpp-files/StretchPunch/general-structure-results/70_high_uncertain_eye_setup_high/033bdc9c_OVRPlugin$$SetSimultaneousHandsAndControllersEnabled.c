/*
FUNCTION_NAME: OVRPlugin$$SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 033bdc9c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__SetSimultaneousHandsAndControllersEnabled(undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x21;
  bool bVar12;
  uint uVar13;
  
  if ((*(byte *)(unaff_x21 + 0x98e) & 1) == 0) {
    FUN_01d7d918(StringLiteral_5469);
    FUN_01d7d918(StringLiteral_1157);
    *(undefined1 *)(unaff_x21 + 0x98e) = 1;
  }
  puVar3 = StringLiteral_1157;
  if (param_2 != 0) {
    plVar4 = (long *)thunk_FUN_01dfff04(param_1,0);
    if (plVar4 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar4);
      }
    }
    plVar5 = (long *)thunk_FUN_01dfff04(param_2,0);
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(lVar9);
      lVar9 = *(long *)puVar3;
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar5);
      }
    }
    if (plVar5 == plVar4) {
      if ((plVar4 == (long *)0x0) ||
         (lVar9 = (**(code **)(*plVar4 + 0x698))(plVar4,0x34,*(undefined8 *)(*plVar4 + 0x6a0)),
         puVar3 = StringLiteral_5469, lVar9 == 0)) {
LAB_033bdeb4:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar1 = *(uint *)(lVar9 + 0x18);
      bVar12 = 0 < (int)uVar1;
      if (0 < (int)uVar1) {
        uVar13 = 0;
        do {
          if (uVar1 <= uVar13) {
LAB_033bdeb8:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar5 = (long *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
          plVar4 = (long *)*plVar5;
          if (plVar4 == (long *)0x0) goto LAB_033bdeb4;
          lVar11 = *plVar4;
          lVar10 = *(long *)puVar3;
          bVar2 = *(byte *)(lVar10 + 0x130);
          if ((*(byte *)(lVar11 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != lVar10)) {
LAB_033bdeb0:
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c();
          }
          uVar6 = (**(code **)(lVar11 + 0x338))(plVar4,param_1,*(undefined8 *)(lVar11 + 0x340));
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bdeb8;
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_033bdeb4;
          lVar11 = *plVar5;
          lVar10 = *(long *)puVar3;
          bVar2 = *(byte *)(lVar10 + 0x130);
          if ((*(byte *)(lVar11 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != lVar10))
          goto LAB_033bdeb0;
          uVar7 = (**(code **)(lVar11 + 0x338))(plVar5,param_2,*(undefined8 *)(lVar11 + 0x340));
          uVar8 = FUN_033bded8(uVar6,uVar7);
          if ((uVar8 & 1) == 0) break;
          uVar1 = *(uint *)(lVar9 + 0x18);
          uVar13 = uVar13 + 1;
          bVar12 = (int)uVar13 < (int)uVar1;
        } while ((int)uVar13 < (int)uVar1);
      }
      return bVar12 ^ 1;
    }
  }
  return 0;
}


