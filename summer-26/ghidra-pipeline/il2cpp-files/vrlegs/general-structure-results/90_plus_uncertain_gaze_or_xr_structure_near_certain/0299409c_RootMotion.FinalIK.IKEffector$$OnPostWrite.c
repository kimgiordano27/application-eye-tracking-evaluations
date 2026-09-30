/*
FUNCTION_NAME: RootMotion.FinalIK.IKEffector$$OnPostWrite
ENTRY_POINT: 0299409c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029946b0) */
/* WARNING: Removing unreachable block (ram,0x029945ac) */
/* WARNING: Removing unreachable block (ram,0x029945b0) */
/* WARNING: Removing unreachable block (ram,0x02994724) */

void RootMotion_FinalIK_IKEffector__OnPostWrite(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint in_w8;
  long lVar7;
  int in_w9;
  ulong uVar8;
  uint in_w10;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar10;
  int unaff_w22;
  undefined8 uVar11;
  uint uVar12;
  long *unaff_x26;
  int iStack0000000000000004;
  char cStack0000000000000008;
  int iStack000000000000000c;
  char in_stack_00000010;
  int in_stack_00000018;
  byte bStack000000000000001c;
  int iStack000000000000002c;
  
  if (unaff_w21 == 1) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x100) == 0) {
      return;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_029a288c(&stack0x00000018);
    if (in_stack_00000018 != *(int *)(unaff_x19 + 0x174)) {
      *(int *)(unaff_x19 + 0x5c) = *(int *)(unaff_x19 + 0x5c) + 1;
      return;
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar10 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0x100);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d07ad0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0299431c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03d07ad0,2);
LAB_0299431c:
    lVar7 = (*(code *)*puVar5)(plVar10);
    if (*(char *)(unaff_x19 + 0x184) == '\0') {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x158);
      in_stack_00000010 = '\0';
      FUN_027e0bd8(uVar11,&stack0x00000010,0);
      *(undefined1 *)(unaff_x19 + 0x184) = 1;
      *(undefined4 *)(unaff_x19 + 0x198) = 0;
      if (in_stack_00000010 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
      }
    }
    iStack000000000000002c = 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    bStack000000000000001c = *(byte *)(lVar7 + 0x20);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_029a288c(unaff_x19 + 0x180,lVar7,&stack0x0000002c,0);
    lVar7 = *(long *)(unaff_x19 + 0x98) + (long)unaff_w22;
  }
  else {
    if (*(char *)(unaff_x19 + 0x184) != '\0') {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(byte *)(*(long *)(unaff_x19 + 0x10) + 0x40) < 2) {
        return;
      }
      FUN_0298e564();
      return;
    }
    iStack000000000000002c = in_w9 + 2;
    if (in_w10 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    bStack000000000000001c = *(byte *)(unaff_x20 + (int)in_w8 + 0x20);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_029a288c(unaff_x19 + 0x180);
    FUN_029a288c(&stack0x00000018);
    if (in_stack_00000018 != *(int *)(unaff_x19 + 0x174)) {
      *(int *)(unaff_x19 + 0x5c) = *(int *)(unaff_x19 + 0x5c) + 1;
      if (*(char *)(unaff_x19 + 0x40) == '\0') {
        return;
      }
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        if (*(byte *)(*(long *)(unaff_x19 + 0x10) + 0x40) < 5) {
          return;
        }
        uVar11 = FUN_0276793c(&stack0x00000018,0);
        uVar6 = FUN_0276793c(unaff_x19 + 0x174,0);
        FUN_025be45c(*(undefined8 *)PTR_DAT_03d07bc8,uVar11,*(undefined8 *)PTR_DAT_03d07bd8,uVar6,0)
        ;
        FUN_0298e564();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (unaff_w21 == 0xcc) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_029a288c((long)&stack0x00000008 + 4);
      *(long *)(unaff_x19 + 0x98) = *(long *)(unaff_x19 + 0x98) + 4;
      iStack000000000000002c = iStack000000000000002c + -4;
      FUN_029a25d0(0);
      if (*(int *)(*(long *)PTR_DAT_03cc9f98 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar3 = FUN_029be0d0();
      if (iStack000000000000000c != iVar3) {
        *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x19 + 0x58) + 1;
        puVar2 = PTR_DAT_03cc4ad8;
        if (*(char *)(unaff_x19 + 0x40) == '\0') {
          return;
        }
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          if (*(byte *)(*(long *)(unaff_x19 + 0x10) + 0x40) < 3) {
            return;
          }
          iStack0000000000000004 = iStack000000000000000c;
          uVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&stack0x00000004);
          uVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar2);
          FUN_025be86c(*(undefined8 *)PTR_DAT_03d07be0,uVar11,uVar6,0);
          FUN_0298e564();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    lVar7 = *(long *)(unaff_x19 + 0x98) + 0xc;
  }
  *(long *)(unaff_x19 + 0x98) = lVar7;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar8 = FUN_0299ec14(*(long *)(unaff_x19 + 0x10),0);
  if ((uVar8 & 1) == 0) {
    if (bStack000000000000001c != 0) goto LAB_0299441c;
  }
  else {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + 1;
    *(uint *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + (uint)bStack000000000000001c;
    if (bStack000000000000001c != 0) {
LAB_0299441c:
      if ((int)(uint)bStack000000000000001c <= *(int *)(unaff_x19 + 0x170)) goto LAB_02994484;
    }
  }
  uVar11 = FUN_026b7320(&stack0x0000001c,0);
  uVar6 = FUN_0276793c(unaff_x19 + 0x170,0);
  FUN_025be45c(*(undefined8 *)PTR_DAT_03d07bc0,uVar11,*(undefined8 *)PTR_DAT_03d07bd0,uVar6,0);
  FUN_0298e564();
  if (bStack000000000000001c == 0) {
    return;
  }
LAB_02994484:
  puVar2 = PTR_DAT_03d078d8;
  bVar1 = false;
  uVar12 = 0;
  do {
    if (*(long *)(unaff_x19 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = FUN_02994944();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((*(char *)(lVar7 + 0x11) == '\x01') || (*(char *)(lVar7 + 0x11) == '\x10')) {
      FUN_0298f414();
      bVar1 = true;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x1a8);
      cStack0000000000000008 = '\0';
      FUN_027e0bd8(uVar11,&stack0x00000008,0);
      if (*(long *)(unaff_x19 + 0x1a8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02265dfc(*(long *)(unaff_x19 + 0x1a8),lVar7,*(undefined8 *)puVar2);
      if (cStack0000000000000008 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
      }
    }
    if ((*(byte *)(lVar7 + 0x10) & 1) != 0) {
      FUN_02993d14();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = FUN_0299ec14(*(long *)(unaff_x19 + 0x10),0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(unaff_x19 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa0);
        uVar4 = FUN_02f0ce18(*(long *)(unaff_x19 + 0xc0),0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(undefined4 *)(lVar7 + 0x40) = uVar4;
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_029bf178(lVar7,0x14,0);
      }
    }
    uVar12 = uVar12 + 1;
    if (bStack000000000000001c <= uVar12) {
      if (bVar1) {
        thunk_FUN_01aa519c(unaff_x19 + 0x130,1,0,0);
      }
      return;
    }
  } while( true );
}


