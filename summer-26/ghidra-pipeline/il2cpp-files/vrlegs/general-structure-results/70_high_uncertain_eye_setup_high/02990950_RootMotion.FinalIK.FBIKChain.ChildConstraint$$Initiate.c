/*
FUNCTION_NAME: RootMotion.FinalIK.FBIKChain.ChildConstraint$$Initiate
ENTRY_POINT: 02990950
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02990a5c) */
/* WARNING: Removing unreachable block (ram,0x029909d4) */
/* WARNING: Removing unreachable block (ram,0x02990b00) */

bool RootMotion_FinalIK_FBIKChain_ChildConstraint__Initiate
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  bool bVar12;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  undefined8 unaff_x25;
  int unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  byte bStack000000000000000c;
  int iStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  char cStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  do {
    (*param_1)(unaff_x24,param_3,unaff_x25,param_5);
    do {
      *(int *)(unaff_x20 + 0x178) = *(int *)(unaff_x20 + 0x178) + 1;
      iVar1 = unaff_w29;
LAB_02990968:
      unaff_w29 = iVar1;
      lVar7 = *(long *)(unaff_x20 + 0x128);
      unaff_w23 = unaff_w23 + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar7 + 0x18) <= unaff_w23) {
LAB_029909a0:
        *(int *)(unaff_x20 + 200) = unaff_w29;
        if (cStack000000000000001c != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
        }
        if (*(char *)(unaff_x20 + 0x150) == '\0') {
          bVar12 = false;
        }
        else {
          if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar10 = FUN_0299ec14(*(long *)(unaff_x20 + 0x10),0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xa8);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + 1;
            *(uint *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + (uint)*(byte *)(unaff_x20 + 0x150);
          }
          FUN_029910c8();
          bVar12 = 0 < unaff_w28 + iStack0000000000000008;
        }
        if (in_stack_00000020._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0();
        }
        return bVar12;
      }
      FUN_02215a88(lVar7,unaff_w23,&stack0x00000028,*unaff_x22);
      lVar7 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar4 = *(int *)(lVar7 + 0x3c);
      iVar1 = *(int *)(lVar7 + 0x44);
      iVar3 = FUN_02f0ce18(*(long *)(unaff_x20 + 0xc0),0);
      iVar1 = iVar1 + iVar4;
      if (iVar3 <= iVar1) {
        if (unaff_w29 <= iVar1) {
          iVar1 = unaff_w29;
        }
        goto LAB_02990968;
      }
      bVar2 = FUN_02990f80();
      if ((bVar2 & 1) == 0) {
        if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        unaff_w29 = *(int *)(unaff_x20 + 200);
        iVar4 = FUN_0299ebac(*(long *)(unaff_x20 + 0x10),0);
        unaff_w28 = unaff_w28 + 1;
        iVar1 = unaff_w29;
        if (iVar4 - *(int *)(unaff_x20 + 0x160) < 0x50) goto LAB_029909a0;
        goto LAB_02990968;
      }
      lVar9 = *(long *)(unaff_x20 + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    } while (*(byte *)(lVar9 + 0x40) < 5);
    unaff_x24 = *(long **)(lVar9 + 0x48);
    plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,6);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
    if (lVar9 == 0) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[4] = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar7);
    if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uStack0000000000000028 = FUN_02f0ce18(*(long *)(unaff_x20 + 0xc0),0);
    lVar7 = thunk_FUN_01a89a98(*unaff_x21,&stack0x00000028);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[5] = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 5,lVar7);
    uStack0000000000000018 = *(undefined4 *)(unaff_x20 + 0x74);
    lVar7 = thunk_FUN_01a89a98(*unaff_x21,&stack0x00000018);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[6] = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 6,lVar7);
    uStack0000000000000014 = *(undefined4 *)(unaff_x20 + 0x78);
    lVar7 = thunk_FUN_01a89a98(*unaff_x21,(long)&stack0x00000010 + 4);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar5 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[7] = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 7,lVar7);
    if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iStack0000000000000010 = FUN_02f0ce18(*(long *)(unaff_x20 + 0xc0),0);
    iStack0000000000000010 = iStack0000000000000010 - *(int *)(unaff_x20 + 0x88);
    lVar7 = thunk_FUN_01a89a98(*unaff_x21,&stack0x00000010);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar5 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[8] = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 8,lVar7);
    bStack000000000000000c = bVar2 & 1;
    lVar7 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeb20,(long)&stack0x00000008 + 4);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar5 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[9] = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 9,lVar7);
    unaff_x25 = FUN_025be8f4(*(undefined8 *)PTR_DAT_03d07ae8,plVar5,0);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cca060) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02990948;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(unaff_x24,*(long *)PTR_DAT_03cca060,0);
LAB_02990948:
    param_1 = (code *)*puVar6;
    param_5 = puVar6[1];
    param_3 = 5;
  } while( true );
}


