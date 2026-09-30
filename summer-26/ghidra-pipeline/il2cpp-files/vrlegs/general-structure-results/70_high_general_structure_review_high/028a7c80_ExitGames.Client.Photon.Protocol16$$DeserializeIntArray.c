/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeIntArray
ENTRY_POINT: 028a7c80
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


void ExitGames_Client_Photon_Protocol16__DeserializeIntArray(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined8 *unaff_x19;
  ulong uVar10;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 uVar11;
  undefined8 *unaff_x28;
  float fVar12;
  undefined4 in_stack_00000020;
  int iStack0000000000000024;
  undefined4 uStack0000000000000028;
  int iStack000000000000002c;
  
  FUN_027b3d9c(param_1,0);
  FUN_028a7400();
  *(undefined1 *)(unaff_x22 + 0x71) = 0;
  FUN_0290f28c((long)&stack0x00000028 + 4,&stack0x00000028,0);
  plVar6 = (long *)FUN_01ab6a94(*unaff_x28,2);
  uVar11 = *unaff_x27;
  iVar1 = iStack000000000000002c;
  if (iStack000000000000002c < 0) {
    iVar1 = iStack000000000000002c + 1;
  }
  iStack0000000000000024 = iVar1 >> 1;
  if (*(char *)(unaff_x22 + 0x71) != '\0') {
    iStack0000000000000024 = iStack000000000000002c;
  }
  lVar7 = thunk_FUN_01a89a98(*unaff_x19,&stack0x00000024);
  if (plVar6 == (long *)0x0) {
LAB_028a8098:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_028a80a0:
    uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar11,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar7);
    in_stack_00000020 = uStack0000000000000028;
    lVar7 = thunk_FUN_01a89a98(*unaff_x19,&stack0x00000020);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_028a80a0;
    puVar2 = PTR_DAT_03cbe438;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 5,lVar7);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      puVar2 = PTR_DAT_03cbe9c8;
      FUN_0367a90c(uVar11,plVar6,0);
      uVar10 = 0;
      bVar5 = true;
      do {
        bVar9 = bVar5;
        uVar4 = uStack0000000000000028;
        plVar6 = *(long **)(unaff_x22 + 0x88);
        iVar1 = iStack000000000000002c;
        if (iStack000000000000002c < 0) {
          iVar1 = iStack000000000000002c + 1;
        }
        iVar1 = iVar1 >> 1;
        if (*(char *)(unaff_x22 + 0x71) != '\0') {
          iVar1 = iStack000000000000002c;
        }
        lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        FUN_036b6570(lVar7,iVar1,uVar4,0x18,0,0);
        if (plVar6 == (long *)0x0) goto LAB_028a8098;
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_028a80a0;
        if (*(uint *)(plVar6 + 3) <= uVar10) goto LAB_028a809c;
        plVar6[uVar10 + 4] = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + uVar10 + 4,lVar7)
        ;
        lVar7 = *unaff_x24;
        if (lVar7 == 0) goto LAB_028a8098;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_028a809c;
        lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_028a8098;
        FUN_036b50c4(lVar7,0);
        lVar7 = *unaff_x25;
        if (lVar7 == 0) goto LAB_028a8098;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_028a809c;
        lVar8 = uVar10 * 8;
        uVar10 = 1;
        *(undefined8 *)(lVar7 + lVar8 + 0x20) = 0;
        puVar3 = PTR_DAT_03cc87b0;
        bVar5 = false;
      } while (bVar9);
      if (*(int *)(*(long *)PTR_DAT_03cc87b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_041268bc == '\0') {
        FUN_01ab69ac(PTR_DAT_03cc87b0);
        DAT_041268bc = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar3;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 != 0) {
        fVar12 = (float)FUN_028c22c4(lVar7,0);
        *(bool *)(unaff_x22 + 0x68) = *(float *)(unaff_x22 + 0x6c) < fVar12;
        uVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d01c38);
        FUN_020611bc();
        FUN_028d4500(uVar11,0);
        *(undefined8 *)(unaff_x22 + 0x90) = 0xffffffff00000000;
        if (*(char *)(unaff_x22 + 0x71) == '\0') {
          lVar8 = *(long *)PTR_DAT_03cbec30;
          lVar7 = *(long *)(lVar8 + 0x38);
          if (lVar7 == 0) {
            FUN_01a47054(lVar8);
            lVar7 = *(long *)(lVar8 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01a46ff8();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01a46ff8();
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
          }
          FUN_0367a90c(*(undefined8 *)PTR_DAT_03d01c48,uVar11,0);
          uVar10 = 0;
          bVar5 = true;
          do {
            bVar9 = bVar5;
            iVar1 = iStack000000000000002c;
            uVar4 = uStack0000000000000028;
            plVar6 = (long *)*unaff_x23;
            lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            FUN_036b6570(lVar7,iVar1 >> 1,uVar4,0x18,0,0);
            if (plVar6 == (long *)0x0) goto LAB_028a8098;
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_028a80a0;
            if (*(uint *)(plVar6 + 3) <= uVar10) goto LAB_028a809c;
            plVar6[uVar10 + 4] = lVar7;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (plVar6 + uVar10 + 4,lVar7);
            lVar7 = *unaff_x23;
            if (lVar7 == 0) goto LAB_028a8098;
            if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_028a809c;
            lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
            if (lVar7 == 0) goto LAB_028a8098;
            FUN_036b50c4(lVar7,0);
            uVar10 = 1;
            bVar5 = false;
          } while (bVar9);
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


