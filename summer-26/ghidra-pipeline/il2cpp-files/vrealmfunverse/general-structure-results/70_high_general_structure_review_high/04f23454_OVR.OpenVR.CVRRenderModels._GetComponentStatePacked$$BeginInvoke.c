/*
FUNCTION_NAME: OVR.OpenVR.CVRRenderModels._GetComponentStatePacked$$BeginInvoke
ENTRY_POINT: 04f23454
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04f2388c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVR_OpenVR_CVRRenderModels__GetComponentStatePacked__BeginInvoke
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  long *in_stack_00000088;
  
  in_stack_00000088 = (long *)(*(code *)*param_4)();
  puVar6 = System_Collections_Generic_Dictionary<Bounds,_ProbeBrickIndex_Brick[]>_TypeInfo;
  puVar5 = System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TypeInfo;
  puVar4 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo;
  puVar3 = System_Runtime_Remoting_IRemotingTypeInfo_var;
  puVar2 = PTR_DAT_06312f90;
  if (in_stack_00000088 != (long *)0x0) {
    bVar14 = 1;
LAB_04f234b4:
    do {
      plVar13 = in_stack_00000088;
      lVar9 = *in_stack_00000088;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04f23500;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c(in_stack_00000088,*(long *)puVar2,0);
LAB_04f23500:
      uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      plVar13 = in_stack_00000088;
      if ((uVar11 & 1) == 0) {
        if (in_stack_00000088 == (long *)0x0) {
          return bVar14;
        }
        lVar9 = *in_stack_00000088;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_04f23830;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_04f23818;
      }
      if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *in_stack_00000088;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04f23564;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c(in_stack_00000088,*(long *)puVar5,0);
LAB_04f23564:
      lVar9 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      plVar13 = *(long **)(unaff_x19 + 0x28);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *plVar13;
      lVar8 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_04f235cc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c(plVar13,lVar8,9);
LAB_04f235cc:
      uVar11 = (*(code *)*puVar7)(plVar13,1,&stack0x00000068,puVar7[1]);
      if ((uVar11 & 1) != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        plVar13 = *(long **)(unaff_x19 + 0x28);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar10 = *plVar13;
        uVar1 = *(undefined4 *)(lVar9 + 0x14);
        lVar8 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_04f23644;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02b7654c(plVar13,lVar8,9);
LAB_04f23644:
        uVar11 = (*(code *)*puVar7)(plVar13,uVar1,&stack0x00000038,puVar7[1]);
        if ((uVar11 & 1) != 0) {
          plVar13 = *(long **)(unaff_x19 + 0x38);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar8 = *plVar13;
          uVar1 = *(undefined4 *)(lVar9 + 0x14);
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04f236b4;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar4,0);
LAB_04f236b4:
          uVar11 = (*(code *)*puVar7)(plVar13,uVar1,&stack0x00000058,puVar7[1]);
          if ((uVar11 & 1) != 0) {
            fVar16 = fStack0000000000000074;
            fVar15 = (float)FUN_04f238a8();
            fVar15 = fVar15 * fStack0000000000000058;
            fVar16 = fVar16 * fStack000000000000005c;
            fVar17 = param_3 * in_stack_00000060;
            if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            FUN_045a7348(*(long *)(unaff_x19 + 0x78),lVar9,*(undefined8 *)puVar6);
            bVar14 = bVar14 & (unaff_s8 - unaff_s10) * (unaff_s11 + unaff_s9) <
                              fVar17 + fVar15 + fVar16;
            if (in_stack_00000088 == (long *)0x0) break;
            goto LAB_04f234b4;
          }
        }
      }
      bVar14 = 0;
    } while (in_stack_00000088 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_04f23818:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_04f2384c;
    }
  }
LAB_04f23830:
  puVar7 = (undefined8 *)FUN_02b7654c(in_stack_00000088,*(long *)PTR_DAT_06312f78,0);
LAB_04f2384c:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return bVar14;
}


