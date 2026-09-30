/*
FUNCTION_NAME: FUN_070351a8
ENTRY_POINT: 070351a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_070351a8(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 long param_6,long param_7)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  int iVar22;
  long local_78;
  undefined1 local_44 [4];
  
  puVar3 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  if ((DAT_07eebddb & 1) == 0) {
    FUN_03642964(Oculus_Interaction_ControllerSelector_<>c_TypeInfo);
    FUN_03642964(PTR_DAT_079fdfb8);
    FUN_03642964(PTR_DAT_079f4df0);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_03642964(PTR_DAT_079ff4c8);
    FUN_03642964(TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo);
    DAT_07eebddb = 1;
  }
  puVar4 = PTR_DAT_079ff4c8;
  lVar12 = *(long *)puVar3;
  local_44[0] = 0;
  local_78 = 0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar12 = *(long *)puVar3;
  }
  FUN_06eaa264(local_44,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar12 = FUN_0702e180();
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar13 = FUN_07174e44(param_5,0);
  if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  *(undefined8 *)(param_7 + 0xf0) = uVar13;
  thunk_FUN_036b7ad0();
  uVar9 = FUN_071742bc(param_5,0);
  *(undefined4 *)(param_7 + 0x188) = uVar9;
  uVar14 = FUN_06fc2f3c(param_7,0);
  puVar5 = TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo;
  puVar3 = PTR_DAT_079f4e28;
  if ((uVar14 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar14 = FUN_071c0684(param_6,0,0);
    if ((uVar14 & 1) == 0) {
      uVar9 = FUN_071c1dbc(1,0);
      *(undefined4 *)(param_7 + 0x1b8) = uVar9;
      *(undefined8 *)(param_7 + 0x1c0) = 0;
      thunk_FUN_036b7ad0(param_7 + 0x1c0,0);
      lVar16 = *(long *)puVar5;
      *(undefined2 *)(param_7 + 0x1c8) = 0;
      *(undefined8 *)(param_7 + 0x1cc) = 0x200000000;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      bVar8 = FUN_06e82154(0);
      *(byte *)(param_7 + 0x193) = bVar8 & 1;
      uVar15 = 1;
    }
    else {
      if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar16 = *(long *)puVar3;
      *(undefined4 *)(param_7 + 0x1b8) = *(undefined4 *)(param_6 + 0x3c);
      uVar13 = *(undefined8 *)(param_6 + 0x40);
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar14 = FUN_071c24dc(uVar13,0,0);
      if ((uVar14 & 1) == 0) {
        uVar13 = *(undefined8 *)(param_6 + 0x40);
      }
      else {
        uVar13 = FUN_071bd0d0(param_5,0);
      }
      *(undefined8 *)(param_7 + 0x1c0) = uVar13;
      thunk_FUN_036b7ad0(param_7 + 0x1c0);
      bVar6 = false;
      if (*(char *)(param_6 + 0x58) != '\0') {
        iVar22 = FUN_071cb9f0(0);
        bVar6 = 0x22 < iVar22;
      }
      uVar15 = *(undefined1 *)(param_6 + 0x59);
      *(bool *)(param_7 + 0x1c8) = bVar6;
      uVar13 = *(undefined8 *)(param_6 + 0x50);
      cVar2 = *(char *)(param_6 + 0x5b);
      *(undefined1 *)(param_7 + 0x1c9) = uVar15;
      *(undefined8 *)(param_7 + 0x1cc) = uVar13;
      if (cVar2 == '\0') {
        bVar8 = 0;
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        bVar8 = FUN_06e82154(0);
      }
      uVar15 = *(undefined1 *)(param_6 + 0x5c);
      *(byte *)(param_7 + 0x193) = bVar8 & 1;
    }
  }
  else {
    uVar9 = FUN_071c1dbc(1,0);
    *(undefined4 *)(param_7 + 0x1b8) = uVar9;
    *(undefined8 *)(param_7 + 0x1c0) = 0;
    thunk_FUN_036b7ad0(param_7 + 0x1c0,0);
    uVar15 = 0;
    *(undefined2 *)(param_7 + 0x1c8) = 0;
    *(undefined8 *)(param_7 + 0x1cc) = 0x200000000;
    *(undefined1 *)(param_7 + 0x193) = 0;
  }
  *(undefined1 *)(param_7 + 0x18e) = uVar15;
  uVar14 = FUN_071737b0(param_5,0);
  if ((uVar14 & 1) == 0) {
    *(undefined1 *)(param_7 + 0x18d) = 0;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(undefined1 *)(param_7 + 0x18d) = *(undefined1 *)(lVar12 + 0x4d);
  }
  *(bool *)(param_7 + 0x18e) =
       *(char *)(param_7 + 0x18e) != '\0' && *(char *)(lVar12 + 0x4d) != '\0';
  fVar17 = (float)FUN_07174984(param_5,0);
  fVar18 = param_2;
  fVar19 = param_3;
  fVar20 = param_4;
  uVar9 = FUN_07174b30(param_5,0);
  *(undefined4 *)(param_7 + 300) = uVar9;
  *(float *)(param_7 + 0x130) = fVar18;
  *(float *)(param_7 + 0x134) = fVar19;
  *(float *)(param_7 + 0x138) = fVar20;
  uVar9 = FUN_07174cdc(param_5,0);
  *(undefined4 *)(param_7 + 0x160) = uVar9;
  iVar10 = FUN_07174d90(param_5,0);
  puVar3 = PTR_DAT_079f4df0;
  *(int *)(param_7 + 0x164) = iVar10;
  lVar16 = *(long *)puVar3;
  iVar22 = *(int *)(lVar16 + 0xe4);
  *(float *)(param_7 + 0x168) = (float)*(int *)(param_7 + 0x160) / (float)iVar10;
  if (iVar22 == 0) {
    thunk_FUN_036a1978(lVar16);
  }
  bVar6 = false;
  if ((fVar17 == 0.0) || (NAN(fVar17))) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    bVar6 = false;
    if ((param_2 == 0.0) || (NAN(param_2))) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (1.0 <= ABS(param_3)) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        bVar6 = 1.0 <= ABS(param_4);
      }
      else {
        bVar6 = false;
      }
    }
  }
  puVar3 = PTR_DAT_079fdfb8;
  fVar18 = *(float *)(lVar12 + 0x58);
  uVar1 = (uint)(*(uint *)(param_7 + 0x188) < 0x11) &
          0x10014U >> (ulong)(*(uint *)(param_7 + 0x188) & 0x1f);
  bVar7 = ABS(1.0 - fVar18) < DAT_01650e84;
  *(bool *)(param_7 + 0x18c) = bVar6;
  uVar11 = uVar1;
  if (bVar7) {
    uVar11 = 1;
  }
  iVar22 = *(int *)(*(long *)puVar3 + 0xe4);
  fVar19 = 1.0;
  if (uVar11 == 0) {
    fVar19 = fVar18;
  }
  *(float *)(param_7 + 0x16c) = fVar19;
  if (iVar22 == 0) {
    thunk_FUN_036a1978();
  }
  uVar14 = FUN_03d1b724(&local_78,*(undefined8 *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo)
  ;
  if ((uVar14 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar11 = FUN_070081e8(local_78,0);
    uVar11 = uVar11 ^ 1;
  }
  iVar22 = *(int *)(param_7 + 0x160);
  iVar10 = *(int *)(param_7 + 0x164);
  uVar21 = *(undefined4 *)(param_7 + 0x16c);
  uVar9 = *(undefined4 *)(lVar12 + 0x5c);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  iVar22 = FUN_07035ba8((float)iVar22,(float)iVar10,uVar21,uVar9,uVar11 & 1);
  *(int *)(param_7 + 0x174) = iVar22;
  if (1.0 < *(float *)(param_7 + 0x16c)) {
    uVar9 = 2;
LAB_07035694:
    *(undefined4 *)(param_7 + 0x170) = uVar9;
    goto LAB_070356e8;
  }
  if (1.0 <= *(float *)(param_7 + 0x16c)) {
    if (uVar1 == 0) {
      if (iVar22 == 3) {
        *(undefined4 *)(param_7 + 0x170) = 1;
        goto LAB_070356e0;
      }
      if (iVar22 == 2) {
        uVar9 = 1;
        goto LAB_07035694;
      }
    }
    *(undefined4 *)(param_7 + 0x170) = 0;
  }
  else {
    *(undefined4 *)(param_7 + 0x170) = 1;
    if (iVar22 != 3) goto LAB_070356e8;
LAB_070356e0:
    *(undefined4 *)(param_7 + 0x1cc) = 3;
  }
LAB_070356e8:
  lVar16 = *(long *)puVar5;
  uVar9 = *(undefined4 *)(lVar12 + 100);
  iVar22 = *(int *)(lVar16 + 0xe4);
  *(undefined1 *)(param_7 + 0x178) = *(undefined1 *)(lVar12 + 0x60);
  *(undefined4 *)(param_7 + 0x17c) = uVar9;
  if (iVar22 == 0) {
    thunk_FUN_036a1978();
    lVar16 = *(long *)puVar5;
  }
  *(undefined8 *)(param_7 + 0x1a0) = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x48);
  thunk_FUN_036b7ad0(param_7 + 0x1a0);
  FUN_06e87ec4(*(undefined4 *)(param_7 + 0x16c),0);
  bVar8 = FUN_071cba90(0);
  iVar22 = FUN_07173ccc(param_5,0);
  if ((bVar8 & iVar22 == 0) == 0) {
    iVar22 = FUN_07173ccc(param_5,0);
    uVar9 = 0x33;
    if (iVar22 != 2) {
      uVar9 = 0x3b;
    }
  }
  else {
    uVar9 = 0x33;
  }
  *(undefined4 *)(param_7 + 0x198) = uVar9;
  uVar13 = FUN_06e94990(param_5,0);
  *(undefined8 *)(param_7 + 0x1b0) = uVar13;
  thunk_FUN_036b7ad0(param_7 + 0x1b0);
  FUN_06eaa270(local_44,0);
  return;
}


