/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKHeadEffector$$PostStretching
ENTRY_POINT: 0298f4e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0298f890) */
/* WARNING: Removing unreachable block (ram,0x029900f0) */

void RootMotion_FinalIK_FBBIKHeadEffector__PostStretching(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long *plVar14;
  long *unaff_x20;
  long unaff_x21;
  long lVar15;
  undefined8 uVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  char in_stack_00000038;
  undefined2 uStack000000000000003c;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03d07a98);
  FUN_01ab69ac(PTR_DAT_03d07aa0);
  FUN_01ab69ac(PTR_DAT_03d07aa8);
  FUN_01ab69ac(PTR_DAT_03d07ab0);
  FUN_01ab69ac(PTR_DAT_03d07ab8);
  *(undefined1 *)(unaff_x21 + 0xce3) = 1;
  uStack000000000000003c = 0;
  in_stack_00000038 = '\0';
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  in_stack_00000020 = 0;
  if (unaff_x20 == (long *)0x0) goto LAB_029900e8;
  switch(*(undefined1 *)((long)unaff_x20 + 0x11)) {
  case 1:
  case 0x10:
    if (unaff_x19[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(unaff_x19[2],0);
    if ((uVar8 & 1) != 0) {
      if ((unaff_x19[2] == 0) || (unaff_x19[0x18] == 0)) goto LAB_029900e8;
      lVar15 = *(long *)(unaff_x19[2] + 0xa0);
      uVar4 = FUN_02f0ce18(unaff_x19[0x18],0);
      if (lVar15 == 0) goto LAB_029900e8;
      *(undefined4 *)(lVar15 + 0x3c) = uVar4;
      if ((unaff_x19[2] == 0) || (lVar15 = *(long *)(unaff_x19[2] + 0xa0), lVar15 == 0))
      goto LAB_029900e8;
      FUN_029bf178(lVar15,*(undefined4 *)((long)unaff_x20 + 0x54),0);
    }
    if (unaff_x19[0x18] == 0) goto LAB_029900e8;
    uVar4 = FUN_02f0ce18(unaff_x19[0x18],0);
    *(undefined4 *)((long)unaff_x19 + 0xcc) = uVar4;
    if (unaff_x19[0x18] == 0) goto LAB_029900e8;
    iVar5 = FUN_02f0ce18(unaff_x19[0x18],0);
    uVar2 = iVar5 - (int)unaff_x20[10];
    puVar17 = (uint *)((long)unaff_x19 + 0x7c);
    *puVar17 = uVar2;
    if (10000 < uVar2) {
      if (unaff_x19[2] == 0) goto LAB_029900e8;
      if (2 < *(byte *)(unaff_x19[2] + 0x40)) {
        uVar9 = FUN_0276793c(puVar17,0);
        uVar16 = *(undefined8 *)PTR_DAT_03d07ab8;
        uVar18 = *(undefined8 *)PTR_DAT_03d07aa0;
        uVar10 = (**(code **)(*unaff_x20 + 0x168))();
        FUN_025be45c(uVar18,uVar9,uVar16,uVar10,0);
        FUN_0298e564();
      }
      *(int *)((long)unaff_x19 + 0x7c) = *(int *)((long)unaff_x19 + 0x74) << 2;
    }
    lVar15 = FUN_02994b04();
    FUN_02990210();
    if (lVar15 == 0) {
      return;
    }
    FUN_029901a4(lVar15);
    lVar11 = FUN_0298d23c();
    in_stack_00000038 = '\0';
    FUN_027e0bd8(lVar11,&stack0x00000038,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar11 + 0x68) < *(int *)(lVar15 + 0x14)) {
      *(int *)(lVar11 + 0x68) = *(int *)(lVar15 + 0x14);
    }
    *(int *)(lVar11 + 0x6c) = *(int *)(lVar11 + 0x6c) + -1;
    if (in_stack_00000038 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar11,0);
    }
    uVar2 = *puVar17;
    if (*(char *)(lVar15 + 0x11) == '\f') {
      if (*(int *)((long)unaff_x19 + 0x74) < (int)uVar2) {
        (**(code **)(*unaff_x19 + 0x1e8))();
      }
      else {
        if (unaff_x19[0x18] == 0) goto LAB_029900e8;
        lVar15 = unaff_x19[0x30];
        iVar5 = FUN_02f0ce18(unaff_x19[0x18],0);
        *(int *)((long)unaff_x19 + 0x6c) = ((int)lVar15 + ((int)uVar2 >> 1)) - iVar5;
        *(undefined1 *)(unaff_x19 + 0xe) = 1;
      }
    }
    else {
      FUN_02994e98();
      if (*(char *)(lVar15 + 0x11) == '\x02') {
        uVar2 = *puVar17;
        if (-1 < (int)uVar2) {
          if ((int)uVar2 < 0x10) {
            *(undefined8 *)((long)unaff_x19 + 0x74) = DAT_00d386d8;
          }
          else {
            *(uint *)((long)unaff_x19 + 0x74) = uVar2;
          }
        }
      }
      else if ((*(char *)(lVar15 + 0x11) == '\x04') && ((char)unaff_x19[8] == '\x04')) {
        if (unaff_x19[2] == 0) goto LAB_029900e8;
        if (2 < *(byte *)(unaff_x19[2] + 0x40)) {
          FUN_0298e564();
        }
        thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d079d8);
        FUN_0299c3f0();
        FUN_02994f0c();
      }
    }
    break;
  case 2:
  case 5:
    if (unaff_x19[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(unaff_x19[2],0);
    if ((uVar8 & 1) != 0) {
      if ((unaff_x19[2] == 0) || (lVar15 = *(long *)(unaff_x19[2] + 0xa0), lVar15 == 0))
      goto LAB_029900e8;
      FUN_029bf178(lVar15,*(undefined4 *)((long)unaff_x20 + 0x54),0);
    }
    break;
  case 3:
    if (unaff_x19[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(unaff_x19[2],0);
    if ((uVar8 & 1) != 0) {
      if ((unaff_x19[2] == 0) || (lVar15 = *(long *)(unaff_x19[2] + 0xa0), lVar15 == 0))
      goto LAB_029900e8;
      FUN_029bf178(lVar15,*(undefined4 *)((long)unaff_x20 + 0x54),0);
    }
    if ((char)unaff_x19[8] == '\x01') {
      uVar9 = FUN_029957f4();
      uVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccaef8);
      FUN_029bb504(uVar10,uVar9,0);
      FUN_0298e708();
      if (unaff_x19[2] == 0) goto LAB_029900e8;
      if (*(char *)(unaff_x19[2] + 0x8d) != '\0') {
        FUN_0298d084();
      }
      *(undefined1 *)(unaff_x19 + 8) = 3;
    }
    break;
  case 4:
    if (unaff_x19[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(unaff_x19[2],0);
    if ((uVar8 & 1) != 0) {
      if ((unaff_x19[2] == 0) || (lVar15 = *(long *)(unaff_x19[2] + 0xa0), lVar15 == 0))
      goto LAB_029900e8;
      FUN_029bf178(lVar15,*(undefined4 *)((long)unaff_x20 + 0x54),0);
    }
    lVar15 = unaff_x19[2];
    if (lVar15 == 0) goto LAB_029900e8;
    if (2 < *(byte *)(lVar15 + 0x40)) {
      plVar14 = *(long **)(lVar15 + 0x48);
      lVar15 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,0xc);
      if (lVar15 == 0) goto LAB_029900e8;
      if (*(int *)(lVar15 + 0x18) == 0) {
LAB_029900ec:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)PTR_DAT_03d07a98;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x20));
      if (*(uint *)(lVar15 + 0x18) < 2) goto LAB_029900ec;
      *(long *)(lVar15 + 0x28) = unaff_x19[6];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar15 + 0x28));
      if (*(uint *)(lVar15 + 0x18) < 3) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)PTR_DAT_03d07ab0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x30));
      uStack000000000000003c = (undefined2)unaff_x19[0xd];
      uVar9 = FUN_0278c624(&stack0x0000003c,0);
      if (*(uint *)(lVar15 + 0x18) < 4) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x38) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x38),uVar9);
      if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)PTR_DAT_03d07aa8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x40));
      uVar9 = FUN_0276793c((long)unaff_x19 + 0x74,0);
      if (*(uint *)(lVar15 + 0x18) < 6) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x48) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x48),uVar9);
      if (*(uint *)(lVar15 + 0x18) < 7) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)PTR_DAT_03cc16b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x50));
      uVar9 = FUN_0276793c(unaff_x19 + 0xf,0);
      if (*(uint *)(lVar15 + 0x18) < 8) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x58) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x58),uVar9);
      if (*(uint *)(lVar15 + 0x18) < 9) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)PTR_DAT_03d07a78;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x60));
      uVar9 = FUN_026b7320(unaff_x20 + 4,0);
      if (*(uint *)(lVar15 + 0x18) < 10) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x68) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x68),uVar9);
      if (*(uint *)(lVar15 + 0x18) < 0xb) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x70) = *(undefined8 *)PTR_DAT_03d07a90;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x70));
      in_stack_00000008 = *(undefined8 *)PTR_DAT_03d079f0;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000018 = (undefined1)unaff_x19[8];
      uVar9 = FUN_027a62b8(&stack0x00000008,0);
      if (*(uint *)(lVar15 + 0x18) < 0xc) goto LAB_029900ec;
      *(undefined8 *)(lVar15 + 0x78) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar9 = FUN_025be564(lVar15,0);
      if (plVar14 == (long *)0x0) goto LAB_029900e8;
      lVar15 = *plVar14;
      uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cca060) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0298fd7c;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cca060,0);
