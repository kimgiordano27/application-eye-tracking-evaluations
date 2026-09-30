/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$BeginInvoke
ENTRY_POINT: 056eeecc
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x056ef3d8) */
/* WARNING: Removing unreachable block (ram,0x056ef49c) */
/* WARNING: Removing unreachable block (ram,0x056ef5b4) */
/* WARNING: Removing unreachable block (ram,0x056ef5c8) */

long OVR_OpenVR_IVRSystem__PollNextEventWithPose__BeginInvoke(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *in_x10;
  int *piVar17;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar18;
  long in_stack_00000008;
  
  uVar15 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *in_x10) {
        puVar7 = (undefined8 *)(param_1 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_056eef14;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_02eea86c();
LAB_056eef14:
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar5 = PTR_DAT_06d570a8;
  puVar4 = PTR_DAT_06d451c0;
  puVar3 = PTR_DAT_06d38820;
  puVar2 = PTR_DAT_06d02048;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  do {
    lVar13 = *plVar8;
    lVar12 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_056eef94;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_02eea86c(plVar8,lVar12,0);
LAB_056eef94:
    uVar15 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return unaff_x22;
      }
      lVar12 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 == 0) goto LAB_056ef4e0;
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      goto LAB_056ef4c8;
    }
    lVar12 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06d57080) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_056eeff8;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)PTR_DAT_06d57080,0);
LAB_056eeff8:
    plVar9 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    iVar6 = FUN_03a15e48(plVar9,*(undefined8 *)PTR_DAT_06d57058);
    if (iVar6 == 1) {
      uVar10 = FUN_03a1b5b4(plVar9,*(undefined8 *)PTR_DAT_06d57060);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar12 = *(long *)(unaff_x22 + 0x10);
      lVar13 = *(long *)puVar4;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(unaff_x22,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      lVar12 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d451d8);
      FUN_03fd0468(lVar12,*(undefined8 *)PTR_DAT_06d451d0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06d38818) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_056ef110;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)PTR_DAT_06d38818,0);
LAB_056ef110:
      plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
LAB_056ef124:
      lVar14 = *plVar9;
      lVar13 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_056ef170;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_02eea86c(plVar9,lVar13,0);
LAB_056ef170:
      uVar15 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      if ((uVar15 & 1) != 0) {
        lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
        FUN_056f0d24(lVar13,0);
        lVar14 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_056ef1e0;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar3,0);
LAB_056ef1e0:
        lVar14 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar18 = (long *)(lVar13 + 0x10);
        *plVar18 = lVar14;
        thunk_FUN_02f411dc(plVar18);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar18;
        if (*(int *)(lVar12 + 0x18) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06d37b68 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar15 = FUN_056efadc(lVar14,unaff_w21);
          if ((uVar15 & 1) != 0) break;
          goto LAB_056ef268;
        }
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(int *)(lVar13 + 0x18) == 0) {
          FUN_03fd0c9c(lVar12,lVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar12 + 0x18) = 1;
          *(long *)(lVar13 + 0x20) = lVar14;
          thunk_FUN_02f411dc((long *)(lVar13 + 0x20),lVar14);
        }
        goto LAB_056ef124;
      }
      if (plVar9 != (long *)0x0) {
        lVar13 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06d01f60) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_056ef3c0;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)PTR_DAT_06d01f60,0);
LAB_056ef3c0:
        (*(code *)*puVar7)(plVar9,puVar7[1]);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_03fd0ea8(in_stack_00000008,lVar12,*(undefined8 *)PTR_DAT_06d57088);
      unaff_x22 = in_stack_00000008;
    }
  } while( true );
  plVar11 = (long *)*plVar18;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar10 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
  uVar15 = thunk_FUN_05464b70(uVar10,*(undefined8 *)PTR_DAT_06d03e90,0);
  if ((uVar15 & 1) != 0) {
LAB_056ef268:
    uVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d43d40);
    FUN_0513bd28(uVar10,lVar13,*(undefined8 *)PTR_DAT_06d570a0,0);
    uVar15 = FUN_03a07d1c(lVar12,uVar10,*(undefined8 *)PTR_DAT_06d43d38);
    if ((uVar15 & 1) == 0) {
      lVar13 = *plVar18;
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = lVar13;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar12,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_056ef124;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_056ef4c8:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_056ef4fc;
    }
  }
LAB_056ef4e0:
  puVar7 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)PTR_DAT_06d01f60,0);
LAB_056ef4fc:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return unaff_x22;
}


