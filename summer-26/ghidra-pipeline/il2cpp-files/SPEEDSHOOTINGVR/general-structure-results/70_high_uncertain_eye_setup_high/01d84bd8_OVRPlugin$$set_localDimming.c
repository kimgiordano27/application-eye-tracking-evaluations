/*
FUNCTION_NAME: OVRPlugin$$set_localDimming
ENTRY_POINT: 01d84bd8
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


undefined8 OVRPlugin__set_localDimming(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long unaff_x19;
  long *unaff_x20;
  long *plVar16;
  uint uVar17;
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
    FUN_017d3030(param_2,unaff_x20,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
    param_2 = unaff_x19;
    while( true ) {
      do {
        lVar11 = *(long *)(param_2 + 0x10);
        lVar13 = *(long *)PTR_DAT_02352648;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_01d85298;
        uVar4 = *(uint *)(param_2 + 0x18);
        plVar6 = unaff_x20;
        if (uVar4 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar4 + 1;
          puVar5 = (undefined8 *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
          *puVar5 = unaff_x28;
          thunk_FUN_0106e12c(puVar5,unaff_x28);
        }
        else {
          FUN_017d3030(param_2,unaff_x28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        do {
          unaff_x20 = plVar6;
          unaff_x23 = unaff_x23 + 1;
          if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x23) {
            if (param_2 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,
                                            *(undefined4 *)(param_2 + 0x18));
              FUN_017d34e4(param_2,plVar6,*(undefined8 *)PTR_DAT_02359228);
            }
            uVar4 = FUN_01cc86b0(unaff_x20,0,0);
            if ((uVar4 & in_stack_00000008._4_4_) == 0 && (unaff_w25 >> 0xd & 1) == 0)
            goto LAB_01d84fb8;
            uVar7 = (**(code **)(*in_stack_00000028 + 0x698))
                              (in_stack_00000028,in_stack_00000030,0x10,unaff_w25,
                               *(undefined8 *)(*in_stack_00000028 + 0x6a0));
            lVar11 = thunk_FUN_0103ffe0(uVar7,*(undefined8 *)PTR_DAT_02353e98);
            puVar3 = PTR_DAT_0234c5a8;
            puVar2 = PTR_DAT_0234bce0;
            if (lVar11 == 0) goto LAB_01d85298;
            uVar4 = *(uint *)(lVar11 + 0x18);
            if ((int)uVar4 < 1) goto LAB_01d84fb8;
            uVar17 = 0;
            lVar13 = 0;
            plVar16 = unaff_x20;
            goto LAB_01d84d78;
          }
          if (*(uint *)(unaff_x24 + 0x18) <= unaff_x23) goto LAB_01d8529c;
          unaff_x28 = *(long **)(unaff_x21 + unaff_x23 * 8);
          uVar7 = FUN_00fdc388(*unaff_x22,in_stack_00000048._4_4_);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01022c14(*unaff_x27);
          }
          if (unaff_x28 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
            if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_02351e10)) goto LAB_01d852a0;
          }
          uVar9 = FUN_01d7f588(unaff_x28,unaff_w25,3,uVar7);
          plVar6 = unaff_x20;
        } while (((uVar9 & 1) == 0) ||
                (uVar9 = FUN_01cc86b0(unaff_x20,0,0), plVar6 = unaff_x28, (uVar9 & 1) != 0));
      } while (param_2 != 0);
      param_2 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
      FUN_017d2874(param_2,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)PTR_DAT_02359230);
      if (param_2 == 0) goto LAB_01d85298;
      lVar11 = *(long *)(param_2 + 0x10);
      lVar13 = *(long *)PTR_DAT_02352648;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_01d85298;
      uVar4 = *(uint *)(param_2 + 0x18);
      if (*(uint *)(lVar11 + 0x18) <= uVar4) break;
      *(uint *)(param_2 + 0x18) = uVar4 + 1;
      plVar6 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
      *plVar6 = (long)unaff_x20;
      thunk_FUN_0106e12c(plVar6,unaff_x20);
    }
    param_1 = *(long *)(lVar13 + 0x20);
    unaff_x19 = param_2;
  } while( true );
LAB_01d84d78:
  do {
    if (uVar4 <= uVar17) goto LAB_01d8529c;
    plVar8 = *(long **)(lVar11 + (long)(int)uVar17 * 8 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_01d85298;
    lVar12 = *plVar8;
    if (unaff_w26 == 0) {
      pcVar14 = *(code **)(lVar12 + 0x278);
      uVar7 = *(undefined8 *)(lVar12 + 0x280);
    }
    else {
      pcVar14 = *(code **)(lVar12 + 0x298);
      uVar7 = *(undefined8 *)(lVar12 + 0x2a0);
    }
    unaff_x28 = (long *)(*pcVar14)(plVar8,1,uVar7);
    uVar9 = FUN_01cc86b0(unaff_x28,0,0);
    unaff_x20 = plVar16;
    if ((uVar9 & 1) == 0) {
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
      uVar9 = FUN_01d7f588(unaff_x28,unaff_w25,3,uVar7);
      if (((uVar9 & 1) != 0) &&
         (uVar9 = FUN_01cc86b0(plVar16,0,0), unaff_x20 = unaff_x28, (uVar9 & 1) == 0)) {
        if (lVar13 == 0) {
          lVar13 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
          FUN_017d2874(lVar13,*(undefined4 *)(lVar11 + 0x18),*(undefined8 *)PTR_DAT_02359230);
          if (lVar13 == 0) goto LAB_01d85298;
          lVar12 = *(long *)(lVar13 + 0x10);
          lVar15 = *(long *)PTR_DAT_02352648;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_01d85298;
          uVar4 = *(uint *)(lVar13 + 0x18);
          if (uVar4 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar4 + 1;
            plVar8 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
            *plVar8 = (long)plVar16;
            thunk_FUN_0106e12c(plVar8,plVar16);
          }
          else {
            FUN_017d3030(lVar13,plVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar12 = *(long *)(lVar13 + 0x10);
        lVar15 = *(long *)PTR_DAT_02352648;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_01d85298;
        uVar4 = *(uint *)(lVar13 + 0x18);
        if (uVar4 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar4 + 1;
          plVar8 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
          *plVar8 = (long)unaff_x28;
          thunk_FUN_0106e12c(plVar8,unaff_x28);
          unaff_x20 = plVar16;
        }
        else {
          FUN_017d3030(lVar13,unaff_x28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          unaff_x20 = plVar16;
        }
      }
    }
    uVar4 = *(uint *)(lVar11 + 0x18);
    uVar17 = uVar17 + 1;
    plVar16 = unaff_x20;
  } while ((int)uVar17 < (int)uVar4);
  if (lVar13 != 0) {
    plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,*(undefined4 *)(lVar13 + 0x18));
    FUN_017d34e4(lVar13,plVar6,*(undefined8 *)PTR_DAT_02359228);
  }
LAB_01d84fb8:
  uVar9 = FUN_01cc8674(unaff_x20,0,0);
  if ((uVar9 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar6 == (long *)0x0)) {
      if ((unaff_x20 == (long *)0x0) ||
         (lVar11 = (**(code **)(*unaff_x20 + 0x398))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x3a0)),
         lVar11 == 0)) goto LAB_01d85298;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar11 + 0x18) == 0)) {
        uVar7 = (**(code **)(*unaff_x20 + 0x328))
                          (unaff_x20,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058
                           ,in_stack_00000010,*(undefined8 *)(*unaff_x20 + 0x330));
        return uVar7;
      }
    }
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,1);
      if (plVar6 == (long *)0x0) goto LAB_01d85298;
      if ((unaff_x20 != (long *)0x0) &&
         (lVar11 = thunk_FUN_0103ffe0(unaff_x20,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0)) {
        uVar7 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar7,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_01d8529c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar6[4] = (long)unaff_x20;
      thunk_FUN_0106e12c(plVar6 + 4,unaff_x20);
    }
    if (in_stack_00000058 == 0) {
      lVar13 = *(long *)PTR_DAT_023508c0;
      lVar11 = *(long *)(lVar13 + 0x38);
      if (lVar11 == 0) {
        FUN_0103c2a0(lVar13);
        lVar11 = *(long *)(lVar13 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0103c244();
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0103c244();
      }
      in_stack_00000058 = **(long **)(lVar11 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    plVar6 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                               (in_stack_00000018,unaff_w25,plVar6,&stack0x00000058,
                                in_stack_00000020,in_stack_00000010,in_stack_00000038,
                                &stack0x00000050);
    uVar9 = FUN_01cc8210(plVar6,0,0);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar11 = *plVar6;
      bVar1 = *(byte *)(*(long *)PTR_DAT_0234ebc0 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0234ebc0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(plVar6);
      }
      uVar7 = (**(code **)(lVar11 + 0x328))
                        (plVar6,in_stack_00000040,unaff_w25,in_stack_00000018,in_stack_00000058,
                         in_stack_00000010,*(undefined8 *)(lVar11 + 0x330));
      if (in_stack_00000050 != 0) {
        if (in_stack_00000018 == (long *)0x0) goto LAB_01d85298;
        (**(code **)(*in_stack_00000018 + 0x1a8))
                  (in_stack_00000018,&stack0x00000058,in_stack_00000050,
                   *(undefined8 *)(*in_stack_00000018 + 0x1b0));
      }
      return uVar7;
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


