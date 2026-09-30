/*
FUNCTION_NAME: Renci.SshNet.Sftp.SftpFileStream$$Seek
ENTRY_POINT: 0764623c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Renci_SshNet_Sftp_SftpFileStream__Seek(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  long *plVar9;
  long *in_stack_00000008;
  
  uVar4 = thunk_FUN_03d19be4(param_2,*param_1);
  if ((uVar4 & 1) == 0) {
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = *unaff_x26;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&PTR_PTR_08cb6798,0);
  }
  plVar9 = (long *)*unaff_x26;
  __cxa_end_catch();
  uVar4 = Renci_SshNet_Session__Reset();
  if ((uVar4 & 1) != 0) {
    if (plVar9 != (long *)0x0) {
      if (plVar9 == (long *)0x0) goto LAB_076465d8;
      (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      in_stack_00000008 = plVar9;
    }
    thunk_FUN_03d1e194(PTR_DAT_091b3e48);
    unaff_x25 = FUN_06fd2168();
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_091a9878);
    if (plVar9 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      if (in_stack_00000008 == (long *)0x0) goto LAB_076465d8;
      uVar6 = (**(code **)(*in_stack_00000008 + 0x168))
                        (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
    }
    FUN_06fc5244(uVar5,uVar6,0);
    FUN_07620134();
  }
  do {
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x23) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar7 = *(long *)(unaff_x24 + unaff_x23 * 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = FUN_07cf1710(lVar7,0);
    lVar3 = thunk_FUN_03d2ef40(*unaff_x21);
    FUN_07c1738c(lVar3,uVar2,2,0x11,0);
    *unaff_x22 = lVar3;
    thunk_FUN_03d1023c();
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_07c1af54(*unaff_x22,0,0);
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_07c1c9ec(*unaff_x22,lVar7,*(undefined4 *)(unaff_x19 + 0x40),0);
  } while ((*unaff_x22 == 0) || (*(char *)(*unaff_x22 + 0x52) == '\0'));
  lVar7 = *(long *)(unaff_x19 + 0x58);
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x52) == '\0')) {
    uVar4 = Renci_SshNet_Session__Reset();
    if ((uVar4 & 1) != 0) {
      FUN_06fc5244(*(undefined8 *)PTR_DAT_0922d728,unaff_x25,0);
      FUN_07620134();
    }
    FUN_0762014c();
    return;
  }
  *(bool *)(unaff_x19 + 0x44) = *(int *)(lVar7 + 0x20) == 0x17;
  plVar9 = (long *)FUN_07c1b194(lVar7,0);
  if (plVar9 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    if (cRam00000000098498ef == '\0') {
      FUN_03d2d2b0(PTR_DAT_0922cdd0);
      cRam00000000098498ef = '\x01';
    }
    puVar1 = PTR_DAT_0922cdd0;
    **(undefined8 **)(*(long *)PTR_DAT_0922cdd0 + 0xb8) = uVar5;
    thunk_FUN_03d1023c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
    plVar9 = *(long **)(unaff_x19 + 0x10);
    *(undefined4 *)(unaff_x19 + 0x1c) = 2;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091af3f0);
      FUN_071ddf10();
      lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091af3f8);
      FUN_071e8eb0(lVar7,uVar5,0);
      if (lVar7 != 0) {
        FUN_071e9a1c(lVar7,1,0);
        FUN_071e91bc(lVar7,0);
        return;
      }
    }
  }
LAB_076465d8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


