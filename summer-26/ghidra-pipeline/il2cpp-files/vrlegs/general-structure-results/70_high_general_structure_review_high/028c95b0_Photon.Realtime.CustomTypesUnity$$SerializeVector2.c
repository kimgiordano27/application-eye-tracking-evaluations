/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeVector2
ENTRY_POINT: 028c95b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__SerializeVector2(undefined4 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong unaff_x19;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long lVar15;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  void *in_stack_00000008;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  while (unaff_x21 != 0) {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x19) goto LAB_028c9c04;
    *(undefined4 *)(unaff_x25 + unaff_x19 * 4) = param_1;
    unaff_x19 = unaff_x19 + 1;
    iVar3 = (**(code **)(*unaff_x20 + 0x1a8))();
    puVar2 = PTR_DAT_03cbf798;
    if ((long)iVar3 <= (long)unaff_x19) {
      uVar4 = (**(code **)(*unaff_x20 + 0x1a8))();
      lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,uVar4);
      plVar7 = (long *)(**(code **)(*unaff_x20 + 0x178))();
      if (plVar7 == (long *)0x0) break;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x188))
                                 (plVar7,*(undefined8 *)PTR_DAT_03cdcd20,
                                  *(undefined8 *)(*plVar7 + 400));
      if (*(int *)(*(long *)PTR_DAT_03d02918 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d02918);
      }
      uVar8 = FUN_02971040(plVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (plVar7 == (long *)0x0) break;
        (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
        FUN_028c9c08(&stack0x000000d8);
        in_stack_00000120 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_00000128 = in_stack_000000e0;
        in_stack_00000138 = in_stack_000000f0;
        in_stack_00000130 = in_stack_000000e8;
        in_stack_00000148 = in_stack_00000100;
        in_stack_00000140 = in_stack_000000f8;
        in_stack_00000158 = in_stack_00000110;
        in_stack_00000150 = in_stack_00000108;
        FUN_028c9fd4(&stack0x000000b8);
        in_stack_00000138 = in_stack_000000c0;
        in_stack_00000130 = in_stack_000000b8;
        in_stack_00000148 = in_stack_000000d0;
        in_stack_00000140 = in_stack_000000c8;
        uVar9 = GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (&stack0x00000130,0);
        FUN_028ca3e8(uVar9,&stack0x00000130);
        uVar4 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
        if (*(long *)(unaff_x22 + 0x90) == 0) break;
        in_stack_000001a8._4_4_ = uVar4;
        uVar8 = FUN_0219f8b8(*(long *)(unaff_x22 + 0x90),(long)&stack0x000001a8 + 4,&stack0x00000118
                             ,*(undefined8 *)PTR_DAT_03d02a28);
        uVar9 = in_stack_00000118;
        if ((uVar8 & 1) == 0) {
          uVar9 = FUN_028ca49c();
          if (*(long *)(unaff_x22 + 0x90) == 0) break;
          uStack00000000000000d8 = uVar4;
          FUN_0219b9a4(*(long *)(unaff_x22 + 0x90),&stack0x000000d8,uVar9,
                       *(undefined8 *)PTR_DAT_03d02a20);
        }
        in_stack_00000168 = uVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((ulong)&stack0x00000160 | 8,uVar9);
      }
      iVar3 = (**(code **)(*unaff_x20 + 0x1a8))();
      if (iVar3 < 1) {
        uVar9 = 0;
        uVar14 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000038 = 0;
        uStack0000000000000020 = 0;
        uStack0000000000000028 = 0;
        lVar15 = 0;
        goto LAB_028c9a44;
      }
      uVar8 = 0;
      lVar15 = 0;
      goto LAB_028c97cc;
    }
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x178))();
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x188))
                                   (plVar7,*(undefined8 *)PTR_DAT_03ce1a00,
                                    *(undefined8 *)(*plVar7 + 400)), plVar7 == (long *)0x0)) break;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x188))
                               (plVar7,*unaff_x27,*(undefined8 *)(*plVar7 + 400));
    plVar10 = *(long **)(unaff_x22 + 0x18);
    if ((plVar10 == (long *)0x0) ||
       (((plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                      (plVar10,*unaff_x28,*(undefined8 *)(*plVar10 + 400)),
         plVar7 == (long *)0x0 ||
         (uVar4 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
         plVar10 == (long *)0x0)) ||
        (plVar7 = (long *)(**(code **)(*plVar10 + 0x178))
                                    (plVar10,uVar4,*(undefined8 *)(*plVar10 + 0x180)),
        plVar7 == (long *)0x0)))) break;
    uVar9 = (**(code **)(*plVar7 + 0x188))(plVar7,*unaff_x29,*(undefined8 *)(*plVar7 + 400));
    if (*(int *)(*(long *)PTR_DAT_03d02918 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03d02918);
    }
    param_1 = FUN_02970e98(uVar9,0);
  }
  goto LAB_028c9c00;
  while( true ) {
    uVar4 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
    if ((*(long *)(unaff_x22 + 0xa0) == 0) ||
       ((FUN_028c476c(*(long *)(unaff_x22 + 0xa0),uVar4,0), *(long *)(unaff_x22 + 0xa0) == 0 ||
        (uVar9 = FUN_028c4c98(), lVar6 == 0)))) goto LAB_028c9c00;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_028c9c04;
    puVar13 = (undefined8 *)(lVar6 + uVar8 * 8 + 0x20);
    *puVar13 = uVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13,uVar9);
    if (*(int *)(*(long *)PTR_DAT_03d02938 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_028c9c04;
    FUN_028ca788(puVar13);
    (**(code **)(*plVar7 + 0x188))
              (plVar7,*(undefined8 *)PTR_DAT_03ce1a00,*(undefined8 *)(*plVar7 + 400));
    FUN_028ca7f4(&stack0x000000d8);
    uVar14 = in_stack_000000e0;
    uVar9 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
    uStack0000000000000030 = in_stack_000000f0;
    uStack0000000000000038 = in_stack_000000e8;
    uStack0000000000000020 = in_stack_00000100;
    uStack0000000000000028 = in_stack_000000f8;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x188))
                               (plVar7,*(undefined8 *)PTR_DAT_03d02a48,
                                *(undefined8 *)(*plVar7 + 400));
    if (*(int *)(*(long *)PTR_DAT_03d02918 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03d02918);
    }
    uVar11 = FUN_02971040(plVar7,0,0);
    if ((uVar11 & 1) != 0) {
      if (plVar7 == (long *)0x0) goto LAB_028c9c00;
      uVar4 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      lVar15 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d02a30,uVar4);
      iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      if (0 < iVar3) {
        uVar11 = 0;
        puVar13 = (undefined8 *)(lVar15 + 0x20);
        do {
          (**(code **)(*plVar7 + 0x178))
                    (plVar7,uVar11 & 0xffffffff,*(undefined8 *)(*plVar7 + 0x180));
          FUN_028ca7f4(&stack0x000000d8);
          if (lVar15 == 0) goto LAB_028c9c00;
          if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_028c9c04;
          puVar13[3] = in_stack_000000f0;
          puVar13[2] = in_stack_000000e8;
          puVar13[5] = in_stack_00000100;
          puVar13[4] = in_stack_000000f8;
          puVar13[1] = in_stack_000000e0;
          *puVar13 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13,0);
          uVar11 = uVar11 + 1;
          iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
          puVar13 = puVar13 + 6;
        } while ((long)uVar11 < (long)iVar3);
      }
    }
    if (unaff_x21 == 0) goto LAB_028c9c00;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_028c9c04;
    uVar8 = uVar8 + 1;
    iVar3 = (**(code **)(*unaff_x20 + 0x1a8))();
    if ((long)iVar3 <= (long)uVar8) break;
