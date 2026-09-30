/*
FUNCTION_NAME: FUN_06973408
ENTRY_POINT: 06973408
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06973408(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_084b7390;
  if ((DAT_0897d10a & 1) == 0) {
    FUN_03a8a718(PTR_DAT_0848ca18);
    FUN_03a8a718(PTR_DAT_0848cab0);
    FUN_03a8a718(PTR_DAT_0848ca50);
    FUN_03a8a718(PTR_DAT_0848cae0);
    FUN_03a8a718(PTR_DAT_0848ca58);
    FUN_03a8a718(PTR_DAT_084b7390);
    FUN_03a8a718(PTR_DAT_084b7398);
    FUN_03a8a718(PTR_DAT_084b73a0);
    FUN_03a8a718(PTR_DAT_084b73a8);
    FUN_03a8a718(PTR_DAT_084b73b0);
    FUN_03a8a718(PTR_DAT_084b73b8);
    FUN_03a8a718(PTR_DAT_084b73c0);
    FUN_03a8a718(PTR_DAT_084b73c8);
    FUN_03a8a718(PTR_DAT_084b73d0);
    FUN_03a8a718(PTR_DAT_0848ca60);
    FUN_03a8a718(PTR_DAT_0848ca68);
    FUN_03a8a718(PTR_DAT_084b73d8);
    FUN_03a8a718(PTR_DAT_084b73e0);
    FUN_03a8a718(PTR_DAT_084b73e8);
    FUN_03a8a718(PTR_DAT_084b73f0);
    DAT_0897d10a = 1;
  }
  puVar8 = PTR_DAT_084b73e0;
  puVar7 = PTR_DAT_084b73d0;
  puVar6 = PTR_DAT_084b73b0;
  puVar4 = PTR_DAT_0848ca68;
  puVar3 = PTR_DAT_0848ca60;
  puVar2 = PTR_DAT_0848ca50;
  puVar1 = PTR_DAT_0848ca18;
  uVar16 = *(undefined8 *)puVar5;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar16 = FUN_0675ff58(uVar16,0);
  local_70 = 0;
  uStack_68 = 0;
  FUN_05b6c134(&local_70,uVar16,*(undefined8 *)puVar8,*(undefined8 *)puVar4);
  uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_04963d38(uVar16,0,*(undefined8 *)puVar6,0);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_05f23338(uVar11,0,*(undefined8 *)puVar7,0);
  local_80 = 0;
  uStack_78 = 0;
  FUN_05b6c134(&local_80,uVar16,uVar11,*(undefined8 *)puVar3);
  uVar10 = uStack_68;
  uVar9 = local_70;
  uVar11 = uStack_78;
  uVar16 = local_80;
  puVar6 = PTR_DAT_084b73d8;
  puVar3 = PTR_DAT_084b73b8;
  puVar2 = PTR_DAT_084b7398;
  puVar1 = PTR_DAT_0848ca58;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar13 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0848ca58) {
        puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_06973680;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4(param_1,*(long *)PTR_DAT_0848ca58,1);
LAB_06973680:
  (*(code *)*puVar12)(param_1,uVar9,uVar10,uVar16,uVar11,puVar12[1]);
  uVar16 = FUN_0675ff58(*(undefined8 *)puVar5,0);
  local_90 = 0;
  uStack_88 = 0;
  FUN_05b6c134(&local_90,uVar16,*(undefined8 *)puVar6,*(undefined8 *)puVar4);
  uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca50);
  FUN_04963d38(uVar16,0,*(undefined8 *)puVar2,0);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca18);
  FUN_05f23338(uVar11,0,*(undefined8 *)puVar3,0);
  puVar2 = PTR_DAT_0848ca60;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_05b6c134(&local_a0,uVar16,uVar11,*(undefined8 *)PTR_DAT_0848ca60);
  uVar10 = uStack_88;
  uVar9 = local_90;
  uVar11 = uStack_98;
  uVar16 = local_a0;
  lVar13 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
        puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_41_0___cctor;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4(param_1,*(long *)puVar1,1);
OVRPlugin_OVRP_1_41_0___cctor:
  puVar6 = PTR_DAT_084b73e8;
  puVar3 = PTR_DAT_084b73c0;
  (*(code *)*puVar12)(param_1,uVar9,uVar10,uVar16,uVar11,puVar12[1]);
  uVar16 = FUN_0675ff58(*(undefined8 *)puVar5,0);
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_05b6c134(&local_b0,uVar16,*(undefined8 *)PTR_DAT_084b73f0,*(undefined8 *)puVar4);
  uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca50);
  FUN_04963d38(uVar16,0,*(undefined8 *)PTR_DAT_084b73a8,0);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca18);
  FUN_05f23338(uVar11,0,*(undefined8 *)PTR_DAT_084b73c8,0);
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_05b6c134(&local_c0,uVar16,uVar11,*(undefined8 *)puVar2);
  uVar10 = uStack_a8;
  uVar9 = local_b0;
  uVar11 = uStack_b8;
  uVar16 = local_c0;
  lVar13 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
        puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_069738a8;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4(param_1,*(long *)puVar1,1);
LAB_069738a8:
  (*(code *)*puVar12)(param_1,uVar9,uVar10,uVar16,uVar11,puVar12[1]);
  uVar16 = FUN_0675ff58(*(undefined8 *)puVar5,0);
  local_d0 = 0;
  uStack_c8 = 0;
  FUN_05b6c134(&local_d0,uVar16,*(undefined8 *)puVar6,*(undefined8 *)puVar4);
  uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cae0);
  FUN_04962b78(uVar16,0,*(undefined8 *)PTR_DAT_084b73a0,0);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cab0);
  FUN_05f228f0(uVar11,0,*(undefined8 *)puVar3,0);
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_05b6c134(&local_e0,uVar16,uVar11,*(undefined8 *)puVar2);
  uVar10 = uStack_c8;
  uVar9 = local_d0;
  uVar11 = uStack_d8;
  uVar16 = local_e0;
  lVar13 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
        puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_069739a8;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar12 = (undefined8 *)FUN_03ac43c4(param_1,*(long *)puVar1,1);
LAB_069739a8:
  (*(code *)*puVar12)(param_1,uVar9,uVar10,uVar16,uVar11,puVar12[1]);
  return;
}


