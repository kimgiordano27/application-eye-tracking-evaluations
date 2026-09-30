/*
FUNCTION_NAME: Renci.SshNet.Sftp.Requests.SftpCloseRequest$$.ctor
ENTRY_POINT: 07657654
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


void Renci_SshNet_Sftp_Requests_SftpCloseRequest___ctor(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  uint in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  int iStack0000000000000040;
  uint uStack0000000000000044;
  ulong in_stack_00000048;
  
  while( true ) {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0765627c(unaff_x27);
    uVar4 = FUN_0765549c();
    while( true ) {
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar5 = FUN_076570a0(uVar4,unaff_x28);
      if ((uVar5 & 1) == 0) break;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar4 = FUN_07656504(uVar4);
      unaff_x27 = (ulong)((int)unaff_x27 - 1);
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar6 = FUN_07656504(unaff_x28,uVar4);
    if (0 < iStack0000000000000040) {
      if (lVar6 == 0) goto LAB_07657958;
      lVar6 = *(long *)(lVar6 + 0x10);
      iVar3 = 0;
      uVar5 = unaff_x22;
      do {
        if (lVar6 == 0) goto LAB_07657958;
        uVar7 = iVar3 + *(int *)(unaff_x24 + 0x18);
        if ((*(uint *)(lVar6 + 0x18) <= uVar7) ||
           (uVar2 = unaff_w19 + iVar3, *(uint *)(unaff_x21 + 0x18) <= uVar2)) goto LAB_07657954;
        uVar5 = uVar5 - 1;
        iVar3 = iVar3 + -1;
        *(undefined4 *)(unaff_x21 + (long)(int)uVar2 * 4 + 0x20) =
             *(undefined4 *)(lVar6 + (long)(int)uVar7 * 4 + 0x20);
      } while (uVar5 != 0);
    }
    if (in_stack_00000038 == 0) goto LAB_07657958;
    if (*(uint *)(in_stack_00000038 + 0x18) <= in_stack_00000048) break;
    lVar6 = in_stack_00000048 * 4;
    in_stack_00000048 = in_stack_00000048 + 1;
    *(int *)(in_stack_00000038 + lVar6 + 0x20) = (int)unaff_x27;
    if (in_stack_00000048 == in_stack_00000028) {
      if (in_stack_00000020 == 0) goto LAB_07657958;
      *(uint *)(in_stack_00000020 + 0x18) = in_stack_00000008;
      if ((int)(in_stack_00000008 - 1) < 0) {
        in_stack_00000008 = 0;
        goto LAB_07657800;
      }
      if (in_stack_00000038 == 0) goto LAB_07657958;
      lVar6 = *(long *)(in_stack_00000020 + 0x10);
      uVar7 = *(uint *)(in_stack_00000038 + 0x18);
      uVar5 = 0;
      lVar10 = 0xffffffff;
      goto Renci_SshNet_Sftp_Requests_SftpFSetStatRequest__set_Attributes;
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if ((uVar7 <= uStack0000000000000044) || (uVar2 = uStack0000000000000044 - 1, uVar7 <= uVar2))
    break;
    lVar6 = unaff_x21 + 0x20;
    uVar5 = CONCAT44(*(undefined4 *)(lVar6 + (long)(int)uStack0000000000000044 * 4),
                     *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4));
    unaff_x27 = 0;
    if (unaff_x25 != 0) {
      unaff_x27 = uVar5 / unaff_x25;
    }
    uVar5 = uVar5 - unaff_x27 * unaff_x25;
    do {
      if (unaff_x27 != 0x100000000) {
        if (uVar7 <= uStack0000000000000044 - 2) goto LAB_07657954;
        uVar9 = (ulong)*(uint *)(lVar6 + (long)(int)(uStack0000000000000044 - 2) * 4) |
                uVar5 << 0x20;
        if (unaff_x27 * in_stack_00000030 < uVar9 || unaff_x27 * in_stack_00000030 - uVar9 == 0)
        break;
      }
      uVar5 = uVar5 + unaff_x25;
      unaff_x27 = unaff_x27 - 1;
    } while (uVar5 >> 0x20 == 0);
    if (0 < iStack0000000000000040) {
      uVar5 = 0;
      uVar8 = uStack0000000000000044;
      do {
        if (uVar7 <= uVar8) goto LAB_07657954;
        if (unaff_x26 == 0) goto LAB_07657958;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar5) goto LAB_07657954;
        lVar6 = (long)(int)uVar8;
        uVar8 = uVar8 - 1;
        *(undefined4 *)(unaff_x23 + uVar5 * 4) = *(undefined4 *)(unaff_x21 + lVar6 * 4 + 0x20);
        uVar5 = uVar5 + 1;
      } while (unaff_x22 != uVar5);
    }
    unaff_x28 = thunk_FUN_03d2ef40(*unaff_x20);
    FUN_076560fc();
    unaff_w19 = uStack0000000000000044;
    uStack0000000000000044 = uVar2;
  }
LAB_07657954:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
  while( true ) {
    if (lVar6 == 0) goto LAB_07657958;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_07657954;
    lVar10 = lVar10 + -1;
    *(undefined4 *)(lVar6 + 0x20 + uVar5 * 4) =
         *(undefined4 *)(in_stack_00000038 + (uVar9 & 0xffffffff) * 4 + 0x20);
    uVar5 = uVar5 + 1;
    if (in_stack_00000008 == uVar5) break;
Renci_SshNet_Sftp_Requests_SftpFSetStatRequest__set_Attributes:
    uVar9 = (ulong)in_stack_00000008 + lVar10;
    if (uVar7 <= (uint)uVar9) goto LAB_07657954;
  }
  if ((int)in_stack_00000008 < 0x46) {
LAB_07657800:
    lVar6 = *(long *)(in_stack_00000020 + 0x10);
    if (lVar6 == 0) goto LAB_07657958;
    uVar7 = *(uint *)(lVar6 + 0x18);
    lVar10 = (long)(int)in_stack_00000008;
    do {
      if (uVar7 <= (uint)lVar10) goto LAB_07657954;
      *(undefined4 *)(lVar6 + 0x20 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 != 0x46);
  }
  uVar7 = *(uint *)(in_stack_00000020 + 0x18);
  if (1 < (int)uVar7) {
    lVar6 = *(long *)(in_stack_00000020 + 0x10);
    if (lVar6 == 0) goto LAB_07657958;
    uVar2 = *(uint *)(lVar6 + 0x18);
    uVar5 = (ulong)uVar7;
    do {
      uVar9 = uVar5 - 1;
      if (uVar2 <= uVar9) goto LAB_07657954;
      if (*(int *)(lVar6 + 0x1c + uVar5 * 4) != 0) goto LAB_07657884;
      *(int *)(in_stack_00000020 + 0x18) = (int)uVar5 + -1;
      bVar1 = 2 < (long)uVar5;
      uVar5 = uVar9;
    } while (bVar1);
    uVar7 = (uint)uVar9;
  }
  if (uVar7 == 0) {
    *(undefined4 *)(in_stack_00000020 + 0x18) = 1;
  }
LAB_07657884:
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  iVar3 = FUN_07656d2c();
  if (in_stack_00000010 != 0) {
    *(int *)(in_stack_00000010 + 0x18) = iVar3;
    if (iVar3 < 1) {
      uVar5 = 0;
    }
    else {
      if (unaff_x21 == 0) goto LAB_07657958;
      lVar6 = *(long *)(in_stack_00000010 + 0x10);
      uVar7 = *(uint *)(unaff_x21 + 0x18);
      uVar5 = 0;
      do {
        if (uVar7 <= uVar5) goto LAB_07657954;
        if (lVar6 == 0) goto LAB_07657958;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_07657954;
        *(undefined4 *)(lVar6 + 0x20 + uVar5 * 4) = *(undefined4 *)(unaff_x21 + 0x20 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)*(int *)(in_stack_00000010 + 0x18));
      if (0x45 < (int)uVar5) {
        return;
      }
    }
    lVar6 = *(long *)(in_stack_00000010 + 0x10);
    if (lVar6 != 0) {
      uVar7 = *(uint *)(lVar6 + 0x18);
      uVar5 = uVar5 & 0xffffffff;
      while (uVar5 < uVar7) {
        *(undefined4 *)(lVar6 + 0x20 + uVar5 * 4) = 0;
        uVar5 = uVar5 + 1;
        if (uVar5 == 0x46) {
          return;
        }
      }
      goto LAB_07657954;
    }
  }
LAB_07657958:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


