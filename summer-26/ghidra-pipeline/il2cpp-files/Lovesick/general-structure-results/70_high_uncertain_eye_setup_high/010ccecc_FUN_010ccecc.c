/*
FUNCTION_NAME: FUN_010ccecc
ENTRY_POINT: 010ccecc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x010cd718) */

void FUN_010ccecc(undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],undefined8 param_4,
                 undefined8 param_5,long param_6,undefined4 param_7,undefined8 param_8,long param_9,
                 undefined8 ****param_10,uint param_11,long param_12)

{
  undefined8 ****__src;
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  undefined8 uStack_130;
  long local_128;
  ulong local_120;
  undefined8 ***local_118;
  long local_110;
  long lStack_108;
  long *local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 ***local_e0;
  undefined8 local_d8;
  ulong *local_d0;
  ulong *puStack_c8;
  long *local_c0;
  long *local_b8;
  ulong local_b0;
  undefined4 local_a8;
  ulong local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  lVar17 = *(long *)(param_12 + 0x38);
  local_118 = param_10;
  local_e0 = param_10;
  local_d8 = param_8;
  if (lVar17 == 0) {
    thunk_FUN_00d48444(StringLiteral_12524);
    thunk_FUN_00d48444(StringLiteral_8098);
    thunk_FUN_00d48444(PTR_DAT_033f2e30);
    thunk_FUN_00d48444(StringLiteral_8085);
    thunk_FUN_00d48444(Method_RhythmGameStarter_Track_<>c__DisplayClass11_0_<RecycleAllNotes>b__0__)
    ;
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Controls_TouchControl_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_InteractorRegisteredEventArgs_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9631);
    thunk_FUN_00d48444(PTR_DAT_033f1958);
    thunk_FUN_00d48444(System_Xml_XmlTextReaderImpl_NodeData___TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3e90);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_147__);
    thunk_FUN_00d48444(PTR_DAT_033f42d8);
    thunk_FUN_00d48444(StringLiteral_2196);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    lVar17 = *(long *)(param_12 + 0x38);
    if (lVar17 == 0) {
      FUN_00d59478(param_12);
      lVar17 = *(long *)(param_12 + 0x38);
    }
  }
  lVar17 = *(long *)(lVar17 + 8);
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    lVar17 = FUN_00d5941c();
  }
  if (*(int *)(lVar17 + 0x28) < 0) {
    iVar7 = thunk_FUN_00d42afc();
    uVar16 = iVar7 - 0x10;
  }
  else {
    uVar16 = 8;
  }
  local_120 = (ulong)uVar16;
  local_100 = (long *)((long)&uStack_130 - (local_120 + 0xf & 0x1fffffff0));
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  if (*(long *)(param_6 + 0x50) != 0) {
    FUN_0275d928(param_6,*(long *)(param_6 + 0x50),0);
  }
  plVar22 = (long *)System_Xml_XmlTextReaderImpl_NodeData___TypeInfo;
  local_128 = param_6;
  if (*(int *)(*(long *)System_Xml_XmlTextReaderImpl_NodeData___TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar9 = (ulong *)FUN_027f8320(param_7,0);
  puVar4 = PTR_DAT_033f42d8;
  lVar17 = *(long *)PTR_DAT_033f42d8;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar17);
    lVar17 = *(long *)puVar4;
  }
  if ((**(long **)(lVar17 + 0xb8) == 0) ||
     (lVar17 = *(long *)(**(long **)(lVar17 + 0xb8) + 0x28), lVar17 == 0)) goto LAB_010cd708;
  plVar10 = (long *)FUN_0275f59c(lVar17,param_7,0);
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__ + 300);
    if ((bVar1 <= *(byte *)(*plVar10 + 300)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__)) {
      puVar9 = (ulong *)FUN_0274aad0(plVar10,0);
    }
  }
  if (DAT_03774d77 == '\0') {
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__);
    DAT_03774d77 = '\x01';
  }
  puVar4 = StringLiteral_12524;
  local_e8 = **(ulong **)
               (*(long *)Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
               0xb8);
  local_f0 = **(ulong **)
               (*(long *)Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
               0xb8);
  if (puVar9 == (ulong *)0x0) {
LAB_010cd19c:
    local_110 = param_12;
    lStack_108 = param_9;
    if (*(int *)(*(long *)StringLiteral_2196 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar17 = FUN_027af4b4(0);
    puVar5 = UnityEngine_XR_Interaction_Toolkit_InteractorRegisteredEventArgs_TypeInfo;
    puVar3 = PTR_DAT_033f1958;
    if (lVar17 == 0) goto LAB_010cd708;
    iVar7 = *(int *)(lVar17 + 0x18) + -1;
    uVar16 = param_11;
    if (iVar7 < 0) {
      puVar9 = (ulong *)0x0;
      lVar18 = local_110;
      lVar21 = lStack_108;
      plVar22 = (long *)System_Xml_XmlTextReaderImpl_NodeData___TypeInfo;
    }
    else {
      do {
        uStack_130._4_4_ = uVar16;
        FUN_0132138c(lVar17,iVar7,&local_d0,*(undefined8 *)puVar5);
        puVar9 = local_d0;
        if (local_d0 != (ulong *)0x0) {
          lVar18 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar18 + 300);
          if ((bVar1 <= *(byte *)(*local_d0 + 300)) &&
             (*(long *)(*(long *)(*local_d0 + 200) + (ulong)bVar1 * 8 + -8) == lVar18)) {
            lVar18 = *(long *)(*(long *)puVar3 + 0x20);
            if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
              lVar18 = FUN_00d5941c();
            }
            lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 8);
            if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
              lVar18 = FUN_00d5941c();
            }
            pcVar11 = (char *)thunk_FUN_00d32ed4(&local_d8,*(undefined8 *)(lVar18 + 0x80));
            if (*pcVar11 != '\0') {
              uVar14 = puVar9[0x39];
              local_f8 = local_d8;
              iVar8 = FUN_00adbe98(&local_f8,*(undefined8 *)StringLiteral_9631);
              lVar18 = *(long *)(*(long *)puVar3 + 0x20);
              if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
                lVar18 = FUN_00d5941c(lVar18);
              }
              lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 8);
              if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
                lVar18 = FUN_00d5941c();
              }
              pcVar11 = (char *)thunk_FUN_00d32ed4(&local_f8,*(undefined8 *)(lVar18 + 0x80));
              if (((int)uVar14 != iVar8) || (*pcVar11 == '\0')) goto LAB_010cd23c;
            }
            uVar14 = FUN_027a27b4(param_1,param_2,param_4,param_5,puVar9,&local_e8,&local_f0,0,0);
            if ((uVar14 & 1) != 0) {
              lVar12 = (**(code **)(*puVar9 + 1000))
                                 (local_e8 & 0xffffffff,local_e8._4_4_,puVar9,
                                  *(undefined8 *)(*puVar9 + 0x3f0));
              lVar18 = local_110;
              lVar21 = lStack_108;
              plVar22 = (long *)System_Xml_XmlTextReaderImpl_NodeData___TypeInfo;
              param_11 = uStack_130._4_4_;
              if (lVar12 != 0) goto LAB_010cd3a8;
            }
          }
        }
