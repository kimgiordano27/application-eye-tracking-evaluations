/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 02c0cb58
PROGRAM: sharks-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__FixedUpdate(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int in_w9;
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
    *(int *)(unaff_x19 + 0x18) = in_w9;
    *(undefined8 *)(param_1 + 0x20) = unaff_x28;
                    /* try { // try from 02c0cb60 to 02d0cb63 has its CatchHandler @ 02c0cc04 */
                    /* try { // try from 02c0cb64 to 02d0cb87 has its CatchHandler @ 02c0cb00 */
    thunk_FUN_0188fd20((undefined8 *)(param_1 + 0x20),unaff_x28);
    plVar5 = unaff_x20;
    while( true ) {
      do {
        unaff_x20 = plVar5;
                    /* try { // try from 02c0cb88 to 02d0cb8b has its CatchHandler @ 02c0cba0 */
        unaff_x23 = unaff_x23 + 1;
                    /* try { // try from 02c0cb8c to 02d0cbb7 has its CatchHandler @ 02c0cb00 */
        if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x23) {
          if (unaff_x19 == 0) {
            plVar5 = (long *)0x0;
          }
          else {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c0cb88 with catch @ 02c0cba0
                        */
            plVar5 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,
                                          *(undefined4 *)(unaff_x19 + 0x18));
            FUN_0270a8f8(unaff_x19,plVar5,*(undefined8 *)PTR_DAT_0380b0a0);
          }
          uVar4 = FUN_02b0f554(unaff_x20,0,0);
          if ((uVar4 & in_stack_00000008._4_4_) == 0 && (unaff_w25 >> 0xd & 1) == 0)
          goto LAB_02c0cef0;
          uVar6 = (**(code **)(*in_stack_00000028 + 0x6b8))
                            (in_stack_00000028,in_stack_00000030,0x10,unaff_w25,
                             *(undefined8 *)(*in_stack_00000028 + 0x6c0));
          lVar7 = thunk_FUN_01861ac0(uVar6,*(undefined8 *)PTR_DAT_03804bc8);
          puVar3 = PTR_DAT_037f87b8;
          puVar2 = PTR_DAT_037f7340;
          if (lVar7 == 0) goto LAB_02c0d1d0;
          uVar4 = *(uint *)(lVar7 + 0x18);
          if ((int)uVar4 < 1) goto LAB_02c0cef0;
          uVar16 = 0;
          lVar14 = 0;
          plVar15 = unaff_x20;
          goto LAB_02c0ccb0;
        }
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x23) goto LAB_02c0d1d4;
        unaff_x28 = *(long **)(unaff_x21 + unaff_x23 * 8);
        uVar6 = FUN_017fc3f4(*unaff_x22,in_stack_00000048._4_4_);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*unaff_x27);
        }
        if (unaff_x28 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
          if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_03802908)) goto LAB_02c0d1d8;
        }
        uVar9 = FUN_02c070a0(unaff_x28,unaff_w25,3,uVar6);
        plVar5 = unaff_x20;
      } while (((uVar9 & 1) == 0) ||
              (uVar9 = FUN_02b0f554(unaff_x20,0,0), plVar5 = unaff_x28, (uVar9 & 1) != 0));
      if (unaff_x19 == 0) {
        unaff_x19 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
        FUN_02709c80(unaff_x19,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
        if (unaff_x19 == 0) goto LAB_02c0d1d0;
        lVar7 = *(long *)(unaff_x19 + 0x10);
        lVar14 = *(long *)PTR_DAT_03803070;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_02c0d1d0;
        uVar4 = *(uint *)(unaff_x19 + 0x18);
        if (uVar4 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar4 + 1;
          plVar5 = (long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
          *plVar5 = (long)unaff_x20;
          thunk_FUN_0188fd20(plVar5,unaff_x20);
        }
        else {
          FUN_0270a444(unaff_x19,unaff_x20,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      param_1 = *(long *)(unaff_x19 + 0x10);
      lVar7 = *(long *)PTR_DAT_03803070;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_02c0d1d0;
      uVar4 = *(uint *)(unaff_x19 + 0x18);
      if (uVar4 < *(uint *)(param_1 + 0x18)) break;
      FUN_0270a444(unaff_x19,unaff_x28,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      plVar5 = unaff_x20;
    }
    in_w9 = uVar4 + 1;
    param_1 = param_1 + (long)(int)uVar4 * 8;
  } while( true );
LAB_02c0ccb0:
  do {
    if (uVar4 <= uVar16) goto LAB_02c0d1d4;
    plVar8 = *(long **)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_02c0d1d0;
    lVar11 = *plVar8;
    if (unaff_w26 == 0) {
      pcVar12 = *(code **)(lVar11 + 0x288);
      uVar6 = *(undefined8 *)(lVar11 + 0x290);
    }
    else {
      pcVar12 = *(code **)(lVar11 + 0x2b8);
      uVar6 = *(undefined8 *)(lVar11 + 0x2c0);
    }
    unaff_x28 = (long *)(*pcVar12)(plVar8,1,uVar6);
    uVar9 = FUN_02b0f554(unaff_x28,0,0);
    unaff_x20 = plVar15;
    if ((uVar9 & 1) == 0) {
      uVar6 = FUN_017fc3f4(*(undefined8 *)puVar2,in_stack_00000048._4_4_);
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
      uVar9 = FUN_02c070a0(unaff_x28,unaff_w25,3,uVar6);
      if (((uVar9 & 1) != 0) &&
         (uVar9 = FUN_02b0f554(plVar15,0,0), unaff_x20 = unaff_x28, (uVar9 & 1) == 0)) {
        if (lVar14 == 0) {
          lVar14 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
          FUN_02709c80(lVar14,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
          if (lVar14 == 0) goto LAB_02c0d1d0;
          lVar11 = *(long *)(lVar14 + 0x10);
          lVar13 = *(long *)PTR_DAT_03803070;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_02c0d1d0;
          uVar4 = *(uint *)(lVar14 + 0x18);
          if (uVar4 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar4 + 1;
            plVar8 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
            *plVar8 = (long)plVar15;
            thunk_FUN_0188fd20(plVar8,plVar15);
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
          plVar8 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
          *plVar8 = (long)unaff_x28;
          thunk_FUN_0188fd20(plVar8,unaff_x28);
          unaff_x20 = plVar15;
        }
        else {
          FUN_0270a444(lVar14,unaff_x28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          unaff_x20 = plVar15;
        }
      }
    }
    uVar4 = *(uint *)(lVar7 + 0x18);
    uVar16 = uVar16 + 1;
    plVar15 = unaff_x20;
  } while ((int)uVar16 < (int)uVar4);
  if (lVar14 != 0) {
    plVar5 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,*(undefined4 *)(lVar14 + 0x18));
    FUN_0270a8f8(lVar14,plVar5,*(undefined8 *)PTR_DAT_0380b0a0);
  }
LAB_02c0cef0:
  uVar9 = FUN_02b0f518(unaff_x20,0,0);
  if ((uVar9 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar5 == (long *)0x0)) {
      if ((unaff_x20 == (long *)0x0) ||
         (lVar7 = (**(code **)(*unaff_x20 + 0x398))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x3a0)),
         lVar7 == 0)) goto LAB_02c0d1d0;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar7 + 0x18) == 0)) {
        uVar6 = (**(code **)(*unaff_x20 + 0x328))
                          (unaff_x20,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058
                           ,in_stack_00000010,*(undefined8 *)(*unaff_x20 + 0x330));
        return uVar6;
      }
    }
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,1);
      if (plVar5 == (long *)0x0) goto LAB_02c0d1d0;
      if ((unaff_x20 != (long *)0x0) &&
         (lVar7 = thunk_FUN_01861ac0(unaff_x20,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
        uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar6,0);
      }
      if ((int)plVar5[3] == 0) {
LAB_02c0d1d4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      plVar5[4] = (long)unaff_x20;
      thunk_FUN_0188fd20(plVar5 + 4,unaff_x20);
    }
    if (in_stack_00000058 == 0) {
      lVar14 = *(long *)PTR_DAT_037f4dc8;
      lVar7 = *(long *)(lVar14 + 0x38);
      if (lVar7 == 0) {
        FUN_0185db00(lVar14);
        lVar7 = *(long *)(lVar14 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0185daa4();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar7 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0185daa4();
      }
      in_stack_00000058 = **(long **)(lVar7 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    plVar5 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                               (in_stack_00000018,unaff_w25,plVar5,&stack0x00000058,
                                in_stack_00000020,in_stack_00000010,in_stack_00000038,
                                &stack0x00000050);
    uVar9 = FUN_02b0f0b4(plVar5,0,0);
    if ((uVar9 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
LAB_02c0d1d0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar7 = *plVar5;
      bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037fc238)) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(plVar5);
      }
      uVar6 = (**(code **)(lVar7 + 0x328))
                        (plVar5,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                         in_stack_00000010,*(undefined8 *)(lVar7 + 0x330));
      if (in_stack_00000050 != 0) {
        if (in_stack_00000018 == (long *)0x0) goto LAB_02c0d1d0;
        (**(code **)(*in_stack_00000018 + 0x1a8))
                  (in_stack_00000018,&stack0x00000058,in_stack_00000050,
                   *(undefined8 *)(*in_stack_00000018 + 0x1b0));
      }
      return uVar6;
    }
  }
  uVar6 = (**(code **)(*in_stack_00000028 + 0x2c8))
                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
  thunk_FUN_01851c08(PTR_DAT_037f87c8);
  uVar10 = thunk_FUN_01861bbc();
  FUN_02bd1250(uVar10,uVar6,in_stack_00000030,0);
  uVar6 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar10,uVar6);
}


