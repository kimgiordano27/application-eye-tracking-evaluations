/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 01daa414
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01daa78c) */
/* WARNING: Removing unreachable block (ram,0x01daa794) */

byte OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int iVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char cStack000000000000003c;
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0xee8));
  FUN_00fdc2e4(PTR_DAT_023578f8);
  FUN_00fdc2e4(PTR_DAT_0235a080);
  FUN_00fdc2e4(PTR_DAT_0235a088);
  *(undefined1 *)(unaff_x22 + 0x995) = 1;
  cStack000000000000003c = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000010 = 0;
  FUN_01daa8f8();
  puVar2 = PTR_DAT_0234c670;
  if (unaff_w21 < -1) {
    uVar12 = thunk_FUN_010303a8(PTR_DAT_0234bb30);
    uVar12 = thunk_FUN_0103fd0c(uVar12,&stack0x0000000c);
    thunk_FUN_010303a8(PTR_DAT_02354ee8);
    FUN_00e5daf0();
    thunk_FUN_010303a8(PTR_DAT_0235a090);
    uVar8 = FUN_01daa3c4();
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar9 = thunk_FUN_010400dc();
    uVar10 = thunk_FUN_010303a8(PTR_DAT_0235a098);
    FUN_01c63a1c(uVar9,uVar10,uVar12,uVar8,0);
    uVar12 = thunk_FUN_010303a8(PTR_DAT_0235a0a0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar9,uVar12);
  }
  if (*(int *)(*(long *)PTR_DAT_0234c670 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01da6b04(&stack0x00000048);
  if (unaff_w21 == 0) {
    iVar11 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    if (iVar11 != 0) goto LAB_01daa4bc;
  }
  else {
    if (0 < unaff_w21) {
      thunk_FUN_01027034(0);
    }
LAB_01daa4bc:
    puVar3 = PTR_DAT_02354ee8;
    cStack000000000000003c = '\0';
    lVar6 = *(long *)PTR_DAT_02354ee8;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar6 = *(long *)puVar3;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14(*(long *)puVar2);
    }
    puVar2 = PTR_DAT_023578f8;
    FUN_01da63c8(&stack0x00000020,&stack0x00000048,uVar12);
    in_stack_00000018 = 0;
    while (iVar11 = *(int *)(unaff_x19 + 0x10), thunk_FUN_00ffe618(), iVar11 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar7 = FUN_01da8220(&stack0x00000018);
      if ((uVar7 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01da8120(&stack0x00000018);
    }
    FUN_01da75d8(*(undefined8 *)(unaff_x19 + 0x20),&stack0x0000003c);
    if (cStack000000000000003c != '\0') {
      iVar11 = *(int *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      *(int *)(unaff_x19 + 0x18) = iVar11 + 1;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      iVar11 = *(int *)(unaff_x19 + 0x10);
      thunk_FUN_00ffe618();
      if (iVar11 != 0) {
        uVar5 = 0;
LAB_01daa5e4:
        iVar11 = *(int *)(unaff_x19 + 0x10);
        thunk_FUN_00ffe618();
        if (0 < iVar11) {
          iVar11 = *(int *)(unaff_x19 + 0x10);
          thunk_FUN_00ffe618();
          thunk_FUN_00ffe618();
          uVar5 = 1;
          *(int *)(unaff_x19 + 0x10) = iVar11 + -1;
        }
        lVar6 = *(long *)(unaff_x19 + 0x28);
        thunk_FUN_00ffe618();
        if ((lVar6 != 0) && (iVar11 = *(int *)(unaff_x19 + 0x10), thunk_FUN_00ffe618(), iVar11 == 0)
           ) {
          lVar6 = *(long *)(unaff_x19 + 0x28);
          thunk_FUN_00ffe618();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          FUN_01daad64(lVar6);
        }
        bVar4 = uVar5 != 0;
        lVar6 = 0;
        goto LAB_01daa650;
      }
      if (unaff_w21 != 0) {
        uVar5 = FUN_01daac98();
        uVar5 = uVar5 & 1;
        goto LAB_01daa5e4;
      }
      lVar6 = 0;
      bVar4 = false;
      iVar11 = 0xf;
    }
    else {
      lVar6 = FUN_01daa974();
      bVar4 = false;
LAB_01daa650:
      iVar11 = 0xc;
    }
    if (cStack000000000000003c != '\0') {
      iVar1 = *(int *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
      FUN_0102a860(*(undefined8 *)(unaff_x19 + 0x20));
    }
    FUN_01da86bc(&stack0x00000020);
    if ((iVar11 == 0xc) || (iVar11 == 0)) {
      if (lVar6 != 0) {
        in_stack_00000010 = FUN_01a4ebc0(lVar6,*(undefined8 *)PTR_DAT_0235a088);
        bVar4 = FUN_01a45bc0(&stack0x00000010,*(undefined8 *)PTR_DAT_0235a080);
      }
      goto LAB_01daa6cc;
    }
  }
  bVar4 = 0;
LAB_01daa6cc:
  return bVar4 & 1;
}


