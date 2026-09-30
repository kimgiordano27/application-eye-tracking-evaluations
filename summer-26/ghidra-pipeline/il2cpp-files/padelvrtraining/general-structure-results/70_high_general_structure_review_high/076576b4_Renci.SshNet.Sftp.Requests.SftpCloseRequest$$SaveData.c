/*
FUNCTION_NAME: Renci.SshNet.Sftp.Requests.SftpCloseRequest$$SaveData
ENTRY_POINT: 076576b4
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


void Renci_SshNet_Sftp_Requests_SftpCloseRequest__SaveData(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
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
  
  do {
    param_1 = FUN_07656504(param_1);
    unaff_x27 = (ulong)((int)unaff_x27 - 1);
    while( true ) {
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar4 = FUN_076570a0(param_1,unaff_x28);
      if ((uVar4 & 1) != 0) break;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar5 = FUN_07656504(unaff_x28,param_1);
      if (0 < iStack0000000000000040) {
        if (lVar5 == 0) goto LAB_07657958;
        lVar5 = *(long *)(lVar5 + 0x10);
        iVar3 = 0;
        uVar4 = unaff_x22;
        do {
          if (lVar5 == 0) goto LAB_07657958;
          uVar6 = iVar3 + *(int *)(unaff_x24 + 0x18);
          if ((*(uint *)(lVar5 + 0x18) <= uVar6) ||
             (uVar2 = unaff_w19 + iVar3, *(uint *)(unaff_x21 + 0x18) <= uVar2)) goto LAB_07657954;
          uVar4 = uVar4 - 1;
          iVar3 = iVar3 + -1;
          *(undefined4 *)(unaff_x21 + (long)(int)uVar2 * 4 + 0x20) =
               *(undefined4 *)(lVar5 + (long)(int)uVar6 * 4 + 0x20);
        } while (uVar4 != 0);
      }
      if (in_stack_00000038 == 0) goto LAB_07657958;
      if (*(uint *)(in_stack_00000038 + 0x18) <= in_stack_00000048) goto LAB_07657954;
      lVar5 = in_stack_00000048 * 4;
      in_stack_00000048 = in_stack_00000048 + 1;
      *(int *)(in_stack_00000038 + lVar5 + 0x20) = (int)unaff_x27;
      if (in_stack_00000048 == in_stack_00000028) {
        if (in_stack_00000020 == 0) goto LAB_07657958;
        *(uint *)(in_stack_00000020 + 0x18) = in_stack_00000008;
        if ((int)(in_stack_00000008 - 1) < 0) {
          in_stack_00000008 = 0;
          goto LAB_07657800;
        }
        if (in_stack_00000038 == 0) goto LAB_07657958;
        lVar5 = *(long *)(in_stack_00000020 + 0x10);
        uVar6 = *(uint *)(in_stack_00000038 + 0x18);
        uVar4 = 0;
        lVar9 = 0xffffffff;
        goto Renci_SshNet_Sftp_Requests_SftpFSetStatRequest__set_Attributes;
      }
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      if ((uVar6 <= uStack0000000000000044) || (uVar2 = uStack0000000000000044 - 1, uVar6 <= uVar2))
      goto LAB_07657954;
      lVar5 = unaff_x21 + 0x20;
      uVar4 = CONCAT44(*(undefined4 *)(lVar5 + (long)(int)uStack0000000000000044 * 4),
                       *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4));
      unaff_x27 = 0;
      if (unaff_x25 != 0) {
        unaff_x27 = uVar4 / unaff_x25;
      }
      uVar4 = uVar4 - unaff_x27 * unaff_x25;
      do {
        if (unaff_x27 != 0x100000000) {
          if (uVar6 <= uStack0000000000000044 - 2) goto LAB_07657954;
          uVar8 = (ulong)*(uint *)(lVar5 + (long)(int)(uStack0000000000000044 - 2) * 4) |
                  uVar4 << 0x20;
          if (unaff_x27 * in_stack_00000030 < uVar8 || unaff_x27 * in_stack_00000030 - uVar8 == 0)
          break;
        }
        uVar4 = uVar4 + unaff_x25;
        unaff_x27 = unaff_x27 - 1;
      } while (uVar4 >> 0x20 == 0);
      if (0 < iStack0000000000000040) {
        uVar4 = 0;
        uVar7 = uStack0000000000000044;
        do {
          if (uVar6 <= uVar7) goto LAB_07657954;
          if (unaff_x26 == 0) goto LAB_07657958;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar4) goto LAB_07657954;
          lVar5 = (long)(int)uVar7;
          uVar7 = uVar7 - 1;
          *(undefined4 *)(unaff_x23 + uVar4 * 4) = *(undefined4 *)(unaff_x21 + lVar5 * 4 + 0x20);
          uVar4 = uVar4 + 1;
        } while (unaff_x22 != uVar4);
      }
      unaff_x28 = thunk_FUN_03d2ef40(*unaff_x20);
      FUN_076560fc();
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_0765627c(unaff_x27);
      param_1 = FUN_0765549c();
      unaff_w19 = uStack0000000000000044;
      uStack0000000000000044 = uVar2;
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
  } while( true );
  while( true ) {
    if (lVar5 == 0) goto LAB_07657958;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_07657954;
    lVar9 = lVar9 + -1;
    *(undefined4 *)(lVar5 + 0x20 + uVar4 * 4) =
         *(undefined4 *)(in_stack_00000038 + (uVar8 & 0xffffffff) * 4 + 0x20);
    uVar4 = uVar4 + 1;
    if (in_stack_00000008 == uVar4) break;
Renci_SshNet_Sftp_Requests_SftpFSetStatRequest__set_Attributes:
    uVar8 = (ulong)in_stack_00000008 + lVar9;
    if (uVar6 <= (uint)uVar8) goto LAB_07657954;
  }
  if ((int)in_stack_00000008 < 0x46) {
LAB_07657800:
    lVar5 = *(long *)(in_stack_00000020 + 0x10);
    if (lVar5 == 0) goto LAB_07657958;
    uVar6 = *(uint *)(lVar5 + 0x18);
    lVar9 = (long)(int)in_stack_00000008;
    do {
      if (uVar6 <= (uint)lVar9) goto LAB_07657954;
      *(undefined4 *)(lVar5 + 0x20 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 != 0x46);
  }
  uVar6 = *(uint *)(in_stack_00000020 + 0x18);
  if (1 < (int)uVar6) {
    lVar5 = *(long *)(in_stack_00000020 + 0x10);
    if (lVar5 == 0) goto LAB_07657958;
    uVar2 = *(uint *)(lVar5 + 0x18);
    uVar4 = (ulong)uVar6;
    do {
      uVar8 = uVar4 - 1;
      if (uVar2 <= uVar8) goto LAB_07657954;
      if (*(int *)(lVar5 + 0x1c + uVar4 * 4) != 0) goto LAB_07657884;
      *(int *)(in_stack_00000020 + 0x18) = (int)uVar4 + -1;
      bVar1 = 2 < (long)uVar4;
      uVar4 = uVar8;
    } while (bVar1);
    uVar6 = (uint)uVar8;
  }
  if (uVar6 == 0) {
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
      uVar4 = 0;
    }
    else {
      if (unaff_x21 == 0) goto LAB_07657958;
      lVar5 = *(long *)(in_stack_00000010 + 0x10);
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      uVar4 = 0;
      do {
        if (uVar6 <= uVar4) goto LAB_07657954;
        if (lVar5 == 0) goto LAB_07657958;
        if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_07657954;
        *(undefined4 *)(lVar5 + 0x20 + uVar4 * 4) = *(undefined4 *)(unaff_x21 + 0x20 + uVar4 * 4);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)*(int *)(in_stack_00000010 + 0x18));
      if (0x45 < (int)uVar4) {
        return;
      }
    }
    lVar5 = *(long *)(in_stack_00000010 + 0x10);
    if (lVar5 != 0) {
      uVar6 = *(uint *)(lVar5 + 0x18);
      uVar4 = uVar4 & 0xffffffff;
      while (uVar4 < uVar6) {
        *(undefined4 *)(lVar5 + 0x20 + uVar4 * 4) = 0;
        uVar4 = uVar4 + 1;
        if (uVar4 == 0x46) {
          return;
        }
      }
LAB_07657954:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
  }
LAB_07657958:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


