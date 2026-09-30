/*
FUNCTION_NAME: FUN_03666bb8
ENTRY_POINT: 03666bb8
PROGRAM: vrfs-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03666bb8(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long *param_4,
                 long param_5,long param_6)

{
  void *__dest;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  int *piVar21;
  int iVar22;
  code *pcVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  ulong uVar34;
  ulong uVar35;
  float fVar36;
  ulong uVar37;
  float fStack_1b8;
  float fStack_1b4;
  long lStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  puVar2 = PTR_DAT_06d9fd78;
                    /* try { // try from 03666bc8 to 03766bd3 has its CatchHandler @ 03666bd4 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03666b58 with catch @ 03666bd4
                       catch(type#1 @ 06a5a440) { ... } // from try @ 03666bc8 with catch @ 03666bd4
                       try { // try from 03666bd4 to 03766beb has its CatchHandler @ 03666b08 */
                    /* try { // try from 03666bec to 03766c03 has its CatchHandler @ 03666c70 */
  if ((bRam0000000007239704 & 1) == 0) {
                    /* try { // try from 03666c04 to 03766c5f has its CatchHandler @ 03666b08 */
    thunk_FUN_0159f088(PTR_DAT_06da0418);
    thunk_FUN_0159f088(PTR_DAT_06dc3868);
    thunk_FUN_0159f088(PTR_DAT_06d8a890);
    thunk_FUN_0159f088(PTR_DAT_06e21e50);
    thunk_FUN_0159f088(PTR_DAT_06db7458);
    thunk_FUN_0159f088(PTR_DAT_06e0a9a8);
    thunk_FUN_0159f088(PTR_DAT_06e128f0);
                    /* try { // try from 03666c60 to 03766c6f has its CatchHandler @ 03666c70 */
    thunk_FUN_0159f088(PTR_DAT_06dbc7c0);
    thunk_FUN_0159f088(PTR_DAT_06e61e40);
                    /* catch() { ... } // from try @ 03666bec with catch @ 03666c70
                       catch() { ... } // from try @ 03666c60 with catch @ 03666c70 */
                    /* try { // try from 03666c74 to 03766c77 has its CatchHandler @ 03666c80 */
                    /* try { // try from 03666c78 to 03766c83 has its CatchHandler @ 03666b08 */
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03666c74 with catch @ 03666c80
                        */
    bRam0000000007239704 = 1;
  }
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  fStack_170 = 0.0;
  uStack_16c = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  plStack_1a8 = (long *)0x0;
  lStack_1b0 = 0;
  uVar8 = System_Array__InternalArray__set_Item<GradientColorKey>(param_4);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar2);
  }
  uVar9 = FUN_051d94d4(uVar8,0,0);
  puVar1 = PTR_DAT_06d8a890;
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar8 = System_Array__InternalArray__set_Item<GradientColorKey>(param_4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar1);
  }
  plVar10 = (long *)FUN_03667868(uVar8);
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar18 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar18 + 0x12a);
  if (uVar9 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06e21e50) {
        puVar11 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_03666d5c;
      }
      uVar9 = uVar9 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06e21e50,0);
