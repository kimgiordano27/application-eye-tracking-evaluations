/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 06080e70
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x06081338) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  int *in_x10;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  byte bVar15;
  float fVar16;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar17;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  long *in_stack_00000098;
  
  do {
    if (*(long *)(in_x10 + -2) == param_6) {
      puVar8 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_06080ea4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar8 = (undefined8 *)FUN_0367cd30();
LAB_06080ea4:
  in_stack_00000098 = (long *)(*(code *)*puVar8)();
  puVar7 = PTR_DAT_07a23020;
  puVar6 = PTR_DAT_07a23010;
  puVar5 = PTR_DAT_07a22348;
  puVar4 = PTR_DAT_07a208e0;
  puVar3 = PTR_DAT_079f49a8;
  fVar2 = DAT_01650e24;
  if (in_stack_00000098 != (long *)0x0) {
    bVar15 = 1;
LAB_06080f0c:
    do {
      plVar14 = in_stack_00000098;
      lVar10 = *in_stack_00000098;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06080f58;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_0367cd30(in_stack_00000098,*(long *)puVar3,0);
LAB_06080f58:
      uVar12 = (*(code *)*puVar8)(plVar14,puVar8[1]);
      plVar14 = in_stack_00000098;
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000098 == (long *)0x0) {
          return bVar15;
        }
        lVar10 = *in_stack_00000098;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_060812d4;
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_060812bc;
      }
      if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar10 = *in_stack_00000098;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06080fbc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_0367cd30(in_stack_00000098,*(long *)puVar6,0);
LAB_06080fbc:
      lVar10 = (*(code *)*puVar8)(plVar14,puVar8[1]);
      plVar14 = *(long **)(unaff_x19 + 0x28);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar11 = *plVar14;
      lVar9 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 9) * 0x10 + 0x138);
            goto LAB_06081024;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_0367cd30(plVar14,lVar9,9);
LAB_06081024:
      uVar12 = (*(code *)*puVar8)(plVar14,1,&stack0x00000078,puVar8[1]);
      if ((uVar12 & 1) != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        plVar14 = *(long **)(unaff_x19 + 0x28);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar11 = *plVar14;
        uVar1 = *(undefined4 *)(lVar10 + 0x14);
        lVar9 = *(long *)puVar4;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 9) * 0x10 + 0x138);
              goto LAB_0608109c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_0367cd30(plVar14,lVar9,9);
LAB_0608109c:
        uVar12 = (*(code *)*puVar8)(plVar14,uVar1,&stack0x00000048,puVar8[1]);
        if ((uVar12 & 1) != 0) {
          plVar14 = *(long **)(unaff_x19 + 0x70);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar9 = *plVar14;
          uVar1 = *(undefined4 *)(lVar10 + 0x14);
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_06081110;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)puVar5,1);
LAB_06081110:
          uVar12 = (*(code *)*puVar8)(plVar14,uVar1,&stack0x00000068,puVar8[1]);
          if ((uVar12 & 1) != 0) {
            uVar12 = CONCAT44(in_stack_00000088,uStack0000000000000084);
            fVar16 = (float)FUN_06081354();
            FUN_071af258(uStack0000000000000068,uStack000000000000006c,uStack0000000000000070,
                         uStack0000000000000074,&stack0x00000038,(long)&stack0x00000040 + 4,0);
            fStack0000000000000044 = fStack0000000000000044 * fVar2;
            fVar17 = fStack0000000000000044 *
                     ABS(param_4 * fStack0000000000000040 +
                         fVar16 * fStack0000000000000038 + (float)uVar12 * fStack000000000000003c);
            if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_056e03b4(fVar16,uVar12 & 0xffffffff,*(long *)(unaff_x19 + 0x60),lVar10,
                         *(undefined8 *)puVar7);
            bVar15 = bVar15 & (unaff_s8 - unaff_s10) * (unaff_s11 + unaff_s9) < fVar17;
            if (in_stack_00000098 == (long *)0x0) break;
            goto LAB_06080f0c;
          }
        }
      }
      bVar15 = 0;
    } while (in_stack_00000098 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_060812bc:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_060812f0;
    }
  }
LAB_060812d4:
  puVar8 = (undefined8 *)FUN_0367cd30(in_stack_00000098,*(long *)PTR_DAT_079f4598,0);
LAB_060812f0:
  (*(code *)*puVar8)(plVar14,puVar8[1]);
  return bVar15;
}


