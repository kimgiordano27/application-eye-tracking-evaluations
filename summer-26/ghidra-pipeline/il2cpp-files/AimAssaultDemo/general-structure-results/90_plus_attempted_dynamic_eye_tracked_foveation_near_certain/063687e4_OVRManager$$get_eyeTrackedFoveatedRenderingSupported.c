/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 063687e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long OVRManager__get_eyeTrackedFoveatedRenderingSupported(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long unaff_x20;
  long *plVar6;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long *plVar7;
  undefined8 in_stack_00000040;
  long in_stack_00000078;
  
  plVar7 = *(long **)(unaff_x27 + 0x348);
  while (uVar1 = FUN_05d64e98(&stack0x00000030,*unaff_x24), (uVar1 & 1) != 0) {
    if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar6 = (long *)(in_stack_00000078 + 0x78);
    if (*plVar6 == 0) {
      lVar2 = thunk_FUN_037788cc(*unaff_x25);
      FUN_049ce6c0(lVar2,*unaff_x26);
      *plVar6 = lVar2;
      thunk_FUN_037aeb94(plVar6,lVar2);
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    plVar6 = *(long **)(in_stack_00000078 + 0x78);
    uVar3 = FUN_063683dc();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar2 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar7) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_063688a4;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar6,*plVar7,2);
LAB_063688a4:
    (*(code *)*puVar4)(plVar6,uVar3,puVar4[1]);
  }
  FUN_05d64e94(&stack0x00000030,*(undefined8 *)PTR_DAT_07db5660);
  lVar2 = in_stack_00000078;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    uVar3 = FUN_063683dc();
    if (lVar2 == 0) goto LAB_06368964;
    puVar4 = (undefined8 *)(lVar2 + 0x90);
    *puVar4 = uVar3;
    thunk_FUN_037aeb94(puVar4,uVar3);
  }
  lVar2 = in_stack_00000078;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    uVar3 = FUN_063683dc();
    if (lVar2 == 0) {
LAB_06368964:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    puVar4 = (undefined8 *)(lVar2 + 0x98);
    *puVar4 = uVar3;
    thunk_FUN_037aeb94(puVar4,uVar3);
  }
  return in_stack_00000078;
}


