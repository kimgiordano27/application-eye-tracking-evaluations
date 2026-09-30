/*
FUNCTION_NAME: FUN_02c4bc94
ENTRY_POINT: 02c4bc94
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4c0ec) */

void FUN_02c4bc94(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  
  if ((DAT_03a260f8 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03803f48);
    FUN_017fc350(PTR_DAT_037f4600);
    FUN_017fc350(PTR_DAT_037f3288);
    FUN_017fc350(PTR_DAT_0380c930);
    FUN_017fc350(PTR_DAT_0380c938);
    FUN_017fc350(PTR_DAT_0380c940);
    FUN_017fc350(PTR_DAT_037f3298);
    FUN_017fc350(PTR_DAT_0380c948);
    FUN_017fc350(PTR_DAT_0380c950);
    FUN_017fc350(PTR_DAT_0380c958);
    FUN_017fc350(PTR_DAT_0380c960);
    FUN_017fc350(PTR_DAT_0380c6a8);
    DAT_03a260f8 = 1;
  }
  plVar14 = (long *)(param_1 + 0x18);
  lVar13 = *plVar14;
  thunk_FUN_0181f594();
  plVar6 = (long *)PTR_DAT_0380c930;
  if (lVar13 == 0) {
    lVar13 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c950);
    FUN_02826010(lVar13,1,*(undefined8 *)PTR_DAT_0380c948);
    thunk_FUN_0181f594();
    *plVar14 = lVar13;
    thunk_FUN_0188fd20(plVar14,lVar13);
    plVar6 = (long *)PTR_DAT_0380c930;
  }
  PTR_DAT_0380c930 = (undefined *)plVar6;
  if (param_2 == (long *)0x0) {
LAB_02c4bdf0:
    plVar14 = (long *)thunk_FUN_01861ac0(param_2,*plVar6);
    if (plVar14 != (long *)0x0) {
      lVar10 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar6) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02c4be70;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0185dba8(plVar14,*plVar6,0);
LAB_02c4be70:
      plVar6 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
      puVar4 = PTR_DAT_0380c960;
      puVar3 = PTR_DAT_0380c940;
      puVar2 = PTR_DAT_037f3298;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      do {
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02c4bee8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0185dba8(plVar6,*(long *)puVar2,0);
LAB_02c4bee8:
        uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_02c4c008;
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_02c4bfb4;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_02c4bf9c;
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02c4bf44;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0185dba8(plVar6,*(long *)puVar3,0);
LAB_02c4bf44:
        uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        uVar7 = FUN_02afcf34(uVar7,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8(uVar7,uVar7);
        }
        FUN_02826708(lVar13,uVar7,*(undefined8 *)puVar4);
      } while( true );
    }
    lVar10 = thunk_FUN_01861ac0(param_2,*(undefined8 *)PTR_DAT_0380c938);
    if (lVar10 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar7 = thunk_FUN_01861bbc();
      uVar8 = thunk_FUN_01851c08(PTR_DAT_0380c968);
      uVar9 = thunk_FUN_01851c08(PTR_DAT_0380c970);
      FUN_02b3cc64(uVar7,uVar8,uVar9,0);
      uVar8 = thunk_FUN_01851c08(PTR_DAT_0380c978);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar7,uVar8);
    }
    if (lVar13 == 0) {
LAB_02c4c088:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_028267ec(lVar13,lVar10,*(undefined8 *)PTR_DAT_0380c958);
  }
  else {
    lVar10 = *param_2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_037f4600 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f4600)) {
      if (lVar10 != *(long *)PTR_DAT_03803f48) goto LAB_02c4bdf0;
    }
    else {
      param_2 = (long *)FUN_02afcf34(param_2,0);
    }
    if (lVar13 == 0) goto LAB_02c4c088;
    FUN_02826708(lVar13,param_2,*(undefined8 *)PTR_DAT_0380c960);
  }
LAB_02c4c04c:
  if (0 < *(int *)(lVar13 + 0x18)) {
    FUN_02c4c1b4(param_1);
    return;
  }
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02c4bf9c:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose;
    }
  }
LAB_02c4bfb4:
  puVar5 = (undefined8 *)FUN_0185dba8(plVar6,*(long *)PTR_DAT_037f3288,0);
OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_02c4c008:
  if (lVar13 == 0) goto LAB_02c4c088;
  goto LAB_02c4c04c;
}


