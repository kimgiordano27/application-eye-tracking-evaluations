/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 02c0cc44
PROGRAM: sharks-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c0d0d4) */
/* WARNING: Removing unreachable block (ram,0x02c0d0d8) */

undefined8 OVRManager__OnApplicationPause(uint param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  int unaff_w19;
  long lVar15;
  long *unaff_x20;
  uint unaff_w21;
  uint uVar16;
  undefined8 unaff_x22;
  long *unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  long *unaff_x28;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  
  if ((param_1 & unaff_w21) != 0 || unaff_w19 != 0) {
    uVar4 = (**(code **)(*unaff_x24 + 0x6b8))();
    lVar5 = thunk_FUN_01861ac0(uVar4,*(undefined8 *)PTR_DAT_03804bc8);
    puVar3 = PTR_DAT_037f87b8;
    puVar2 = PTR_DAT_037f7340;
    if (lVar5 == 0) goto LAB_02c0d1d0;
    uVar11 = *(uint *)(lVar5 + 0x18);
    unaff_x22 = in_stack_00000030;
    unaff_x24 = in_stack_00000028;
    if (0 < (int)uVar11) {
      uVar16 = 0;
      lVar15 = 0;
      plVar9 = unaff_x20;
      do {
        if (uVar11 <= uVar16) goto LAB_02c0d1d4;
        plVar6 = *(long **)(lVar5 + (long)(int)uVar16 * 8 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_02c0d1d0;
        lVar12 = *plVar6;
        if (unaff_w26 == 0) {
          pcVar13 = *(code **)(lVar12 + 0x288);
          uVar4 = *(undefined8 *)(lVar12 + 0x290);
        }
        else {
          pcVar13 = *(code **)(lVar12 + 0x2b8);
          uVar4 = *(undefined8 *)(lVar12 + 0x2c0);
        }
        plVar6 = (long *)(*pcVar13)(plVar6,1,uVar4);
        uVar7 = FUN_02b0f554(plVar6,0,0);
        unaff_x20 = plVar9;
        if ((uVar7 & 1) == 0) {
          uVar4 = FUN_017fc3f4(*(undefined8 *)puVar2,in_stack_00000048._4_4_);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01843fdc(*(long *)puVar3);
          }
          if (plVar6 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
            if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03802908)) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc944(plVar6);
            }
          }
          uVar7 = FUN_02c070a0(plVar6,unaff_w25,3,uVar4);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = FUN_02b0f554(plVar9,0,0), unaff_x20 = plVar6, (uVar7 & 1) == 0)) {
            if (lVar15 == 0) {
              lVar15 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
              FUN_02709c80(lVar15,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
              if (lVar15 == 0) goto LAB_02c0d1d0;
              lVar12 = *(long *)(lVar15 + 0x10);
              lVar14 = *(long *)PTR_DAT_03803070;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_02c0d1d0;
              uVar11 = *(uint *)(lVar15 + 0x18);
              if (uVar11 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar11 + 1;
                plVar8 = (long *)(lVar12 + (long)(int)uVar11 * 8 + 0x20);
                *plVar8 = (long)plVar9;
                thunk_FUN_0188fd20(plVar8,plVar9);
              }
              else {
                FUN_0270a444(lVar15,plVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar12 = *(long *)(lVar15 + 0x10);
            lVar14 = *(long *)PTR_DAT_03803070;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_02c0d1d0;
            uVar11 = *(uint *)(lVar15 + 0x18);
            if (uVar11 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar11 + 1;
              plVar8 = (long *)(lVar12 + (long)(int)uVar11 * 8 + 0x20);
              *plVar8 = (long)plVar6;
              thunk_FUN_0188fd20(plVar8,plVar6);
              unaff_x20 = plVar9;
            }
            else {
              FUN_0270a444(lVar15,plVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              unaff_x20 = plVar9;
            }
          }
        }
        uVar11 = *(uint *)(lVar5 + 0x18);
        uVar16 = uVar16 + 1;
        plVar9 = unaff_x20;
      } while ((int)uVar16 < (int)uVar11);
      if (lVar15 != 0) {
        unaff_x28 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,
                                         *(undefined4 *)(lVar15 + 0x18));
        FUN_0270a8f8(lVar15,unaff_x28,*(undefined8 *)PTR_DAT_0380b0a0);
      }
    }
  }
  uVar7 = FUN_02b0f518(unaff_x20,0,0);
  if ((uVar7 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (unaff_x28 == (long *)0x0)) {
      if ((unaff_x20 == (long *)0x0) ||
         (lVar5 = (**(code **)(*unaff_x20 + 0x398))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x3a0)),
         lVar5 == 0)) goto LAB_02c0d1d0;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar5 + 0x18) == 0)) {
        uVar4 = (**(code **)(*unaff_x20 + 0x328))
                          (unaff_x20,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058
                          );
        return uVar4;
      }
    }
    if (unaff_x28 == (long *)0x0) {
      unaff_x28 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,1);
      if (unaff_x28 == (long *)0x0) goto LAB_02c0d1d0;
      if ((unaff_x20 != (long *)0x0) &&
         (lVar5 = thunk_FUN_01861ac0(unaff_x20,*(undefined8 *)(*unaff_x28 + 0x40)), lVar5 == 0)) {
        uVar4 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar4,0);
      }
      if ((int)unaff_x28[3] == 0) {
LAB_02c0d1d4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      unaff_x28[4] = (long)unaff_x20;
      thunk_FUN_0188fd20(unaff_x28 + 4,unaff_x20);
    }
    if (in_stack_00000058 == 0) {
      lVar15 = *(long *)PTR_DAT_037f4dc8;
      lVar5 = *(long *)(lVar15 + 0x38);
      if (lVar5 == 0) {
        FUN_0185db00(lVar15);
        lVar5 = *(long *)(lVar15 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar5 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      in_stack_00000058 = **(long **)(lVar5 + 0xb8);
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    plVar9 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                               (in_stack_00000018,unaff_w25,unaff_x28,&stack0x00000058,
                                in_stack_00000020);
    uVar7 = FUN_02b0f0b4(plVar9,0,0);
    if ((uVar7 & 1) == 0) {
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
        if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_037fc238))
        {
          uVar4 = (**(code **)(lVar5 + 0x328))
                            (plVar9,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058)
          ;
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(plVar9);
      }
LAB_02c0d1d0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
  }
  uVar4 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
  thunk_FUN_01851c08(PTR_DAT_037f87c8);
  uVar10 = thunk_FUN_01861bbc();
  FUN_02bd1250(uVar10,uVar4,unaff_x22,0);
  uVar4 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar10,uVar4);
}


