/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 02c0c9a8
PROGRAM: sharks-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetAppSpacePosition(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  uint unaff_w21;
  uint uVar17;
  ulong uVar18;
  uint unaff_w25;
  int unaff_w26;
  undefined8 unaff_x27;
  long *plVar19;
  uint uStack000000000000000c;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  
  puVar3 = PTR_DAT_037f87b8;
  puVar2 = PTR_DAT_037f7340;
  if (param_1 == 0) goto LAB_02c0d1d0;
  uStack000000000000000c = unaff_w21;
  if ((int)*(ulong *)(param_1 + 0x18) < 1) {
    plVar8 = (long *)0x0;
LAB_02c0cc20:
    plVar7 = (long *)0x0;
  }
  else {
    lVar14 = 0;
    uVar18 = 0;
    uVar10 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    plVar7 = (long *)0x0;
    do {
      if (uVar10 <= uVar18) goto LAB_02c0d1d4;
      plVar19 = *(long **)(param_1 + 0x20 + uVar18 * 8);
      uVar5 = FUN_017fc3f4(*(undefined8 *)puVar2,in_stack_00000048._4_4_);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*(long *)puVar3);
      }
      if (plVar19 != (long *)0x0) {
                    /* catch() { ... } // from try @ 02c0c958 with catch @ 02c0ca24
                       catch() { ... } // from try @ 02c0ca14 with catch @ 02c0ca24 */
                    /* try { // try from 02c0ca28 to 02d0ca2b has its CatchHandler @ 02c0ca34 */
                    /* try { // try from 02c0ca2c to 02d0ca37 has its CatchHandler @ 02c0c8d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c0ca28 with catch @ 02c0ca34
                        */
        bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_03802908)) goto LAB_02c0d1d8;
      }
      uVar10 = FUN_02c070a0(plVar19,unaff_w25,3,uVar5);
      plVar8 = plVar7;
      if (((uVar10 & 1) != 0) &&
         (uVar10 = FUN_02b0f554(plVar7,0,0), plVar8 = plVar19, (uVar10 & 1) == 0)) {
        if (lVar14 == 0) {
          lVar14 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
          FUN_02709c80(lVar14,*(undefined4 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
          if (lVar14 == 0) goto LAB_02c0d1d0;
          lVar15 = *(long *)(lVar14 + 0x10);
          lVar11 = *(long *)PTR_DAT_03803070;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_02c0d1d0;
          uVar4 = *(uint *)(lVar14 + 0x18);
          if (uVar4 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar4 + 1;
            plVar8 = (long *)(lVar15 + (long)(int)uVar4 * 8 + 0x20);
            *plVar8 = (long)plVar7;
            thunk_FUN_0188fd20(plVar8,plVar7);
          }
          else {
            FUN_0270a444(lVar14,plVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar11 = *(long *)PTR_DAT_03803070;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_02c0d1d0;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          puVar6 = (undefined8 *)(lVar15 + (long)(int)uVar4 * 8 + 0x20);
          *puVar6 = plVar19;
          thunk_FUN_0188fd20(puVar6,plVar19);
          plVar8 = plVar7;
        }
        else {
          FUN_0270a444(lVar14,plVar19,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          plVar8 = plVar7;
        }
      }
      uVar10 = (ulong)*(uint *)(param_1 + 0x18);
      uVar18 = uVar18 + 1;
      plVar7 = plVar8;
    } while ((long)uVar18 < (long)(int)*(uint *)(param_1 + 0x18));
    if (lVar14 == 0) goto LAB_02c0cc20;
    plVar7 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,*(undefined4 *)(lVar14 + 0x18));
    FUN_0270a8f8(lVar14,plVar7,*(undefined8 *)PTR_DAT_0380b0a0);
  }
  uVar4 = FUN_02b0f554(plVar8,0,0);
  if ((uVar4 & uStack000000000000000c) != 0 || (unaff_w25 >> 0xd & 1) != 0) {
    uVar5 = (**(code **)(*in_stack_00000028 + 0x6b8))
                      (in_stack_00000028,in_stack_00000030,0x10,unaff_w25,
                       *(undefined8 *)(*in_stack_00000028 + 0x6c0));
    lVar14 = thunk_FUN_01861ac0(uVar5,*(undefined8 *)PTR_DAT_03804bc8);
    puVar3 = PTR_DAT_037f87b8;
    puVar2 = PTR_DAT_037f7340;
    if (lVar14 == 0) goto LAB_02c0d1d0;
    uVar4 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar4) {
      uVar17 = 0;
      lVar15 = 0;
      plVar16 = plVar8;
      do {
        if (uVar4 <= uVar17) goto LAB_02c0d1d4;
        plVar8 = *(long **)(lVar14 + (long)(int)uVar17 * 8 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_02c0d1d0;
        lVar11 = *plVar8;
        if (unaff_w26 == 0) {
          pcVar12 = *(code **)(lVar11 + 0x288);
          uVar5 = *(undefined8 *)(lVar11 + 0x290);
        }
        else {
          pcVar12 = *(code **)(lVar11 + 0x2b8);
          uVar5 = *(undefined8 *)(lVar11 + 0x2c0);
        }
        plVar19 = (long *)(*pcVar12)(plVar8,1,uVar5);
        uVar18 = FUN_02b0f554(plVar19,0,0);
        plVar8 = plVar16;
        if ((uVar18 & 1) == 0) {
          uVar5 = FUN_017fc3f4(*(undefined8 *)puVar2,in_stack_00000048._4_4_);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01843fdc(*(long *)puVar3);
          }
          if (plVar19 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03802908)) {
LAB_02c0d1d8:
                    /* WARNING: Subroutine does not return */
              FUN_017fc944(plVar19);
            }
          }
          uVar18 = FUN_02c070a0(plVar19,unaff_w25,3,uVar5);
          if (((uVar18 & 1) != 0) &&
             (uVar18 = FUN_02b0f554(plVar16,0,0), plVar8 = plVar19, (uVar18 & 1) == 0)) {
            if (lVar15 == 0) {
              lVar15 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
              FUN_02709c80(lVar15,*(undefined4 *)(lVar14 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
              if (lVar15 == 0) goto LAB_02c0d1d0;
              lVar11 = *(long *)(lVar15 + 0x10);
              lVar13 = *(long *)PTR_DAT_03803070;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_02c0d1d0;
              uVar4 = *(uint *)(lVar15 + 0x18);
              if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar4 + 1;
                plVar8 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
                *plVar8 = (long)plVar16;
                thunk_FUN_0188fd20(plVar8,plVar16);
              }
              else {
                FUN_0270a444(lVar15,plVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar11 = *(long *)(lVar15 + 0x10);
            lVar13 = *(long *)PTR_DAT_03803070;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_02c0d1d0;
            uVar4 = *(uint *)(lVar15 + 0x18);
            if (uVar4 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar4 + 1;
              plVar8 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
              *plVar8 = (long)plVar19;
              thunk_FUN_0188fd20(plVar8,plVar19);
              plVar8 = plVar16;
            }
            else {
              FUN_0270a444(lVar15,plVar19,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              plVar8 = plVar16;
            }
          }
        }
        uVar4 = *(uint *)(lVar14 + 0x18);
        uVar17 = uVar17 + 1;
        plVar16 = plVar8;
      } while ((int)uVar17 < (int)uVar4);
      if (lVar15 != 0) {
        plVar7 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,*(undefined4 *)(lVar15 + 0x18)
                                     );
        FUN_0270a8f8(lVar15,plVar7,*(undefined8 *)PTR_DAT_0380b0a0);
      }
    }
  }
  uVar18 = FUN_02b0f518(plVar8,0,0);
  if ((uVar18 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar7 == (long *)0x0)) {
      if ((plVar8 == (long *)0x0) ||
         (lVar14 = (**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0)),
         lVar14 == 0)) goto LAB_02c0d1d0;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar14 + 0x18) == 0)) {
        uVar5 = (**(code **)(*plVar8 + 0x328))
                          (plVar8,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                           unaff_x27,*(undefined8 *)(*plVar8 + 0x330));
        return uVar5;
      }
    }
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,1);
      if (plVar7 == (long *)0x0) goto LAB_02c0d1d0;
      if ((plVar8 != (long *)0x0) &&
         (lVar14 = thunk_FUN_01861ac0(plVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0)) {
        uVar5 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar5,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_02c0d1d4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      plVar7[4] = (long)plVar8;
      thunk_FUN_0188fd20(plVar7 + 4,plVar8);
    }
    if (in_stack_00000058 == 0) {
      lVar15 = *(long *)PTR_DAT_037f4dc8;
      lVar14 = *(long *)(lVar15 + 0x38);
      if (lVar14 == 0) {
        FUN_0185db00(lVar15);
        lVar14 = *(long *)(lVar15 + 0x38);
      }
      lVar14 = *(long *)(lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_0185daa4();
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_0185daa4();
      }
      in_stack_00000058 = **(long **)(lVar14 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    plVar8 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                               (in_stack_00000018,unaff_w25,plVar7,&stack0x00000058,
                                in_stack_00000020,unaff_x27,in_stack_00000038,&stack0x00000050);
    uVar18 = FUN_02b0f0b4(plVar8,0,0);
    if ((uVar18 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
LAB_02c0d1d0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar14 = *plVar8;
      bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
      if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037fc238))
      {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(plVar8);
      }
      uVar5 = (**(code **)(lVar14 + 0x328))
                        (plVar8,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                         unaff_x27,*(undefined8 *)(lVar14 + 0x330));
      if (in_stack_00000050 != 0) {
        if (in_stack_00000018 == (long *)0x0) goto LAB_02c0d1d0;
        (**(code **)(*in_stack_00000018 + 0x1a8))
                  (in_stack_00000018,&stack0x00000058,in_stack_00000050,
                   *(undefined8 *)(*in_stack_00000018 + 0x1b0));
      }
      return uVar5;
    }
  }
  uVar5 = (**(code **)(*in_stack_00000028 + 0x2c8))
                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
  thunk_FUN_01851c08(PTR_DAT_037f87c8);
  uVar9 = thunk_FUN_01861bbc();
  FUN_02bd1250(uVar9,uVar5,in_stack_00000030,0);
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar9,uVar5);
}


