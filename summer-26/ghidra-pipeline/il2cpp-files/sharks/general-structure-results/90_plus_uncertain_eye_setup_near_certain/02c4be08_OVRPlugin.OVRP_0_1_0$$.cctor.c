/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_0$$.cctor
ENTRY_POINT: 02c4be08
PROGRAM: sharks-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02c4c010) */
/* WARNING: Removing unreachable block (ram,0x02c4c08c) */
/* WARNING: Removing unreachable block (ram,0x02c4c028) */
/* WARNING: Removing unreachable block (ram,0x02c4c02c) */
/* WARNING: Removing unreachable block (ram,0x02c4c0ec) */

void OVRPlugin_OVRP_0_1_0___cctor(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  long *unaff_x23;
  
  lVar6 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02c4be70;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0185dba8(param_1,*unaff_x23,0);
LAB_02c4be70:
  plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
  puVar2 = PTR_DAT_0380c940;
  puVar1 = PTR_DAT_037f3298;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  do {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02c4bee8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)puVar1,0);
LAB_02c4bee8:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_02c4c008;
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_02c4bfb4;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02c4bf44;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)puVar2,0);
LAB_02c4bf44:
    uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    uVar5 = FUN_02afcf34(uVar5,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8(uVar5,uVar5);
    }
    FUN_02826708();
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose;
    }
  }
LAB_02c4bfb4:
  puVar3 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)PTR_DAT_037f3288,0);
OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_02c4c008:
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_02c4c1b4();
    return;
  }
  return;
}