LAB_03666d5c:
  iVar4 = (*(code *)*puVar11)(plVar10,puVar11[1]);
  if (iVar4 == 0) {
    return;
  }
  lVar18 = (**(code **)(*param_4 + 600))(param_4,*(undefined8 *)(*param_4 + 0x260));
  lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>(param_4);
  if (lVar12 == 0) goto LAB_0366769c;
  iVar4 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar12,0);
  if (iVar4 == 0) {
LAB_03666dc0:
    lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>(param_4);
    if (lVar12 == 0) goto LAB_0366769c;
    uVar5 = FUN_036e1214(lVar12,0);
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar9 = FUN_051d94d4(lVar18,0,0);
    if ((uVar9 & 1) != 0) goto LAB_03666dc0;
    if (lVar18 == 0) goto LAB_0366769c;
    uVar5 = FUN_051d71b8(lVar18,0);
  }
  if (param_5 == 0) goto LAB_0366769c;
  fStack_1b8 = *(float *)(param_5 + 0x104);
  uVar9 = FUN_0308f3d8(*(undefined4 *)(param_5 + 0x100),0);
  if (DAT_0722a13e == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e50440);
    DAT_0722a13e = '\x01';
  }
  pfVar19 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
  fVar24 = (float)uVar9 - *pfVar19;
  uVar35 = (ulong)(uint)DAT_0534bf7c;
  fVar36 = (float)param_3;
  if ((fVar36 - pfVar19[2]) * (fVar36 - pfVar19[2]) +
      fVar24 * fVar24 + (fStack_1b8 - pfVar19[1]) * (fStack_1b8 - pfVar19[1]) < DAT_0534bf7c) {
    uVar9 = (ulong)*(uint *)(param_5 + 0x100);
    fStack_1b8 = *(float *)(param_5 + 0x104);
    param_3 = 0;
  }
  else {
    uVar17 = 0x80000000;
    if (fVar36 != INFINITY) {
      uVar17 = (int)fVar36;
    }
    if (uVar17 != uVar5) {
      return;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar13 = FUN_051d94d4(lVar18,0,0);
  if ((uVar13 & 1) == 0) {
    if (lVar18 == 0) goto LAB_0366769c;
    fVar24 = fStack_1b8;
    fVar36 = (float)FUN_051d7d18(uVar9,fStack_1b8,param_3,lVar18,0);
  }
  else {
    iVar4 = FUN_04882f98(0);
    fVar36 = (float)iVar4;
    iVar4 = FUN_04882fc0(0);
    puVar1 = PTR_DAT_06da0418;
    fVar24 = (float)iVar4;
    if (0 < (int)uVar5) {
      lVar12 = *(long *)PTR_DAT_06da0418;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar12 = *(long *)puVar1;
      }
      lVar20 = **(long **)(lVar12 + 0xb8);
      if (lVar20 == 0) goto LAB_0366769c;
      if ((int)uVar5 < *(int *)(lVar20 + 0x18)) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar20 = **(long **)(*(long *)puVar1 + 0xb8);
          if (lVar20 == 0) goto LAB_0366769c;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_03667864;
        lVar12 = *(long *)(lVar20 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_0366769c;
        iVar4 = FUN_051d0fb0(lVar12,0);
        lVar12 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar12 == 0) goto LAB_0366769c;
        if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_03667864;
        lVar12 = *(long *)(lVar12 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_0366769c;
        fVar36 = (float)iVar4;
        iVar4 = FUN_051d1098(lVar12,0);
        fVar24 = (float)iVar4;
      }
    }
    fVar36 = (float)uVar9 / fVar36;
    fVar24 = fStack_1b8 / fVar24;
  }
  uVar13 = 0x3f800000;
  if (1.0 < fVar24) {
    return;
  }
  if (fVar24 < 0.0) {
    return;
  }
  if (fVar36 < 0.0) {
    return;
  }
  if (1.0 < fVar36) {
    return;
  }
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar14 = FUN_051d2ac0(lVar18,0,0);
  if ((uVar14 & 1) != 0) {
    if (lVar18 == 0) goto LAB_0366769c;
    FUN_051d81ac(&uStack_f0,uVar9,fStack_1b8,lVar18,0);
    uStack_158 = uStack_e8;
    uStack_160 = uStack_f0;
    uStack_150 = uStack_e0;
    uVar13 = param_3;
  }
  lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>(param_4);
  if (lVar12 == 0) goto LAB_0366769c;
  iVar4 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar12,0);
  if ((iVar4 == 0) || (*(int *)((long)param_4 + 0x24) == 0)) {
    fStack_1b4 = 3.4028235e+38;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar14 = FUN_051d2ac0(lVar18,0,0);
    if ((uVar14 & 1) == 0) {
      fVar24 = 100.0;
    }
    else {
      FUN_051db578(&uStack_160,0);
      if (DAT_0722a469 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06d97918);
        DAT_0722a469 = '\x01';
      }
      fVar25 = (float)uVar13;
      fVar32 = ABS(fVar25);
      uVar13 = (ulong)(uint)fVar32;
      uVar35 = 0x41000000;
      fVar36 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
      fVar24 = fVar32 * DAT_0534bb40;
      if (fVar32 * DAT_0534bb40 <= fVar36) {
        fVar24 = fVar36;
      }
      if (fVar32 < fVar24) {
        fVar24 = INFINITY;
      }
      else {
        if (lVar18 == 0) goto LAB_0366769c;
        fVar24 = (float)FUN_051d54c0(lVar18,0);
        fVar36 = (float)FUN_051d5438(lVar18,0);
        fVar24 = ABS((fVar24 - fVar36) / fVar25);
      }
    }
    uVar17 = *(uint *)((long)param_4 + 0x24);
    if ((uVar17 & 0xfffffffe) == 2) {
      lVar12 = FUN_030a030c(0);
      if (lVar12 == 0) goto LAB_0366769c;
      if (*(long *)(lVar12 + 0x10) == 0) {
LAB_036677b8:
        fStack_1b4 = 3.4028235e+38;
      }
      else {
        lVar12 = FUN_030a030c(0);
        if (lVar12 == 0) goto LAB_0366769c;
        lVar12 = *(long *)(lVar12 + 0x18);
        uStack_138 = uStack_158;
        uStack_140 = uStack_160;
        uStack_130 = uStack_150;
        uVar7 = FUN_051e2138((int)param_4[5],0);
        if (lVar12 == 0) goto LAB_0366769c;
        uStack_e8 = uStack_138;
        uStack_f0 = uStack_140;
        uStack_e0 = uStack_130;
        lVar12 = (**(code **)(lVar12 + 0x18))
                           (fVar24,*(undefined8 *)(lVar12 + 0x40),&uStack_f0,uVar7,
                            *(undefined8 *)(lVar12 + 0x28));
        if (lVar12 == 0) goto LAB_0366769c;
        if (*(long *)(lVar12 + 0x18) == 0) goto LAB_036677b8;
        if ((int)*(long *)(lVar12 + 0x18) == 0) goto LAB_03667864;
        fStack_1b4 = (float)FUN_049ab7f0(lVar12 + 0x20,0);
      }
      uVar17 = *(uint *)((long)param_4 + 0x24);
    }
    else {
      fStack_1b4 = 3.4028235e+38;
    }
    if ((uVar17 | 2) == 3) {
      lVar12 = FUN_030a030c(0);
      if (lVar12 == 0) goto LAB_0366769c;
      if (*(long *)(lVar12 + 0x28) != 0) {
        lVar12 = FUN_030a030c(0);
        if (lVar12 == 0) goto LAB_0366769c;
        lVar12 = *(long *)(lVar12 + 0x30);
        uStack_138 = uStack_158;
        uStack_140 = uStack_160;
        uStack_130 = uStack_150;
        uVar7 = FUN_051e2138((int)param_4[5],0);
        if (lVar12 == 0) goto LAB_0366769c;
        uStack_e8 = uStack_138;
        uStack_f0 = uStack_140;
        uStack_e0 = uStack_130;
        lVar12 = (**(code **)(lVar12 + 0x18))
                           (fVar24,*(undefined8 *)(lVar12 + 0x40),&uStack_f0,uVar7,
                            *(undefined8 *)(lVar12 + 0x28));
        if (lVar12 == 0) goto LAB_0366769c;
        if (*(long *)(lVar12 + 0x18) != 0) {
          if ((int)*(long *)(lVar12 + 0x18) == 0) {
LAB_03667864:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          fStack_1b4 = (float)FUN_03b71a54(lVar12 + 0x20,0);
        }
      }
    }
  }
  puVar1 = PTR_DAT_06dc3868;
  lVar12 = param_4[7];
  if (lVar12 != 0) {
    iVar4 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar4) {
      FUN_031dd574(*(undefined8 *)(lVar12 + 0x10),0,iVar4,0);
    }
    System_Array__InternalArray__set_Item<GradientColorKey>(param_4);
    lVar12 = *(long *)puVar1;
    lVar20 = param_4[7];
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = thunk_FUN_016466fc();
    }
    uVar14 = (ulong)(uint)fStack_1b8;
    FUN_03667924(uVar9,lVar12,lVar18,plVar10,lVar20);
    puVar1 = PTR_DAT_06e61e40;
    lVar12 = param_4[7];
    if (lVar12 != 0) {
      iVar4 = *(int *)(lVar12 + 0x18);
      if (iVar4 < 1) {
        return;
      }
      iVar22 = 0;
      puVar11 = (undefined8 *)((ulong)&lStack_1b0 | 8);
      uVar37 = uVar9;
      while (lVar12 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                (lVar12,iVar22,*(undefined8 *)puVar1), lVar12 != 0) {
        lVar12 = FUN_051e516c(lVar12,0);
        if ((char)param_4[4] == '\0') {
          if (lVar12 == 0) break;
LAB_03667408:
          lVar20 = FUN_051df7a8(lVar12,0);
          if (lVar20 == 0) break;
          fVar24 = (float)FUN_04f1b1c0(lVar20,0);
          uVar31 = uVar14;
          uVar34 = uVar13;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar15 = FUN_051d94d4(lVar18,0,0);
          fVar32 = (float)uVar14;
          fVar25 = (float)uVar13;
          uVar14 = uVar31;
          uVar13 = uVar34;
          fVar36 = 0.0;
          if ((uVar15 & 1) == 0) {
            lVar16 = System_Array__InternalArray__set_Item<GradientColorKey>(param_4);
            if (lVar16 == 0) break;
            iVar6 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar16,0);
            uVar14 = uVar31;
            uVar13 = uVar34;
            fVar36 = 0.0;
            if (iVar6 != 0) {
              fVar27 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar20,0);
              fVar36 = (float)uVar31;
              fVar33 = (float)uVar34;
              fVar28 = (float)FUN_051db584(&uStack_160,0);
              fVar33 = (float)uVar34 - fVar33;
              uVar13 = (ulong)(uint)fVar33;
              fVar33 = fVar25 * fVar33;
              fVar36 = fVar33 + fVar24 * (fVar27 - fVar28) + fVar32 * ((float)uVar31 - fVar36);
              fVar27 = (float)FUN_051db578(&uStack_160,0);
              fVar28 = fVar25 * (float)uVar13;
              uVar14 = (ulong)(uint)fVar28;
              fVar36 = fVar36 / (fVar28 + fVar24 * fVar27 + fVar32 * fVar33);
              if (fVar36 < 0.0) goto LAB_03667688;
            }
          }
          if (fVar36 < fStack_1b4) {
            puVar11[8] = 0;
            puVar11[5] = 0;
            puVar11[4] = 0;
            puVar11[7] = 0;
            puVar11[6] = 0;
            puVar11[1] = 0;
            *puVar11 = 0;
            puVar11[3] = 0;
            puVar11[2] = 0;
            lStack_1b0 = lVar12;
            thunk_FUN_01656ef8(&lStack_1b0,lVar12);
            fVar27 = (float)uVar13;
            fVar33 = (float)uVar14;
            plStack_1a8 = param_4;
            thunk_FUN_01656ef8(puVar11,param_4);
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,fVar36);
            uStack_16c = (undefined4)uVar37;
            uStack_168 = CONCAT44(uVar5,fStack_1b8);
            if (param_6 == 0) break;
            uStack_1a0 = CONCAT44((float)*(int *)(param_6 + 0x18),fVar36);
            if ((param_4[7] == 0) ||
               (lVar12 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                   (param_4[7],iVar22,*(undefined8 *)puVar1), lVar12 == 0)) break;
            uVar7 = FUN_03663fd4();
            uStack_198 = CONCAT44(uStack_198._4_4_,uVar7);
            lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>(param_4);
            if (lVar12 == 0) break;
            uVar7 = FUN_036e1250(lVar12,0);
            uStack_190 = CONCAT44(uVar7,(undefined4)uStack_190);
            lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>(param_4);
            if (lVar12 == 0) break;
            uVar7 = FUN_036e1194(lVar12,0);
            uStack_188 = CONCAT44(uStack_188._4_4_,uVar7);
            fVar29 = (float)FUN_051db584(&uStack_160,0);
            fVar28 = fVar33;
            fVar26 = fVar27;
            fVar30 = (float)FUN_051db578(&uStack_160,0);
            lVar20 = *(long *)PTR_DAT_06db7458;
            uVar35 = (ulong)(uint)-fVar24;
            fStack_170 = -fVar25;
            fVar33 = fVar33 + fVar36 * fVar28;
            uVar14 = (ulong)(uint)fVar33;
            fVar27 = fVar27 + fVar36 * fVar26;
            uVar13 = (ulong)(uint)fVar27;
            uStack_188 = CONCAT44(fVar29 + fVar36 * fVar30,(undefined4)uStack_188);
            uStack_180 = CONCAT44(fVar27,fVar33);
            uStack_178 = CONCAT44(-fVar32,-fVar24);
            memcpy(&uStack_140,&lStack_1b0,0x50);
            lVar12 = *(long *)(param_6 + 0x10);
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
            if (lVar12 == 0) break;
            uVar17 = *(uint *)(param_6 + 0x18);
            if (uVar17 < *(uint *)(lVar12 + 0x18)) {
              __dest = (void *)(lVar12 + (long)(int)uVar17 * 0x50 + 0x20);
              *(uint *)(param_6 + 0x18) = uVar17 + 1;
              memcpy(__dest,&uStack_140,0x50);
              thunk_FUN_01656ef8(__dest,0);
            }
            else {
              lVar12 = *(long *)(*(long *)(lVar20 + 0x20) + 0xc0);
              pcVar23 = *(code **)(*(long *)(lVar12 + 0x58) + 8);
              memcpy(&uStack_f0,&uStack_140,0x50);
              (*pcVar23)(param_6,&uStack_f0,*(undefined8 *)(lVar12 + 0x58));
            }
          }
        }
        else {
          uVar31 = uVar13;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            uVar31 = uVar13;
          }
          uVar13 = FUN_051d94d4(lVar18,0,0);
          puVar3 = PTR_DAT_06e50440;
          if ((uVar13 & 1) == 0) {
            if ((lVar18 == 0) || (lVar20 = FUN_051e5130(lVar18,0), lVar20 == 0)) break;
            uVar8 = FUN_04f1adf8(lVar20,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar3);
              DAT_0722a396 = '\x01';
            }
            lVar20 = *(long *)(*(long *)puVar3 + 0xb8);
            fVar32 = (float)FUN_04f13f58(uVar8,uVar14,uVar31,uVar35,*(undefined4 *)(lVar20 + 0x48),
                                         *(undefined4 *)(lVar20 + 0x4c),
                                         *(undefined4 *)(lVar20 + 0x50),0);
            fVar24 = (float)uVar14;
            fVar36 = (float)uVar31;
            fVar25 = (float)FUN_051d5438(lVar18,0);
            if ((lVar12 == 0) || (lVar20 = FUN_051df7a8(lVar12,0), lVar20 == 0)) break;
            fVar28 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar20,0);
            fVar33 = fVar24;
            fVar27 = fVar36;
            lVar20 = FUN_051e5130(lVar18,0);
            if (lVar20 == 0) break;
            fVar26 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar20,0);
            lVar20 = FUN_051df7a8(lVar12,0);
            if (lVar20 == 0) break;
            uVar35 = (ulong)(uint)(fVar28 - fVar26);
            fVar29 = (float)uVar14 * fVar25;
            fVar30 = (float)uVar31 * fVar25;
            uVar13 = (ulong)(uint)fVar30;
            fVar33 = (fVar24 - fVar33) - fVar29;
            fVar24 = (float)FUN_04f1b1c0(lVar20,0);
            uVar37 = uVar9 & 0xffffffff;
            fVar36 = ((fVar36 - fVar27) - fVar30) * (float)uVar13;
            uVar14 = (ulong)(uint)fVar36;
            if (0.0 <= fVar36 + ((fVar28 - fVar26) - fVar32 * fVar25) * fVar24 + fVar33 * fVar29)
            goto LAB_03667408;
          }
          else {
            if ((lVar12 == 0) || (lVar20 = FUN_051df7a8(lVar12,0), lVar20 == 0)) break;
            uVar8 = FUN_04f1adf8(lVar20,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar3);
              DAT_0722a396 = '\x01';
            }
            lVar20 = *(long *)(*(long *)puVar3 + 0xb8);
            fVar24 = (float)FUN_04f13f58(uVar8,uVar14,uVar31,uVar35,*(undefined4 *)(lVar20 + 0x48),
                                         *(undefined4 *)(lVar20 + 0x4c),
                                         *(undefined4 *)(lVar20 + 0x50),0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar3);
              DAT_0722a396 = '\x01';
            }
            lVar20 = *(long *)(*(long *)puVar3 + 0xb8);
            uVar13 = (ulong)(uint)*(float *)(lVar20 + 0x50);
            fVar32 = (float)uVar14;
            fVar36 = (float)uVar31 * *(float *)(lVar20 + 0x50);
            uVar14 = (ulong)(uint)fVar36;
            if (0.0 < fVar36 + fVar24 * *(float *)(lVar20 + 0x48) +
                               fVar32 * *(float *)(lVar20 + 0x4c)) goto LAB_03667408;
          }
        }
LAB_03667688:
        if (iVar4 + -1 == iVar22) {
          return;
        }
        lVar12 = param_4[7];
        iVar22 = iVar22 + 1;
        if (lVar12 == 0) break;
      }
    }
  }
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


