/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeVector2
ENTRY_POINT: 028c97a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__DeserializeVector2(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long lVar12;
  long unaff_x26;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  void *in_stack_00000008;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  long in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  iVar2 = (**(code **)(*unaff_x20 + 0x1a8))();
  if (iVar2 < 1) {
    uVar7 = 0;
    uVar11 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000020 = 0;
    uStack0000000000000028 = 0;
    lVar12 = 0;
  }
  else {
    uVar13 = 0;
    lVar12 = 0;
    do {
      plVar5 = (long *)(**(code **)(*unaff_x20 + 0x178))();
      if ((plVar5 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar5 + 0x188))
                                     (plVar5,*(undefined8 *)PTR_DAT_03cf31f0,
                                      *(undefined8 *)(*plVar5 + 400)), plVar6 == (long *)0x0))
      goto LAB_028c9c00;
      uVar3 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if ((*(long *)(unaff_x22 + 0xa0) == 0) ||
         ((FUN_028c476c(*(long *)(unaff_x22 + 0xa0),uVar3,0), *(long *)(unaff_x22 + 0xa0) == 0 ||
          (uVar7 = FUN_028c4c98(), unaff_x24 == 0)))) goto LAB_028c9c00;
      if (*(uint *)(unaff_x24 + 0x18) <= uVar13) goto LAB_028c9c04;
      puVar10 = (undefined8 *)(unaff_x24 + uVar13 * 8 + 0x20);
      *puVar10 = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar7);
      if (*(int *)(*(long *)PTR_DAT_03d02938 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(unaff_x24 + 0x18) <= uVar13) goto LAB_028c9c04;
      FUN_028ca788(puVar10);
      (**(code **)(*plVar5 + 0x188))
                (plVar5,*(undefined8 *)PTR_DAT_03ce1a00,*(undefined8 *)(*plVar5 + 400));
      FUN_028ca7f4(&stack0x000000d8);
      uVar11 = in_stack_000000e0;
      uVar7 = in_stack_000000d8;
      uStack0000000000000030 = in_stack_000000f0;
      uStack0000000000000038 = in_stack_000000e8;
      uStack0000000000000020 = in_stack_00000100;
      uStack0000000000000028 = in_stack_000000f8;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x188))
                                 (plVar5,*(undefined8 *)PTR_DAT_03d02a48,
                                  *(undefined8 *)(*plVar5 + 400));
      if (*(int *)(*(long *)PTR_DAT_03d02918 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d02918);
      }
      uVar8 = FUN_02971040(plVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (plVar5 == (long *)0x0) goto LAB_028c9c00;
        uVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        lVar12 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d02a30,uVar3);
        iVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        if (0 < iVar2) {
          uVar8 = 0;
          puVar10 = (undefined8 *)(lVar12 + 0x20);
          do {
            (**(code **)(*plVar5 + 0x178))
                      (plVar5,uVar8 & 0xffffffff,*(undefined8 *)(*plVar5 + 0x180));
            FUN_028ca7f4(&stack0x000000d8);
            if (lVar12 == 0) goto LAB_028c9c00;
            uVar15 = *(undefined8 *)(unaff_x26 + 0x28);
            uVar14 = *(undefined8 *)(unaff_x26 + 0x20);
            uVar16 = *(undefined8 *)(unaff_x26 + 0x30);
            uVar18 = *(undefined8 *)(unaff_x26 + 0x48);
            uVar17 = *(undefined8 *)(unaff_x26 + 0x40);
            if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_028c9c04;
            puVar10[3] = *(undefined8 *)(unaff_x26 + 0x38);
            puVar10[2] = uVar16;
            puVar10[5] = uVar18;
            puVar10[4] = uVar17;
            puVar10[1] = uVar15;
            *puVar10 = uVar14;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
            uVar8 = uVar8 + 1;
            iVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
            puVar10 = puVar10 + 6;
          } while ((long)uVar8 < (long)iVar2);
        }
      }
      if (unaff_x21 == 0) goto LAB_028c9c00;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar13) goto LAB_028c9c04;
      uVar13 = uVar13 + 1;
      iVar2 = (**(code **)(*unaff_x20 + 0x1a8))();
    } while ((long)uVar13 < (long)iVar2);
  }
  lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
  FUN_036a1b5c(lVar9,0);
  if (lVar9 == 0) {
LAB_028c9c00:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_036a460c(lVar9,uVar7,0);
  FUN_036a46b8(lVar9,uVar11,0);
  FUN_036a4764(lVar9,uStack0000000000000038,0);
  FUN_036a4d70(lVar9,uStack0000000000000028,0);
  FUN_036a4810(lVar9,uStack0000000000000030,0);
  FUN_036aa17c(lVar9,uStack0000000000000020,0);
  uVar3 = (**(code **)(*unaff_x20 + 0x1a8))();
  FUN_036a37a4(lVar9,uVar3,0);
  iVar2 = (**(code **)(*unaff_x20 + 0x1a8))();
  if (0 < iVar2) {
    if (unaff_x24 == 0) goto LAB_028c9c00;
    uVar13 = 0;
    iVar2 = 0;
    do {
      if (*(uint *)(unaff_x24 + 0x18) <= uVar13) {
LAB_028c9c04:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_036a944c(lVar9,*(undefined8 *)(unaff_x24 + 0x20 + uVar13 * 8),0,uVar13 & 0xffffffff,0,
                   iVar2,0);
      if (unaff_x21 == 0) goto LAB_028c9c00;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar13) goto LAB_028c9c04;
      lVar1 = uVar13 * 4;
      uVar13 = uVar13 + 1;
      iVar2 = *(int *)(unaff_x21 + 0x20 + lVar1) + iVar2;
      iVar4 = (**(code **)(*unaff_x20 + 0x1a8))();
    } while ((long)uVar13 < (long)iVar4);
  }
  FUN_036aa280(lVar9,0);
  in_stack_00000160 = lVar9;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000160,lVar9);
  in_stack_000001a0 = lVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x000001a0,lVar12);
  if (lVar12 != 0) {
    in_stack_00000180 = uStack0000000000000038;
    in_stack_00000188 = uStack0000000000000030;
    in_stack_00000190 = uStack0000000000000028;
    in_stack_00000198 = uStack0000000000000020;
    in_stack_00000170 = uVar7;
    in_stack_00000178 = uVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000170,0);
  }
  memcpy(in_stack_00000008,&stack0x00000160,0x48);
  return;
}


