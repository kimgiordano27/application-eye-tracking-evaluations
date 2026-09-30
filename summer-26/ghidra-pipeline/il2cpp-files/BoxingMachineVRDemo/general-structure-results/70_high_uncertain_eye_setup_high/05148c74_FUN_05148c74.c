/*
FUNCTION_NAME: FUN_05148c74
ENTRY_POINT: 05148c74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05148c74(undefined4 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  byte local_4c [4];
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((DAT_06b79d84 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067677e0);
    FUN_02d6084c(PTR_DAT_0675e1c0);
    FUN_02d6084c(PTR_DAT_06781c40);
    FUN_02d6084c(PTR_DAT_06760758);
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_067657d0);
    FUN_02d6084c(PTR_DAT_067616f8);
    FUN_02d6084c(PTR_DAT_06767820);
    FUN_02d6084c(PTR_DAT_06768958);
    FUN_02d6084c(PTR_DAT_06762980);
    FUN_02d6084c(PTR_DAT_06764580);
    DAT_06b79d84 = 1;
  }
  puVar8 = PTR_DAT_0677eb78;
  puVar7 = PTR_DAT_06768958;
  puVar6 = PTR_DAT_067657d0;
  puVar5 = PTR_DAT_06764580;
  puVar4 = PTR_DAT_06762980;
  puVar3 = PTR_DAT_067616f8;
  puVar19 = PTR_DAT_0675e1c0;
  local_4c[0] = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (param_2 == param_3) {
    uVar11 = 0;
    local_48 = ZEXT816(0);
    goto LAB_05148e1c;
  }
  if (param_3 == (long *)0x0) {
    uVar11 = 1;
    local_48 = ZEXT816(0);
    goto LAB_05148e1c;
  }
  if (param_2 == (long *)0x0) {
    uVar11 = 0xffffffff;
    local_48 = ZEXT816(0);
    goto LAB_05148e1c;
  }
  switch(param_1) {
  case 5:
  case 8:
  case 0xd:
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar15 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    uVar15 = FUN_04f8af30(param_2,uVar15,0);
    uVar16 = FUN_04f8e414(0);
    uVar16 = FUN_04f8af30(param_3,uVar16,0);
    uVar11 = FUN_04e8b380(uVar15,uVar16,0);
    goto LAB_05148e1c;
  case 6:
    if (*param_2 == *(long *)PTR_DAT_067677e0) {
LAB_051492ac:
      puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_2);
      uVar11 = FUN_05148990(*puVar13,puVar13[1],param_3);
      goto LAB_05148e1c;
    }
    if (*param_3 == *(long *)PTR_DAT_067677e0) {
OVRPlugin__GetSpaceUuid:
      puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_3);
      iVar10 = FUN_05148990(*puVar13,puVar13[1],param_2);
      uVar11 = (ulong)(uint)-iVar10;
      goto LAB_05148e1c;
    }
    if (((*param_2 == *(long *)(PTR_DAT_0675e258 + 0x70)) ||
        (*param_3 == *(long *)(PTR_DAT_0675e258 + 0x70))) ||
       ((*param_2 == *(long *)PTR_DAT_06767820 || (*param_3 == *(long *)PTR_DAT_06767820)))) {
LAB_051492c8:
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar15 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      local_48 = FUN_04f8a7e0(param_2,uVar15,0);
      uVar15 = FUN_04f8e414(0);
      auVar20 = FUN_04f8a7e0(param_3,uVar15,0);
      if (*(int *)(*(long *)PTR_DAT_06767820 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_05062ab0(local_48,auVar20._0_8_,auVar20._8_8_,0);
      goto LAB_05148e1c;
    }
    if (((*param_2 != *(long *)(PTR_DAT_0675e258 + 0x78)) &&
        (*param_3 != *(long *)(PTR_DAT_0675e258 + 0x78))) &&
       ((*param_2 != *(long *)(PTR_DAT_0675e258 + 0x80) &&
        (*param_3 != *(long *)(PTR_DAT_0675e258 + 0x80))))) {
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar15 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      local_80 = FUN_04f898a8(param_2,uVar15,0);
      uVar15 = FUN_04f8e414(0);
      uVar15 = FUN_04f898a8(param_3,uVar15,0);
      uVar11 = FUN_050058dc(&local_80,uVar15,0);
      goto LAB_05148e1c;
    }
    goto LAB_051490f0;
  case 7:
    if (*param_2 == *(long *)PTR_DAT_067677e0) goto LAB_051492ac;
    if (*param_3 == *(long *)PTR_DAT_067677e0) goto OVRPlugin__GetSpaceUuid;
    if ((((*param_2 == *(long *)(PTR_DAT_0675e258 + 0x70)) ||
         (*param_3 == *(long *)(PTR_DAT_0675e258 + 0x70))) ||
        (*param_2 == *(long *)PTR_DAT_06767820)) || (*param_3 == *(long *)PTR_DAT_06767820))
    goto LAB_051492c8;
LAB_051490f0:
    uVar11 = FUN_051496ac(param_2,param_3);
    goto LAB_05148e1c;
  case 9:
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar15 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    local_4c[0] = FUN_04f87018(param_2,uVar15,0);
    local_4c[0] = local_4c[0] & 1;
    uVar15 = FUN_04f8e414(0);
    uVar9 = FUN_04f87018(param_3,uVar15,0);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0x28));
    }
    uVar11 = FUN_04f80878(local_4c,uVar9 & 1,0);
    goto LAB_05148e1c;
  default:
    local_b4 = param_1;
    uVar15 = thunk_FUN_02dc61f4(PTR_DAT_0677eb78);
    uVar15 = thunk_FUN_02d9d164(uVar15,&local_b4);
    thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    FUN_028f4b80();
    uVar16 = FUN_04f8e414(0);
    local_b8 = param_1;
    uVar17 = thunk_FUN_02dc61f4(puVar8);
    uVar17 = thunk_FUN_02d9d164(uVar17,&local_b8);
    uVar18 = thunk_FUN_02dc61f4(PTR_DAT_06781c48);
    uVar16 = FUN_050f0ec0(uVar18,uVar16,uVar17,0);
    uVar17 = thunk_FUN_02dc61f4(PTR_DAT_06781c50);
    uVar15 = FUN_050debd4(uVar17,uVar15,uVar16,0);
    goto LAB_05149690;
  case 0xc:
    if (*param_2 == *(long *)PTR_DAT_067616f8) {
      puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_2);
      puVar19 = PTR_DAT_067657d0;
      local_58 = *puVar13;
      if (*param_3 == *(long *)PTR_DAT_067657d0) {
        puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_3);
        uStack_88 = puVar13[1];
        local_90 = *puVar13;
        if (*(int *)(*(long *)puVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar15 = FUN_04feba3c(&local_90,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar15 = FUN_04f8e414(0);
        if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
        }
        uVar15 = FUN_04f8acb8(param_3,uVar15,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_04fe8050(&local_58,uVar15,0);
    }
    else {
      if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)PTR_DAT_067657d0 + 0x40)) {
LAB_05149554:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(param_2);
      }
      puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_2);
      uStack_98 = puVar13[1];
      local_a0 = *puVar13;
      if (*param_3 == *(long *)puVar6) {
        puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_3);
        uStack_a8 = puVar13[1];
        local_b0 = *puVar13;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar15 = FUN_04f8e414(0);
        if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
        }
        uVar15 = FUN_04f8acb8(param_3,uVar15,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar6);
        }
        FUN_04feb438(&local_b0,uVar15,0);
      }
      uVar16 = uStack_a8;
      uVar15 = local_b0;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_04fec468(&local_a0,uVar15,uVar16,0);
    }
LAB_05148e1c:
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  case 0xe:
    lVar12 = thunk_FUN_02d9d438(param_3,*(undefined8 *)PTR_DAT_0675e1c0);
    if (lVar12 != 0) {
      uVar15 = thunk_FUN_02d9d438(param_2,*(undefined8 *)puVar19);
      uVar11 = FUN_050eb168(uVar15,lVar12,0);
      goto LAB_05148e1c;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar15 = thunk_FUN_02d9d534();
    puVar19 = PTR_DAT_06781c60;
    break;
  case 0xf:
    if (*param_3 == *(long *)PTR_DAT_06768958) {
      if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)PTR_DAT_06768958 + 0x40))
      goto LAB_05149554;
      puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_2);
      uStack_68 = puVar13[1];
      local_70 = *puVar13;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
LAB_0514955c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(param_3);
      }
      puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_3);
      uVar11 = FUN_050019dc(&local_70,*puVar13,puVar13[1],0);
      goto LAB_05148e1c;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar15 = thunk_FUN_02d9d534();
    puVar19 = PTR_DAT_06781c58;
    break;
  case 0x10:
    lVar12 = *(long *)PTR_DAT_06764580;
    if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar12 + 0x130)) {
      param_3 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) !=
             lVar12) {
      param_3 = (long *)0x0;
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_056bd434(param_3,0,0);
    if ((uVar11 & 1) == 0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
      goto LAB_05149554;
      plVar14 = (long *)FUN_045f4a74(*(undefined8 *)PTR_DAT_06781c40);
      uVar15 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      if ((param_3 == (long *)0x0) ||
         (uVar16 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170)),
         plVar14 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar11 = (**(code **)(*plVar14 + 0x198))
                         (plVar14,uVar15,uVar16,*(undefined8 *)(*plVar14 + 0x1a0));
      goto LAB_05148e1c;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar15 = thunk_FUN_02d9d534();
    puVar19 = PTR_DAT_06781c68;
    break;
  case 0x11:
    if (*param_3 == *(long *)PTR_DAT_06762980) {
      if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)PTR_DAT_06762980 + 0x40))
      goto LAB_05149554;
      puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_2);
      local_78 = *puVar13;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) goto LAB_0514955c;
      puVar13 = (undefined8 *)thunk_FUN_02d9d688(param_3);
      uVar15 = *puVar13;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_0501db64(&local_78,uVar15,0);
      goto LAB_05148e1c;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar15 = thunk_FUN_02d9d534();
    puVar19 = PTR_DAT_0677acc0;
  }
  uVar16 = thunk_FUN_02dc61f4(puVar19);
  FUN_04f7d8e0(uVar15,uVar16,0);
LAB_05149690:
  uVar16 = thunk_FUN_02dc61f4(PTR_DAT_06781c70);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar15,uVar16);
}


