/*
FUNCTION_NAME: UniGLTF.GltfSerializer$$Serialize_gltf_nodes__rotation
ENTRY_POINT: 02f7061c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 UniGLTF_GltfSerializer__Serialize_gltf_nodes__rotation(void)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  int *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x25;
  
  FUN_01ab69ac(PTR_DAT_03d1fee8);
  FUN_01ab69ac(PTR_DAT_03cbeb18);
  FUN_01ab69ac(PTR_DAT_03d193f0);
  FUN_01ab69ac(PTR_DAT_03d24ef0);
  FUN_01ab69ac(PTR_DAT_03d24ef8);
  *(undefined1 *)(unaff_x23 + 0xc98) = 1;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_02f651a8();
  if ((uVar6 & 1) == 0) {
    if (unaff_x21 == 0) goto LAB_02f70994;
  }
  else {
    plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
    if ((unaff_x21 == 0) || (plVar7 == (long *)0x0)) goto LAB_02f70994;
    lVar12 = *(long *)(unaff_x21 + 0x20);
    if ((lVar12 != 0) &&
       (lVar8 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
      uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,0);
    }
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar7[4] = lVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar12);
    FUN_026780b0(*(undefined8 *)PTR_DAT_03d24ef0,plVar7,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x25);
    }
    FUN_02f6520c();
  }
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    iVar4 = FUN_025cee48(*(long *)(unaff_x21 + 0x20),0);
    if (3 < iVar4) {
      plVar7 = *(long **)(unaff_x21 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_02f70994;
      lVar12 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      if (*(int *)(unaff_x21 + 0x14) == -1) {
        if (lVar12 == 0) goto LAB_02f70994;
        uVar5 = FUN_025b8a2c(lVar12,0,0);
        puVar2 = PTR_DAT_03cc02b0;
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc02b0);
        }
        uVar6 = FUN_026b1a64(uVar5,0);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uVar5 = FUN_025b8a2c(lVar12,1,0);
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar8);
        }
        uVar6 = FUN_026b1a64(uVar5,0);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uVar5 = FUN_025b8a2c(lVar12,2,0);
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar8);
        }
        uVar6 = FUN_026b1a64(uVar5,0);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        sVar3 = FUN_025b8a2c(lVar12,3,0);
        if ((sVar3 != 0x20) && (sVar3 = FUN_025b8a2c(lVar12,3,0), sVar3 != 0x2d)) {
          return 0;
        }
        uVar9 = FUN_025bfd60(lVar12,0,3,0);
        puVar10 = (undefined8 *)(unaff_x21 + 0x28);
        *puVar10 = uVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar9);
        uVar11 = *puVar10;
        uVar9 = FUN_0270b27c(0);
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc03b8);
        }
        sVar3 = FUN_0273cfc4(uVar11,uVar9,0);
        *(int *)(unaff_x21 + 0x14) = (int)sVar3;
        sVar3 = FUN_025b8a2c(lVar12,3,0);
        if (sVar3 == 0x2d) {
          *(undefined1 *)(unaff_x21 + 0x10) = 1;
        }
      }
      else if (lVar12 == 0) goto LAB_02f70994;
      puVar2 = PTR_DAT_03d193f0;
      iVar4 = *unaff_x20;
      while (iVar4 = FUN_025c370c(lVar12,*(undefined8 *)puVar2,iVar4,0), iVar4 != -1) {
        iVar4 = iVar4 + 2;
        iVar1 = *unaff_x20;
        *unaff_x20 = iVar4;
        if (*(char *)(unaff_x21 + 0x10) == '\0') {
LAB_02f70978:
          *unaff_x19 = iVar4;
          return 1;
        }
        if (iVar1 + 4 < *(int *)(lVar12 + 0x10)) {
          uVar9 = FUN_025bfd60(lVar12,iVar1,3,0);
          uVar6 = thunk_FUN_025bd1c0(uVar9,*(undefined8 *)(unaff_x21 + 0x28),0);
          if (((uVar6 & 1) != 0) && (sVar3 = FUN_025b8a2c(lVar12,iVar1 + 3,0), sVar3 == 0x20)) {
            iVar4 = *unaff_x20;
            goto LAB_02f70978;
          }
        }
        iVar4 = *unaff_x20;
      }
    }
    return 1;
  }
LAB_02f70994:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


