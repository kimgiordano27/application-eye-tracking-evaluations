/*
FUNCTION_NAME: Meta.WitAi.WrapHttpWebRequest$$Dispose
ENTRY_POINT: 06cd7c68
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Meta_WitAi_WrapHttpWebRequest__Dispose
               (undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w25;
  long *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  double dVar15;
  double unaff_d8;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  double in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  double in_stack_00000060;
  double in_stack_00000068;
  double in_stack_00000070;
  double in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  double in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  double dStack00000000000000c0;
  double dStack00000000000000c8;
  double dStack00000000000000d0;
  double dStack00000000000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  double in_stack_000000f0;
  double in_stack_000000f8;
  undefined8 in_stack_00000100;
  double in_stack_00000108;
  double in_stack_00000110;
  double in_stack_00000118;
  
  dStack00000000000000c8 = param_1._8_8_;
  dStack00000000000000c0 = param_1._0_8_;
  do {
    dStack00000000000000d0 = dStack00000000000000c0;
    dStack00000000000000d8 = dStack00000000000000c8;
    if ((bool)in_ZR) {
      param_3 = 5.26354424712089e-315;
      param_4 = 5.26354424712089e-315;
      FUN_06cc0b6c(0,0,&stack0x00000100,0);
    }
    else {
      if (((*(long *)(unaff_x22 + 0x18) == 0) ||
          (lVar4 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar4 == 0)) ||
         (lVar4 = FUN_05212a24(lVar4,0,*unaff_x29), lVar4 == 0)) goto LAB_06cd8620;
      in_stack_000000e0 = *(undefined8 *)(lVar4 + 0x38);
      in_stack_000000f8 = *(double *)(lVar4 + 0x50);
      in_stack_000000f0 = *(double *)(lVar4 + 0x48);
      lVar9 = *(long *)(unaff_x22 + 0x18);
      in_stack_000000e8 = *(undefined8 *)(lVar4 + 0x40);
      if (lVar9 == 0) goto LAB_06cd8620;
      iVar13 = 1;
      while( true ) {
        lVar4 = *(long *)(lVar9 + 0x10);
        if (lVar4 == 0) goto LAB_06cd8620;
        if (*(int *)(lVar4 + 0x18) <= iVar13) break;
        lVar4 = FUN_05212a24(lVar4,iVar13,*unaff_x29);
        if (lVar4 == 0) goto LAB_06cd8620;
        in_stack_000000a8 = *(undefined8 *)(lVar4 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar4 + 0x38);
        in_stack_000000b8 = *(undefined8 *)(lVar4 + 0x50);
        uVar5 = *(undefined8 *)(lVar4 + 0x48);
        in_stack_000000b0 = uVar5;
        in_stack_000000e0 = FUN_06cc15c0(&stack0x000000e0,&stack0x000000a0,0);
        lVar9 = *(long *)(unaff_x22 + 0x18);
        iVar13 = iVar13 + 1;
        in_stack_000000e8 = uVar5;
        in_stack_000000f0 = param_3;
        in_stack_000000f8 = param_4;
        if (lVar9 == 0) goto LAB_06cd8620;
      }
      if (((*(long *)(unaff_x24 + 0x18) == 0) ||
          (lVar4 = *(long *)(*(long *)(unaff_x24 + 0x18) + 0x10), lVar4 == 0)) ||
         (lVar4 = FUN_05212a24(lVar4,0,*unaff_x29), lVar4 == 0)) goto LAB_06cd8620;
      dStack00000000000000c0 = *(double *)(lVar4 + 0x38);
      dStack00000000000000d8 = *(double *)(lVar4 + 0x50);
      dVar15 = *(double *)(lVar4 + 0x48);
      lVar9 = *(long *)(unaff_x24 + 0x18);
      dStack00000000000000c8 = *(double *)(lVar4 + 0x40);
      dStack00000000000000d0 = dVar15;
      if (lVar9 == 0) goto LAB_06cd8620;
      iVar13 = 1;
      while( true ) {
        lVar4 = *(long *)(lVar9 + 0x10);
        if (lVar4 == 0) goto LAB_06cd8620;
        if (*(int *)(lVar4 + 0x18) <= iVar13) break;
        lVar4 = FUN_05212a24(lVar4,iVar13,*unaff_x29);
        if (lVar4 == 0) goto LAB_06cd8620;
        in_stack_00000088 = *(undefined8 *)(lVar4 + 0x40);
        in_stack_00000080 = *(undefined8 *)(lVar4 + 0x38);
        in_stack_00000098 = *(undefined8 *)(lVar4 + 0x50);
        dVar15 = *(double *)(lVar4 + 0x48);
        in_stack_00000090 = dVar15;
        dStack00000000000000c0 = (double)FUN_06cc15c0(&stack0x000000c0,&stack0x00000080,0);
        lVar9 = *(long *)(unaff_x24 + 0x18);
        iVar13 = iVar13 + 1;
        dStack00000000000000c8 = dVar15;
        dStack00000000000000d0 = param_3;
        dStack00000000000000d8 = param_4;
        if (lVar9 == 0) goto LAB_06cd8620;
      }
      in_stack_00000100 = FUN_06cc15c0(&stack0x000000e0,&stack0x000000c0,0);
      in_stack_00000108 = dVar15;
      in_stack_00000110 = param_3;
      in_stack_00000118 = param_4;
      if (param_3 * param_4 + unaff_d8 <
          in_stack_000000f0 * in_stack_000000f8 + dStack00000000000000d0 * dStack00000000000000d8 +
          unaff_d8) {
        if (*(int *)(unaff_x20 + 0x24) < 3) {
          plVar11 = (long *)0x0;
          goto LAB_06cd7f40;
        }
        plVar11 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
        FUN_06f82b08(plVar11,0);
        uVar5 = FUN_06cd6834(unaff_x22);
        uVar7 = FUN_06cd6834(unaff_x24);
        if (plVar11 != (long *)0x0) {
          FUN_06f86304(plVar11,*(undefined8 *)PTR_DAT_08e8b748,uVar5,uVar7,0);
          if (*(int *)(unaff_x20 + 0x24) < 5) goto LAB_06cd7f40;
          lVar4 = *(long *)(unaff_x22 + 0x18);
          if (lVar4 != 0) {
            iVar13 = 0;
            break;
          }
        }
        goto LAB_06cd8620;
      }
    }
    if (3 < *(int *)(unaff_x20 + 0x24)) {
      uVar5 = FUN_06cd6834(unaff_x22);
      in_stack_00000068 = (double)in_stack_000000e8;
      in_stack_00000060 = (double)in_stack_000000e0;
      in_stack_00000078 = in_stack_000000f8;
      in_stack_00000070 = in_stack_000000f0;
      uVar7 = FUN_06cc0df4(&stack0x00000060,0);
      uVar5 = FUN_06f683f8(uVar5,uVar7,0);
      uVar7 = FUN_06cd6834(unaff_x24);
      in_stack_00000068 = dStack00000000000000c8;
      in_stack_00000060 = dStack00000000000000c0;
      in_stack_00000078 = dStack00000000000000d8;
      in_stack_00000070 = dStack00000000000000d0;
      uVar8 = FUN_06cc0df4(&stack0x00000060,0);
      uVar7 = FUN_06f683f8(uVar7,uVar8,0);
      uVar5 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8b760,uVar5,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
      }
      FUN_085a3c50(uVar5,0);
    }
    do {
      unaff_w25 = unaff_w25 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w25) {
LAB_06cd7ebc:
        do {
          unaff_w23 = unaff_w21;
          puVar2 = PTR_DAT_08e6ad58;
          if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) {
            if (in_stack_00000010 != 0) {
              iVar13 = *(int *)(in_stack_00000010 + 0x18);
              if (-1 < iVar13 + -1) {
                do {
                  iVar13 = iVar13 + -1;
                  FUN_051c0724(in_stack_00000010,iVar13,*(undefined8 *)puVar2);
                  FUN_052143ec();
                } while (0 < iVar13);
              }
              *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
              *(int *)(in_stack_00000010 + 0x1c) = *(int *)(in_stack_00000010 + 0x1c) + 1;
              puVar2 = PTR_DAT_08e699d0;
              if (3 < *(int *)(unaff_x20 + 0x24)) {
                in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,in_stack_00000018._4_4_);
                uVar5 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000040);
                in_stack_00000020 =
                     CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x19 + 0x18));
                uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)puVar2,&stack0x00000020);
                uVar5 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8b730,uVar5,uVar7,0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a3c50(uVar5,0);
              }
              if (**(char **)(*(long *)PTR_DAT_08e8b720 + 0xb8) != '\0') {
                FUN_06cd8634();
              }
              return;
            }
            goto LAB_06cd8620;
          }
          unaff_x24 = FUN_05212a24();
          unaff_w21 = unaff_w23 + 1;
          unaff_w25 = unaff_w21;
        } while (*(int *)(unaff_x19 + 0x18) <= unaff_w21);
      }
      unaff_x22 = FUN_05212a24();
      if (unaff_x22 == 0) goto LAB_06cd8620;
      uVar6 = FUN_06cd6388(unaff_x22,unaff_x24,*(undefined1 *)(unaff_x20 + 0x11),
                           *(undefined8 *)(unaff_x20 + 0x18));
    } while ((uVar6 & 1) == 0);
    in_stack_00000108 = 0.0;
    in_stack_00000100 = 0;
    in_stack_00000118 = 0.0;
    in_stack_00000110 = 0.0;
    if ((unaff_x24 == 0) || (lVar4 = *(long *)(unaff_x24 + 0x10), lVar4 == 0)) goto LAB_06cd8620;
    uVar14 = 0;
    uVar12 = 0xffffffff;
    while ((int)uVar14 < (int)*(uint *)(lVar4 + 0x18)) {
      if (*(uint *)(lVar4 + 0x18) <= uVar14) goto LAB_06cd8624;
      if (*(long *)(lVar4 + (long)(int)uVar14 * 8 + 0x20) == 0) goto LAB_06cd8620;
      bVar3 = FUN_06cd4e1c();
      lVar4 = *(long *)(unaff_x24 + 0x10);
      uVar1 = uVar14;
      if ((uVar12 == 0xffffffff & (bVar3 ^ 1)) == 0) {
        uVar1 = uVar12;
      }
      uVar14 = uVar14 + 1;
      uVar12 = uVar1;
      if (lVar4 == 0) goto LAB_06cd8620;
    }
    dStack00000000000000c0 = 0.0;
    dStack00000000000000c8 = 0.0;
    in_ZR = uVar12 == 0xffffffff;
    in_stack_000000e8 = 0;
    in_stack_000000e0 = 0;
    in_stack_000000f8 = 0.0;
    in_stack_000000f0 = 0.0;
  } while( true );
LAB_06cd8168:
  lVar4 = *(long *)(lVar4 + 0x10);
  if (lVar4 == 0) goto LAB_06cd8620;
  if (*(int *)(lVar4 + 0x18) <= iVar13) {
    lVar4 = *(long *)(unaff_x24 + 0x18);
    if (lVar4 != 0) {
      iVar13 = 0;
      goto LAB_06cd8260;
    }
    goto LAB_06cd8620;
  }
  lVar4 = FUN_05212a24(lVar4,iVar13,*unaff_x29);
  if (((lVar4 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) ||
     (lVar9 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar9 == 0)) goto LAB_06cd8620;
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  lVar4 = FUN_05212a24(lVar9,iVar13,*unaff_x29);
  if (lVar4 == 0) goto LAB_06cd8620;
  in_stack_00000048 = *(undefined8 *)(lVar4 + 0x40);
  in_stack_00000040 = *(undefined8 *)(lVar4 + 0x38);
  in_stack_00000050 = *(undefined8 *)(lVar4 + 0x48);
  in_stack_00000058 = *(undefined8 *)(lVar4 + 0x50);
  uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8aef0,&stack0x00000040);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  if (lVar4 == 0) goto LAB_06cd8620;
  if (*(int *)(lVar4 + 0x18) == 0) goto LAB_06cd8624;
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 == 0) goto LAB_06cd8620;
  in_stack_00000028 = *(undefined8 *)(lVar4 + 0x28);
  in_stack_00000020 = *(undefined8 *)(lVar4 + 0x20);
  in_stack_00000030 = *(undefined8 *)(lVar4 + 0x30);
  in_stack_00000038 = *(double *)(lVar4 + 0x38);
  uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8aef0,&stack0x00000020);
  FUN_06f86360(plVar11,*(undefined8 *)PTR_DAT_08e8b770,uVar5,uVar7,uVar8,0);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  iVar13 = iVar13 + 1;
  unaff_x28 = (undefined8 *)PTR_DAT_08e6d350;
  if (lVar4 == 0) goto LAB_06cd8620;
  goto LAB_06cd8168;
LAB_06cd8260:
  lVar4 = *(long *)(lVar4 + 0x10);
  if (lVar4 == 0) goto LAB_06cd8620;
  if (*(int *)(lVar4 + 0x18) <= iVar13) goto LAB_06cd7f40;
  lVar4 = FUN_05212a24(lVar4,iVar13,*unaff_x29);
  if (((lVar4 == 0) || (*(long *)(unaff_x24 + 0x18) == 0)) ||
     (lVar9 = *(long *)(*(long *)(unaff_x24 + 0x18) + 0x10), lVar9 == 0)) goto LAB_06cd8620;
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  lVar4 = FUN_05212a24(lVar9,iVar13,*unaff_x29);
  if (lVar4 == 0) goto LAB_06cd8620;
  in_stack_00000048 = *(undefined8 *)(lVar4 + 0x40);
  in_stack_00000040 = *(undefined8 *)(lVar4 + 0x38);
  in_stack_00000050 = *(undefined8 *)(lVar4 + 0x48);
  in_stack_00000058 = *(undefined8 *)(lVar4 + 0x50);
  uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8aef0,&stack0x00000040);
  lVar4 = *(long *)(unaff_x24 + 0x10);
  if (lVar4 == 0) goto LAB_06cd8620;
  if (*(int *)(lVar4 + 0x18) == 0) goto LAB_06cd8624;
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 == 0) goto LAB_06cd8620;
  in_stack_00000028 = *(undefined8 *)(lVar4 + 0x28);
  in_stack_00000020 = *(undefined8 *)(lVar4 + 0x20);
  in_stack_00000030 = *(undefined8 *)(lVar4 + 0x30);
  in_stack_00000038 = *(double *)(lVar4 + 0x38);
  uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8aef0,&stack0x00000020);
  FUN_06f86360(plVar11,*(undefined8 *)PTR_DAT_08e8b728,uVar5,uVar7,uVar8,0);
  lVar4 = *(long *)(unaff_x24 + 0x18);
  iVar13 = iVar13 + 1;
  unaff_x28 = (undefined8 *)PTR_DAT_08e6d350;
  if (lVar4 == 0) goto LAB_06cd8620;
  goto LAB_06cd8260;
LAB_06cd8044:
  lVar4 = *(long *)(lVar4 + 0x10);
  if (lVar4 == 0) goto LAB_06cd8620;
  if (*(int *)(lVar4 + 0x18) <= iVar13) {
    param_3 = in_stack_00000110;
    param_4 = in_stack_00000118;
    FUN_06cd5b48(in_stack_00000100,in_stack_00000108,unaff_x22);
    if (in_stack_00000010 == 0) goto LAB_06cd8620;
    uVar6 = FUN_051c0d8c(in_stack_00000010,unaff_w23,*(undefined8 *)PTR_DAT_08e6ad50);
    if ((uVar6 & 1) == 0) {
      lVar4 = *(long *)(in_stack_00000010 + 0x10);
      lVar9 = *(long *)PTR_DAT_08e6a9a0;
      *(int *)(in_stack_00000010 + 0x1c) = *(int *)(in_stack_00000010 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_06cd8620;
      uVar14 = *(uint *)(in_stack_00000010 + 0x18);
      if (uVar14 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(in_stack_00000010 + 0x18) = uVar14 + 1;
        *(int *)(lVar4 + (long)(int)uVar14 * 4 + 0x20) = unaff_w23;
      }
      else {
        FUN_051c0a14(in_stack_00000010,unaff_w23,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (*(int *)(unaff_x20 + 0x24) < 4) goto LAB_06cd7ebc;
    if (*(int *)(unaff_x20 + 0x24) == 4) goto LAB_06cd84a8;
    uVar5 = FUN_06cd6834(unaff_x22);
    if (plVar11 != (long *)0x0) {
      FUN_06f85790(plVar11,*(undefined8 *)PTR_DAT_08e8b768,uVar5,0);
      lVar4 = *(long *)(unaff_x22 + 0x18);
      if (lVar4 != 0) {
        iVar13 = 0;
        goto LAB_06cd83a4;
      }
    }
    goto LAB_06cd8620;
  }
  if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_06cd8620;
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  uVar5 = FUN_05212a24(lVar4,iVar13,*unaff_x29);
  if (lVar9 == 0) goto LAB_06cd8620;
  lVar4 = *(long *)(lVar9 + 0x10);
  lVar10 = *(long *)PTR_DAT_08e8b710;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar4 == 0) goto LAB_06cd8620;
  uVar14 = *(uint *)(lVar9 + 0x18);
  if (uVar14 < *(uint *)(lVar4 + 0x18)) {
    *(uint *)(lVar9 + 0x18) = uVar14 + 1;
    *(undefined8 *)(lVar4 + (long)(int)uVar14 * 8 + 0x20) = uVar5;
    thunk_FUN_03d233cc();
  }
  else {
    FUN_05212cf4(lVar9,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  lVar4 = *(long *)(unaff_x24 + 0x18);
  iVar13 = iVar13 + 1;
  if (lVar4 == 0) goto LAB_06cd8620;
  goto LAB_06cd8044;
LAB_06cd83a4:
  lVar4 = *(long *)(lVar4 + 0x10);
  if (lVar4 == 0) goto LAB_06cd8620;
  if (*(int *)(lVar4 + 0x18) <= iVar13) {
    if (**(char **)(*(long *)PTR_DAT_08e8b720 + 0xb8) != '\0') {
      FUN_06cd8634();
    }
LAB_06cd84a8:
    if (plVar11 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
      }
      FUN_085a3c50(uVar5,0);
      goto LAB_06cd7ebc;
    }
    goto LAB_06cd8620;
  }
  lVar4 = FUN_05212a24(lVar4,iVar13,*unaff_x29);
  if (((lVar4 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) ||
     (lVar9 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar9 == 0)) goto LAB_06cd8620;
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  lVar4 = FUN_05212a24(lVar9,iVar13,*unaff_x29);
  if (lVar4 == 0) goto LAB_06cd8620;
  in_stack_00000048 = *(undefined8 *)(lVar4 + 0x40);
  in_stack_00000040 = *(undefined8 *)(lVar4 + 0x38);
  in_stack_00000050 = *(undefined8 *)(lVar4 + 0x48);
  in_stack_00000058 = *(undefined8 *)(lVar4 + 0x50);
  uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8aef0,&stack0x00000040);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  if (lVar4 == 0) goto LAB_06cd8620;
  if (*(int *)(lVar4 + 0x18) == 0) {
LAB_06cd8624:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 == 0) goto LAB_06cd8620;
  in_stack_00000028 = *(undefined8 *)(lVar4 + 0x28);
  in_stack_00000020 = *(undefined8 *)(lVar4 + 0x20);
  in_stack_00000030 = *(undefined8 *)(lVar4 + 0x30);
  param_3 = *(double *)(lVar4 + 0x38);
  in_stack_00000038 = param_3;
  uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8aef0,&stack0x00000020);
  FUN_06f86360(plVar11,*(undefined8 *)PTR_DAT_08e8b770,uVar5,uVar7,uVar8,0);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  iVar13 = iVar13 + 1;
  if (lVar4 == 0) goto LAB_06cd8620;
  goto LAB_06cd83a4;
LAB_06cd7f40:
  lVar4 = *(long *)(unaff_x24 + 0x18);
  if (lVar4 != 0) {
    iVar13 = 0;
    in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
    while (lVar9 = *(long *)(lVar4 + 0x18), lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) <= iVar13) {
        iVar13 = 0;
        goto LAB_06cd8044;
      }
      if (*(long *)(unaff_x22 + 0x18) == 0) break;
      lVar4 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x18);
      uVar5 = FUN_05212a24(lVar9,iVar13,*unaff_x28);
      if (lVar4 == 0) break;
      uVar6 = FUN_05213084(lVar4,uVar5,*(undefined8 *)PTR_DAT_08e74fe8);
      if ((uVar6 & 1) == 0) {
        if (((*(long *)(unaff_x22 + 0x18) == 0) || (*(long *)(unaff_x24 + 0x18) == 0)) ||
           (lVar4 = *(long *)(*(long *)(unaff_x24 + 0x18) + 0x18), lVar4 == 0)) break;
        lVar9 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x18);
        uVar5 = FUN_05212a24(lVar4,iVar13,*unaff_x28);
        if (lVar9 == 0) break;
        lVar4 = *(long *)(lVar9 + 0x10);
        lVar10 = *(long *)PTR_DAT_08e6a7a0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar4 == 0) break;
        uVar14 = *(uint *)(lVar9 + 0x18);
        if (uVar14 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar14 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar14 * 8 + 0x20) = uVar5;
          thunk_FUN_03d233cc();
        }
        else {
          FUN_05212cf4(lVar9,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar4 = *(long *)(unaff_x24 + 0x18);
      iVar13 = iVar13 + 1;
      if (lVar4 == 0) break;
    }
  }
LAB_06cd8620:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


