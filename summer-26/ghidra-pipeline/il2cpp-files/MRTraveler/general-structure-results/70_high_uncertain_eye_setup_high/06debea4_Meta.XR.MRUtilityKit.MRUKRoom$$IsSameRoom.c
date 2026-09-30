/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$IsSameRoom
ENTRY_POINT: 06debea4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__IsSameRoom(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  int unaff_w21;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e91ce0);
  FUN_03c8f898(PTR_DAT_08e86650);
  FUN_03c8f898(PTR_DAT_08e91ce8);
  FUN_03c8f898(PTR_DAT_08e91cf0);
  FUN_03c8f898(PTR_DAT_08e91cf8);
  *(undefined1 *)(unaff_x20 + 0xdff) = 1;
  if (*(int *)(unaff_x19 + 0x20) == unaff_w21) {
    return;
  }
  *(int *)(unaff_x19 + 0x20) = unaff_w21;
  plVar7 = *(long **)(unaff_x19 + 0x60);
  in_stack_00000018 = *(undefined8 *)PTR_DAT_08e91ce8;
  in_stack_00000020 = 0xffffffffffffffff;
  uVar1 = FUN_07138048(&stack0x00000018,0);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar8 = *(undefined8 *)PTR_DAT_08e91cf8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_08e91cf0;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e82378) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_06debf9c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e82378,7);
LAB_06debf9c:
    (*(code *)*puVar2)(plVar7,uVar1,0,0,0,0,uVar8,uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),*(undefined4 *)(unaff_x19 + 0x20),
                 *(undefined8 *)(lVar4 + 0x28));
    }
    if (*(int *)(unaff_x19 + 0x20) == 0) {
      plVar7 = (long *)(unaff_x19 + 0x48);
      lVar3 = *plVar7;
      lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86650);
      FUN_05ac8e98(lVar4,*(undefined8 *)PTR_DAT_08e86648);
      *plVar7 = lVar4;
      thunk_FUN_03d233cc(plVar7,lVar4);
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
        uVar5 = FUN_0717850c(*(long *)(lVar3 + 0x10),0);
        if ((uVar5 & 1) != 0) {
          return;
        }
        uVar1 = 0;
LAB_06dec090:
        FUN_05ac913c(lVar3,uVar1,*(undefined8 *)PTR_DAT_08e866f8);
        return;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x20) != 2) {
        return;
      }
      if ((*(long *)(unaff_x19 + 0x48) != 0) &&
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x10), lVar4 != 0)) {
        uVar5 = FUN_0717850c(lVar4,0);
        if ((uVar5 & 1) != 0) {
          return;
        }
        lVar3 = *(long *)(unaff_x19 + 0x48);
        if (lVar3 != 0) {
          uVar1 = 1;
          goto LAB_06dec090;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


