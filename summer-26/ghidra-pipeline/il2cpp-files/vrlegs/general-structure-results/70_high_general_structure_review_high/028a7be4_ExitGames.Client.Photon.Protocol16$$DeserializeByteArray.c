/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeByteArray
ENTRY_POINT: 028a7be4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeByteArray(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  undefined8 *unaff_x19;
  ulong uVar11;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *plVar12;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *plVar13;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  float fVar14;
  undefined4 in_stack_00000020;
  int iStack0000000000000024;
  undefined4 uStack0000000000000028;
  int iStack000000000000002c;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar6 = FUN_01ab6a94(*unaff_x23,2);
  plVar12 = (long *)(unaff_x22 + 0x98);
  *plVar12 = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar6);
  lVar6 = FUN_01ab6a94(*unaff_x25,2);
  plVar13 = (long *)(unaff_x22 + 0xa0);
  *plVar13 = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,lVar6);
  uVar7 = thunk_FUN_01a89e68(*unaff_x26);
  FUN_027b3d9c(uVar7,0);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x22 + 0xb0),uVar7);
  uVar7 = thunk_FUN_01a89e68(*unaff_x21);
  FUN_02215594(uVar7,0x4000,*unaff_x20);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x22 + 0xb8),uVar7);
  FUN_027b3d9c();
  FUN_028a7400();
  *(undefined1 *)(unaff_x22 + 0x71) = 0;
  FUN_0290f28c((long)&stack0x00000028 + 4,&stack0x00000028,0);
  plVar8 = (long *)FUN_01ab6a94(*unaff_x28,2);
  uVar7 = *unaff_x27;
  iVar1 = iStack000000000000002c;
  if (iStack000000000000002c < 0) {
    iVar1 = iStack000000000000002c + 1;
  }
  iStack0000000000000024 = iVar1 >> 1;
  if (*(char *)(unaff_x22 + 0x71) != '\0') {
    iStack0000000000000024 = iStack000000000000002c;
  }
  lVar6 = thunk_FUN_01a89a98(*unaff_x19,&stack0x00000024);
  if (plVar8 == (long *)0x0) {
LAB_028a8098:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar6 != 0) &&
     (lVar9 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_028a80a0:
    uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,0);
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar6);
    in_stack_00000020 = uStack0000000000000028;
    lVar6 = thunk_FUN_01a89a98(*unaff_x19,&stack0x00000020);
    if ((lVar6 != 0) &&
       (lVar9 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
    goto LAB_028a80a0;
    puVar2 = PTR_DAT_03cbe438;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 5,lVar6);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      puVar2 = PTR_DAT_03cbe9c8;
      FUN_0367a90c(uVar7,plVar8,0);
      uVar11 = 0;
      bVar5 = true;
      do {
        bVar10 = bVar5;
        uVar4 = uStack0000000000000028;
        plVar8 = *(long **)(unaff_x22 + 0x88);
        iVar1 = iStack000000000000002c;
        if (iStack000000000000002c < 0) {
          iVar1 = iStack000000000000002c + 1;
        }
        iVar1 = iVar1 >> 1;
        if (*(char *)(unaff_x22 + 0x71) != '\0') {
          iVar1 = iStack000000000000002c;
        }
        lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        FUN_036b6570(lVar6,iVar1,uVar4,0x18,0,0);
        if (plVar8 == (long *)0x0) goto LAB_028a8098;
        if ((lVar6 != 0) &&
           (lVar9 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_028a80a0;
        if (*(uint *)(plVar8 + 3) <= uVar11) goto LAB_028a809c;
        plVar8[uVar11 + 4] = lVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + uVar11 + 4,lVar6)
        ;
        lVar6 = *unaff_x24;
        if (lVar6 == 0) goto LAB_028a8098;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_028a809c;
        lVar6 = *(long *)(lVar6 + uVar11 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_028a8098;
        FUN_036b50c4(lVar6,0);
        lVar6 = *plVar13;
        if (lVar6 == 0) goto LAB_028a8098;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_028a809c;
        lVar9 = uVar11 * 8;
        uVar11 = 1;
        *(undefined8 *)(lVar6 + lVar9 + 0x20) = 0;
        puVar3 = PTR_DAT_03cc87b0;
        bVar5 = false;
      } while (bVar10);
      if (*(int *)(*(long *)PTR_DAT_03cc87b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_041268bc == '\0') {
        FUN_01ab69ac(PTR_DAT_03cc87b0);
        DAT_041268bc = '\x01';
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar3;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 != 0) {
        fVar14 = (float)FUN_028c22c4(lVar6,0);
        *(bool *)(unaff_x22 + 0x68) = *(float *)(unaff_x22 + 0x6c) < fVar14;
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d01c38);
        FUN_020611bc();
        FUN_028d4500(uVar7,0);
        *(undefined8 *)(unaff_x22 + 0x90) = 0xffffffff00000000;
        if (*(char *)(unaff_x22 + 0x71) == '\0') {
          lVar9 = *(long *)PTR_DAT_03cbec30;
          lVar6 = *(long *)(lVar9 + 0x38);
          if (lVar6 == 0) {
            FUN_01a47054(lVar9);
            lVar6 = *(long *)(lVar9 + 0x38);
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01a46ff8();
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01a46ff8();
          }
          uVar7 = **(undefined8 **)(lVar6 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
          }
          FUN_0367a90c(*(undefined8 *)PTR_DAT_03d01c48,uVar7,0);
          uVar11 = 0;
          bVar5 = true;
          do {
            bVar10 = bVar5;
            iVar1 = iStack000000000000002c;
            uVar4 = uStack0000000000000028;
            plVar8 = (long *)*plVar12;
            lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            FUN_036b6570(lVar6,iVar1 >> 1,uVar4,0x18,0,0);
            if (plVar8 == (long *)0x0) goto LAB_028a8098;
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_028a80a0;
            if (*(uint *)(plVar8 + 3) <= uVar11) goto LAB_028a809c;
            plVar8[uVar11 + 4] = lVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (plVar8 + uVar11 + 4,lVar6);
            lVar6 = *plVar12;
            if (lVar6 == 0) goto LAB_028a8098;
            if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_028a809c;
            lVar6 = *(long *)(lVar6 + uVar11 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_028a8098;
            FUN_036b50c4(lVar6,0);
            uVar11 = 1;
            bVar5 = false;
          } while (bVar10);
        }
        FUN_028a80ac();
        return;
      }
      goto LAB_028a8098;
    }
  }
LAB_028a809c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


