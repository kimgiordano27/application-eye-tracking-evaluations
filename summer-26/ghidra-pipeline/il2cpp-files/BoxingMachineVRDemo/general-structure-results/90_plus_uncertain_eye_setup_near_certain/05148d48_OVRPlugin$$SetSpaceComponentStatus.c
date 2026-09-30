/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 05148d48
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__SetSpaceComponentStatus(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool in_ZR;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined1 auVar18 [16];
  undefined4 in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  long in_stack_00000088;
  
  puVar6 = PTR_DAT_0677eb78;
  puVar5 = PTR_DAT_06768958;
  puVar4 = PTR_DAT_067657d0;
  puVar3 = PTR_DAT_06764580;
  puVar2 = PTR_DAT_06762980;
  puVar17 = PTR_DAT_067616f8;
  uStack0000000000000078 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  if (in_ZR) {
    uVar9 = 0;
    _uStack0000000000000078 = ZEXT816(0);
    goto LAB_05148e1c;
  }
  if (unaff_x19 == (long *)0x0) {
    uVar9 = 1;
    _uStack0000000000000078 = ZEXT816(0);
    goto LAB_05148e1c;
  }
  if (unaff_x20 == (long *)0x0) {
    uVar9 = 0xffffffff;
    _uStack0000000000000078 = ZEXT816(0);
    goto LAB_05148e1c;
  }
  switch(unaff_w21) {
  case 5:
  case 8:
  case 0xd:
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    uVar13 = FUN_04f8af30();
    FUN_04f8e414(0);
    uVar14 = FUN_04f8af30();
    uVar9 = FUN_04e8b380(uVar13,uVar14,0);
    goto LAB_05148e1c;
  case 6:
    if (*unaff_x20 == *(long *)PTR_DAT_067677e0) {
LAB_051492ac:
      puVar11 = (undefined8 *)thunk_FUN_02d9d688();
      uVar9 = FUN_05148990(*puVar11,puVar11[1]);
      goto LAB_05148e1c;
    }
    if (*unaff_x19 == *(long *)PTR_DAT_067677e0) {
OVRPlugin__GetSpaceUuid:
      puVar11 = (undefined8 *)thunk_FUN_02d9d688();
      iVar8 = FUN_05148990(*puVar11,puVar11[1]);
      uVar9 = (ulong)(uint)-iVar8;
      goto LAB_05148e1c;
    }
    if (((*unaff_x20 == *(long *)(PTR_DAT_0675e258 + 0x70)) ||
        (*unaff_x19 == *(long *)(PTR_DAT_0675e258 + 0x70))) ||
       ((*unaff_x20 == *(long *)PTR_DAT_06767820 || (*unaff_x19 == *(long *)PTR_DAT_06767820)))) {
LAB_051492c8:
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      _uStack0000000000000078 = FUN_04f8a7e0();
      FUN_04f8e414(0);
      auVar18 = FUN_04f8a7e0();
      if (*(int *)(*(long *)PTR_DAT_06767820 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_05062ab0(&stack0x00000078,auVar18._0_8_,auVar18._8_8_,0);
      goto LAB_05148e1c;
    }
    if (((*unaff_x20 != *(long *)(PTR_DAT_0675e258 + 0x78)) &&
        (*unaff_x19 != *(long *)(PTR_DAT_0675e258 + 0x78))) &&
       ((*unaff_x20 != *(long *)(PTR_DAT_0675e258 + 0x80) &&
        (*unaff_x19 != *(long *)(PTR_DAT_0675e258 + 0x80))))) {
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      in_stack_00000040 = FUN_04f898a8();
      FUN_04f8e414(0);
      uVar13 = FUN_04f898a8();
      uVar9 = FUN_050058dc(&stack0x00000040,uVar13,0);
      goto LAB_05148e1c;
    }
    goto LAB_051490f0;
  case 7:
    if (*unaff_x20 == *(long *)PTR_DAT_067677e0) goto LAB_051492ac;
    if (*unaff_x19 == *(long *)PTR_DAT_067677e0) goto OVRPlugin__GetSpaceUuid;
    if ((((*unaff_x20 == *(long *)(PTR_DAT_0675e258 + 0x70)) ||
         (*unaff_x19 == *(long *)(PTR_DAT_0675e258 + 0x70))) ||
        (*unaff_x20 == *(long *)PTR_DAT_06767820)) || (*unaff_x19 == *(long *)PTR_DAT_06767820))
    goto LAB_051492c8;
LAB_051490f0:
    uVar9 = FUN_051496ac();
    goto LAB_05148e1c;
  case 9:
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    in_stack_00000070._4_1_ = FUN_04f87018();
    in_stack_00000070._4_1_ = in_stack_00000070._4_1_ & 1;
    FUN_04f8e414(0);
    uVar7 = FUN_04f87018();
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0x28));
    }
    uVar9 = FUN_04f80878((long)&stack0x00000070 + 4,uVar7 & 1,0);
    goto LAB_05148e1c;
  default:
    uVar13 = thunk_FUN_02dc61f4(PTR_DAT_0677eb78);
    uVar13 = thunk_FUN_02d9d164(uVar13,&stack0x0000000c);
    thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    FUN_028f4b80();
    uVar14 = FUN_04f8e414(0);
    in_stack_00000008 = unaff_w21;
    uVar15 = thunk_FUN_02dc61f4(puVar6);
    uVar15 = thunk_FUN_02d9d164(uVar15,&stack0x00000008);
    uVar16 = thunk_FUN_02dc61f4(PTR_DAT_06781c48);
    uVar14 = FUN_050f0ec0(uVar16,uVar14,uVar15,0);
    uVar15 = thunk_FUN_02dc61f4(PTR_DAT_06781c50);
    uVar13 = FUN_050debd4(uVar15,uVar13,uVar14,0);
    goto LAB_05149690;
  case 0xc:
    if (*unaff_x20 == *(long *)PTR_DAT_067616f8) {
      puVar11 = (undefined8 *)thunk_FUN_02d9d688();
      puVar2 = PTR_DAT_067657d0;
      in_stack_00000068 = *puVar11;
      if (*unaff_x19 == *(long *)PTR_DAT_067657d0) {
        puVar11 = (undefined8 *)thunk_FUN_02d9d688();
        uStack0000000000000038 = puVar11[1];
        uStack0000000000000030 = *puVar11;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar13 = FUN_04feba3c(&stack0x00000030,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_04f8e414(0);
        if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
        }
        uVar13 = FUN_04f8acb8();
      }
      if (*(int *)(*(long *)puVar17 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_04fe8050(&stack0x00000068,uVar13,0);
    }
    else {
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)PTR_DAT_067657d0 + 0x40)) {
LAB_05149554:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      puVar11 = (undefined8 *)thunk_FUN_02d9d688();
      uStack0000000000000028 = puVar11[1];
      uStack0000000000000020 = *puVar11;
      if (*unaff_x19 == *(long *)puVar4) {
        puVar11 = (undefined8 *)thunk_FUN_02d9d688();
        uStack0000000000000018 = puVar11[1];
        uStack0000000000000010 = *puVar11;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_04f8e414(0);
        if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
        }
        uVar13 = FUN_04f8acb8();
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar4);
        }
        FUN_04feb438(&stack0x00000010,uVar13,0);
      }
      uVar14 = uStack0000000000000018;
      uVar13 = uStack0000000000000010;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_04fec468(&stack0x00000020,uVar13,uVar14,0);
    }