LAB_010cd23c:
        iVar7 = iVar7 + -1;
        uVar16 = uStack_130._4_4_;
      } while (-1 < iVar7);
      puVar9 = (ulong *)0x0;
      lVar18 = local_110;
      lVar21 = lStack_108;
      plVar22 = (long *)System_Xml_XmlTextReaderImpl_NodeData___TypeInfo;
      param_11 = uStack_130._4_4_;
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)StringLiteral_12524 + 300);
    if ((*(byte *)(*puVar9 + 300) < bVar1) ||
       (*(long *)(*(long *)(*puVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_12524)
       ) goto LAB_010cd19c;
    FUN_027a27b4(param_1,param_2,param_4,param_5,puVar9,&local_e8,&local_f0,0,0);
    lVar18 = param_12;
    lVar21 = param_9;
  }
LAB_010cd3a8:
  if (*(int *)(*plVar22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar13 = (ulong *)FUN_027f8040(param_7,0,0);
  if (puVar13 == (ulong *)0x0) {
LAB_010cd3e4:
    puVar13 = (ulong *)0x0;
  }
  else {
    lVar17 = *(long *)puVar4;
    bVar1 = *(byte *)(lVar17 + 300);
    if (*(byte *)(*puVar13 + 300) < bVar1) goto LAB_010cd3e4;
    if (*(long *)(*(long *)(*puVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar17) {
      puVar13 = (ulong *)0x0;
    }
  }
  if (puVar13 == puVar9) {
    if (puVar9 == (ulong *)0x0) goto LAB_010cd4c0;
  }
  else {
    if (puVar13 != (ulong *)0x0) {
      FUN_027a2750(param_1,param_2,puVar13,0);
      FUN_027a28b8(puVar13,param_7,0);
    }
    if (puVar9 == (ulong *)0x0) {
LAB_010cd4c0:
      if ((param_11 & 1) != 0) {
        FUN_0275c8a8(local_128,0,0);
      }
      goto LAB_010cd6a8;
    }
    FUN_027a2978(local_e8 & 0xffffffff,local_e8._4_4_,puVar9,param_7,0);
  }
  uVar6 = local_e8;
  uVar14 = local_f0;
  lVar17 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    lVar17 = FUN_00d5941c();
  }
  __src = (undefined8 ****)local_118;
  if (-1 < *(int *)(lVar17 + 0x28)) {
    __src = &local_e0;
  }
  memcpy(local_100,__src,local_120);
  if (lVar21 == 0) {
LAB_010cd708:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar17 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
  puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x10);
  uVar20 = *puVar15;
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    lVar17 = FUN_00d5941c();
  }
  local_c0 = local_100;
  if (-1 < *(int *)(lVar17 + 0x28)) {
    local_c0 = (long *)*local_100;
  }
  local_d0 = &local_a0;
  puStack_c8 = &local_b0;
  local_a0 = uVar6;
  local_98 = 0;
  local_b0 = uVar14;
  local_a8 = 0;
  (*(code *)puVar15[2])(uVar20,puVar15,lVar21,&local_d0,&local_b8);
  plVar10 = (long *)(**(code **)(*puVar9 + 0x368))(puVar9,*(undefined8 *)(*puVar9 + 0x370));
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar10 + 0x198))(plVar10,local_b8,*(undefined8 *)(*plVar10 + 0x1a0));
  if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar14 = FUN_027fbb90(local_b8,0);
  if ((uVar14 & 1) != 0) {
    FUN_0275d928(local_128,puVar9,0);
  }
  lVar17 = (**(code **)(*local_b8 + 0x188))(local_b8,*(undefined8 *)(*local_b8 + 400));
  if (*(int *)(*(long *)Method_RhythmGameStarter_Track_<>c__DisplayClass11_0_<RecycleAllNotes>b__0__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar18 = FUN_012c4efc(*(undefined8 *)StringLiteral_8098);
  if (lVar17 == lVar18) {
    if (*(int *)(*plVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_027f8274(param_7,puVar9,0);
  }
  else {
    lVar17 = (**(code **)(*local_b8 + 0x188))(local_b8,*(undefined8 *)(*local_b8 + 400));
    if (*(int *)(*(long *)StringLiteral_8085 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar18 = FUN_012c4efc(*(undefined8 *)PTR_DAT_033f2e30);
    if (lVar17 == lVar18) {
      if (*local_b8 != *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_147__) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(local_b8);
      }
      if ((int)local_b8[0x12] == 0) {
        if (*(int *)(*plVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_027f8274(param_7,0,0);
      }
    }
  }
  lVar17 = *local_b8;
  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar14 != 0) {
    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10310) {
        puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_010cd698;
      }
      uVar14 = uVar14 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar14 != 0);
  }
  puVar15 = (undefined8 *)FUN_00d59724(local_b8,*(long *)StringLiteral_10310,0);
LAB_010cd698:
  (*(code *)*puVar15)(local_b8,puVar15[1]);
LAB_010cd6a8:
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


