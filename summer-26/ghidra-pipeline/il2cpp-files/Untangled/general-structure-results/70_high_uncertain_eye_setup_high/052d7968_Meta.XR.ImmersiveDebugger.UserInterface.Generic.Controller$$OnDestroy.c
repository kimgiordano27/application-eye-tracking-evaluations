/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$OnDestroy
ENTRY_POINT: 052d7968
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnDestroy
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  char cVar12;
  long *unaff_x19;
  long unaff_x22;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long lStack0000000000000078;
  
  lStack0000000000000078 = 0;
  FUN_052c9e4c();
  lVar8 = FUN_0528cb7c(0);
  puVar3 = PTR_DAT_06d3c7d0;
  puVar2 = PTR_DAT_06d02708;
  puVar1 = PTR_DAT_06d01e20;
  if (lVar8 == 0) goto LAB_052d8354;
  if (*(char *)(lVar8 + 0xc9) != '\0') {
    uVar9 = FUN_066cd398();
    uVar9 = FUN_05458458(uVar9,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar2);
    }
    FUN_06693690(uVar9,0);
  }
  lVar8 = unaff_x19[0x23];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar10 = FUN_066cd30c(lVar8,0);
  if ((uVar10 & 1) != 0) {
    lVar8 = unaff_x19[0x1c];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar10 = FUN_066cd30c(lVar8,0);
    if ((uVar10 & 1) == 0) {
      FUN_052d4440();
    }
    else {
      FUN_052c9eec();
    }
  }
  if ((unaff_x22 == 0) || (lVar8 = *(long *)(unaff_x22 + 0x18), lVar8 == 0)) goto LAB_052d8354;
  uVar17 = *(undefined4 *)(lVar8 + 0x30);
  bVar4 = true;
  *(undefined1 *)(unaff_x19 + 0x75) = 0;
  *(undefined1 *)(unaff_x19 + 0x79) = 1;
  *(undefined4 *)(unaff_x19 + 0x80) = uVar17;
  *(undefined1 *)((long)unaff_x19 + 0x3f9) = 0;
  if (((int)unaff_x19[0x1b] != 1) && (bVar4 = false, *(char *)(lVar8 + 0x34) != '\0')) {
    bVar4 = *(int *)(lVar8 + 0x38) == 1;
  }
  *(bool *)((long)unaff_x19 + 0x1e9) = bVar4;
  *(undefined1 *)(unaff_x19 + 0x5e) = 0;
  lVar11 = FUN_066c67b0(lVar8,0);
  uVar9 = *(undefined8 *)(lVar8 + 0xa8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar1);
  }
  uVar10 = FUN_066cd30c(uVar9,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(lVar8 + 0xa8) == 0) goto LAB_052d8354;
    lVar11 = FUN_066c67b0(*(long *)(lVar8 + 0xa8),0);
  }
  if (unaff_x19[0x4c] == 0) goto LAB_052d8354;
  uVar10 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                     (unaff_x19[0x4c],lVar8,&stack0x00000078,*(undefined8 *)PTR_DAT_06d3d768);
  if ((uVar10 & 1) != 0) {
    if (lStack0000000000000078 != 0) {
      FUN_066cafc0();
    }
    if (unaff_x19[0x4c] == 0) goto LAB_052d8354;
    FUN_04c75b28(unaff_x19[0x4c],lVar8,*(undefined8 *)PTR_DAT_06d3d760);
  }
  if (*(char *)(lVar8 + 0xda) != '\0') {
    if (unaff_x19[0xf] == 0) goto LAB_052d8354;
    FUN_06741ea8(unaff_x19[0xf],0,0);
  }
  FUN_052cb19c();
  uVar10 = FUN_052d8358();
  if ((uVar10 & 1) != 0) {
    FUN_052d848c();
  }
  uVar9 = (**(code **)(*unaff_x19 + 0x238))();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar1);
  }
  uVar10 = FUN_066cd30c(uVar9,0);
  if ((uVar10 & 1) == 0) {
LAB_052d7bb4:
    if (lVar11 != 0) {
      FUN_066d320c(lVar11,0);
      fVar14 = (float)FUN_066bd6e0(0);
      fVar33 = param_4;
      fVar28 = param_2;
      fVar29 = param_3;
      fVar15 = (float)FUN_052cc80c();
      *(float *)(unaff_x19 + 0x53) =
           (param_2 * fVar29 + param_4 * fVar15 + fVar14 * fVar33) - param_3 * fVar28;
      *(float *)((long)unaff_x19 + 0x29c) =
           (param_3 * fVar15 + param_4 * fVar28 + param_2 * fVar33) - fVar14 * fVar29;
      *(float *)(unaff_x19 + 0x54) =
           (fVar14 * fVar28 + param_4 * fVar29 + param_3 * fVar33) - param_2 * fVar15;
      *(float *)((long)unaff_x19 + 0x2a4) =
           ((param_4 * fVar33 - fVar14 * fVar15) - param_2 * fVar28) - param_3 * fVar29;
      FUN_052d90b0();
      return;
    }
    goto LAB_052d8354;
  }
  if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_052d8354;
  if (*(int *)(*(long *)(unaff_x22 + 0x18) + 0x24) == 2) goto LAB_052d7bb4;
  if (*(char *)((long)unaff_x19 + 0x2c1) == '\0') {
    lVar13 = unaff_x19[0x50];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar10 = FUN_066cd30c(lVar13,0);
    if ((uVar10 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x4e) = 0;
LAB_052d7e30:
      lVar11 = unaff_x19[0x50];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar10 = FUN_066cd30c(lVar11,0);
      if ((uVar10 & 1) != 0) {
        if (unaff_x19[0x50] == 0) goto LAB_052d8354;
        uVar17 = FUN_052c33e0(unaff_x19[0x50],*(undefined4 *)((long)unaff_x19 + 0xdc),0);
        *(undefined4 *)(unaff_x19 + 0x53) = uVar17;
        *(float *)((long)unaff_x19 + 0x29c) = param_2;
        *(float *)(unaff_x19 + 0x54) = param_3;
        *(float *)((long)unaff_x19 + 0x2a4) = param_4;
      }
    }
    else {
      if (unaff_x19[0x50] == 0) goto LAB_052d8354;
      cVar12 = *(char *)(unaff_x19[0x50] + 0x78);
      *(char *)(unaff_x19 + 0x4e) = cVar12;
      if (((cVar12 == '\0') || (FUN_052d92c8(), (char)unaff_x19[0x4e] == '\0')) ||
         (*(char *)((long)unaff_x19 + 0x36c) != '\0')) goto LAB_052d7e30;
      lVar13 = unaff_x19[0x50];
      if (lVar13 == 0) goto LAB_052d8354;
      if (*(char *)(lVar13 + 0xa0) == '\0') {
        cVar12 = *(char *)((long)unaff_x19 + 0x359);
        fVar14 = (float)FUN_052c3304(lVar13,*(undefined4 *)((long)unaff_x19 + 0xdc),0);
        fVar33 = param_4;
        fVar28 = param_2;
        fVar29 = param_3;
        if (cVar12 != '\0') {
          fVar23 = param_2;
          fVar16 = param_3;
          FUN_052cc80c();
          fVar19 = (float)FUN_066bd6e0(0);
          fVar15 = fVar23;
          fVar27 = fVar16;
          uVar17 = FUN_052d0164();
          fVar28 = fVar15;
          fVar29 = fVar27;
          lVar13 = FUN_066c67b0();
          if (lVar13 == 0) goto LAB_052d8354;
          uVar18 = FUN_066d4d38(lVar13,0);
          lVar13 = FUN_066c67b0();
          if (lVar13 == 0) goto LAB_052d8354;
          FUN_066d4cbc(lVar13,0);
          if (*(int *)(*(long *)PTR_DAT_06d08948 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar10 = FUN_052d9474(uVar17,fVar15,fVar27,uVar18,fVar28,fVar29);
          lVar13 = FUN_066c67b0();
          if (lVar13 == 0) goto LAB_052d8354;
          fVar28 = param_3 * fVar19 + param_4 * fVar23 + param_2 * fVar33;
          uVar20 = (ulong)(uint)fVar28;
          fVar29 = fVar14 * fVar23 + param_4 * fVar16 + param_3 * fVar33;
          uVar22 = (ulong)(uint)fVar29;
          fVar15 = (param_2 * fVar16 + param_4 * fVar19 + fVar14 * fVar33) - param_3 * fVar23;
          fVar28 = fVar28 - fVar14 * fVar16;
          fVar29 = fVar29 - param_2 * fVar19;
          fVar33 = ((param_4 * fVar33 - fVar14 * fVar19) - param_2 * fVar23) - param_3 * fVar16;
          if ((uVar10 & 1) == 0) {
            uVar9 = FUN_066d4d38(lVar13,0);
            uVar9 = FUN_066bde7c(fVar15,fVar28,fVar29,fVar33,uVar9,uVar20,uVar22,0);
            fVar15 = (float)FUN_052d021c();
          }
          else {
            uVar9 = FUN_066d4cbc();
            fVar15 = (float)FUN_066bde7c(fVar15,fVar28,fVar29,fVar33,uVar9,uVar20,uVar22,0);
            uVar9 = FUN_052d021c();
          }
          fVar27 = (float)FUN_066bdc90(uVar9,0);
          if (unaff_x19[0x30] == 0) goto LAB_052d8354;
          fVar23 = fVar15;
          fVar16 = fVar29;
          fVar19 = fVar28;
          param_3 = (float)FUN_066d4b64(unaff_x19[0x30],0);
          fVar24 = fVar15 * param_3;
          fVar25 = fVar27 * fVar23;
          fVar26 = fVar28 * fVar16;
          fVar14 = fVar29 * fVar19;
          fVar30 = fVar15 * fVar19;
          fVar31 = fVar28 * fVar23;
          fVar32 = fVar29 * param_3;
          param_2 = fVar27 * fVar16;
          fVar33 = fVar27 * fVar19;
          fVar27 = fVar27 * param_3;
          param_3 = fVar28 * param_3;
          fVar28 = fVar28 * fVar19;
          fVar19 = fVar15 * fVar16;
          fVar15 = fVar15 * fVar23;
          fVar23 = fVar29 * fVar23;
          fVar29 = fVar29 * fVar16;
          goto LAB_052d8288;
        }
      }
      else {
        uVar9 = FUN_052d0164();
        fVar14 = (float)FUN_052d021c();
        fVar15 = (float)FUN_066bd62c(uVar9,0);
        fVar33 = fVar14;
        fVar28 = param_2;
        fVar29 = param_3;
        lVar13 = FUN_066c67b0();
        if (lVar13 == 0) goto LAB_052d8354;
        fVar16 = (float)FUN_066d320c(lVar13,0);
        if (unaff_x19[0x30] == 0) goto LAB_052d8354;
        fVar21 = param_3 * fVar29;
        fVar23 = fVar15 * fVar28 + fVar14 * fVar29 + param_3 * fVar33;
        fVar19 = (fVar14 * fVar33 - fVar15 * fVar16) - param_2 * fVar28;
        fVar27 = (param_2 * fVar29 + fVar14 * fVar16 + fVar15 * fVar33) - param_3 * fVar28;
        fVar28 = (param_3 * fVar16 + fVar14 * fVar28 + param_2 * fVar33) - fVar15 * fVar29;
        fVar29 = fVar23 - param_2 * fVar16;
        fVar15 = fVar19 - fVar21;
        param_3 = (float)FUN_066d4b64(unaff_x19[0x30],0);
        fVar24 = fVar15 * param_3;
        fVar25 = fVar27 * fVar23;
        fVar26 = fVar28 * fVar21;
        fVar14 = fVar29 * fVar19;
        fVar30 = fVar15 * fVar19;
        fVar31 = fVar28 * fVar23;
        fVar32 = fVar29 * param_3;
        param_2 = fVar27 * fVar21;
        fVar33 = fVar27 * fVar19;
        fVar27 = fVar27 * param_3;
        param_3 = fVar28 * param_3;
        fVar28 = fVar28 * fVar19;
        fVar19 = fVar15 * fVar21;
        fVar15 = fVar15 * fVar23;
        fVar23 = fVar29 * fVar23;
        fVar29 = fVar29 * fVar21;
LAB_052d8288:
        fVar33 = fVar33 + fVar19 + fVar23;
        fVar28 = (fVar15 - fVar27) - fVar28;
        fVar14 = (fVar26 + fVar24 + fVar25) - fVar14;
        param_2 = (fVar32 + fVar30 + fVar31) - param_2;
        param_3 = fVar33 - param_3;
        param_4 = fVar28 - fVar29;
      }
      if (lVar11 == 0) goto LAB_052d8354;
      FUN_066d320c(lVar11,0);
      fVar15 = (float)FUN_066bd6e0(0);
      *(float *)(unaff_x19 + 0x53) =
           (param_3 * fVar28 + fVar14 * fVar33 + param_4 * fVar15) - param_2 * fVar29;
      *(float *)((long)unaff_x19 + 0x29c) =
           (fVar14 * fVar29 + param_2 * fVar33 + param_4 * fVar28) - param_3 * fVar15;
      *(float *)(unaff_x19 + 0x54) =
           (param_2 * fVar15 + param_3 * fVar33 + param_4 * fVar29) - fVar14 * fVar28;
      *(float *)((long)unaff_x19 + 0x2a4) =
           ((param_4 * fVar33 - fVar14 * fVar15) - param_2 * fVar28) - param_3 * fVar29;
    }
  }
  if (*(char *)(lVar8 + 0x48) == '\0') {
    uVar10 = FUN_0528e008(lVar8,0);
    if ((uVar10 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar8 + 0xa8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar10 = FUN_066cd30c(uVar9,0);
      if ((uVar10 & 1) == 0) goto LAB_052d7e80;
      if (*(long *)(lVar8 + 0xa8) == 0) goto LAB_052d8354;
      uVar5 = FUN_067418c4(*(long *)(lVar8 + 0xa8),0);
      uVar5 = uVar5 & 1;
    }
  }
  else {
LAB_052d7e80:
    uVar5 = 1;
  }
  uVar9 = *(undefined8 *)(lVar8 + 0xe0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar10 = FUN_066cd30c(uVar9,0);
  if ((uVar10 & 1) == 0) {
LAB_052d7f18:
    uVar6 = FUN_052914a4(lVar8,0);
    uVar6 = uVar6 & 1;
  }
  else {
    if (*(long *)(lVar8 + 0xe0) == 0) goto LAB_052d8354;
    uVar10 = FUN_0528dee4(*(long *)(lVar8 + 0xe0),0);
    if ((uVar10 & 1) == 0) goto LAB_052d7f18;
    uVar6 = 1;
  }
  if (((char)unaff_x19[0x69] == '\0') && (*(int *)(lVar8 + 0x20) != 1)) {
    if ((*(int *)(lVar8 + 0x20) == 2) ||
       ((*(char *)((long)unaff_x19 + 0xca) != '\0' || (iVar7 = FUN_0528dcb0(lVar8,0), 1 < iVar7))))
    {
      cVar12 = '\x01';
    }
    else {
      cVar12 = *(char *)(lVar8 + 600);
    }
    if ((uVar6 == 0 && uVar5 == 0) && cVar12 == '\0') goto LAB_052d7f30;
    FUN_052d5ec4();
    FUN_066cad54();
  }
  else {
LAB_052d7f30:
    FUN_052d96d0();
  }
  lVar8 = unaff_x19[0x50];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar10 = FUN_066cd30c(lVar8,0);
  if ((uVar10 & 1) != 0) {
    lVar8 = unaff_x19[0x28];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar10 = FUN_066cd30c(lVar8,0);
    if ((uVar10 & 1) != 0) {
      lVar8 = unaff_x19[0x50];
      if ((lVar8 == 0) || (unaff_x19[0x28] == 0)) {
LAB_052d8354:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_052ef850(*(undefined4 *)(lVar8 + 0x48),*(undefined4 *)(lVar8 + 0x4c),
                   *(undefined4 *)(lVar8 + 0x50),*(undefined4 *)(lVar8 + 0x3c),
                   *(undefined4 *)(lVar8 + 0x40),*(undefined4 *)(lVar8 + 0x44),unaff_x19[0x28],0);
    }
  }
  return;
}


