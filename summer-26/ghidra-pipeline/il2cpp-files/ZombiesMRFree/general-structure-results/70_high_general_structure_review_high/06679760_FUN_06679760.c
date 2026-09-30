/*
FUNCTION_NAME: FUN_06679760
ENTRY_POINT: 06679760
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_06679760(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  float *pfVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  ulong uVar36;
  long *plVar37;
  uint uVar38;
  int iVar39;
  long lVar40;
  int iVar41;
  long lVar42;
  ulong uVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  ulong uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  ulong uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  undefined1 auVar67 [12];
  int local_204;
  int local_1d4;
  long local_168;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((DAT_073a0dcb & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_IList<XmlNode>_TypeInfo);
    FUN_02fe925c(System_Func<FocusInEvent>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_IList<cc>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_IList<TextureBlitter_BlitInfo>_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_DebugTree_INodeUI<IActiveState>_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_DebugTree_INodeUI<IInteractor>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeInfo);
    FUN_02fe925c(UnityEngine_Pool_IObjectPool<HashSet<int>>_TypeInfo);
    FUN_02fe925c(UnityEngine_Pool_IObjectPool<RANSACVelocity>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo);
    FUN_02fe925c(System_IObservable<InputEventPtr>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo);
    FUN_02fe925c(System_IObserver<InputEventPtr>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6de28);
    FUN_02fe925c(System_IObserver<InputRemoting_Message>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_ICollection<Expression>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d918);
    FUN_02fe925c(PTR_DAT_06f79670);
    FUN_02fe925c(System_Collections_Generic_IEnumerable<FileInfo>_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_Input_IOneEuroFilter<Quaternion>_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_Input_IOneEuroFilter<float>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f81e80);
    FUN_02fe925c(Oculus_Interaction_Input_IOneEuroFilter<Vector3>_TypeInfo);
    DAT_073a0dcb = 1;
  }
  puVar10 = System_Collections_Generic_ICollection<Expression>_TypeInfo;
  if (param_2 != 0) {
    plVar37 = (long *)(param_2 + 0xa0);
    if (*plVar37 != 0) {
      return *plVar37;
    }
    if (*(int *)(*(long *)System_Collections_Generic_ICollection<Expression>_TypeInfo + 0xe0) == 0)
    {
      thunk_FUN_02fdcff0();
    }
    if (DAT_073a0dd6 == '\0') {
      FUN_02fe925c(System_Collections_Generic_ICollection<Expression>_TypeInfo);
      DAT_073a0dd6 = '\x01';
    }
    lVar12 = *(long *)puVar10;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar12 = *(long *)puVar10;
    }
    puVar10 = System_IObservable<InputEventPtr>_TypeInfo;
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if ((lVar12 != 0) && (lVar40 = *(long *)(param_2 + 0x10), lVar40 != 0)) {
      if ((*(long *)(lVar40 + 0x40) == 0) ||
         ((*(int *)(lVar40 + 0x48) == 0 || (*(char *)(param_2 + 0x2c) == '\0')))) {
        return 0;
      }
      iVar3 = *(int *)(lVar12 + 0x34);
      lVar12 = thunk_FUN_0301080c(*(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo);
      puVar11 = UnityEngine_Pool_IObjectPool<HashSet<int>>_TypeInfo;
      FUN_0442fab4(lVar12,*(undefined8 *)UnityEngine_Pool_IObjectPool<HashSet<int>>_TypeInfo);
      lVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar10);
      FUN_0442fab4(lVar13,*(undefined8 *)puVar11);
      lVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                   UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo);
      FUN_0442fab4(lVar14,*(undefined8 *)
                           UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeInfo);
      puVar11 = PTR_DAT_06f79670;
      lVar24 = *(long *)(param_2 + 0x20);
      lVar15 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f79670,0x1ff);
      puVar10 = PTR_DAT_06f6d918;
      lVar16 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d918,0x1ff);
      lVar17 = FUN_02fe9340(*(undefined8 *)puVar10,0x1ff);
      if (*(int *)(lVar40 + 0x78) < 1) {
        lVar18 = 0;
      }
      else {
        lVar18 = FUN_02fe9340(*(undefined8 *)puVar10,0x1ff);
      }
      if (*(int *)(lVar40 + 0x88) < 1) {
        local_168 = 0;
      }
      else {
        local_168 = FUN_02fe9340(*(undefined8 *)puVar11,0x1ff);
      }
      puVar11 = System_IObserver<InputEventPtr>_TypeInfo;
      lVar19 = thunk_FUN_0301080c(*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
      puVar10 = UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo;
      FUN_04417278(lVar19,*(undefined8 *)UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo
                  );
      lVar20 = thunk_FUN_0301080c(*(undefined8 *)puVar11);
      FUN_04417278(lVar20,*(undefined8 *)puVar10);
      lVar21 = thunk_FUN_0301080c(*(undefined8 *)System_Collections_Generic_IList<XmlNode>_TypeInfo)
      ;
      FUN_0667c530(lVar21,0);
      if (lVar21 != 0) {
        *(long *)(lVar21 + 0x10) = lVar12;
        thunk_FUN_03048534((long *)(lVar21 + 0x10),lVar12);
        *(long *)(lVar21 + 0x18) = lVar13;
        thunk_FUN_03048534((long *)(lVar21 + 0x18),lVar13);
        *(long *)(lVar21 + 0x20) = lVar14;
        thunk_FUN_03048534((long *)(lVar21 + 0x20),lVar14);
        fVar9 = DAT_0136a264;
        iVar27 = *(int *)(param_1 + 0xec);
        uVar5 = iVar27 * 0x40;
        uVar38 = iVar27 << 6 | 0x3f;
        if (-1 < (int)uVar5) {
          uVar38 = uVar5;
        }
        iVar34 = 0x800;
        iVar1 = (int)uVar38 >> 6;
        iVar35 = 0x800;
        if ((int)uVar5 < 0x1000040) {
          iVar34 = iVar1 + 0x3fe;
          if (-1 < iVar1 + 0x1ff) {
            iVar34 = iVar1 + 0x1ff;
          }
          iVar35 = iVar1 << 2;
          if (0x803f < (int)uVar5) {
            iVar35 = 0x800;
          }
          iVar34 = (iVar34 >> 9) << 2;
        }
        iVar39 = *(int *)(lVar40 + 0x20);
        iVar2 = iVar1 + 0x7fffe;
        if (-1 < iVar1 + 0x3ffff) {
          iVar2 = iVar1 + 0x3ffff;
        }
        iVar1 = iVar39 + 0x3f;
        if (-1 < iVar39) {
          iVar1 = iVar39;
        }
        if (iVar39 < 0x40) {
LAB_0667a520:
          *plVar37 = lVar21;
          thunk_FUN_03048534(plVar37,lVar21);
          return lVar21;
        }
        if (lVar24 != 0) {
          iVar8 = 0;
          local_1d4 = 0;
          local_204 = 0;
          uVar36 = 0;
          uVar38 = 0;
          iVar39 = 0;
          do {
            iVar32 = 0;
            if (iVar27 != 0) {
              iVar32 = (int)uVar36 / iVar27;
            }
            iVar27 = *(int *)(*(long *)(lVar40 + 0x40) + uVar36 * 0x10 + 0xc);
            auVar67 = FUN_045c1820(lVar24,iVar32,
                                   *(undefined8 *)
                                    System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo
                                  );
            iVar33 = iVar39 + iVar32 * uVar5 + iVar35 * (local_1d4 + iVar34 * local_204);
            fVar45 = (float)iVar27;
            iVar27 = 0;
            iVar32 = iVar8;
            do {
              iVar28 = 0;
              iVar6 = iVar33;
              iVar7 = iVar32;
              do {
                lVar42 = 0;
                do {
                  iVar41 = (int)lVar42;
                  puVar25 = (undefined4 *)(*(long *)(lVar40 + 0x60) + (long)(iVar6 + iVar41) * 0xc);
                  uVar58 = *puVar25;
                  uVar56 = puVar25[1];
                  uVar54 = puVar25[2];
                  if (DAT_0738e663 == '\0') {
                    FUN_02fe925c(PTR_DAT_06f6d7e8);
                    DAT_0738e663 = '\x01';
                  }
                  puVar25 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
                  uVar65 = *puVar25;
                  uVar63 = puVar25[1];
                  uVar61 = puVar25[2];
                  uVar60 = puVar25[3];
                  if (DAT_0738e666 == '\0') {
                    FUN_02fe925c(PTR_DAT_06f6d5d8);
                    DAT_0738e666 = '\x01';
                  }
                  FUN_068e8890(&local_e0,uVar58,uVar56,uVar54,uVar65,uVar63,uVar61,uVar60,0);
                  if (lVar19 == 0) goto LAB_0667a534;
                  lVar26 = *(long *)(lVar19 + 0x10);
                  lVar30 = *(long *)
                            System_Collections_Generic_IList<TextureBlitter_BlitInfo>_TypeInfo;
                  *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                  if (lVar26 == 0) goto LAB_0667a534;
                  uVar4 = *(uint *)(lVar19 + 0x18);
                  if (uVar4 < *(uint *)(lVar26 + 0x18)) {
                    *(uint *)(lVar19 + 0x18) = uVar4 + 1;
                    lVar26 = lVar26 + (long)(int)uVar4 * 0x40;
                    *(undefined8 *)(lVar26 + 0x48) = uStack_b8;
                    *(undefined8 *)(lVar26 + 0x40) = local_c0;
                    *(undefined8 *)(lVar26 + 0x58) = uStack_a8;
                    *(undefined8 *)(lVar26 + 0x50) = uStack_b0;
                    *(undefined8 *)(lVar26 + 0x28) = uStack_d8;
                    *(undefined8 *)(lVar26 + 0x20) = local_e0;
                    *(undefined8 *)(lVar26 + 0x38) = uStack_c8;
                    *(undefined8 *)(lVar26 + 0x30) = uStack_d0;
                    uVar23 = uStack_d0;
                  }
                  else {
                    uVar23 = uStack_b0;
                    FUN_04417b74(lVar19,&local_e0,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (lVar16 == 0) goto LAB_0667a534;
                  if (*(uint *)(lVar16 + 0x18) <= uVar38) {
LAB_0667a538:
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94f0();
                  }
                  lVar26 = (long)(iVar6 + iVar41);
                  lVar30 = (long)(int)uVar38;
                  *(undefined4 *)(lVar16 + lVar30 * 4 + 0x20) =
                       *(undefined4 *)(*(long *)(lVar40 + 0x90) + lVar26 * 4);
                  if (lVar15 == 0) goto LAB_0667a534;
                  if (*(uint *)(lVar15 + 0x18) <= uVar38) goto LAB_0667a538;
                  lVar29 = lVar15 + lVar30 * 0x10;
                  *(float *)(lVar29 + 0x20) = (float)(iVar39 + auVar67._0_4_ + iVar41);
                  *(float *)(lVar29 + 0x24) = (float)(iVar28 + local_1d4 + auVar67._4_4_);
                  *(float *)(lVar29 + 0x28) = (float)(iVar27 + local_204 + auVar67._8_4_);
                  *(float *)(lVar29 + 0x2c) = fVar45;
                  if (lVar17 == 0) goto LAB_0667a534;
                  if (*(uint *)(lVar17 + 0x18) <= uVar38) goto LAB_0667a538;
                  *(float *)(lVar17 + lVar30 * 4 + 0x20) = fVar45 / (float)(iVar3 + -1);
                  if (lVar18 != 0) {
                    if (*(uint *)(lVar18 + 0x18) <= uVar38) goto LAB_0667a538;
                    *(undefined4 *)(lVar18 + lVar30 * 4 + 0x20) =
                         *(undefined4 *)(*(long *)(lVar40 + 0x70) + lVar26 * 4);
                  }
                  if (local_168 != 0) {
                    if (*(uint *)(local_168 + 0x18) <= uVar38) goto LAB_0667a538;
                    lVar30 = local_168 + lVar30 * 0x10;
                    pfVar31 = (float *)(*(long *)(lVar40 + 0x80) + lVar26 * 0xc);
                    fVar62 = *pfVar31;
                    fVar64 = pfVar31[1];
                    fVar66 = pfVar31[2];
                    *(undefined4 *)(lVar30 + 0x2c) = 0;
                    *(float *)(lVar30 + 0x20) = fVar62;
                    *(float *)(lVar30 + 0x24) = fVar64;
                    *(float *)(lVar30 + 0x28) = fVar66;
                    if (fVar9 <= fVar62 * fVar62 + fVar64 * fVar64 + fVar66 * fVar66) {
                      uVar47 = (ulong)(uint)-fVar64;
                      uVar50 = (ulong)(uint)-fVar66;
                      pfVar31 = (float *)(*(long *)(lVar40 + 0x60) + lVar26 * 0xc);
                      fVar55 = *pfVar31;
                      fVar57 = pfVar31[1];
                      fVar59 = pfVar31[2];
                      uVar43 = FUN_068ed124(-fVar62,0);
                      if (DAT_0738e6c8 == '\0') {
                        FUN_02fe925c(PTR_DAT_06f6d508);
                        uVar50 = uVar50 & 0xffffffff;
                        uVar47 = uVar47 & 0xffffffff;
                        uVar43 = uVar43 & 0xffffffff;
                        DAT_0738e6c8 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                        uVar50 = uVar50 & 0xffffffff;
                        uVar47 = uVar47 & 0xffffffff;
                        uVar43 = uVar43 & 0xffffffff;
                      }
                      FUN_068e8890(&local_e0,fVar62 + fVar55,fVar64 + fVar57,fVar66 + fVar59,uVar43,
                                   uVar47,uVar50,uVar23,0);
                      if (lVar20 == 0) goto LAB_0667a534;
                      lVar26 = *(long *)(lVar20 + 0x10);
                      lVar30 = *(long *)
                                System_Collections_Generic_IList<TextureBlitter_BlitInfo>_TypeInfo;
                      *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                      if (lVar26 == 0) goto LAB_0667a534;
                      uVar4 = *(uint *)(lVar20 + 0x18);
                      if (uVar4 < *(uint *)(lVar26 + 0x18)) {
                        *(uint *)(lVar20 + 0x18) = uVar4 + 1;
                        lVar26 = lVar26 + (long)(int)uVar4 * 0x40;
                        *(undefined8 *)(lVar26 + 0x48) = uStack_b8;
                        *(undefined8 *)(lVar26 + 0x40) = local_c0;
                        *(undefined8 *)(lVar26 + 0x58) = uStack_a8;
                        *(undefined8 *)(lVar26 + 0x50) = uStack_b0;
                        *(undefined8 *)(lVar26 + 0x28) = uStack_d8;
                        *(undefined8 *)(lVar26 + 0x20) = local_e0;
                        *(undefined8 *)(lVar26 + 0x38) = uStack_c8;
                        *(undefined8 *)(lVar26 + 0x30) = uStack_d0;
                      }
                      else {
                        FUN_04417b74(lVar20,&local_e0,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    else {
                      if (DAT_0738e72a == '\0') {
                        FUN_02fe925c(PTR_DAT_06f707e0);
                        DAT_0738e72a = '\x01';
                      }
                      lVar26 = *(long *)(*(long *)PTR_DAT_06f707e0 + 0xb8);
                      uVar48 = *(undefined8 *)(lVar26 + 0x68);
                      uVar46 = *(undefined8 *)(lVar26 + 0x60);
                      uVar44 = *(undefined8 *)(lVar26 + 0x78);
                      uVar23 = *(undefined8 *)(lVar26 + 0x70);
                      uVar51 = *(undefined8 *)(lVar26 + 0x48);
                      uVar49 = *(undefined8 *)(lVar26 + 0x40);
                      uVar53 = *(undefined8 *)(lVar26 + 0x58);
                      uVar52 = *(undefined8 *)(lVar26 + 0x50);
                      if (lVar20 == 0) goto LAB_0667a534;
                      lVar26 = *(long *)(lVar20 + 0x10);
                      lVar30 = *(long *)
                                System_Collections_Generic_IList<TextureBlitter_BlitInfo>_TypeInfo;
                      *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                      if (lVar26 == 0) goto LAB_0667a534;
                      uVar4 = *(uint *)(lVar20 + 0x18);
                      if (uVar4 < *(uint *)(lVar26 + 0x18)) {
                        *(uint *)(lVar20 + 0x18) = uVar4 + 1;
                        lVar26 = lVar26 + (long)(int)uVar4 * 0x40;
                        *(undefined8 *)(lVar26 + 0x48) = uVar48;
                        *(undefined8 *)(lVar26 + 0x40) = uVar46;
                        *(undefined8 *)(lVar26 + 0x58) = uVar44;
                        *(undefined8 *)(lVar26 + 0x50) = uVar23;
                        *(undefined8 *)(lVar26 + 0x28) = uVar51;
                        *(undefined8 *)(lVar26 + 0x20) = uVar49;
                        *(undefined8 *)(lVar26 + 0x38) = uVar53;
                        *(undefined8 *)(lVar26 + 0x30) = uVar52;
                      }
                      else {
                        local_e0 = uVar49;
                        uStack_d8 = uVar51;
                        uStack_d0 = uVar52;
                        uStack_c8 = uVar53;
                        local_c0 = uVar46;
                        uStack_b8 = uVar48;
                        uStack_b0 = uVar23;
                        uStack_a8 = uVar44;
                        FUN_04417b74(lVar20,&local_e0,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  if ((*(int *)(lVar19 + 0x18) < 0x1ff) &&
                     (iVar7 + iVar41 != *(int *)(lVar40 + 0x20) + -1)) {
                    uVar38 = uVar38 + 1;
                  }
                  else {
                    lVar26 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6de28);
                    FUN_068cc824(lVar26,0);
                    if (lVar26 == 0) goto LAB_0667a534;
                    FUN_068ccf8c(lVar26,*(undefined8 *)
                                         System_Collections_Generic_IEnumerable<FileInfo>_TypeInfo,
                                 lVar16,0);
                    FUN_068ccf8c(lVar26,*(undefined8 *)
                                         Oculus_Interaction_Input_IOneEuroFilter<Vector3>_TypeInfo,
                                 lVar18,0);
                    FUN_068ccf8c(lVar26,*(undefined8 *)
                                         Oculus_Interaction_Input_IOneEuroFilter<Quaternion>_TypeInfo
                                 ,lVar17,0);
                    FUN_068cd00c(lVar26,*(undefined8 *)
                                         Oculus_Interaction_Input_IOneEuroFilter<float>_TypeInfo,
                                 lVar15,0);
                    if (local_168 != 0) {
                      FUN_068cd00c(lVar26,*(undefined8 *)PTR_DAT_06f81e80,local_168,0);
                    }
                    if (lVar14 == 0) goto LAB_0667a534;
                    lVar30 = *(long *)(lVar14 + 0x10);
                    lVar29 = *(long *)System_Func<FocusInEvent>_TypeInfo;
                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                    if (lVar30 == 0) goto LAB_0667a534;
                    uVar38 = *(uint *)(lVar14 + 0x18);
                    if (uVar38 < *(uint *)(lVar30 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar38 + 1;
                      plVar22 = (long *)(lVar30 + (long)(int)uVar38 * 8 + 0x20);
                      *plVar22 = lVar26;
                      thunk_FUN_03048534(plVar22,lVar26);
                    }
                    else {
                      FUN_044302e8(lVar14,lVar26,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                    }
                    puVar10 = Oculus_Interaction_DebugTree_INodeUI<IInteractor>_TypeInfo;
                    uVar23 = FUN_04419940(lVar19,*(undefined8 *)
                                                  Oculus_Interaction_DebugTree_INodeUI<IInteractor>_TypeInfo
                                         );
                    if (lVar12 == 0) goto LAB_0667a534;
                    lVar19 = *(long *)(lVar12 + 0x10);
                    lVar26 = *(long *)System_Collections_Generic_IList<cc>_TypeInfo;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar19 == 0) goto LAB_0667a534;
                    uVar38 = *(uint *)(lVar12 + 0x18);
                    if (uVar38 < *(uint *)(lVar19 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar38 + 1;
                      *(undefined8 *)(lVar19 + (long)(int)uVar38 * 8 + 0x20) = uVar23;
                      thunk_FUN_03048534();
                    }
                    else {
                      FUN_044302e8(lVar12,uVar23,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar19 = thunk_FUN_0301080c(*(undefined8 *)
                                                 System_IObserver<InputEventPtr>_TypeInfo);
                    FUN_04417278(lVar19,*(undefined8 *)
                                         UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo
                                );
                    if (lVar19 == 0) goto LAB_0667a534;
                    *(undefined4 *)(lVar19 + 0x18) = 0;
                    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                    if ((lVar20 == 0) ||
                       (uVar23 = FUN_04419940(lVar20,*(undefined8 *)puVar10), lVar13 == 0))
                    goto LAB_0667a534;
                    lVar26 = *(long *)(lVar13 + 0x10);
                    lVar30 = *(long *)System_Collections_Generic_IList<cc>_TypeInfo;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar26 == 0) goto LAB_0667a534;
                    uVar38 = *(uint *)(lVar13 + 0x18);
                    if (uVar38 < *(uint *)(lVar26 + 0x18)) {
                      *(uint *)(lVar13 + 0x18) = uVar38 + 1;
                      *(undefined8 *)(lVar26 + (long)(int)uVar38 * 8 + 0x20) = uVar23;
                      thunk_FUN_03048534();
                    }
                    else {
                      FUN_044302e8(lVar13,uVar23,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar38 = 0;
                    *(undefined4 *)(lVar20 + 0x18) = 0;
                    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                  }
                  lVar42 = lVar42 + 1;
                } while (lVar42 != 4);
                iVar6 = iVar6 + iVar35;
                iVar28 = iVar28 + 1;
                iVar7 = iVar7 + 4;
              } while (iVar28 != 4);
              iVar33 = iVar33 + iVar35 * iVar34;
              iVar27 = iVar27 + 1;
              iVar32 = iVar32 + 0x10;
            } while (iVar27 != 4);
            iVar39 = iVar39 + 4;
            if (iVar35 <= iVar39) {
              local_1d4 = local_1d4 + 4;
              if (local_1d4 < iVar34) {
                iVar39 = 0;
              }
              else {
                iVar39 = 0;
                local_1d4 = 0;
                local_204 = local_204 + 4;
                if ((iVar2 >> 0x12) << 2 <= local_204) {
                  local_204 = 0;
                }
              }
            }
            uVar36 = uVar36 + 1;
            if (uVar36 == (uint)(iVar1 >> 6)) goto LAB_0667a520;
            iVar8 = iVar8 + 0x40;
            iVar27 = *(int *)(param_1 + 0xec);
          } while( true );
        }
      }
    }
  }
LAB_0667a534:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


