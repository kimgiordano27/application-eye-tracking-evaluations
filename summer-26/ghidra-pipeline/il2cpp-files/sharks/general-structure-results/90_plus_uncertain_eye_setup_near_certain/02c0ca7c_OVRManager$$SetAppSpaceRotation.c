/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 02c0ca7c
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


undefined8 OVRManager__SetAppSpaceRotation(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long unaff_x19;
  long lVar14;
  long *unaff_x20;
  long *plVar15;
  uint uVar16;
  long unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  
  do {
    uVar5 = FUN_02b0f554(param_1,param_2,param_3);
    param_1 = unaff_x28;
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == 0) {
        unaff_x19 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
        FUN_02709c80(unaff_x19,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
        if (unaff_x19 == 0) goto LAB_02c0d1d0;
        lVar8 = *(long *)(unaff_x19 + 0x10);
        lVar14 = *(long *)PTR_DAT_03803070;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_02c0d1d0;
        uVar4 = *(uint *)(unaff_x19 + 0x18);
        if (uVar4 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar4 + 1;
          plVar6 = (long *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
          *plVar6 = (long)unaff_x20;
                    /* try { // try from 02c0cb00 to 02d0cb5f has its CatchHandler @ 02c0cb00
                       catch() { ... } // from try @ 02c0cb00 with catch @ 02c0cb00
                       catch() { ... } // from try @ 02c0cb64 with catch @ 02c0cb00
                       catch() { ... } // from try @ 02c0cb8c with catch @ 02c0cb00
                       catch() { ... } // from try @ 02c0cbd0 with catch @ 02c0cb00
                       catch() { ... } // from try @ 02c0cc00 with catch @ 02c0cb00
                       catch() { ... } // from try @ 02c0cc34 with catch @ 02c0cb00
                       catch() { ... } // from try @ 02c0ccf0 with catch @ 02c0cb00 */
          thunk_FUN_0188fd20(plVar6,unaff_x20);
        }
        else {
          FUN_0270a444(unaff_x19,unaff_x20,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar8 = *(long *)(unaff_x19 + 0x10);
      lVar14 = *(long *)PTR_DAT_03803070;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_02c0d1d0;
      uVar4 = *(uint *)(unaff_x19 + 0x18);
      param_1 = unaff_x20;
      if (uVar4 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar4 + 1;
        plVar6 = (long *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
        *plVar6 = (long)unaff_x28;
        thunk_FUN_0188fd20(plVar6,unaff_x28);
      }
      else {
        FUN_0270a444(unaff_x19,unaff_x28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    do {
      unaff_x23 = unaff_x23 + 1;
      if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x23) {
        if (unaff_x19 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,
                                        *(undefined4 *)(unaff_x19 + 0x18));
          FUN_0270a8f8(unaff_x19,plVar6,*(undefined8 *)PTR_DAT_0380b0a0);
        }
        uVar4 = FUN_02b0f554(param_1,0,0);
        if ((uVar4 & in_stack_00000008._4_4_) == 0 && (unaff_w25 >> 0xd & 1) == 0)
        goto LAB_02c0cef0;
        uVar7 = (**(code **)(*in_stack_00000028 + 0x6b8))
                          (in_stack_00000028,in_stack_00000030,0x10,unaff_w25,
                           *(undefined8 *)(*in_stack_00000028 + 0x6c0));
        lVar8 = thunk_FUN_01861ac0(uVar7,*(undefined8 *)PTR_DAT_03804bc8);
        puVar3 = PTR_DAT_037f87b8;
        puVar2 = PTR_DAT_037f7340;
        if (lVar8 == 0) goto LAB_02c0d1d0;
        uVar4 = *(uint *)(lVar8 + 0x18);
        if ((int)uVar4 < 1) goto LAB_02c0cef0;
        uVar16 = 0;
        lVar14 = 0;
        plVar15 = param_1;
        goto LAB_02c0ccb0;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x23) goto LAB_02c0d1d4;
      unaff_x28 = *(long **)(unaff_x21 + unaff_x23 * 8);
      uVar7 = FUN_017fc3f4(*unaff_x22,in_stack_00000048._4_4_);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*unaff_x27);
      }
      if (unaff_x28 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
        if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_03802908)) goto LAB_02c0d1d8;
      }
      uVar5 = FUN_02c070a0(unaff_x28,unaff_w25,3,uVar7);
    } while ((uVar5 & 1) == 0);
    param_2 = 0;
    param_3 = 0;
    unaff_x20 = param_1;
  } while( true );
LAB_02c0ccb0:
  do {
    if (uVar4 <= uVar16) goto LAB_02c0d1d4;
    plVar9 = *(long **)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
    if (plVar9 == (long *)0x0) goto LAB_02c0d1d0;
    lVar11 = *plVar9;
    if (unaff_w26 == 0) {
      pcVar12 = *(code **)(lVar11 + 0x288);
      uVar7 = *(undefined8 *)(lVar11 + 0x290);
    }
    else {
      pcVar12 = *(code **)(lVar11 + 0x2b8);
      uVar7 = *(undefined8 *)(lVar11 + 0x2c0);
    }
    unaff_x28 = (long *)(*pcVar12)(plVar9,1,uVar7);
    uVar5 = FUN_02b0f554(unaff_x28,0,0);
    param_1 = plVar15;
    if ((uVar5 & 1) == 0) {
      uVar7 = FUN_017fc3f4(*(undefined8 *)puVar2,in_stack_00000048._4_4_);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*(long *)puVar3);
      }
      if (unaff_x28 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
        if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_03802908)) {
LAB_02c0d1d8:
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(unaff_x28);
        }
      }
      uVar5 = FUN_02c070a0(unaff_x28,unaff_w25,3,uVar7);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = FUN_02b0f554(plVar15,0,0), param_1 = unaff_x28, (uVar5 & 1) == 0)) {
        if (lVar14 == 0) {
          lVar14 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
          FUN_02709c80(lVar14,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
          if (lVar14 == 0) goto LAB_02c0d1d0;
          lVar11 = *(long *)(lVar14 + 0x10);
          lVar13 = *(long *)PTR_DAT_03803070;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_02c0d1d0;
          uVar4 = *(uint *)(lVar14 + 0x18);
          if (uVar4 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar4 + 1;
            plVar9 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
            *plVar9 = (long)plVar15;
            thunk_FUN_0188fd20(plVar9,plVar15);
          }
          else {
            FUN_0270a444(lVar14,plVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar11 = *(long *)(lVar14 + 0x10);
        lVar13 = *(long *)PTR_DAT_03803070;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_02c0d1d0;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          plVar9 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
          *plVar9 = (long)unaff_x28;
          thunk_FUN_0188fd20(plVar9,unaff_x28);
          param_1 = plVar15;
        }
        else {
          FUN_0270a444(lVar14,unaff_x28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          param_1 = plVar15;
        }
      }
    }
    uVar4 = *(uint *)(lVar8 + 0x18);
    uVar16 = uVar16 + 1;
    plVar15 = param_1;
  } while ((int)uVar16 < (int)uVar4);
  if (lVar14 != 0) {
    plVar6 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,*(undefined4 *)(lVar14 + 0x18));
    FUN_0270a8f8(lVar14,plVar6,*(undefined8 *)PTR_DAT_0380b0a0);
  }
LAB_02c0cef0:
  uVar5 = FUN_02b0f518(param_1,0,0);
  if ((uVar5 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar6 == (long *)0x0)) {
      if ((param_1 == (long *)0x0) ||
         (lVar8 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0)),
         lVar8 == 0)) goto LAB_02c0d1d0;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar8 + 0x18) == 0)) {
        uVar7 = (**(code **)(*param_1 + 0x328))
                          (param_1,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                           in_stack_00000010,*(undefined8 *)(*param_1 + 0x330));
        return uVar7;
      }
    }
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,1);
      if (plVar6 == (long *)0x0) goto LAB_02c0d1d0;
      if ((param_1 != (long *)0x0) &&
         (lVar8 = thunk_FUN_01861ac0(param_1,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar7 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar7,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_02c0d1d4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      plVar6[4] = (long)param_1;
      thunk_FUN_0188fd20(plVar6 + 4,param_1);
    }
    if (in_stack_00000058 == 0) {
      lVar14 = *(long *)PTR_DAT_037f4dc8;
      lVar8 = *(long *)(lVar14 + 0x38);
      if (lVar8 == 0) {
        FUN_0185db00(lVar14);
        lVar8 = *(long *)(lVar14 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0185daa4();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0185daa4();
      }
      in_stack_00000058 = **(long **)(lVar8 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    plVar6 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                               (in_stack_00000018,unaff_w25,plVar6,&stack0x00000058,
                                in_stack_00000020,in_stack_00000010,in_stack_00000038,
                                &stack0x00000050);
    uVar5 = FUN_02b0f0b4(plVar6,0,0);
    if ((uVar5 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
LAB_02c0d1d0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar8 = *plVar6;
      bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037fc238)) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(plVar6);
      }
      uVar7 = (**(code **)(lVar8 + 0x328))
                        (plVar6,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                         in_stack_00000010,*(undefined8 *)(lVar8 + 0x330));
      if (in_stack_00000050 != 0) {
        if (in_stack_00000018 == (long *)0x0) goto LAB_02c0d1d0;
        (**(code **)(*in_stack_00000018 + 0x1a8))
                  (in_stack_00000018,&stack0x00000058,in_stack_00000050,
                   *(undefined8 *)(*in_stack_00000018 + 0x1b0));
      }
      return uVar7;
    }
  }
  uVar7 = (**(code **)(*in_stack_00000028 + 0x2c8))
                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
  thunk_FUN_01851c08(PTR_DAT_037f87c8);
  uVar10 = thunk_FUN_01861bbc();
  FUN_02bd1250(uVar10,uVar7,in_stack_00000030,0);
  uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar10,uVar7);
}


