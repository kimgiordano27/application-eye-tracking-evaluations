/*
FUNCTION_NAME: Renci.SshNet.Sftp.Requests.SftpCloseRequest$$set_Handle
ENTRY_POINT: 0765761c
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


void Renci_SshNet_Sftp_Requests_SftpCloseRequest__set_Handle(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint in_w8;
  uint uVar8;
  ulong in_x9;
  uint in_w10;
  ulong uVar9;
  long lVar10;
  ulong in_x15;
  uint in_w17;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  uint in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  int in_stack_00000040;
  
  do {
    lVar7 = (long)(int)in_w10;
    in_w10 = in_w10 - 1;
    *(undefined4 *)(unaff_x23 + in_x9 * 4) = *(undefined4 *)(unaff_x21 + lVar7 * 4 + 0x20);
    in_x9 = in_x9 + 1;
    if (unaff_x22 == in_x9) {
      do {
        in_w10 = in_w17;
        uVar4 = thunk_FUN_03d2ef40(*unaff_x20);
        FUN_076560fc();
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_0765627c(unaff_x27);
        uVar5 = FUN_0765549c();
        while( true ) {
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          uVar6 = FUN_076570a0(uVar5,uVar4);
          if ((uVar6 & 1) == 0) break;
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          uVar5 = FUN_07656504(uVar5);
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
        }
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar7 = FUN_07656504(uVar4,uVar5);
        if (0 < in_stack_00000040) {
          if (lVar7 == 0) goto LAB_07657958;
          lVar7 = *(long *)(lVar7 + 0x10);
          iVar3 = 0;
          uVar6 = unaff_x22;
          do {
            if (lVar7 == 0) goto LAB_07657958;
            uVar8 = iVar3 + *(int *)(unaff_x24 + 0x18);
            if ((*(uint *)(lVar7 + 0x18) <= uVar8) ||
               (uVar2 = unaff_w19 + iVar3, *(uint *)(unaff_x21 + 0x18) <= uVar2)) goto LAB_07657954;
            uVar6 = uVar6 - 1;
            iVar3 = iVar3 + -1;
            *(undefined4 *)(unaff_x21 + (long)(int)uVar2 * 4 + 0x20) =
                 *(undefined4 *)(lVar7 + (long)(int)uVar8 * 4 + 0x20);
          } while (uVar6 != 0);
        }
        if (in_stack_00000038 == 0) goto LAB_07657958;
        if (*(uint *)(in_stack_00000038 + 0x18) <= in_x15) goto LAB_07657954;
        lVar7 = in_x15 * 4;
        in_x15 = in_x15 + 1;
        *(int *)(in_stack_00000038 + lVar7 + 0x20) = (int)unaff_x27;
        if (in_x15 == in_stack_00000028) {
          if (in_stack_00000020 == 0) goto LAB_07657958;
          *(uint *)(in_stack_00000020 + 0x18) = in_stack_00000008;
          if ((int)(in_stack_00000008 - 1) < 0) {
            in_stack_00000008 = 0;
            goto LAB_07657800;
          }
          if (in_stack_00000038 == 0) goto LAB_07657958;
          lVar7 = *(long *)(in_stack_00000020 + 0x10);
          uVar8 = *(uint *)(in_stack_00000038 + 0x18);
          uVar6 = 0;
          lVar10 = 0xffffffff;
          goto Renci_SshNet_Sftp_Requests_SftpFSetStatRequest__set_Attributes;
        }
        in_w8 = *(uint *)(unaff_x21 + 0x18);
        if ((in_w8 <= in_w10) || (in_w17 = in_w10 - 1, in_w8 <= in_w17)) goto LAB_07657954;
        lVar7 = unaff_x21 + 0x20;
        uVar6 = CONCAT44(*(undefined4 *)(lVar7 + (long)(int)in_w10 * 4),
                         *(undefined4 *)(lVar7 + (long)(int)in_w17 * 4));
        unaff_x27 = 0;
        if (unaff_x25 != 0) {
          unaff_x27 = uVar6 / unaff_x25;
        }
        uVar6 = uVar6 - unaff_x27 * unaff_x25;
        do {
          if (unaff_x27 != 0x100000000) {
            if (in_w8 <= in_w10 - 2) goto LAB_07657954;
            uVar9 = (ulong)*(uint *)(lVar7 + (long)(int)(in_w10 - 2) * 4) | uVar6 << 0x20;
            if (unaff_x27 * in_stack_00000030 < uVar9 || unaff_x27 * in_stack_00000030 - uVar9 == 0)
            break;
          }
          uVar6 = uVar6 + unaff_x25;
          unaff_x27 = unaff_x27 - 1;
        } while (uVar6 >> 0x20 == 0);
        unaff_w19 = in_w10;
      } while (in_stack_00000040 < 1);
      in_x9 = 0;
    }
    if (in_w8 <= in_w10) break;
    if (unaff_x26 == 0) goto LAB_07657958;
  } while (in_x9 < *(uint *)(unaff_x26 + 0x18));
LAB_07657954:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
  while( true ) {
    if (lVar7 == 0) goto LAB_07657958;
    if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_07657954;
    lVar10 = lVar10 + -1;
    *(undefined4 *)(lVar7 + 0x20 + uVar6 * 4) =
         *(undefined4 *)(in_stack_00000038 + (uVar9 & 0xffffffff) * 4 + 0x20);
    uVar6 = uVar6 + 1;
    if (in_stack_00000008 == uVar6) break;
Renci_SshNet_Sftp_Requests_SftpFSetStatRequest__set_Attributes:
    uVar9 = (ulong)in_stack_00000008 + lVar10;
    if (uVar8 <= (uint)uVar9) goto LAB_07657954;
  }
  if ((int)in_stack_00000008 < 0x46) {
LAB_07657800:
    lVar7 = *(long *)(in_stack_00000020 + 0x10);
    if (lVar7 == 0) goto LAB_07657958;
    uVar8 = *(uint *)(lVar7 + 0x18);
    lVar10 = (long)(int)in_stack_00000008;
    do {
      if (uVar8 <= (uint)lVar10) goto LAB_07657954;
      *(undefined4 *)(lVar7 + 0x20 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 != 0x46);
  }
  uVar8 = *(uint *)(in_stack_00000020 + 0x18);
  if (1 < (int)uVar8) {
    lVar7 = *(long *)(in_stack_00000020 + 0x10);
    if (lVar7 == 0) goto LAB_07657958;
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar6 = (ulong)uVar8;
    do {
      uVar9 = uVar6 - 1;
      if (uVar2 <= uVar9) goto LAB_07657954;
      if (*(int *)(lVar7 + 0x1c + uVar6 * 4) != 0) goto LAB_07657884;
      *(int *)(in_stack_00000020 + 0x18) = (int)uVar6 + -1;
      bVar1 = 2 < (long)uVar6;
      uVar6 = uVar9;
    } while (bVar1);
    uVar8 = (uint)uVar9;
  }
  if (uVar8 == 0) {
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
      uVar6 = 0;
    }
    else {
      if (unaff_x21 == 0) goto LAB_07657958;
      lVar7 = *(long *)(in_stack_00000010 + 0x10);
      uVar8 = *(uint *)(unaff_x21 + 0x18);
      uVar6 = 0;
      do {
        if (uVar8 <= uVar6) goto LAB_07657954;
        if (lVar7 == 0) goto LAB_07657958;
        if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_07657954;
        *(undefined4 *)(lVar7 + 0x20 + uVar6 * 4) = *(undefined4 *)(unaff_x21 + 0x20 + uVar6 * 4);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(in_stack_00000010 + 0x18));
      if (0x45 < (int)uVar6) {
        return;
      }
    }
    lVar7 = *(long *)(in_stack_00000010 + 0x10);
    if (lVar7 != 0) {
      uVar8 = *(uint *)(lVar7 + 0x18);
      uVar6 = uVar6 & 0xffffffff;
      while (uVar6 < uVar8) {
        *(undefined4 *)(lVar7 + 0x20 + uVar6 * 4) = 0;
        uVar6 = uVar6 + 1;
        if (uVar6 == 0x46) {
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


