/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_0$$ovrp_GetEyeTextureSize
ENTRY_POINT: 02c4bd8c
PROGRAM: sharks-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02c4c0ec) */

void OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  FUN_02826010();
  thunk_FUN_0181f594();
  *unaff_x22 = unaff_x21;
  thunk_FUN_0188fd20();
  puVar2 = PTR_DAT_0380c930;
  if (unaff_x20 == (long *)0x0) {
LAB_02c4bdf0:
    plVar4 = (long *)thunk_FUN_01861ac0();
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02c4be70;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)puVar2,0);
LAB_02c4be70:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      puVar3 = PTR_DAT_0380c940;
      puVar2 = PTR_DAT_037f3298;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      do {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02c4bee8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)puVar2,0);
LAB_02c4bee8:
        uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_02c4c008;
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_02c4bfb4;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_02c4bf9c;
        }
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02c4bf44;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)puVar3,0);
LAB_02c4bf44:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar6 = FUN_02afcf34(uVar6,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8(uVar6,uVar6);
        }
        FUN_02826708();
      } while( true );
    }
    lVar9 = thunk_FUN_01861ac0();
    if (lVar9 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar6 = thunk_FUN_01861bbc();
      uVar7 = thunk_FUN_01851c08(PTR_DAT_0380c968);
      uVar8 = thunk_FUN_01851c08(PTR_DAT_0380c970);
      FUN_02b3cc64(uVar6,uVar7,uVar8,0);
      uVar7 = thunk_FUN_01851c08(PTR_DAT_0380c978);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar6,uVar7);
    }
    if (unaff_x21 == 0) {
LAB_02c4c088:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_028267ec();
  }
  else {
    lVar9 = *unaff_x20;
    bVar1 = *(byte *)(*(long *)PTR_DAT_037f4600 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f4600)) {
      if (lVar9 != *(long *)PTR_DAT_03803f48) goto LAB_02c4bdf0;
    }
    else {
      FUN_02afcf34();
    }
    if (unaff_x21 == 0) goto LAB_02c4c088;
    FUN_02826708();
  }
LAB_02c4c04c:
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_02c4c1b4();
    return;
  }
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_02c4bf9c:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose;
    }
  }
LAB_02c4bfb4:
  puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)PTR_DAT_037f3288,0);
OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_02c4c008:
  if (unaff_x21 == 0) goto LAB_02c4c088;
  goto LAB_02c4c04c;
}


