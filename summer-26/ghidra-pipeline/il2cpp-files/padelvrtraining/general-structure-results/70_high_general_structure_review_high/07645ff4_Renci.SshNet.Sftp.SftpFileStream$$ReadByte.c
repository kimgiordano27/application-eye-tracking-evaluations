/*
FUNCTION_NAME: Renci.SshNet.Sftp.SftpFileStream$$ReadByte
ENTRY_POINT: 07645ff4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Renci_SshNet_Sftp_SftpFileStream__ReadByte(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uStack000000000000001c;
  
  if ((bRam0000000009849994 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0922d888);
    FUN_03d2d2b0(PTR_DAT_091a76b0);
    FUN_03d2d2b0(PTR_DAT_091a13f8);
    FUN_03d2d2b0(PTR_DAT_091af3f0);
    FUN_03d2d2b0(PTR_DAT_091af3f8);
    FUN_03d2d2b0(PTR_DAT_0922d728);
    bRam0000000009849994 = 1;
  }
  uStack000000000000001c = 0;
  lVar3 = FUN_076203ac(param_1,*(undefined8 *)(param_1 + 0x30),0);
  puVar1 = PTR_DAT_091a76b0;
  if (lVar3 != 0) {
    uVar8 = **(undefined8 **)(*(long *)PTR_DAT_091a13f8 + 0xb8);
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar7 = 0;
      uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      plVar5 = (long *)(param_1 + 0x58);
      do {
        if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar9 = *(long *)(lVar3 + 0x20 + uVar7 * 8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        uVar2 = FUN_07cf1710(lVar9,0);
        lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
        FUN_07c1738c(lVar4,uVar2,2,0x11,0);
        *plVar5 = lVar4;
        thunk_FUN_03d1023c(plVar5,lVar4);
        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_07c1af54(*plVar5,0,0);
        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_07c1c9ec(*plVar5,lVar9,*(undefined4 *)(param_1 + 0x40),0);
        if ((*plVar5 != 0) && (*(char *)(*plVar5 + 0x52) != '\0')) break;
        uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x52) != '\0')) {
      *(bool *)(param_1 + 0x44) = *(int *)(lVar3 + 0x20) == 0x17;
      plVar5 = (long *)FUN_07c1b194(lVar3,0);
      if (plVar5 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (cRam00000000098498ef == '\0') {
          FUN_03d2d2b0(PTR_DAT_0922cdd0);
          cRam00000000098498ef = '\x01';
        }
        puVar1 = PTR_DAT_0922cdd0;
        **(undefined8 **)(*(long *)PTR_DAT_0922cdd0 + 0xb8) = uVar8;
        thunk_FUN_03d1023c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar8);
        plVar5 = *(long **)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x1c) = 2;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          uVar8 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091af3f0);
          FUN_071ddf10(uVar8,param_1,*(undefined8 *)PTR_DAT_0922d888,0);
          lVar3 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091af3f8);
          FUN_071e8eb0(lVar3,uVar8,0);
          if (lVar3 != 0) {
            FUN_071e9a1c(lVar3,1,0);
            FUN_071e91bc(lVar3,0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = Renci_SshNet_Session__Reset(param_1,1,0);
    if ((uVar7 & 1) != 0) {
      uVar8 = FUN_06fc5244(*(undefined8 *)PTR_DAT_0922d728,uVar8,0);
      FUN_07620134(param_1,1,uVar8,0);
    }
    FUN_0762014c(param_1,0x3ff,0);
  }
  return;
}


