/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_1$$ovrp_SetOverlayQuad2
ENTRY_POINT: 02c4be90
PROGRAM: sharks-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02c4c010) */
/* WARNING: Removing unreachable block (ram,0x02c4c08c) */
/* WARNING: Removing unreachable block (ram,0x02c4c028) */
/* WARNING: Removing unreachable block (ram,0x02c4c02c) */
/* WARNING: Removing unreachable block (ram,0x02c4c0ec) */

void OVRPlugin_OVRP_0_1_1__ovrp_SetOverlayQuad2(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar6;
  long unaff_x24;
  long *plVar7;
  
  plVar6 = *(long **)(unaff_x23 + 0x298);
  plVar7 = *(long **)(unaff_x24 + 0x940);
  do {
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar6) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02c4bee8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c4bee8:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_02c4c008;
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_02c4bfb4;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar7) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02c4bf44;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c4bf44:
    uVar2 = (*(code *)*puVar1)();
    uVar2 = FUN_02afcf34(uVar2,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8(uVar2,uVar2);
    }
    FUN_02826708();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose;
    }
  }
LAB_02c4bfb4:
  puVar1 = (undefined8 *)FUN_0185dba8();
OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose:
  (*(code *)*puVar1)();
LAB_02c4c008:
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (*(int *)(unaff_x21 + 0x18) < 1) {
    return;
  }
  FUN_02c4c1b4();
  return;
}


