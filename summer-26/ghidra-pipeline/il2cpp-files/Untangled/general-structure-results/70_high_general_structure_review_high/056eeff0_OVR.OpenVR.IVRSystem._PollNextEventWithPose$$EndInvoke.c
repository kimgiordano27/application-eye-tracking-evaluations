/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 056eeff0
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x056ef5c8) */
/* WARNING: Removing unreachable block (ram,0x056ef3d8) */
/* WARNING: Removing unreachable block (ram,0x056ef49c) */
/* WARNING: Removing unreachable block (ram,0x056ef5b4) */

long OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long in_x9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar13;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
code_r0x056eeff0:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
    plVar4 = (long *)(*(code *)*puVar3)();
    iVar2 = FUN_03a15e48(plVar4,*(undefined8 *)PTR_DAT_06d57058);
    if (iVar2 == 1) {
      uVar5 = FUN_03a1b5b4(plVar4,*(undefined8 *)PTR_DAT_06d57060);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar7 = *(long *)(unaff_x22 + 0x10);
      lVar10 = *unaff_x28;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(unaff_x22,uVar5,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d451d8);
      FUN_03fd0468(lVar7,*(undefined8 *)PTR_DAT_06d451d0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar10 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06d38818) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_056ef110;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d38818,0);
LAB_056ef110:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
LAB_056ef124:
      lVar10 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_056ef170;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*unaff_x27,0);
LAB_056ef170:
      uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar9 & 1) != 0) {
        lVar10 = thunk_FUN_02ef1808(*unaff_x19);
        FUN_056f0d24(lVar10,0);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_056ef1e0;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*unaff_x29,0);
LAB_056ef1e0:
        lVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar13 = (long *)(lVar10 + 0x10);
        *plVar13 = lVar8;
        thunk_FUN_02f411dc(plVar13);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar8 = *plVar13;
        if (*(int *)(lVar7 + 0x18) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06d37b68 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar9 = FUN_056efadc(lVar8,unaff_w21);
          if ((uVar9 & 1) != 0) break;
          goto LAB_056ef268;
        }
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar11 = *unaff_x28;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
          FUN_03fd0c9c(lVar7,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar7 + 0x18) = 1;
          *(long *)(lVar10 + 0x20) = lVar8;
          thunk_FUN_02f411dc((long *)(lVar10 + 0x20),lVar8);
        }
        goto LAB_056ef124;
      }
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06d01f60) {
              puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_056ef3c0;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d01f60,0);
LAB_056ef3c0:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_03fd0ea8(in_stack_00000008,lVar7,*(undefined8 *)PTR_DAT_06d57088);
      unaff_x22 = in_stack_00000008;
    }
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_056eef94;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c();
LAB_056eef94:
    uVar9 = (*(code *)*puVar3)();
    if ((uVar9 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return unaff_x22;
      }
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_056ef4e0;
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_056ef4c8;
    }
    param_1 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06d57080) {
          in_x9 = (long)*piVar12;
          goto code_r0x056eeff0;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c();
  } while( true );
  plVar6 = (long *)*plVar13;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar5 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  uVar9 = thunk_FUN_05464b70(uVar5,*(undefined8 *)PTR_DAT_06d03e90,0);
  if ((uVar9 & 1) != 0) {
LAB_056ef268:
    uVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d43d40);
    FUN_0513bd28(uVar5,lVar10,*(undefined8 *)PTR_DAT_06d570a0,0);
    uVar9 = FUN_03a07d1c(lVar7,uVar5,*(undefined8 *)PTR_DAT_06d43d38);
    if ((uVar9 & 1) == 0) {
      lVar10 = *plVar13;
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar11 = *unaff_x28;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar10;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar7,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  goto LAB_056ef124;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar12 = piVar12 + 4;
    if (uVar9 == 0) break;
LAB_056ef4c8:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_056ef4fc;
    }
  }
LAB_056ef4e0:
  puVar3 = (undefined8 *)FUN_02eea86c();
LAB_056ef4fc:
  (*(code *)*puVar3)();
  return unaff_x22;
}


