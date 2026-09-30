/*
FUNCTION_NAME: UniGLTF.GltfData$$GetBytesFromUri
ENTRY_POINT: 02f76a54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f77078) */
/* WARNING: Removing unreachable block (ram,0x02f77070) */
/* WARNING: Removing unreachable block (ram,0x02f770e8) */

void UniGLTF_GltfData__GetBytesFromUri(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long in_x10;
  int *piVar10;
  long in_x11;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x24;
  int iVar11;
  long lVar12;
  long *unaff_x29;
  undefined1 uStack0000000000000008;
  char cStack000000000000000c;
  
  lVar12 = unaff_x22;
  if (*(long *)(param_1 + in_x11 * 8 + -8) != in_x10) {
    lVar12 = 0;
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
    if ((unaff_x20 != (long *)0x0) && (lVar5 = thunk_FUN_01a89d6c(), lVar5 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[4] = (long)unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((unaff_x24 != 0) && (lVar5 = thunk_FUN_01a89d6c(), lVar5 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[5] = unaff_x24;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((lVar12 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if (*(uint *)(plVar4 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[6] = lVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar12);
    uStack0000000000000008 = unaff_x22 == 0;
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeb20,&stack0x00000008);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
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
  if (lVar12 == 0) {
    if (unaff_x24 == 0) {
      if (unaff_x20 == (long *)0x0) {
        if (unaff_x22 != 0) {
          thunk_FUN_01a6ca08(PTR_DAT_03d24c20);
          uVar7 = thunk_FUN_01a89e68();
          FUN_02f79548(uVar7,0);
          uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d25148);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar7,uVar9);
        }
        lVar12 = *plVar4;
        if (lVar12 != 0) {
          FUN_02f7402c();
          lVar5 = unaff_x19[0x1d];
          uVar1 = *(undefined4 *)(lVar12 + 0x104);
          plVar4 = *(long **)(lVar12 + 0xb0);
          uVar7 = *(undefined8 *)(lVar12 + 0x108);
          if (plVar4 == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02f785b4(lVar5,uVar1,uVar7,uVar9,0);
        }
      }
      else {
        lVar12 = unaff_x19[7];
        cStack000000000000000c = '\0';
        FUN_027e0bd8(lVar12,(long)&stack0x00000008 + 4,0);
        if (*(char *)((long)unaff_x19 + 0xa1) == '\0') {
          unaff_x19[0x1a] = (long)unaff_x20;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          iVar11 = 0x12;
        }
        else {
          lVar5 = *unaff_x20;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d24f10) {
                puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02f76fc0;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec();
LAB_02f76fc0:
          (*(code *)*puVar8)();
          iVar11 = 8;
        }
        if (cStack000000000000000c != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(lVar12,0);
        }
        if ((iVar11 == 0x12) || (iVar11 == 0)) {
          (**(code **)(*unaff_x19 + 0x298))();
          FUN_02f71d64();
          FUN_02f7402c();
          (**(code **)(*unaff_x20 + 0x1a8))();
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
    unaff_x24 = FUN_02f75e0c();
    if (unaff_x24 == 0) goto LAB_02f76e84;
  }
  lVar12 = unaff_x19[7];
  cStack000000000000000c = '\0';
  FUN_027e0bd8(lVar12,(long)&stack0x00000008 + 4,0);
  if (*(char *)((long)unaff_x19 + 0xa1) == '\0') {
    *plVar4 = unaff_x24;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,unaff_x24);
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
    iVar11 = 0xd;
  }
  else {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02f651a8();
    if ((uVar3 & 1) != 0) {
      plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = thunk_FUN_01a89d6c(unaff_x24,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar5 == 0) {
        uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,0);
      }
      if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar4[4] = unaff_x24;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,unaff_x24);
      FUN_026780b0(*(undefined8 *)PTR_DAT_03d25138,plVar4,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f6520c();
    }
    FUN_02f78e78(unaff_x24,0);
    iVar11 = 8;
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar12,0);
  }
  if (((iVar11 == 0xd) || (iVar11 == 0)) && (plVar4 = (long *)FUN_02f75f70(), plVar4 != (long *)0x0)
     ) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_03d24cb8 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03d24cb8)) {
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


