/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 01d84ae8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_localDimming(void)

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
  undefined8 unaff_x29;
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
  
  while( true ) {
    if (unaff_x28 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
      if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_02351e10)) goto LAB_01d852a0;
    }
    uVar5 = FUN_01d7f588(unaff_x28,unaff_w25,3,unaff_x29);
    plVar9 = unaff_x20;
    if (((uVar5 & 1) != 0) &&
       (uVar5 = FUN_01cc86b0(unaff_x20,0,0), plVar9 = unaff_x28, (uVar5 & 1) == 0)) {
      if (unaff_x19 == 0) {
        unaff_x19 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
        FUN_017d2874(unaff_x19,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)PTR_DAT_02359230);
        if (unaff_x19 == 0) goto LAB_01d85298;
        lVar8 = *(long *)(unaff_x19 + 0x10);
        lVar14 = *(long *)PTR_DAT_02352648;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_01d85298;
        uVar4 = *(uint *)(unaff_x19 + 0x18);
        if (uVar4 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar4 + 1;
          plVar9 = (long *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
          *plVar9 = (long)unaff_x20;
          thunk_FUN_0106e12c(plVar9,unaff_x20);
        }
        else {
          FUN_017d3030(unaff_x19,unaff_x20,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar8 = *(long *)(unaff_x19 + 0x10);
      lVar14 = *(long *)PTR_DAT_02352648;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_01d85298;
      uVar4 = *(uint *)(unaff_x19 + 0x18);
      if (uVar4 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar4 + 1;
        plVar9 = (long *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
        *plVar9 = (long)unaff_x28;
        thunk_FUN_0106e12c(plVar9,unaff_x28);
        plVar9 = unaff_x20;
      }
      else {
        FUN_017d3030(unaff_x19,unaff_x28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        plVar9 = unaff_x20;
      }
    }
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x23) {
      if (unaff_x19 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,
                                      *(undefined4 *)(unaff_x19 + 0x18));
        FUN_017d34e4(unaff_x19,plVar6,*(undefined8 *)PTR_DAT_02359228);
      }
      uVar4 = FUN_01cc86b0(plVar9,0,0);
      if ((uVar4 & in_stack_00000008._4_4_) == 0 && (unaff_w25 >> 0xd & 1) == 0) goto LAB_01d84fb8;
      uVar7 = (**(code **)(*in_stack_00000028 + 0x698))
                        (in_stack_00000028,in_stack_00000030,0x10,unaff_w25,
                         *(undefined8 *)(*in_stack_00000028 + 0x6a0));
      lVar8 = thunk_FUN_0103ffe0(uVar7,*(undefined8 *)PTR_DAT_02353e98);
      puVar3 = PTR_DAT_0234c5a8;
      puVar2 = PTR_DAT_0234bce0;
      if (lVar8 == 0) goto LAB_01d85298;
      uVar4 = *(uint *)(lVar8 + 0x18);
      if ((int)uVar4 < 1) goto LAB_01d84fb8;
      uVar16 = 0;
      lVar14 = 0;
      plVar15 = plVar9;
      goto LAB_01d84d78;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x23) break;
    unaff_x28 = *(long **)(unaff_x21 + unaff_x23 * 8);
    unaff_x29 = FUN_00fdc388(*unaff_x22,in_stack_00000048._4_4_);
    unaff_x20 = plVar9;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x27);
    }
  }
