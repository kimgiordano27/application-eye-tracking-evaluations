/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 033ba078
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w23;
  long *plVar11;
  int unaff_w28;
  uint unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while ((int)unaff_w29 <= unaff_w23) {
    uVar2 = unaff_w29 * 2;
    if ((int)uVar2 < unaff_w21) {
      if (*unaff_x19 == 0) goto LAB_033ba0ec;
      plVar11 = (long *)unaff_x19[2];
      uVar5 = FUN_033aae5c(*unaff_x19,uVar2 + in_stack_00000008._4_4_ + -1);
      if ((*unaff_x19 == 0) ||
         (uVar6 = FUN_033aae5c(*unaff_x19,uVar2 + in_stack_00000008._4_4_), plVar11 == (long *)0x0))
      goto LAB_033ba0ec;
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x20) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033b9f90;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01dde8fc(plVar11,*unaff_x20,0);
LAB_033b9f90:
      uVar3 = (*(code *)*puVar7)(plVar11,uVar5,uVar6,puVar7[1]);
      uVar2 = uVar2 | uVar3 >> 0x1f;
    }
    if (*unaff_x19 == 0) goto LAB_033ba0ec;
    plVar11 = (long *)unaff_x19[2];
    iVar1 = unaff_w28 + uVar2;
    FUN_033aae5c(*unaff_x19,iVar1);
    if (plVar11 == (long *)0x0) goto LAB_033ba0ec;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x20) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033ba014;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01dde8fc(plVar11,*unaff_x20,0);
LAB_033ba014:
    iVar4 = (*(code *)*puVar7)(plVar11);
    if (-1 < iVar4) break;
    lVar8 = *unaff_x19;
    if (lVar8 == 0) goto LAB_033ba0ec;
    uVar5 = FUN_033aae5c(lVar8,iVar1);
    iVar4 = unaff_w28 + unaff_w29;
    FUN_033b49e8(lVar8,uVar5,iVar4);
    lVar8 = unaff_x19[1];
    unaff_w29 = uVar2;
    if (lVar8 != 0) {
      uVar5 = FUN_033aae5c(lVar8,iVar1);
      FUN_033b49e8(lVar8,uVar5,iVar4);
    }
  }
  if (*unaff_x19 != 0) {
    FUN_033b49e8();
    if (unaff_x19[1] == 0) {
      return;
    }
    FUN_033b49e8(unaff_x19[1],in_stack_00000000,unaff_w28 + unaff_w29);
    return;
  }
LAB_033ba0ec:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