LAB_05148e1c:
    if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  case 0xe:
    lVar10 = thunk_FUN_02d9d438();
    if (lVar10 != 0) {
      uVar13 = thunk_FUN_02d9d438();
      uVar9 = FUN_050eb168(uVar13,lVar10,0);
      goto LAB_05148e1c;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar13 = thunk_FUN_02d9d534();
    puVar17 = PTR_DAT_06781c60;
    break;
  case 0xf:
    if (*unaff_x19 == *(long *)PTR_DAT_06768958) {
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)PTR_DAT_06768958 + 0x40))
      goto LAB_05149554;
      puVar11 = (undefined8 *)thunk_FUN_02d9d688();
      in_stack_00000058 = puVar11[1];
      in_stack_00000050 = *puVar11;
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
LAB_0514955c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      puVar11 = (undefined8 *)thunk_FUN_02d9d688();
      uVar9 = FUN_050019dc(&stack0x00000050,*puVar11,puVar11[1],0);
      goto LAB_05148e1c;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar13 = thunk_FUN_02d9d534();
    puVar17 = PTR_DAT_06781c58;
    break;
  case 0x10:
    lVar10 = *(long *)PTR_DAT_06764580;
    if (*(byte *)(*unaff_x19 + 0x130) < *(byte *)(lVar10 + 0x130)) {
      unaff_x19 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
             lVar10) {
      unaff_x19 = (long *)0x0;
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar9 = FUN_056bd434(unaff_x19,0,0);
    if ((uVar9 & 1) == 0) {
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
      goto LAB_05149554;
      plVar12 = (long *)FUN_045f4a74(*(undefined8 *)PTR_DAT_06781c40);
      uVar13 = (**(code **)(*unaff_x20 + 0x168))();
      if ((unaff_x19 == (long *)0x0) ||
         (uVar14 = (**(code **)(*unaff_x19 + 0x168))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x170)),
         plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = (**(code **)(*plVar12 + 0x198))
                        (plVar12,uVar13,uVar14,*(undefined8 *)(*plVar12 + 0x1a0));
      goto LAB_05148e1c;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar13 = thunk_FUN_02d9d534();
    puVar17 = PTR_DAT_06781c68;
    break;
  case 0x11:
    if (*unaff_x19 == *(long *)PTR_DAT_06762980) {
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)PTR_DAT_06762980 + 0x40))
      goto LAB_05149554;
      puVar11 = (undefined8 *)thunk_FUN_02d9d688();
      in_stack_00000048 = *puVar11;
      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_0514955c;
      puVar11 = (undefined8 *)thunk_FUN_02d9d688();
      uVar13 = *puVar11;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_0501db64(&stack0x00000048,uVar13,0);
      goto LAB_05148e1c;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar13 = thunk_FUN_02d9d534();
    puVar17 = PTR_DAT_0677acc0;
  }
  uVar14 = thunk_FUN_02dc61f4(puVar17);
  FUN_04f7d8e0(uVar13,uVar14,0);
LAB_05149690:
  uVar14 = thunk_FUN_02dc61f4(PTR_DAT_06781c70);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar13,uVar14);
}