LAB_028c97cc:
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x178))();
    if ((plVar7 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar7 + 0x188))
                                    (plVar7,*(undefined8 *)PTR_DAT_03cf31f0,
                                     *(undefined8 *)(*plVar7 + 400)), plVar10 == (long *)0x0))
    goto LAB_028c9c00;
  }
LAB_028c9a44:
  lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
  FUN_036a1b5c(lVar12,0);
  if (lVar12 != 0) {
    FUN_036a460c(lVar12,uVar9,0);
    FUN_036a46b8(lVar12,uVar14,0);
    FUN_036a4764(lVar12,uStack0000000000000038,0);
    FUN_036a4d70(lVar12,uStack0000000000000028,0);
    FUN_036a4810(lVar12,uStack0000000000000030,0);
    FUN_036aa17c(lVar12,uStack0000000000000020,0);
    uVar4 = (**(code **)(*unaff_x20 + 0x1a8))();
    FUN_036a37a4(lVar12,uVar4,0);
    iVar3 = (**(code **)(*unaff_x20 + 0x1a8))();
    if (0 < iVar3) {
      if (lVar6 == 0) goto LAB_028c9c00;
      uVar8 = 0;
      iVar3 = 0;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
LAB_028c9c04:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_036a944c(lVar12,*(undefined8 *)(lVar6 + 0x20 + uVar8 * 8),0,uVar8 & 0xffffffff,0,iVar3,0
                    );
        if (unaff_x21 == 0) goto LAB_028c9c00;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_028c9c04;
        lVar1 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        iVar3 = *(int *)(unaff_x21 + 0x20 + lVar1) + iVar3;
        iVar5 = (**(code **)(*unaff_x20 + 0x1a8))();
      } while ((long)uVar8 < (long)iVar5);
    }
    FUN_036aa280(lVar12,0);
    in_stack_00000160 = lVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000160,lVar12);
    in_stack_000001a0 = lVar15;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x000001a0,lVar15);
    if (lVar15 != 0) {
      in_stack_00000180 = uStack0000000000000038;
      in_stack_00000188 = uStack0000000000000030;
      in_stack_00000190 = uStack0000000000000028;
      in_stack_00000198 = uStack0000000000000020;
      in_stack_00000170 = uVar9;
      in_stack_00000178 = uVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000170,0);
    }
    memcpy(in_stack_00000008,&stack0x00000160,0x48);
    return;
  }
LAB_028c9c00:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


