/*
FUNCTION_NAME: FUN_063cec90
ENTRY_POINT: 063cec90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_063cec90(undefined1 param_1 [16],ulong param_2,long *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong local_c0;
  undefined8 local_b0;
  float local_9c;
  float local_98 [2];
  undefined8 local_88;
  
  puVar5 = PTR_DAT_067c8f20;
  if ((DAT_06bccf70 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_84__);
    FUN_02f08768(StringLiteral_9095);
    DAT_06bccf70 = 1;
  }
  lVar9 = param_3[4];
  local_98[0] = 0.0;
  local_98[1] = 0.0;
  local_9c = 0.0;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_060f60a4(lVar9,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  FUN_063ce598(param_3);
  FUN_063cdb60(param_3);
  uVar16 = FUN_060fbf94(0);
  if (DAT_06bb435f == '\0') {
    FUN_02f08768(PTR_DAT_067c9848);
    DAT_06bb435f = '\x01';
  }
  puVar5 = PTR_DAT_067c9848;
  local_88 = **(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8);
  local_b0 = FUN_063d0518(param_3 + 0x14,param_3 + 0x11,(char)param_3[5],
                          *(undefined1 *)((long)param_3 + 0x29),
                          *(undefined4 *)((long)param_3 + 0x2c),&local_88);
  fVar10 = (float)uVar16;
  local_c0 = param_2;
  if (0.0 < fVar10) {
    uVar7 = param_2;
    if ((char)param_3[0x18] == '\0') {
      if (DAT_06bb435f == '\0') {
        FUN_02f08768(PTR_DAT_067c9848);
        DAT_06bb435f = '\x01';
      }
      fVar14 = (float)param_2;
      fVar13 = (float)local_b0;
      fVar11 = (float)**(undefined8 **)(*(long *)puVar5 + 0xb8);
      fVar18 = fVar13 - fVar11;
      fVar17 = (float)((ulong)**(undefined8 **)(*(long *)puVar5 + 0xb8) >> 0x20);
      fVar19 = fVar14 - fVar17;
      uVar7 = (ulong)(uint)DAT_011afbb8;
      if ((DAT_011afbb8 <= fVar18 * fVar18 + fVar19 * fVar19) ||
         (fVar11 = (float)param_3[0x17] - fVar11,
         fVar17 = (float)((ulong)param_3[0x17] >> 0x20) - fVar17,
         DAT_011afbb8 <= fVar11 * fVar11 + fVar17 * fVar17)) {
        if (param_3[4] == 0) goto LAB_063cf23c;
        fVar11 = DAT_011afbb8;
        local_98[1] = (float)FUN_060febdc(param_3[4],0);
        pfVar1 = (float *)(param_3 + 0x17);
        pfVar2 = (float *)((long)param_3 + 0xbc);
        local_98[0] = fVar11;
        bVar6 = true;
        do {
          bVar4 = bVar6;
          fVar11 = fVar13;
          if (!bVar4) {
            fVar11 = fVar14;
          }
          if ((*(int *)((long)param_3 + 0x2c) == 1) && (fVar11 != 0.0)) {
            lVar9 = 0xb8;
            pfVar3 = pfVar1;
            if (!bVar4) {
              lVar9 = 0xbc;
              pfVar3 = pfVar2;
            }
            fVar17 = *(float *)(param_3 + 6) * 3.0;
            fVar11 = *(float *)(param_3 + 6);
            if (*(char *)((long)param_3 + 0xc1) != '\0') {
              fVar11 = fVar17;
            }
            local_9c = *(float *)((long)param_3 + lVar9);
            if (param_3[4] == 0) goto LAB_063cf23c;
            uVar12 = FUN_060febdc(param_3[4],0);
            if (param_3[4] == 0) goto LAB_063cf23c;
            fVar18 = fVar17;
            fVar19 = (float)FUN_060febdc(param_3[4],0);
            if (bVar4) {
              fVar11 = (float)FUN_060e1388(uVar12,fVar13 + fVar19,fVar11,0x7f800000,uVar16,&local_9c
                                           ,0);
              pfVar8 = local_98 + 1;
            }
            else {
              fVar11 = (float)FUN_060e1388(fVar17,fVar14 + fVar18,fVar11,0x7f800000,uVar16,&local_9c
                                           ,0);
              pfVar8 = local_98;
            }
            uVar7 = (ulong)(uint)local_9c;
            *pfVar8 = fVar11;
            if (ABS(local_9c) < 1.0) {
              uVar7 = 0;
              local_9c = 0.0;
            }
            *pfVar3 = (float)uVar7;
          }
          else if (*(char *)((long)param_3 + 0x34) == '\0') {
            pfVar3 = pfVar1;
            if (!bVar4) {
              pfVar3 = pfVar2;
            }
            *pfVar3 = 0.0;
            uVar7 = param_2;
          }
          else {
            fVar11 = powf(*(float *)(param_3 + 7),fVar10);
            if (bVar4) {
              fVar11 = *pfVar1 * fVar11;
              *pfVar1 = fVar11;
            }
            else {
              fVar11 = *pfVar2 * fVar11;
              *pfVar2 = fVar11;
            }
            if (ABS(fVar11) < 1.0) {
              pfVar3 = pfVar1;
              if (!bVar4) {
                pfVar3 = pfVar2;
              }
              *pfVar3 = 0.0;
            }
            pfVar3 = pfVar1;
            if (!bVar4) {
              pfVar3 = pfVar2;
            }
            pfVar8 = local_98 + 1;
            if (!bVar4) {
              pfVar8 = local_98;
            }
            fVar11 = *pfVar8;
            *pfVar8 = fVar11 + fVar10 * *pfVar3;
            uVar7 = (ulong)(uint)fVar11;
          }
          fVar11 = (float)uVar7;
          bVar6 = false;
        } while (bVar4);
        fVar14 = local_98[0];
        fVar17 = local_98[1];
        if (*(int *)((long)param_3 + 0x2c) == 2) {
          if (param_3[4] == 0) goto LAB_063cf23c;
          fVar13 = (float)FUN_060febdc(param_3[4],0);
          fVar11 = fVar14 - fVar11;
          local_c0 = (ulong)(uint)fVar11;
          local_88 = CONCAT44(fVar11,fVar17 - fVar13);
          local_b0 = FUN_063d0518(param_3 + 0x14,param_3 + 0x11,(char)param_3[5],
                                  *(undefined1 *)((long)param_3 + 0x29),
                                  *(undefined4 *)((long)param_3 + 0x2c),&local_88);
          local_98[1] = fVar17 + (float)local_b0;
          local_98[0] = fVar14 + (float)local_c0;
          fVar17 = local_98[1];
          fVar14 = local_98[0];
        }
        uVar7 = (ulong)(uint)fVar14;
        (**(code **)(*param_3 + 0x428))(fVar17,param_3,*(undefined8 *)(*param_3 + 0x430));
      }
      if ((char)param_3[0x18] == '\0') goto LAB_063cf0a4;
    }
    fVar14 = (float)uVar7;
    if (*(char *)((long)param_3 + 0x34) != '\0') {
      if (param_3[4] == 0) goto LAB_063cf23c;
      fVar17 = (float)FUN_060febdc(param_3[4],0);
      fVar13 = fVar10 * 10.0;
      fVar11 = 1.0;
      if (fVar13 <= 1.0) {
        fVar11 = fVar13;
      }
      fVar18 = 0.0;
      if (0.0 <= fVar13) {
        fVar18 = fVar11;
      }
      fVar11 = (float)param_3[0x17];
      fVar13 = (float)((ulong)param_3[0x17] >> 0x20);
      param_3[0x17] =
           CONCAT44(fVar13 + ((fVar14 - (float)((ulong)*(undefined8 *)((long)param_3 + 0xc4) >> 0x20
                                               )) / fVar10 - fVar13) * fVar18,
                    fVar11 + ((fVar17 - (float)*(undefined8 *)((long)param_3 + 0xc4)) / fVar10 -
                             fVar11) * fVar18);
    }
  }
LAB_063cf0a4:
  fVar10 = DAT_011afbb8;
  fVar14 = (float)param_3[0x14] - (float)*(undefined8 *)((long)param_3 + 0xe4);
  fVar11 = (float)((ulong)param_3[0x14] >> 0x20) -
           (float)((ulong)*(undefined8 *)((long)param_3 + 0xe4) >> 0x20);
  fVar17 = *(float *)(param_3 + 0x15) - *(float *)((long)param_3 + 0xec);
  if ((((fVar17 * fVar17 + fVar14 * fVar14 + fVar11 * fVar11 < DAT_011afbb8) &&
       (fVar14 = *(float *)((long)param_3 + 0xac) - *(float *)(param_3 + 0x1e),
       fVar11 = (float)param_3[0x16] - (float)*(undefined8 *)((long)param_3 + 0xf4),
       fVar17 = (float)((ulong)param_3[0x16] >> 0x20) -
                (float)((ulong)*(undefined8 *)((long)param_3 + 0xf4) >> 0x20),
       fVar17 * fVar17 + fVar11 * fVar11 + fVar14 * fVar14 < DAT_011afbb8)) &&
      (fVar14 = (float)param_3[0x11] - (float)*(undefined8 *)((long)param_3 + 0xcc),
      fVar11 = (float)((ulong)param_3[0x11] >> 0x20) -
               (float)((ulong)*(undefined8 *)((long)param_3 + 0xcc) >> 0x20),
      fVar17 = *(float *)(param_3 + 0x12) - *(float *)((long)param_3 + 0xd4),
      fVar17 * fVar17 + fVar14 * fVar14 + fVar11 * fVar11 < DAT_011afbb8)) &&
     (fVar14 = *(float *)((long)param_3 + 0x94) - *(float *)(param_3 + 0x1b),
     fVar11 = (float)param_3[0x13] - (float)*(undefined8 *)((long)param_3 + 0xdc),
     fVar17 = (float)((ulong)param_3[0x13] >> 0x20) -
              (float)((ulong)*(undefined8 *)((long)param_3 + 0xdc) >> 0x20),
     fVar17 = fVar17 * fVar17, fVar17 + fVar11 * fVar11 + fVar14 * fVar14 < DAT_011afbb8)) {
    if (param_3[4] == 0) goto LAB_063cf23c;
    fVar14 = (float)FUN_060febdc(param_3[4],0);
    fVar14 = fVar14 - *(float *)((long)param_3 + 0xc4);
    if (fVar14 * fVar14 +
        (fVar17 - *(float *)(param_3 + 0x19)) * (fVar17 - *(float *)(param_3 + 0x19)) < fVar10)
    goto LAB_063cf204;
  }
  FUN_063cdec4(local_b0,local_c0,param_3);
  FUN_063b5200(*(undefined8 *)StringLiteral_9095,param_3,0);
  lVar9 = param_3[0xd];
  uVar12 = FUN_063cf2b0(param_3);
  uVar15 = FUN_063cf3a8(param_3);
  if (lVar9 != 0) {
    FUN_0447c278(uVar12,uVar15,lVar9,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_84__);
    FUN_063ce04c(param_3);
LAB_063cf204:
    FUN_063cf270(param_3);
    *(undefined1 *)((long)param_3 + 0xc1) = 0;
    return;
  }
LAB_063cf23c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


