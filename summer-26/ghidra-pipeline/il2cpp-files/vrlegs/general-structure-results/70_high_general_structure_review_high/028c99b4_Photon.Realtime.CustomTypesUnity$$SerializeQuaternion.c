/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeQuaternion
ENTRY_POINT: 028c99b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__SerializeQuaternion(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x19;
  ulong uVar10;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long *unaff_x28;
  ulong unaff_x29;
  void *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
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
  
  while (unaff_x29 < *(uint *)(unaff_x25 + 0x18)) {
    unaff_x19[3] = in_stack_00000058;
    unaff_x19[2] = in_stack_00000050;
    unaff_x19[5] = in_stack_00000068;
    unaff_x19[4] = in_stack_00000060;
    unaff_x19[1] = in_stack_00000048;
    *unaff_x19 = in_stack_00000040;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19,0);
    unaff_x29 = unaff_x29 + 1;
    iVar2 = (**(code **)(*unaff_x28 + 0x1a8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1b0));
    unaff_x19 = unaff_x19 + 6;
    if ((long)iVar2 <= (long)unaff_x29) {
      do {
        do {
          if (unaff_x21 == 0) goto LAB_028c9c00;
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_x27) goto LAB_028c9c04;
          unaff_x27 = unaff_x27 + 1;
          iVar2 = (**(code **)(*unaff_x20 + 0x1a8))();
          if ((long)iVar2 <= (long)unaff_x27) {
            lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
            FUN_036a1b5c(lVar8,0);
            if (lVar8 == 0) goto LAB_028c9c00;
            FUN_036a460c(lVar8,in_stack_00000018,0);
            FUN_036a46b8(lVar8,in_stack_00000010,0);
            FUN_036a4764(lVar8,in_stack_00000038,0);
            FUN_036a4d70(lVar8,in_stack_00000028,0);
            FUN_036a4810(lVar8,in_stack_00000030,0);
            FUN_036aa17c(lVar8,in_stack_00000020,0);
            uVar3 = (**(code **)(*unaff_x20 + 0x1a8))();
            FUN_036a37a4(lVar8,uVar3,0);
            iVar2 = (**(code **)(*unaff_x20 + 0x1a8))();
            if (iVar2 < 1) goto LAB_028c9b74;
            if (unaff_x24 == 0) goto LAB_028c9c00;
            uVar10 = 0;
            iVar2 = 0;
            goto LAB_028c9b14;
          }
          plVar5 = (long *)(**(code **)(*unaff_x20 + 0x178))();
          if ((plVar5 == (long *)0x0) ||
             (plVar6 = (long *)(**(code **)(*plVar5 + 0x188))
                                         (plVar5,*(undefined8 *)PTR_DAT_03cf31f0,
                                          *(undefined8 *)(*plVar5 + 400)), plVar6 == (long *)0x0))
          goto LAB_028c9c00;
          uVar3 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
          if ((*(long *)(unaff_x22 + 0xa0) == 0) ||
             ((FUN_028c476c(*(long *)(unaff_x22 + 0xa0),uVar3,0), *(long *)(unaff_x22 + 0xa0) == 0
              || (uVar7 = FUN_028c4c98(), unaff_x24 == 0)))) goto LAB_028c9c00;
          if (*(uint *)(unaff_x24 + 0x18) <= unaff_x27) goto LAB_028c9c04;
          puVar9 = (undefined8 *)(unaff_x24 + unaff_x27 * 8 + 0x20);
          *puVar9 = uVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar9,uVar7);
          if (*(int *)(*(long *)PTR_DAT_03d02938 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (*(uint *)(unaff_x24 + 0x18) <= unaff_x27) goto LAB_028c9c04;
          FUN_028ca788(puVar9);
          (**(code **)(*plVar5 + 0x188))
                    (plVar5,*(undefined8 *)PTR_DAT_03ce1a00,*(undefined8 *)(*plVar5 + 400));
          FUN_028ca7f4(&stack0x000000d8);
          in_stack_00000010 = in_stack_000000e0;
          in_stack_00000018 = in_stack_000000d8;
          in_stack_00000030 = in_stack_000000f0;
          in_stack_00000038 = in_stack_000000e8;
          in_stack_00000020 = in_stack_00000100;
          in_stack_00000028 = in_stack_000000f8;
          unaff_x28 = (long *)(**(code **)(*plVar5 + 0x188))
                                        (plVar5,*(undefined8 *)PTR_DAT_03d02a48,
                                         *(undefined8 *)(*plVar5 + 400));
          if (*(int *)(*(long *)PTR_DAT_03d02918 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03d02918);
          }
          uVar10 = FUN_02971040(unaff_x28,0,0);
        } while ((uVar10 & 1) == 0);
        if (unaff_x28 == (long *)0x0) goto LAB_028c9c00;
        uVar3 = (**(code **)(*unaff_x28 + 0x1a8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1b0));
        unaff_x25 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d02a30,uVar3);
        iVar2 = (**(code **)(*unaff_x28 + 0x1a8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1b0));
      } while (iVar2 < 1);
      unaff_x29 = 0;
      unaff_x19 = (undefined8 *)(unaff_x25 + 0x20);
    }
    (**(code **)(*unaff_x28 + 0x178))
              (unaff_x28,unaff_x29 & 0xffffffff,*(undefined8 *)(*unaff_x28 + 0x180));
    FUN_028ca7f4(&stack0x000000d8);
    if (unaff_x25 == 0) goto LAB_028c9c00;
    in_stack_00000048 = *(undefined8 *)(unaff_x26 + 0x28);
    in_stack_00000040 = *(undefined8 *)(unaff_x26 + 0x20);
    in_stack_00000058 = *(undefined8 *)(unaff_x26 + 0x38);
    in_stack_00000050 = *(undefined8 *)(unaff_x26 + 0x30);
    in_stack_00000068 = *(undefined8 *)(unaff_x26 + 0x48);
    in_stack_00000060 = *(undefined8 *)(unaff_x26 + 0x40);
  }
LAB_028c9c04:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
LAB_028c9b14:
  if (*(uint *)(unaff_x24 + 0x18) <= uVar10) goto LAB_028c9c04;
  FUN_036a944c(lVar8,*(undefined8 *)(unaff_x24 + 0x20 + uVar10 * 8),0,uVar10 & 0xffffffff,0,iVar2,0)
  ;
  if (unaff_x21 == 0) {
LAB_028c9c00:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_028c9c04;
  lVar1 = uVar10 * 4;
  uVar10 = uVar10 + 1;
  iVar2 = *(int *)(unaff_x21 + 0x20 + lVar1) + iVar2;
  iVar4 = (**(code **)(*unaff_x20 + 0x1a8))();
  if ((long)iVar4 <= (long)uVar10) {
LAB_028c9b74:
    FUN_036aa280(lVar8,0);
    in_stack_00000160 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000160,lVar8);
    in_stack_000001a0 = unaff_x25;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x000001a0,unaff_x25);
    if (unaff_x25 != 0) {
      in_stack_00000180 = in_stack_00000038;
      in_stack_00000188 = in_stack_00000030;
      in_stack_00000190 = in_stack_00000028;
      in_stack_00000198 = in_stack_00000020;
      in_stack_00000170 = in_stack_00000018;
      in_stack_00000178 = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000170,0);
    }
    memcpy(in_stack_00000008,&stack0x00000160,0x48);
    return;
  }
  goto LAB_028c9b14;
}


