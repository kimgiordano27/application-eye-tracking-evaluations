/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 051a01e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 170
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_10;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingSupported(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 *unaff_x22;
  
  plVar7 = *(long **)(param_1 + 0xd8);
  uVar2 = thunk_FUN_02cea894(*unaff_x22);
  FUN_047b3b70();
  puVar1 = PTR_DAT_06608520;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06608520) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto OVRManager__get_eyeTrackedFoveatedRenderingEnabled;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_06608520,0);
OVRManager__get_eyeTrackedFoveatedRenderingEnabled:
    (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
      uVar2 = thunk_FUN_02cea894(*unaff_x22);
      FUN_047b3b70();
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_051a0304;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar1,0);
LAB_051a0304:
        (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_050e7a24(*(long *)(unaff_x19 + 0x28),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


