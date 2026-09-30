/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$SetWidth
ENTRY_POINT: 052d79f0
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__SetWidth
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  long *unaff_x19;
  long lVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x24;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long in_stack_00000078;
  
  uVar5 = FUN_066cd30c();
  if ((uVar5 & 1) != 0) {
    lVar8 = unaff_x19[0x1c];
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(lVar8,0);
    if ((uVar5 & 1) == 0) {
      FUN_052d4440();
    }
    else {
      FUN_052c9eec();
    }
  }
  if ((unaff_x22 == 0) || (lVar8 = *(long *)(unaff_x22 + 0x18), lVar8 == 0)) goto LAB_052d8354;
  uVar14 = *(undefined4 *)(lVar8 + 0x30);
  bVar1 = true;
  *(undefined1 *)(unaff_x19 + 0x75) = 0;
  *(undefined1 *)(unaff_x19 + 0x79) = 1;
  *(undefined4 *)(unaff_x19 + 0x80) = uVar14;
  *(undefined1 *)((long)unaff_x19 + 0x3f9) = 0;
  if (((int)unaff_x19[0x1b] != 1) && (bVar1 = false, *(char *)(lVar8 + 0x34) != '\0')) {
    bVar1 = *(int *)(lVar8 + 0x38) == 1;
  }
  *(bool *)((long)unaff_x19 + 0x1e9) = bVar1;
  *(undefined1 *)(unaff_x19 + 0x5e) = 0;
  lVar6 = FUN_066c67b0(lVar8,0);
  uVar10 = *(undefined8 *)(lVar8 + 0xa8);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x24);
  }
  uVar5 = FUN_066cd30c(uVar10,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(lVar8 + 0xa8) == 0) goto LAB_052d8354;
    lVar6 = FUN_066c67b0(*(long *)(lVar8 + 0xa8),0);
  }
  if (unaff_x19[0x4c] == 0) goto LAB_052d8354;
  uVar5 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                    (unaff_x19[0x4c],lVar8,&stack0x00000078,*(undefined8 *)PTR_DAT_06d3d768);
  if ((uVar5 & 1) != 0) {
    if (in_stack_00000078 != 0) {
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
  uVar5 = FUN_052d8358();
  if ((uVar5 & 1) != 0) {
    FUN_052d848c();
  }
  uVar10 = (**(code **)(*unaff_x19 + 0x238))();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x24);
  }
  uVar5 = FUN_066cd30c(uVar10,0);
  if ((uVar5 & 1) == 0) {
LAB_052d7bb4:
    if (lVar6 != 0) {
      FUN_066d320c(lVar6,0);
      fVar11 = (float)FUN_066bd6e0(0);
      fVar30 = param_4;
      fVar25 = param_2;
      fVar26 = param_3;
      fVar12 = (float)FUN_052cc80c();
      *(float *)(unaff_x19 + 0x53) =
           (param_2 * fVar26 + param_4 * fVar12 + fVar11 * fVar30) - param_3 * fVar25;
      *(float *)((long)unaff_x19 + 0x29c) =
           (param_3 * fVar12 + param_4 * fVar25 + param_2 * fVar30) - fVar11 * fVar26;
      *(float *)(unaff_x19 + 0x54) =
           (fVar11 * fVar25 + param_4 * fVar26 + param_3 * fVar30) - param_2 * fVar12;
      *(float *)((long)unaff_x19 + 0x2a4) =
           ((param_4 * fVar30 - fVar11 * fVar12) - param_2 * fVar25) - param_3 * fVar26;
      FUN_052d90b0();
      return;
    }
    goto LAB_052d8354;
  }
  if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_052d8354;
  if (*(int *)(*(long *)(unaff_x22 + 0x18) + 0x24) == 2) goto LAB_052d7bb4;
  if (*(char *)((long)unaff_x19 + 0x2c1) == '\0') {
    lVar9 = unaff_x19[0x50];
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(lVar9,0);
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x4e) = 0;
LAB_052d7e30:
      lVar6 = unaff_x19[0x50];
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar5 = FUN_066cd30c(lVar6,0);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[0x50] == 0) goto LAB_052d8354;
        uVar14 = FUN_052c33e0(unaff_x19[0x50],*(undefined4 *)((long)unaff_x19 + 0xdc),0);
        *(undefined4 *)(unaff_x19 + 0x53) = uVar14;
        *(float *)((long)unaff_x19 + 0x29c) = param_2;
        *(float *)(unaff_x19 + 0x54) = param_3;
        *(float *)((long)unaff_x19 + 0x2a4) = param_4;
      }
    }
    else {
      if (unaff_x19[0x50] == 0) goto LAB_052d8354;
      cVar7 = *(char *)(unaff_x19[0x50] + 0x78);
      *(char *)(unaff_x19 + 0x4e) = cVar7;
      if (((cVar7 == '\0') || (FUN_052d92c8(), (char)unaff_x19[0x4e] == '\0')) ||
         (*(char *)((long)unaff_x19 + 0x36c) != '\0')) goto LAB_052d7e30;
      lVar9 = unaff_x19[0x50];
      if (lVar9 == 0) goto LAB_052d8354;
      if (*(char *)(lVar9 + 0xa0) == '\0') {
        cVar7 = *(char *)((long)unaff_x19 + 0x359);
        fVar11 = (float)FUN_052c3304(lVar9,*(undefined4 *)((long)unaff_x19 + 0xdc),0);
        fVar30 = param_4;
        fVar25 = param_2;
        fVar26 = param_3;
        if (cVar7 != '\0') {
          fVar20 = param_2;
          fVar13 = param_3;
          FUN_052cc80c();
          fVar16 = (float)FUN_066bd6e0(0);
          fVar12 = fVar20;
          fVar24 = fVar13;
          uVar14 = FUN_052d0164();
          fVar25 = fVar12;
          fVar26 = fVar24;
          lVar9 = FUN_066c67b0();
          if (lVar9 == 0) goto LAB_052d8354;
          uVar15 = FUN_066d4d38(lVar9,0);
          lVar9 = FUN_066c67b0();
          if (lVar9 == 0) goto LAB_052d8354;
          FUN_066d4cbc(lVar9,0);
          if (*(int *)(*(long *)PTR_DAT_06d08948 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar5 = FUN_052d9474(uVar14,fVar12,fVar24,uVar15,fVar25,fVar26);
          lVar9 = FUN_066c67b0();
          if (lVar9 == 0) goto LAB_052d8354;
          fVar25 = param_3 * fVar16 + param_4 * fVar20 + param_2 * fVar30;
          uVar17 = (ulong)(uint)fVar25;
          fVar26 = fVar11 * fVar20 + param_4 * fVar13 + param_3 * fVar30;
          uVar19 = (ulong)(uint)fVar26;
          fVar12 = (param_2 * fVar13 + param_4 * fVar16 + fVar11 * fVar30) - param_3 * fVar20;
          fVar25 = fVar25 - fVar11 * fVar13;
          fVar26 = fVar26 - param_2 * fVar16;
          fVar30 = ((param_4 * fVar30 - fVar11 * fVar16) - param_2 * fVar20) - param_3 * fVar13;
          if ((uVar5 & 1) == 0) {
            uVar10 = FUN_066d4d38(lVar9,0);
            uVar10 = FUN_066bde7c(fVar12,fVar25,fVar26,fVar30,uVar10,uVar17,uVar19,0);
            fVar12 = (float)FUN_052d021c();
          }
          else {
            uVar10 = FUN_066d4cbc();
            fVar12 = (float)FUN_066bde7c(fVar12,fVar25,fVar26,fVar30,uVar10,uVar17,uVar19,0);
            uVar10 = FUN_052d021c();
          }
          fVar24 = (float)FUN_066bdc90(uVar10,0);
          if (unaff_x19[0x30] == 0) goto LAB_052d8354;
          fVar20 = fVar12;
          fVar13 = fVar26;
          fVar16 = fVar25;
          param_3 = (float)FUN_066d4b64(unaff_x19[0x30],0);
          fVar21 = fVar12 * param_3;
          fVar22 = fVar24 * fVar20;
          fVar23 = fVar25 * fVar13;
          fVar11 = fVar26 * fVar16;
          fVar27 = fVar12 * fVar16;
          fVar28 = fVar25 * fVar20;
          fVar29 = fVar26 * param_3;
          param_2 = fVar24 * fVar13;
          fVar30 = fVar24 * fVar16;
          fVar24 = fVar24 * param_3;
          param_3 = fVar25 * param_3;
          fVar25 = fVar25 * fVar16;
          fVar16 = fVar12 * fVar13;
          fVar12 = fVar12 * fVar20;
          fVar20 = fVar26 * fVar20;
          fVar26 = fVar26 * fVar13;
          goto LAB_052d8288;
        }
      }
      else {
        uVar10 = FUN_052d0164();
        fVar11 = (float)FUN_052d021c();
        fVar12 = (float)FUN_066bd62c(uVar10,0);
        fVar30 = fVar11;
        fVar25 = param_2;
        fVar26 = param_3;
        lVar9 = FUN_066c67b0();
        if (lVar9 == 0) goto LAB_052d8354;
        fVar13 = (float)FUN_066d320c(lVar9,0);
        if (unaff_x19[0x30] == 0) goto LAB_052d8354;
        fVar18 = param_3 * fVar26;
        fVar20 = fVar12 * fVar25 + fVar11 * fVar26 + param_3 * fVar30;
        fVar16 = (fVar11 * fVar30 - fVar12 * fVar13) - param_2 * fVar25;
        fVar24 = (param_2 * fVar26 + fVar11 * fVar13 + fVar12 * fVar30) - param_3 * fVar25;
        fVar25 = (param_3 * fVar13 + fVar11 * fVar25 + param_2 * fVar30) - fVar12 * fVar26;
        fVar26 = fVar20 - param_2 * fVar13;
        fVar12 = fVar16 - fVar18;
        param_3 = (float)FUN_066d4b64(unaff_x19[0x30],0);
        fVar21 = fVar12 * param_3;
        fVar22 = fVar24 * fVar20;
        fVar23 = fVar25 * fVar18;
        fVar11 = fVar26 * fVar16;
        fVar27 = fVar12 * fVar16;
        fVar28 = fVar25 * fVar20;
        fVar29 = fVar26 * param_3;
        param_2 = fVar24 * fVar18;
        fVar30 = fVar24 * fVar16;
        fVar24 = fVar24 * param_3;
        param_3 = fVar25 * param_3;
        fVar25 = fVar25 * fVar16;
        fVar16 = fVar12 * fVar18;
        fVar12 = fVar12 * fVar20;
        fVar20 = fVar26 * fVar20;
        fVar26 = fVar26 * fVar18;
LAB_052d8288:
        fVar30 = fVar30 + fVar16 + fVar20;
        fVar25 = (fVar12 - fVar24) - fVar25;
        fVar11 = (fVar23 + fVar21 + fVar22) - fVar11;
        param_2 = (fVar29 + fVar27 + fVar28) - param_2;
        param_3 = fVar30 - param_3;
        param_4 = fVar25 - fVar26;
      }
      if (lVar6 == 0) goto LAB_052d8354;
      FUN_066d320c(lVar6,0);
      fVar12 = (float)FUN_066bd6e0(0);
      *(float *)(unaff_x19 + 0x53) =
           (param_3 * fVar25 + fVar11 * fVar30 + param_4 * fVar12) - param_2 * fVar26;
      *(float *)((long)unaff_x19 + 0x29c) =
           (fVar11 * fVar26 + param_2 * fVar30 + param_4 * fVar25) - param_3 * fVar12;
      *(float *)(unaff_x19 + 0x54) =
           (param_2 * fVar12 + param_3 * fVar30 + param_4 * fVar26) - fVar11 * fVar25;
      *(float *)((long)unaff_x19 + 0x2a4) =
           ((param_4 * fVar30 - fVar11 * fVar12) - param_2 * fVar25) - param_3 * fVar26;
    }
  }
  if (*(char *)(lVar8 + 0x48) == '\0') {
    uVar5 = FUN_0528e008(lVar8,0);
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar8 + 0xa8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar5 = FUN_066cd30c(uVar10,0);
      if ((uVar5 & 1) == 0) goto LAB_052d7e80;
      if (*(long *)(lVar8 + 0xa8) == 0) goto LAB_052d8354;
      uVar2 = FUN_067418c4(*(long *)(lVar8 + 0xa8),0);
      uVar2 = uVar2 & 1;
    }
  }
  else {
LAB_052d7e80:
    uVar2 = 1;
  }
  uVar10 = *(undefined8 *)(lVar8 + 0xe0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066cd30c(uVar10,0);
  if ((uVar5 & 1) == 0) {
LAB_052d7f18:
    uVar3 = FUN_052914a4(lVar8,0);
    uVar3 = uVar3 & 1;
  }
  else {
    if (*(long *)(lVar8 + 0xe0) == 0) goto LAB_052d8354;
    uVar5 = FUN_0528dee4(*(long *)(lVar8 + 0xe0),0);
    if ((uVar5 & 1) == 0) goto LAB_052d7f18;
    uVar3 = 1;
  }
  if (((char)unaff_x19[0x69] == '\0') && (*(int *)(lVar8 + 0x20) != 1)) {
    if ((*(int *)(lVar8 + 0x20) == 2) ||
       ((*(char *)((long)unaff_x19 + 0xca) != '\0' || (iVar4 = FUN_0528dcb0(lVar8,0), 1 < iVar4))))
    {
      cVar7 = '\x01';
    }
    else {
      cVar7 = *(char *)(lVar8 + 600);
    }
    if ((uVar3 == 0 && uVar2 == 0) && cVar7 == '\0') goto LAB_052d7f30;
    FUN_052d5ec4();
    FUN_066cad54();
  }
  else {
LAB_052d7f30:
    FUN_052d96d0();
  }
  lVar8 = unaff_x19[0x50];
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066cd30c(lVar8,0);
  if ((uVar5 & 1) != 0) {
    lVar8 = unaff_x19[0x28];
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(lVar8,0);
    if ((uVar5 & 1) != 0) {
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


