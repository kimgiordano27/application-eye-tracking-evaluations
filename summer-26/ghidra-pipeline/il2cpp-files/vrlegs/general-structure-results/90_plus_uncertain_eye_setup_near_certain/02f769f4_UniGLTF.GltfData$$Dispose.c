/*
FUNCTION_NAME: UniGLTF.GltfData$$Dispose
ENTRY_POINT: 02f769f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f77078) */
/* WARNING: Removing unreachable block (ram,0x02f77070) */
/* WARNING: Removing unreachable block (ram,0x02f770e8) */

void UniGLTF_GltfData__Dispose(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint in_w9;
  long in_x10;
  int *piVar12;
  long in_x11;
  long *unaff_x19;
  long *unaff_x22;
  int iVar13;
  long *plVar14;
  long *unaff_x29;
  undefined1 uStack0000000000000008;
  char cStack000000000000000c;
  
  plVar7 = unaff_x22;
  if (in_x11 != in_x10) {
    plVar7 = (long *)0x0;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_03d24cb8 + 0x130);
  if (in_w9 < bVar1) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = unaff_x22;
    if (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d24cb8) {
      plVar8 = (long *)0x0;
    }
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_03cbdd48 + 0x130);
  if (in_w9 < bVar1) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = unaff_x22;
    if (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cbdd48) {
      plVar14 = (long *)0x0;
    }
  }
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_02f651a8();
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((plVar8 != (long *)0x0) &&
       (lVar5 = thunk_FUN_01a89d6c(plVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[4] = (long)plVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,plVar8);
    if ((plVar7 != (long *)0x0) &&
       (lVar5 = thunk_FUN_01a89d6c(plVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,0);
    }
    if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[5] = (long)plVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,plVar7);
    if ((plVar14 != (long *)0x0) &&
       (lVar5 = thunk_FUN_01a89d6c(plVar14,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,0);
    }
    if (*(uint *)(plVar4 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[6] = (long)plVar14;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,plVar14);
    uStack0000000000000008 = unaff_x22 == (long *)0x0;
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeb20,&stack0x00000008);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,0);
    }
    if (*(uint *)(plVar4 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[7] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 7,lVar5);
    FUN_026780b0(*(undefined8 *)PTR_DAT_03d25130,plVar4,0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f6520c();
  }
  plVar4 = unaff_x19 + 0x19;
  if (plVar14 == (long *)0x0) {
    if (plVar7 == (long *)0x0) {
      if (plVar8 == (long *)0x0) {
        if (unaff_x22 != (long *)0x0) {
          thunk_FUN_01a6ca08(PTR_DAT_03d24c20);
          uVar9 = thunk_FUN_01a89e68();
          FUN_02f79548(uVar9,0);
          uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03d25148);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar9,uVar11);
        }
        lVar5 = *plVar4;
        if (lVar5 != 0) {
          FUN_02f7402c();
          lVar6 = unaff_x19[0x1d];
          uVar2 = *(undefined4 *)(lVar5 + 0x104);
          plVar7 = *(long **)(lVar5 + 0xb0);
          uVar9 = *(undefined8 *)(lVar5 + 0x108);
          if (plVar7 == (long *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02f785b4(lVar6,uVar2,uVar9,uVar11,0);
        }
      }
      else {
        lVar5 = unaff_x19[7];
        cStack000000000000000c = '\0';
        FUN_027e0bd8(lVar5,(long)&stack0x00000008 + 4,0);
        if (*(char *)((long)unaff_x19 + 0xa1) == '\0') {
          unaff_x19[0x1a] = (long)plVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1a,plVar8)
          ;
          iVar13 = 0x12;
        }
        else {
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03d24f10) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_02f76fc0;
              }
              uVar3 = uVar3 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar3 != 0);
          }
          puVar10 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03d24f10,0);
LAB_02f76fc0:
          (*(code *)*puVar10)(plVar8,3,puVar10[1]);
          iVar13 = 8;
        }
        if (cStack000000000000000c != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(lVar5,0);
        }
        if ((iVar13 == 0x12) || (iVar13 == 0)) {
          uVar2 = (**(code **)(*unaff_x19 + 0x298))();
          FUN_02f71d64(plVar8,uVar2);
          FUN_02f7402c();
          (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        }
      }
      goto LAB_02f76e84;
    }
  }
  else {
    uVar3 = FUN_02f763a0();
    if ((uVar3 & 1) == 0) {
      FUN_02f7453c();
      goto LAB_02f76e84;
    }
    plVar7 = (long *)FUN_02f75e0c();
    if (plVar7 == (long *)0x0) goto LAB_02f76e84;
  }
  lVar5 = unaff_x19[7];
  cStack000000000000000c = '\0';
  FUN_027e0bd8(lVar5,(long)&stack0x00000008 + 4,0);
  if (*(char *)((long)unaff_x19 + 0xa1) == '\0') {
    *plVar4 = (long)plVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,plVar7);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02f651a8();
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f670d4();
    }
    iVar13 = 0xd;
  }
  else {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02f651a8();
    if ((uVar3 & 1) != 0) {
      plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar6 = thunk_FUN_01a89d6c(plVar7,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar6 == 0) {
        uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar9,0);
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar8[4] = (long)plVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,plVar7);
      FUN_026780b0(*(undefined8 *)PTR_DAT_03d25138,plVar8,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f6520c();
    }
    FUN_02f78e78(plVar7,0);
    iVar13 = 8;
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar5,0);
  }
  if (((iVar13 == 0xd) || (iVar13 == 0)) && (plVar7 = (long *)FUN_02f75f70(), plVar7 != (long *)0x0)
     ) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d24cb8 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d24cb8)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
  }
LAB_02f76e84:
  FUN_02f73644();
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_02f651a8();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f66c54();
  }
  return;
}