LAB_01d8529c:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
LAB_01d84d78:
  do {
    if (uVar4 <= uVar16) goto LAB_01d8529c;
    plVar9 = *(long **)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
    if (plVar9 == (long *)0x0) goto LAB_01d85298;
    lVar11 = *plVar9;
    if (unaff_w26 == 0) {
      pcVar12 = *(code **)(lVar11 + 0x278);
      uVar7 = *(undefined8 *)(lVar11 + 0x280);
    }
    else {
      pcVar12 = *(code **)(lVar11 + 0x298);
      uVar7 = *(undefined8 *)(lVar11 + 0x2a0);
    }
    unaff_x28 = (long *)(*pcVar12)(plVar9,1,uVar7);
    uVar5 = FUN_01cc86b0(unaff_x28,0,0);
    plVar9 = plVar15;
    if ((uVar5 & 1) == 0) {
      uVar7 = FUN_00fdc388(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar2);
      }
      if (unaff_x28 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
        if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_02351e10)) {
LAB_01d852a0:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(unaff_x28);
        }
      }
      uVar5 = FUN_01d7f588(unaff_x28,unaff_w25,3,uVar7);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = FUN_01cc86b0(plVar15,0,0), plVar9 = unaff_x28, (uVar5 & 1) == 0)) {
        if (lVar14 == 0) {
          lVar14 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
          FUN_017d2874(lVar14,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_02359230);
          if (lVar14 == 0) goto LAB_01d85298;
          lVar11 = *(long *)(lVar14 + 0x10);
          lVar13 = *(long *)PTR_DAT_02352648;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_01d85298;
          uVar4 = *(uint *)(lVar14 + 0x18);
          if (uVar4 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar4 + 1;
            plVar9 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
            *plVar9 = (long)plVar15;
            thunk_FUN_0106e12c(plVar9,plVar15);
          }
          else {
            FUN_017d3030(lVar14,plVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar11 = *(long *)(lVar14 + 0x10);
        lVar13 = *(long *)PTR_DAT_02352648;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_01d85298;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          plVar9 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
          *plVar9 = (long)unaff_x28;
          thunk_FUN_0106e12c(plVar9,unaff_x28);
          plVar9 = plVar15;
        }
        else {
          FUN_017d3030(lVar14,unaff_x28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          plVar9 = plVar15;
        }
      }
    }
    uVar4 = *(uint *)(lVar8 + 0x18);
    uVar16 = uVar16 + 1;
    plVar15 = plVar9;
  } while ((int)uVar16 < (int)uVar4);
  if (lVar14 != 0) {
    plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,*(undefined4 *)(lVar14 + 0x18));
    FUN_017d34e4(lVar14,plVar6,*(undefined8 *)PTR_DAT_02359228);
  }
LAB_01d84fb8:
  uVar5 = FUN_01cc8674(plVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar6 == (long *)0x0)) {
      if ((plVar9 == (long *)0x0) ||
         (lVar8 = (**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0)),
         lVar8 == 0)) goto LAB_01d85298;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar8 + 0x18) == 0)) {
        uVar7 = (**(code **)(*plVar9 + 0x328))
                          (plVar9,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                           in_stack_00000010,*(undefined8 *)(*plVar9 + 0x330));
        return uVar7;
      }
    }
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,1);
      if (plVar6 == (long *)0x0) goto LAB_01d85298;
      if ((plVar9 != (long *)0x0) &&
         (lVar8 = thunk_FUN_0103ffe0(plVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar7 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar7,0);
      }
      if ((int)plVar6[3] == 0) goto LAB_01d8529c;
      plVar6[4] = (long)plVar9;
      thunk_FUN_0106e12c(plVar6 + 4,plVar9);
    }
    if (in_stack_00000058 == 0) {
      lVar14 = *(long *)PTR_DAT_023508c0;
      lVar8 = *(long *)(lVar14 + 0x38);
      if (lVar8 == 0) {
        FUN_0103c2a0(lVar14);
        lVar8 = *(long *)(lVar14 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0103c244();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0103c244();
      }
      in_stack_00000058 = **(long **)(lVar8 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    plVar9 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                               (in_stack_00000018,unaff_w25,plVar6,&stack0x00000058,
                                in_stack_00000020,in_stack_00000010,in_stack_00000038,
                                &stack0x00000050);
    uVar5 = FUN_01cc8210(plVar9,0,0);
    if ((uVar5 & 1) == 0) {
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        bVar1 = *(byte *)(*(long *)PTR_DAT_0234ebc0 + 0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0234ebc0))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar9);
        }
        uVar7 = (**(code **)(lVar8 + 0x328))
                          (plVar9,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                           in_stack_00000010,*(undefined8 *)(lVar8 + 0x330));
        if (in_stack_00000050 != 0) {
          if (in_stack_00000018 == (long *)0x0) goto LAB_01d85298;
          (**(code **)(*in_stack_00000018 + 0x1a8))
                    (in_stack_00000018,&stack0x00000058,in_stack_00000050,
                     *(undefined8 *)(*in_stack_00000018 + 0x1b0));
        }
        return uVar7;
      }
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
  uVar7 = (**(code **)(*in_stack_00000028 + 0x2c8))
                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
  thunk_FUN_010303a8(PTR_DAT_0234bcf0);
  uVar10 = thunk_FUN_010400dc();
  FUN_01d4c060(uVar10,uVar7,in_stack_00000030,0);
  uVar7 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar10,uVar7);
}


