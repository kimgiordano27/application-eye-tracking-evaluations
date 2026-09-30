/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeVector3
ENTRY_POINT: 028c9378
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__DeserializeVector3(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *unaff_x19;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  long lVar19;
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
  
  FUN_01ab69ac(PTR_DAT_03cbf798);
  FUN_01ab69ac(PTR_DAT_03cbe888);
  FUN_01ab69ac(PTR_DAT_03d02918);
  FUN_01ab69ac(PTR_DAT_03cbe000);
  FUN_01ab69ac(PTR_DAT_03d02938);
  FUN_01ab69ac(PTR_DAT_03d02a30);
  FUN_01ab69ac(PTR_DAT_03d02a38);
  FUN_01ab69ac(PTR_DAT_03cd7270);
  FUN_01ab69ac(PTR_DAT_03cdcd20);
  FUN_01ab69ac(PTR_DAT_03d02a40);
  FUN_01ab69ac(PTR_DAT_03cf31f0);
  FUN_01ab69ac(PTR_DAT_03d02a48);
  FUN_01ab69ac(PTR_DAT_03d02a50);
  FUN_01ab69ac(PTR_DAT_03ce1a00);
  *(undefined1 *)(unaff_x20 + 0x913) = 1;
  in_stack_00000118 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_000001a0 = 0;
  if ((unaff_x19 != (long *)0x0) &&
     (plVar8 = (long *)(**(code **)(*unaff_x19 + 0x188))(), puVar2 = PTR_DAT_03cbe888,
     plVar8 != (long *)0x0)) {
    uVar5 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    lVar9 = FUN_01ab6a94(*(undefined8 *)puVar2,uVar5);
    iVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    puVar4 = PTR_DAT_03d02a50;
    puVar3 = PTR_DAT_03d02a40;
    puVar2 = PTR_DAT_03cd7270;
    lVar14 = *plVar8;
    if (0 < iVar6) {
      uVar16 = 0;
      do {
        plVar10 = (long *)(**(code **)(lVar14 + 0x178))
                                    (plVar8,uVar16 & 0xffffffff,*(undefined8 *)(lVar14 + 0x180));
        if ((plVar10 == (long *)0x0) ||
           (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                        (plVar10,*(undefined8 *)PTR_DAT_03ce1a00,
                                         *(undefined8 *)(*plVar10 + 400)), plVar10 == (long *)0x0))
        goto LAB_028c9c00;
        plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                    (plVar10,*(undefined8 *)puVar3,*(undefined8 *)(*plVar10 + 400));
        plVar15 = *(long **)(unaff_x22 + 0x18);
        if ((plVar15 == (long *)0x0) ||
           (((plVar15 = (long *)(**(code **)(*plVar15 + 0x188))
                                          (plVar15,*(undefined8 *)puVar4,
                                           *(undefined8 *)(*plVar15 + 400)), plVar10 == (long *)0x0
             || (uVar5 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230)),
                plVar15 == (long *)0x0)) ||
            (plVar10 = (long *)(**(code **)(*plVar15 + 0x178))
                                         (plVar15,uVar5,*(undefined8 *)(*plVar15 + 0x180)),
            plVar10 == (long *)0x0)))) goto LAB_028c9c00;
        uVar11 = (**(code **)(*plVar10 + 0x188))
                           (plVar10,*(undefined8 *)puVar2,*(undefined8 *)(*plVar10 + 400));
        if (*(int *)(*(long *)PTR_DAT_03d02918 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03d02918);
        }
        uVar5 = FUN_02970e98(uVar11,0);
        if (lVar9 == 0) goto LAB_028c9c00;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_028c9c04;
        *(undefined4 *)(lVar9 + 0x20 + uVar16 * 4) = uVar5;
        uVar16 = uVar16 + 1;
        iVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        lVar14 = *plVar8;
      } while ((long)uVar16 < (long)iVar6);
    }
    puVar2 = PTR_DAT_03cbf798;
    uVar5 = (**(code **)(lVar14 + 0x1a8))(plVar8,*(undefined8 *)(lVar14 + 0x1b0));
    lVar14 = FUN_01ab6a94(*(undefined8 *)puVar2,uVar5);
    plVar10 = (long *)(**(code **)(*plVar8 + 0x178))(plVar8,0,*(undefined8 *)(*plVar8 + 0x180));
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                  (plVar10,*(undefined8 *)PTR_DAT_03cdcd20,
                                   *(undefined8 *)(*plVar10 + 400));
      if (*(int *)(*(long *)PTR_DAT_03d02918 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d02918);
      }
      uVar16 = FUN_02971040(plVar10,0,0);
      if ((uVar16 & 1) != 0) {
        if (plVar10 == (long *)0x0) goto LAB_028c9c00;
        (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
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
        uVar11 = GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                           (&stack0x00000130,0);
        FUN_028ca3e8(uVar11,&stack0x00000130);
        uVar5 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
        if (*(long *)(unaff_x22 + 0x90) == 0) goto LAB_028c9c00;
        in_stack_000001a8._4_4_ = uVar5;
        uVar16 = FUN_0219f8b8(*(long *)(unaff_x22 + 0x90),(long)&stack0x000001a8 + 4,
                              &stack0x00000118,*(undefined8 *)PTR_DAT_03d02a28);
        uVar11 = in_stack_00000118;
        if ((uVar16 & 1) == 0) {
          uVar11 = FUN_028ca49c();
          if (*(long *)(unaff_x22 + 0x90) == 0) goto LAB_028c9c00;
          uStack00000000000000d8 = uVar5;
          FUN_0219b9a4(*(long *)(unaff_x22 + 0x90),&stack0x000000d8,uVar11,
                       *(undefined8 *)PTR_DAT_03d02a20);
        }
        in_stack_00000168 = uVar11;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((ulong)&stack0x00000160 | 8,uVar11);
      }
      iVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      if (iVar6 < 1) {
        uVar11 = 0;
        uVar18 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000038 = 0;
        uStack0000000000000020 = 0;
        uStack0000000000000028 = 0;
        lVar19 = 0;
      }
      else {
        uVar16 = 0;
        lVar19 = 0;
        do {
          plVar10 = (long *)(**(code **)(*plVar8 + 0x178))
                                      (plVar8,uVar16 & 0xffffffff,*(undefined8 *)(*plVar8 + 0x180));
          if ((plVar10 == (long *)0x0) ||
             (plVar15 = (long *)(**(code **)(*plVar10 + 0x188))
                                          (plVar10,*(undefined8 *)PTR_DAT_03cf31f0,
                                           *(undefined8 *)(*plVar10 + 400)), plVar15 == (long *)0x0)
             ) goto LAB_028c9c00;
          uVar5 = (**(code **)(*plVar15 + 0x228))(plVar15,*(undefined8 *)(*plVar15 + 0x230));
          if ((*(long *)(unaff_x22 + 0xa0) == 0) ||
             ((FUN_028c476c(*(long *)(unaff_x22 + 0xa0),uVar5,0), *(long *)(unaff_x22 + 0xa0) == 0
              || (uVar11 = FUN_028c4c98(), lVar14 == 0)))) goto LAB_028c9c00;
          if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_028c9c04;
          puVar17 = (undefined8 *)(lVar14 + uVar16 * 8 + 0x20);
          *puVar17 = uVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17,uVar11);
          if (*(int *)(*(long *)PTR_DAT_03d02938 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_028c9c04;
          FUN_028ca788(puVar17);
          (**(code **)(*plVar10 + 0x188))
                    (plVar10,*(undefined8 *)PTR_DAT_03ce1a00,*(undefined8 *)(*plVar10 + 400));
          FUN_028ca7f4(&stack0x000000d8);
          uVar18 = in_stack_000000e0;
          uVar11 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
          uStack0000000000000030 = in_stack_000000f0;
          uStack0000000000000038 = in_stack_000000e8;
          uStack0000000000000020 = in_stack_00000100;
          uStack0000000000000028 = in_stack_000000f8;
          plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                      (plVar10,*(undefined8 *)PTR_DAT_03d02a48,
                                       *(undefined8 *)(*plVar10 + 400));
          if (*(int *)(*(long *)PTR_DAT_03d02918 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03d02918);
          }
          uVar12 = FUN_02971040(plVar10,0,0);
          if ((uVar12 & 1) != 0) {
            if (plVar10 == (long *)0x0) goto LAB_028c9c00;
            uVar5 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            lVar19 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d02a30,uVar5);
            iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            if (0 < iVar6) {
              uVar12 = 0;
              puVar17 = (undefined8 *)(lVar19 + 0x20);
              do {
                (**(code **)(*plVar10 + 0x178))
                          (plVar10,uVar12 & 0xffffffff,*(undefined8 *)(*plVar10 + 0x180));
                FUN_028ca7f4(&stack0x000000d8);
                if (lVar19 == 0) goto LAB_028c9c00;
                if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_028c9c04;
                puVar17[3] = in_stack_000000f0;
                puVar17[2] = in_stack_000000e8;
                puVar17[5] = in_stack_00000100;
                puVar17[4] = in_stack_000000f8;
                puVar17[1] = in_stack_000000e0;
                *puVar17 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17,0);
                uVar12 = uVar12 + 1;
                iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                puVar17 = puVar17 + 6;
              } while ((long)uVar12 < (long)iVar6);
            }
          }
          if (lVar9 == 0) goto LAB_028c9c00;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_028c9c04;
          uVar16 = uVar16 + 1;
          iVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        } while ((long)uVar16 < (long)iVar6);
      }
      lVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
      FUN_036a1b5c(lVar13,0);
      if (lVar13 != 0) {
        FUN_036a460c(lVar13,uVar11,0);
        FUN_036a46b8(lVar13,uVar18,0);
        FUN_036a4764(lVar13,uStack0000000000000038,0);
        FUN_036a4d70(lVar13,uStack0000000000000028,0);
        FUN_036a4810(lVar13,uStack0000000000000030,0);
        FUN_036aa17c(lVar13,uStack0000000000000020,0);
        uVar5 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        FUN_036a37a4(lVar13,uVar5,0);
        iVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        if (0 < iVar6) {
          if (lVar14 == 0) goto LAB_028c9c00;
          uVar16 = 0;
          iVar6 = 0;
          do {
            if (*(uint *)(lVar14 + 0x18) <= uVar16) {
LAB_028c9c04:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            FUN_036a944c(lVar13,*(undefined8 *)(lVar14 + 0x20 + uVar16 * 8),0,uVar16 & 0xffffffff,0,
                         iVar6,0);
            if (lVar9 == 0) goto LAB_028c9c00;
            if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_028c9c04;
            lVar1 = uVar16 * 4;
            uVar16 = uVar16 + 1;
            iVar6 = *(int *)(lVar9 + 0x20 + lVar1) + iVar6;
            iVar7 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          } while ((long)uVar16 < (long)iVar7);
        }
        FUN_036aa280(lVar13,0);
        in_stack_00000160 = lVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000160,lVar13);
        in_stack_000001a0 = lVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x000001a0,lVar19);
        if (lVar19 != 0) {
          in_stack_00000180 = uStack0000000000000038;
          in_stack_00000188 = uStack0000000000000030;
          in_stack_00000190 = uStack0000000000000028;
          in_stack_00000198 = uStack0000000000000020;
          in_stack_00000170 = uVar11;
          in_stack_00000178 = uVar18;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000170,0);
        }
        memcpy(unaff_x21,&stack0x00000160,0x48);
        return;
      }
    }
  }
LAB_028c9c00:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


