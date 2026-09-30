/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 06368830
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long OVRManager__GetEyeTrackedFoveatedRenderingSupported(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long *plVar6;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000040;
  long in_stack_00000078;
  
  do {
    thunk_FUN_037aeb94(param_1,param_2);
    if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    do {
      plVar6 = *(long **)(in_stack_00000078 + 0x78);
      uVar1 = FUN_063683dc();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_063687e8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0377596c(plVar6,*unaff_x27,2);
LAB_063687e8:
      (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
      uVar4 = FUN_05d64e98(&stack0x00000030,*unaff_x24);
      if ((uVar4 & 1) == 0) {
        FUN_05d64e94(&stack0x00000030,*(undefined8 *)PTR_DAT_07db5660);
        lVar3 = in_stack_00000078;
        if (*(long *)(unaff_x20 + 0x38) != 0) {
          uVar1 = FUN_063683dc();
          if (lVar3 == 0) goto LAB_06368964;
          puVar2 = (undefined8 *)(lVar3 + 0x90);
          *puVar2 = uVar1;
          thunk_FUN_037aeb94(puVar2,uVar1);
        }
        lVar3 = in_stack_00000078;
        if (*(long *)(unaff_x20 + 0x40) != 0) {
          uVar1 = FUN_063683dc();
          if (lVar3 == 0) {
LAB_06368964:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          puVar2 = (undefined8 *)(lVar3 + 0x98);
          *puVar2 = uVar1;
          thunk_FUN_037aeb94(puVar2,uVar1);
        }
        return in_stack_00000078;
      }
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      param_1 = (long *)(in_stack_00000078 + 0x78);
    } while (*param_1 != 0);
    param_2 = thunk_FUN_037788cc(*unaff_x25);
    FUN_049ce6c0(param_2,*unaff_x26);
    *param_1 = param_2;
  } while( true );
}