LAB_0298fd7c:
      (*(code *)*puVar7)(plVar14,3,uVar9,puVar7[1]);
    }
    if ((*(byte *)(unaff_x19 + 8) | 4) != 4) {
      FUN_0298e1e4();
      (**(code **)(*unaff_x19 + 0x1c8))();
    }
    break;
  case 6:
  case 7:
  case 0xb:
  case 0xe:
    if (unaff_x19[2] == 0) goto LAB_029900e8;
    uVar8 = FUN_0299ec14(unaff_x19[2],0);
    if ((uVar8 & 1) != 0) {
      if ((unaff_x19[2] == 0) || (lVar15 = *(long *)(unaff_x19[2] + 0xa0), lVar15 == 0))
      goto LAB_029900e8;
      if ((*(byte *)(unaff_x20 + 2) & 1) == 0) {
        FUN_029b3ed8();
      }
      else {
        FUN_029b3ebc(lVar15,*(undefined4 *)((long)unaff_x20 + 0x54),0);
      }
    }
    if (((char)unaff_x19[8] == '\x03') && (uVar8 = FUN_02995008(), (uVar8 & 1) != 0)) {
      return;
    }
    break;
  case 8:
  case 0xf:
    if ((char)unaff_x19[8] == '\x03') {
      if (unaff_x19[2] == 0) goto LAB_029900e8;
      uVar8 = FUN_0299ec14(unaff_x19[2],0);
      if ((uVar8 & 1) != 0) {
        if ((unaff_x19[2] == 0) || (lVar15 = *(long *)(unaff_x19[2] + 0xa0), lVar15 == 0))
        goto LAB_029900e8;
        FUN_029c0c74(lVar15,*(undefined4 *)((long)unaff_x20 + 0x54),0);
      }
      if ((*(int *)((long)unaff_x20 + 0x2c) <= (int)unaff_x20[5]) &&
         (iVar5 = *(int *)((long)unaff_x20 + 0x34), iVar5 < (int)unaff_x20[6])) {
        if (unaff_x20[0xb] == 0) goto LAB_029900e8;
        iVar3 = FUN_029b4004(unaff_x20[0xb],0);
        if (iVar3 + iVar5 <= (int)unaff_x20[6]) {
          cVar1 = *(char *)((long)unaff_x20 + 0x11);
          lVar15 = FUN_0298d23c();
          in_stack_00000030 = (long *)0x0;
          if (lVar15 == 0) goto LAB_029900e8;
          uVar8 = FUN_0298bc2c(lVar15,*(undefined4 *)((long)unaff_x20 + 0x24),cVar1 == '\b',
                               &stack0x00000030);
          if ((uVar8 & 1) != 0) {
            if (in_stack_00000030 == (long *)0x0) goto LAB_029900e8;
            if ((int)in_stack_00000030[7] < 1) break;
          }
          uVar12 = FUN_02995008();
          if ((uVar12 & 1) != 0) {
            iVar5 = *(int *)((long)unaff_x20 + 0x14);
            if (iVar5 == *(int *)((long)unaff_x20 + 0x24)) {
              in_stack_00000028 = 0;
              iVar3 = (int)unaff_x20[7] + -1;
              *(int *)(unaff_x20 + 7) = iVar3;
              in_stack_00000030 = unaff_x20;
              while ((0 < iVar3 &&
                     (iVar5 = iVar5 + 1,
                     iVar5 < (int)in_stack_00000030[5] + *(int *)((long)in_stack_00000030 + 0x24))))
              {
                uVar8 = FUN_0298bc2c(lVar15,iVar5,cVar1 == '\b',&stack0x00000028);
                if ((uVar8 & 1) == 0) {
                  if (in_stack_00000030 == (long *)0x0) goto LAB_029900e8;
                }
                else {
                  if (in_stack_00000030 == (long *)0x0) goto LAB_029900e8;
                  *(int *)(in_stack_00000030 + 7) = (int)in_stack_00000030[7] + -1;
                }
                iVar3 = (int)in_stack_00000030[7];
              }
            }
            else if ((uVar8 & 1) == 0) {
              if (in_stack_00000030 == (long *)0x0) {
                return;
              }
            }
            else {
              if (in_stack_00000030 == (long *)0x0) goto LAB_029900e8;
              *(int *)(in_stack_00000030 + 7) = (int)in_stack_00000030[7] + -1;
            }
            if (0 < (int)in_stack_00000030[7]) {
              return;
            }
            if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar11 = FUN_02992d88();
            if ((lVar11 != 0) && (FUN_029b3f74(lVar11,0,0), in_stack_00000030 != (long *)0x0)) {
              thunk_FUN_029bb694(lVar11,(int)in_stack_00000030[6],0);
              uVar9 = FUN_029b3f64(lVar11,0);
              if (in_stack_00000030 != (long *)0x0) {
                iVar5 = *(int *)((long)in_stack_00000030 + 0x24);
                if (iVar5 < (int)in_stack_00000030[5] + iVar5) {
                  do {
                    uVar8 = FUN_0298bc2c(lVar15,iVar5,cVar1 == '\b',&stack0x00000020);
                    if ((uVar8 & 1) == 0) {
                      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
                      uVar9 = thunk_FUN_01a89e68();
                      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d07ac0);
                      FUN_027a794c(uVar9,uVar10,0);
                      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d07ac8);
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6b14(uVar9,uVar10);
                    }
                    if ((((in_stack_00000020 == 0) || (*(long *)(in_stack_00000020 + 0x58) == 0)) ||
                        (uVar10 = FUN_029b3f64(*(long *)(in_stack_00000020 + 0x58),0),
                        in_stack_00000020 == 0)) || (*(long *)(in_stack_00000020 + 0x58) == 0))
                    goto LAB_029900e8;
                    uVar4 = *(undefined4 *)(in_stack_00000020 + 0x34);
                    uVar6 = FUN_029b4004(*(long *)(in_stack_00000020 + 0x58),0);
                    FUN_0279cdc8(uVar10,0,uVar9,uVar4,uVar6,0);
                    if (((in_stack_00000020 == 0) || (FUN_029901a4(), in_stack_00000020 == 0)) ||
                       (FUN_0298bccc(lVar15,*(undefined4 *)(in_stack_00000020 + 0x14),cVar1 == '\b')
                       , in_stack_00000020 == 0)) goto LAB_029900e8;
                    if (0 < *(int *)(in_stack_00000020 + 0x2c)) {
                      FUN_02990210();
                    }
                    if (in_stack_00000030 == (long *)0x0) goto LAB_029900e8;
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)in_stack_00000030[5] +
                                   *(int *)((long)in_stack_00000030 + 0x24));
                }
                FUN_029b3e94(lVar11,(long)(int)in_stack_00000030[6],0);
                if (in_stack_00000030 != (long *)0x0) {
                  in_stack_00000030[0xb] = lVar11;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (in_stack_00000030 + 0xb,lVar11);
                  if (in_stack_00000030 != (long *)0x0) {
                    *(int *)((long)in_stack_00000030 + 0x54) =
                         (int)in_stack_00000030[6] + (int)in_stack_00000030[5] * 0xc;
                    if (cVar1 == '\b') {
                      if (*(long *)(lVar15 + 0x18) != 0) {
                        in_stack_00000008 =
                             CONCAT44(in_stack_00000008._4_4_,
                                      *(undefined4 *)((long)in_stack_00000030 + 0x24));
                        Liv_Lck_LckService__remove_OnLowStorageSpace
                                  (*(long *)(lVar15 + 0x18),&stack0x00000008,in_stack_00000030,
                                   *(undefined8 *)PTR_DAT_03d078d0);
                        return;
                      }
                    }
                    else if (*(long *)(lVar15 + 0x28) != 0) {
                      FUN_02265dfc(*(long *)(lVar15 + 0x28),in_stack_00000030,
                                   *(undefined8 *)PTR_DAT_03d078d8);
                      return;
                    }
                  }
                }
              }
            }
            goto LAB_029900e8;
          }
          break;
        }
      }
      lVar15 = unaff_x19[2];
      if (lVar15 == 0) {
LAB_029900e8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(char *)(lVar15 + 0x40) != '\0') {
        plVar14 = *(long **)(lVar15 + 0x48);
        uVar10 = *(undefined8 *)PTR_DAT_03d07a88;
        uVar9 = (**(code **)(*unaff_x20 + 0x168))();
        uVar9 = FUN_025b1328(uVar10,uVar9,0);
        if (plVar14 == (long *)0x0) goto LAB_029900e8;
        lVar15 = *plVar14;
        uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cca060) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0298fd58;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cca060,0);
LAB_0298fd58:
        (*(code *)*puVar7)(plVar14,1,uVar9,puVar7[1]);
      }
    }
    break;
  default:
    goto switchD_0298f560_caseD_9;
  }
  FUN_02990210();
switchD_0298f560_caseD_9:
  return;
}


