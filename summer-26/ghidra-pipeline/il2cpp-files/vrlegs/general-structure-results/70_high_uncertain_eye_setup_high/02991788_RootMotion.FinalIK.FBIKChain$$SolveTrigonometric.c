/*
FUNCTION_NAME: RootMotion.FinalIK.FBIKChain$$SolveTrigonometric
ENTRY_POINT: 02991788
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x02991f0c) */
/* WARNING: Removing unreachable block (ram,0x02991e18) */
/* WARNING: Removing unreachable block (ram,0x02991f34) */
/* WARNING: Removing unreachable block (ram,0x02991ecc) */
/* WARNING: Removing unreachable block (ram,0x02991fac) */

bool RootMotion_FinalIK_FBIKChain__SolveTrigonometric(long *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x20;
  bool bVar13;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  long *plVar14;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  char cStack0000000000000014;
  char cStack0000000000000018;
  char cStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  do {
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1,param_2);
    uStack0000000000000010 = *(undefined4 *)((long)unaff_x20 + 0x74);
    lVar5 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000010);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x26 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if (*(uint *)(unaff_x26 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x26[6] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x26 + 6,lVar5);
    uStack000000000000000c = (undefined4)unaff_x20[0xf];
    lVar5 = thunk_FUN_01a89a98(*unaff_x28,(long)&stack0x00000008 + 4);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x26 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if (*(uint *)(unaff_x26 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x26[7] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x26 + 7,lVar5);
    if (unaff_x20[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iStack0000000000000008 = FUN_02f0ce18(unaff_x20[0x18],0);
    iStack0000000000000008 = iStack0000000000000008 - (int)unaff_x20[0x11];
    lVar5 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000008);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x26 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if (*(uint *)(unaff_x26 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x26[8] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x26 + 8,lVar5);
    uVar7 = FUN_025be8f4(*(undefined8 *)PTR_DAT_03d07b00,unaff_x26,0);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = *unaff_x25;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cca060) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02991934;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(unaff_x25,*(long *)PTR_DAT_03cca060,0);
LAB_02991934:
    (*(code *)*puVar8)(unaff_x25,5,uVar7,puVar8[1]);
    do {
      *(int *)(unaff_x20 + 0x2f) = (int)unaff_x20[0x2f] + 1;
      iVar3 = unaff_w22;
LAB_02991954:
      unaff_w22 = iVar3;
      lVar5 = unaff_x20[0x25];
      unaff_w23 = unaff_w23 + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar5 + 0x18) <= unaff_w23) {
LAB_02991964:
        unaff_w21 = unaff_w29 + unaff_w21;
        *(int *)(unaff_x20 + 0x19) = unaff_w22;
        iVar3 = 0x18;
        goto LAB_02991bbc;
      }
      FUN_02215a88(lVar5,unaff_w23,&stack0x00000028,*unaff_x27);
      lVar5 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (unaff_x20[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar4 = *(int *)(lVar5 + 0x3c);
      iVar3 = *(int *)(lVar5 + 0x44);
      iVar2 = FUN_02f0ce18(unaff_x20[0x18],0);
      iVar3 = iVar3 + iVar4;
      if (iVar2 <= iVar3) {
        if (unaff_w22 <= iVar3) {
          iVar3 = unaff_w22;
        }
        goto LAB_02991954;
      }
      lVar6 = unaff_x20[2];
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar6 + 0x70) < (int)(uint)*(byte *)(lVar5 + 0x40)) {
LAB_02991980:
        if (*(byte *)(lVar6 + 0x40) < 2) goto LAB_02991b88;
        if (unaff_x20[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar14 = *(long **)(lVar6 + 0x48);
        uStack0000000000000028 = FUN_02f0ce18(unaff_x20[0x18],0);
        uVar7 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000028);
        uVar1 = *(undefined4 *)((long)unaff_x20 + 0x174);
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_027401e4(uVar1,0x10,0);
        uVar7 = FUN_025be8b0(*(undefined8 *)PTR_DAT_03d07b08,lVar5,uVar7,uVar9,0);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar6 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar11 == 0) goto LAB_02991a44;
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_02991a2c;
      }
      if (unaff_x20[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar3 = FUN_02f0ce18(unaff_x20[0x18],0);
      if (*(int *)(lVar5 + 0x48) < iVar3) {
        lVar6 = unaff_x20[2];
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        goto LAB_02991980;
      }
      uVar11 = FUN_02990f80();
      if ((uVar11 & 1) == 0) {
        if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        unaff_w22 = (int)unaff_x20[0x19];
        iVar4 = FUN_0299ebac(unaff_x20[2],0);
        unaff_w29 = unaff_w29 + 1;
        iVar3 = unaff_w22;
        if (iVar4 - (int)unaff_x20[0x2c] < 0x50) goto LAB_02991964;
        goto LAB_02991954;
      }
      lVar6 = unaff_x20[2];
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    } while (*(byte *)(lVar6 + 0x40) < 5);
    unaff_x25 = *(long **)(lVar6 + 0x48);
    unaff_x26 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,5);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x26 + 0x40));
    if (lVar6 == 0) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if ((int)unaff_x26[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x26[4] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x26 + 4,lVar5);
    if (unaff_x20[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uStack0000000000000028 = FUN_02f0ce18(unaff_x20[0x18],0);
    param_2 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000028);
    if ((param_2 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(param_2,*(undefined8 *)(*unaff_x26 + 0x40)), lVar5 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if (*(uint *)(unaff_x26 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    param_1 = unaff_x26 + 5;
    *param_1 = param_2;
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02991a2c:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cca060) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02991a60;
    }
  }
LAB_02991a44:
  puVar8 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cca060,0);
LAB_02991a60:
  (*(code *)*puVar8)(plVar14,2,uVar7,puVar8[1]);
  lVar6 = unaff_x20[2];
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (2 < *(byte *)(lVar6 + 0x40)) {
    plVar14 = *(long **)(lVar6 + 0x48);
    uStack0000000000000028 = (**(code **)(*unaff_x20 + 0x178))();
    uVar7 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000028);
    lVar6 = FUN_0298d23c();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uStack0000000000000010 = *(undefined4 *)(lVar6 + 0x70);
    uVar9 = thunk_FUN_01a89a98(*unaff_x28,&stack0x00000010);
    if (unaff_x20[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uStack000000000000000c = *(undefined4 *)(unaff_x20[0x25] + 0x18);
    uVar10 = thunk_FUN_01a89a98(*unaff_x28,(long)&stack0x00000008 + 4);
    uVar7 = FUN_025be8b0(*(undefined8 *)PTR_DAT_03d07b10,uVar7,uVar9,uVar10,0);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cca060) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02991b74;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cca060,0);
LAB_02991b74:
    (*(code *)*puVar8)(plVar14,3,uVar7,puVar8[1]);
  }
LAB_02991b88:
  *(undefined1 *)(unaff_x20 + 8) = 6;
  FUN_0298e1e4();
  (**(code **)(*unaff_x20 + 0x1c8))();
  FUN_02990210(lVar5);
  iVar3 = 3;
LAB_02991bbc:
  if (cStack000000000000001c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
  }
  if ((iVar3 != 0x18) && (iVar3 != 0)) {
LAB_02991e80:
    bVar13 = false;
LAB_02991e88:
    if (in_stack_00000020._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return bVar13;
  }
  if ((char)unaff_x20[8] == '\x03') {
    if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (0 < *(int *)(unaff_x20[2] + 0x78)) {
      if (unaff_x20[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(unaff_x20[0x25] + 0x18) == 0) {
        if (unaff_x20[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar3 = FUN_02f0ce18(unaff_x20[0x18],0);
        if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(unaff_x20[2] + 0x78) < iVar3 - *(int *)((long)unaff_x20 + 0xcc)) {
          iVar3 = FUN_02990364();
          if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar4 = FUN_0299ebac(unaff_x20[2],0);
          if (iVar3 <= iVar4) {
            if (unaff_x20[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar5 = FUN_0298d380();
            FUN_0298d54c();
            if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar11 = FUN_0299ec14(unaff_x20[2],0);
            if ((uVar11 & 1) != 0) {
              if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              lVar6 = *(long *)(unaff_x20[2] + 0xa8);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_029bf178(lVar6,*(undefined4 *)(lVar5 + 0x54),0);
            }
          }
        }
      }
    }
  }
  iVar3 = thunk_FUN_01aa519c(unaff_x20 + 0x26,1,1,0);
  if (iVar3 == 1) {
    FUN_029922d8();
  }
  lVar6 = unaff_x20[0x31];
  cStack0000000000000018 = '\0';
  FUN_027e0bd8(lVar6,&stack0x00000018,0);
  lVar5 = unaff_x20[0x31];
  if (lVar5 != 0) {
    uVar11 = 0;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar11) {
        if (cStack0000000000000018 != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(lVar6,0);
        }
        if ((char)unaff_x20[0x2a] == '\0') goto LAB_02991e80;
        if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar11 = FUN_0299ec14(unaff_x20[2],0);
        if ((uVar11 & 1) != 0) {
          if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar5 = *(long *)(unaff_x20[2] + 0xa8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
          *(uint *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + (uint)*(byte *)(unaff_x20 + 0x2a);
        }
        FUN_029910c8();
        bVar13 = 0 < unaff_w21;
        goto LAB_02991e88;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar5 = *(long *)(lVar5 + uVar11 * 8 + 0x20);
      cStack0000000000000014 = '\0';
      FUN_027e0bd8(lVar5,(long)&stack0x00000010 + 4,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (unaff_x20[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar3 = FUN_0299295c();
      iVar4 = FUN_0299295c();
      unaff_w21 = iVar4 + iVar3 + unaff_w21;
      if (cStack0000000000000014 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar5,0);
      }
      lVar5 = unaff_x20[0x31];
      uVar11 = uVar11 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


