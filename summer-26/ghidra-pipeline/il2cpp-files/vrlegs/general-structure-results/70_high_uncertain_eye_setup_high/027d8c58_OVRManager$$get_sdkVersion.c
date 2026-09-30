/*
FUNCTION_NAME: OVRManager$$get_sdkVersion
ENTRY_POINT: 027d8c58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x027d8fb4) */
/* WARNING: Removing unreachable block (ram,0x027d8f64) */

byte OVRManager__get_sdkVersion(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  int unaff_w21;
  undefined8 uVar8;
  long *unaff_x26;
  byte bVar9;
  char cStack0000000000000014;
  int in_stack_00000030;
  
  thunk_FUN_01a58e78();
  FUN_027d7fa0(&stack0x00000038);
  if (unaff_w21 < -1) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar7 = thunk_FUN_01a89e68();
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfcc18);
    FUN_026b3fc8(uVar7,uVar8,0);
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfcc20);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,uVar8);
  }
  uVar5 = FUN_027d8448();
  if ((uVar5 & 1) == 0) {
    if (unaff_w21 == 0) {
      return 0;
    }
    if (unaff_w21 == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = thunk_FUN_01a4a380(0);
    }
    iVar3 = FUN_027d85a4();
    puVar1 = PTR_DAT_03cd9c70;
    in_stack_00000030 = 0;
    iVar4 = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (iVar3 <= iVar4) {
        FUN_027d8974();
        puVar1 = PTR_DAT_03cfcbe8;
        lVar6 = *(long *)PTR_DAT_03cfcbe8;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar1;
        }
        uVar7 = **(undefined8 **)(lVar6 + 0xb8);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x26);
        }
        FUN_027d7a1c(&stack0x00000018,&stack0x00000038,uVar7);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
        thunk_FUN_01a4b338();
        cStack0000000000000014 = '\0';
        FUN_027e0bd8(uVar7,&stack0x00000014,0);
        iVar4 = unaff_w21;
        goto LAB_027d8de8;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d90e4(&stack0x00000030,0x28);
      uVar5 = FUN_027d8448();
      if ((uVar5 & 1) != 0) break;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar4 = in_stack_00000030;
      if (99 < in_stack_00000030) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (((uint)(iVar4 * -0x33333333) >> 1 | iVar4 * -0x80000000) < 0x1999999a) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_027d7fa0(&stack0x00000038);
        }
      }
    }
  }
  return 1;
LAB_027d8de8:
  uVar5 = FUN_027d8448();
  if ((uVar5 & 1) != 0) {
    bVar9 = 0;
    iVar3 = 5;
    goto LAB_027d8f18;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027d7fa0(&stack0x00000038);
  if (unaff_w21 != -1) {
    iVar4 = thunk_FUN_01a4a380(0);
    bVar9 = 0;
    iVar3 = 0xe;
    if ((iVar4 - iVar2 < 0) || (iVar4 = unaff_w21 - (iVar4 - iVar2), iVar4 < 1)) goto LAB_027d8f18;
  }
  FUN_027d8640();
  FUN_027d869c();
  uVar5 = FUN_027d8448();
  if ((uVar5 & 1) != 0) {
    FUN_027d8640();
    FUN_027d869c();
    bVar9 = 1;
    iVar3 = 0xe;
    goto LAB_027d8f18;
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
  thunk_FUN_01a4b338();
  uVar5 = FUN_027e1070(uVar8,iVar4,0);
  iVar3 = 0xb;
  if ((uVar5 & 1) == 0) {
    iVar3 = 0xe;
  }
  FUN_027d8640();
  FUN_027d869c();
  if ((iVar3 != 0xb) && (iVar3 != 0)) {
    bVar9 = 0;
LAB_027d8f18:
    if (cStack0000000000000014 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
    FUN_027d9a54(&stack0x00000018);
    return iVar3 != 0xe | bVar9;
  }
  goto LAB_027d8de8;
}


