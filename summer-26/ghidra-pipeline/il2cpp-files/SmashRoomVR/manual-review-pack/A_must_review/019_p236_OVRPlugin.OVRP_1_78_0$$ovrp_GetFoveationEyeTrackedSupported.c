/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 031746fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 162
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  long in_x10;
  ulong in_x11;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar7;
  long *unaff_x22;
  long unaff_x23;
  
  while (unaff_x20 < in_x11) {
    FUN_03136f90(param_1 + in_x9 * unaff_x23 + 0x20,in_x10 + unaff_x20 * unaff_x23 + 0x20,
                 param_1 + unaff_x20 * unaff_x23 + 0x20,0);
    do {
      do {
        unaff_x20 = unaff_x20 + 1;
        if (unaff_x20 == 0x18) {
          *(undefined4 *)(unaff_x19 + 0x44) = 0;
          return;
        }
      } while ((*(uint *)(unaff_x19 + 0x44) >> (ulong)((uint)unaff_x20 & 0x1f) & 1) == 0);
      plVar7 = *(long **)(unaff_x19 + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_03174750;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_031746b8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*unaff_x22,0);
LAB_031746b8:
      puVar3 = (uint *)(*(code *)*puVar2)(plVar7,unaff_x20 & 0xffffffff,puVar2[1]);
      uVar1 = *puVar3;
      in_x9 = (ulong)uVar1;
    } while ((int)uVar1 < 0);
    param_1 = *(long *)(unaff_x19 + 0x18);
    if ((param_1 == 0) || (in_x10 = *(long *)(unaff_x19 + 0x10), in_x10 == 0)) {
LAB_03174750:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (((uint)*(ulong *)(param_1 + 0x18) <= uVar1) || (*(uint *)(in_x10 + 0x18) <= unaff_x20))
    break;
    in_x11 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


