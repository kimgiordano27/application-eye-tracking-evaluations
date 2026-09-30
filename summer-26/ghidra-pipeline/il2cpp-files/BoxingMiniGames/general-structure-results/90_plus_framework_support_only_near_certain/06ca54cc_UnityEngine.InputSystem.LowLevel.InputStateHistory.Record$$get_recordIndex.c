/*
FUNCTION_NAME: UnityEngine.InputSystem.LowLevel.InputStateHistory.Record$$get_recordIndex
ENTRY_POINT: 06ca54cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


long * UnityEngine_InputSystem_LowLevel_InputStateHistory_Record__get_recordIndex(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *plVar20;
  undefined8 *unaff_x22;
  long unaff_x23;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  ulong in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  ulong in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  ulong in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000300;
  ulong in_stack_00000308;
  undefined8 in_stack_00000310;
  
  FUN_03642964();
  FUN_03642964(Zenject_DiContainer_____TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x434) = 1;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001c0 = 0;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0;
  in_stack_00000190 = 0;
  in_stack_00000198 = 0;
  in_stack_00000180 = 0;
  in_stack_00000188 = 0;
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  in_stack_00000160 = 0;
  in_stack_00000168 = 0;
  in_stack_00000140 = 0;
  in_stack_00000148 = 0;
  in_stack_00000150 = 0;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000c8 = 0;
  uVar11 = thunk_FUN_0367fe20(*unaff_x21);
  FUN_06b085a0();
  auVar22 = FUN_06ad7a1c(uVar11,0);
  uVar4 = FUN_06ad7e28(&stack0x00000278,0);
  plVar12 = (long *)FUN_03642a4c(*unaff_x22,(ulong)uVar4);
  puVar2 = OVRPlugin_RaycastFilterHeader____TypeInfo;
  puVar1 = float____TypeInfo;
  if (0 < (int)uVar4) {
    uVar21 = 0;
    plVar20 = plVar12 + 4;
    do {
      lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
      FUN_044a79c4(lVar13,*(undefined8 *)puVar1);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if ((lVar13 != 0) &&
         (lVar14 = thunk_FUN_0367fd24(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
        uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar11,0);
      }
      if (*(uint *)(plVar12 + 3) <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      *plVar20 = lVar13;
      thunk_FUN_036b7ad0(plVar20,lVar13);
      uVar21 = uVar21 + 1;
      plVar20 = plVar20 + 1;
    } while (uVar4 != uVar21);
  }
  uVar4 = FUN_06ad7c10(&stack0x00000278,0);
  if (uVar4 < 7) {
    FUN_06ca6a20(auVar22._0_8_,auVar22._8_8_);
  }
  uVar5 = FUN_06ad7c10(&stack0x00000278,0);
  if (uVar5 < 7) {
    thunk_FUN_036aa1c8(PTR_DAT_079f4ff8);
    uVar11 = thunk_FUN_0367fe20();
    uVar16 = thunk_FUN_036aa1c8(Oculus_Interaction_Input_HandJointId_____TypeInfo);
    FUN_05e4fb54(uVar11,uVar16,0);
    uVar16 = thunk_FUN_036aa1c8(UnityEngine_Experimental_Rendering_GraphicsFormat_____TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar11,uVar16);
  }
  if (7 < uVar4) {
    if (*(int *)(*(long *)System_Collections_Generic_List<AcmDriver>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06c9e87c(*(undefined8 *)Zenject_DiContainer_____TypeInfo);
  }
  FUN_06ad7c54(&stack0x00000300,&stack0x00000278,0);
  auVar22 = FUN_049383dc(&stack0x00000250,*(undefined8 *)byte_____TypeInfo);
  uVar6 = FUN_06ad43d8(&stack0x00000268,0);
  lVar13 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,uVar6);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar20 = (long *)(unaff_x19 + 0x38);
  *plVar20 = lVar13;
  thunk_FUN_036b7ad0(plVar20);
  puVar2 = UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo;
  puVar1 = PTR_DAT_07a068c0;
  lVar13 = *plVar20;
  if (lVar13 != 0) {
    uVar21 = 0;
    lVar14 = 0x20;
    do {
      if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar21) {
        iVar7 = FUN_06ad3d50(&stack0x00000268,0);
        if (iVar7 < 1) goto LAB_06ca593c;
        iVar8 = 0;
        goto LAB_06ca57ac;
      }
      uVar11 = FUN_06ad437c(&stack0x00000268,uVar21 & 0xffffffff,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      *(undefined8 *)(lVar13 + uVar21 * 8 + 0x20) = uVar11;
      thunk_FUN_036b7ad0(lVar13 + lVar14);
      lVar13 = *plVar20;
      uVar21 = uVar21 + 1;
      lVar14 = lVar14 + 8;
    } while (lVar13 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
  while( true ) {
    memcpy(&stack0x00000288,&stack0x00000040,0x78);
    lVar14 = *(long *)(lVar13 + 0x10);
    lVar18 = *(long *)puVar2;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_06ca6084;
    uVar4 = *(uint *)(lVar13 + 0x18);
    if (uVar4 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar4 * 0x78;
      *(uint *)(lVar13 + 0x18) = uVar4 + 1;
      memcpy((void *)(lVar14 + 0x20),&stack0x00000288,0x78);
      thunk_FUN_036b7ad0(lVar14 + 0x20,0);
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000300,&stack0x00000288,0x78);
      FUN_046ffdb8(lVar13,&stack0x00000300,uVar11);
    }
    iVar8 = iVar8 + 1;
    if (iVar7 == iVar8) break;
LAB_06ca57ac:
    uVar6 = FUN_06ad3cf0(&stack0x00000268,iVar8,0);
    FUN_06ad3be8(&stack0x00000300,&stack0x00000268,uVar6,0);
    in_stack_000001b0 = in_stack_00000300;
    in_stack_000001b8 = in_stack_00000308;
    in_stack_000001c0 = in_stack_00000310;
    auVar23 = FUN_04937b28(&stack0x000001b0,
                           *(undefined8 *)
                            System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo
                          );
    _in_stack_000001a0 = auVar23;
    auVar23 = FUN_06ad35d8(&stack0x000001a0,0);
    uVar11 = FUN_06ad3e20(&stack0x00000268,iVar8,0);
    cVar3 = FUN_06ad8a64(&stack0x00000240,0);
    FUN_06ca66d0(&stack0x00000300,auVar23._0_8_,auVar23._8_8_);
    memcpy(&stack0x000001d0,&stack0x00000300,0x68);
    lVar13 = *(long *)(unaff_x19 + 0x10);
    in_stack_000000b0 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = uVar11;
    thunk_FUN_036b7ad0(&stack0x00000040,uVar11);
    in_stack_00000048 = CONCAT44((int)cVar3,uVar6);
    memcpy(&stack0x00000050,&stack0x000001d0,0x68);
    if (lVar13 == 0) {
LAB_06ca6084:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
LAB_06ca593c:
  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                               UnityEngine_UIElements_BaseCompositeField_FieldDescription<RectInt,_IntegerField,_int>___TypeInfo
                             );
  FUN_047023a0(lVar13,*(undefined8 *)
                       UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector2,_FloatField,_float>___TypeInfo
              );
  plVar20 = (long *)(unaff_x19 + 0x18);
  *plVar20 = lVar13;
  thunk_FUN_036b7ad0(plVar20,lVar13);
  for (iVar7 = 0; iVar8 = FUN_06ad3f10(&stack0x00000268,0), iVar7 < iVar8; iVar7 = iVar7 + 1) {
    lVar13 = *plVar20;
    in_stack_00000300 = FUN_06ad3fe0(&stack0x00000268,iVar7,0);
    uVar4 = FUN_06ad3eb0(&stack0x00000268,iVar7,0);
    thunk_FUN_036b7ad0(&stack0x00000300,in_stack_00000300);
    in_stack_00000308 = (ulong)uVar4;
    if (lVar13 == 0) {
LAB_06ca6080:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar14 = *(long *)(lVar13 + 0x10);
    lVar18 = *(long *)UnityEngine_Rendering_ListChangedEventHandler<Volume>_TypeInfo;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_06ca6080;
    uVar4 = *(uint *)(lVar13 + 0x18);
    if (uVar4 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar4 * 0x10;
      *(uint *)(lVar13 + 0x18) = uVar4 + 1;
      puVar15 = (undefined8 *)(lVar14 + 0x20);
      *puVar15 = in_stack_00000300;
      *(ulong *)(lVar14 + 0x28) = in_stack_00000308;
      thunk_FUN_036b7ad0(puVar15,0);
    }
    else {
      FUN_04702c4c(lVar13,in_stack_00000300,in_stack_00000308,
                   *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
  }
  for (iVar7 = 0; iVar8 = FUN_06ad3cbc(&stack0x00000268,0), iVar7 < iVar8; iVar7 = iVar7 + 1) {
    FUN_06ad3be8(&stack0x00000300,&stack0x00000268,iVar7,0);
    in_stack_000001b0 = in_stack_00000300;
    in_stack_000001b8 = in_stack_00000308;
    in_stack_000001c0 = in_stack_00000310;
    auVar23 = FUN_04937b28(&stack0x000001b0,
                           *(undefined8 *)
                            System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo
                          );
    _in_stack_00000190 = auVar23;
    cVar3 = FUN_06ad329c(&stack0x00000190,0);
    if (cVar3 == '\x06') {
      FUN_06ad3be8(&stack0x00000300,&stack0x00000268,iVar7,0);
      in_stack_000001b0 = in_stack_00000300;
      in_stack_000001b8 = in_stack_00000308;
      in_stack_000001c0 = in_stack_00000310;
      auVar23 = FUN_04937b28(&stack0x000001b0,
                             *(undefined8 *)
                              System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo
                            );
      _in_stack_000001a0 = auVar23;
      auVar23 = FUN_06ad35d8(&stack0x000001a0,0);
      _in_stack_00000180 = auVar23;
      cVar3 = FUN_06ad8ca4(&stack0x00000180,0);
      if ((cVar3 != '\0') ||
         (lVar13 = Unity_InferenceEngine_Graph_GraphModuleExtensions__Flatten(&stack0x00000180,0),
         lVar13 != 0)) {
        lVar13 = *(long *)(unaff_x19 + 0x40);
        cVar3 = FUN_06ad8a64(&stack0x00000180,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_055f4d78(lVar13,iVar7,(int)cVar3,
                     *(undefined8 *)
                      UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Rect,_FloatField,_float>_TypeInfo
                    );
        lVar13 = *(long *)(unaff_x19 + 0x48);
        FUN_06ca66d0(&stack0x00000300,in_stack_00000180,in_stack_00000188);
        memcpy(&stack0x00000288,&stack0x00000300,0x68);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        memcpy(&stack0x00000300,&stack0x00000288,0x68);
        FUN_055e492c(lVar13,iVar7,&stack0x00000300,
                     *(undefined8 *)
                      UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<RectInt,_IntegerField,_int>_TypeInfo
                    );
      }
    }
  }
  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a027f0);
  FUN_041e5794(lVar13,*(undefined8 *)PTR_DAT_07a027f8);
  iVar7 = 0;
  do {
    iVar8 = FUN_06ad4144(&stack0x00000268,0);
    if (iVar8 <= iVar7) {
      return plVar12;
    }
    FUN_06ad4070(&stack0x00000300,&stack0x00000268,iVar7,0);
    in_stack_00000140 = in_stack_00000300;
    in_stack_00000148 = in_stack_00000308;
    in_stack_00000150 = in_stack_00000310;
    auVar23 = FUN_0493455c(&stack0x00000140,*(undefined8 *)System_Attribute_____TypeInfo);
    for (iVar8 = 0; _in_stack_00000170 = auVar23, iVar9 = FUN_06ad1e3c(&stack0x00000170,0),
        iVar8 < iVar9; iVar8 = iVar8 + 1) {
      iVar9 = FUN_06ad1ddc(&stack0x00000170,iVar8,0);
      auVar23 = _in_stack_00000170;
      if (iVar9 != -1) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar21 = FUN_041e5e98(lVar13,iVar9,*(undefined8 *)puVar1);
        auVar23 = _in_stack_00000170;
        if ((uVar21 & 1) == 0) {
          FUN_06ad3be8(&stack0x00000300,&stack0x00000268,iVar9,0);
          in_stack_000001b0 = in_stack_00000300;
          in_stack_000001b8 = in_stack_00000308;
          in_stack_000001c0 = in_stack_00000310;
          auVar23 = FUN_04937b28(&stack0x000001b0,
                                 *(undefined8 *)
                                  System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo
                                );
          _in_stack_000001a0 = auVar23;
          auVar23 = FUN_06ad35d8(&stack0x000001a0,0);
          _in_stack_00000130 = auVar23;
          iVar10 = FUN_06ad8c1c(&stack0x00000130,0);
          auVar23 = _in_stack_00000170;
          if (iVar10 != 0) {
            uVar6 = FUN_06ad8aa8(&stack0x00000130,0);
            lVar18 = *(long *)(unaff_x19 + 0x28);
            uVar11 = Unity_InferenceEngine_Graph_GraphModuleExtensions__Flatten(&stack0x00000130,0);
            auVar23 = FUN_04daa7f8(uVar11,*(undefined8 *)
                                           UnityEngine_UIElements_EventBase<ChangingEvent<float>>_TypeInfo
                                  );
            in_stack_00000308 = 0;
            in_stack_00000300 = 0;
            in_stack_00000310 = 0;
            FUN_06ae78ec(&stack0x00000300,auVar23._0_8_,auVar23._8_8_,0);
            cVar3 = FUN_06ad8a64(&stack0x00000130,0);
            lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                         System_Collections_Generic_LinkedListNode<TextInfo>_TypeInfo
                                       );
            FUN_05e5ae34(lVar14,0);
            *(int *)(lVar14 + 0x10) = iVar9;
            *(undefined4 *)(lVar14 + 0x3c) = uVar6;
            *(int *)(lVar14 + 0x40) = (int)cVar3;
            *(undefined8 *)(lVar14 + 0x1c) = 0;
            *(undefined8 *)(lVar14 + 0x14) = 0;
            *(undefined8 *)(lVar14 + 0x2c) = 0;
            *(undefined8 *)(lVar14 + 0x24) = 0;
            *(undefined8 *)(lVar14 + 0x34) = 0;
            if (lVar18 == 0) {
LAB_06ca6070:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(lVar18 + 0x10);
            lVar19 = *(long *)UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_06ca6070;
            uVar4 = *(uint *)(lVar18 + 0x18);
            if (uVar4 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar4 + 1;
              plVar20 = (long *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
              *plVar20 = lVar14;
              thunk_FUN_036b7ad0(plVar20,lVar14);
            }
            else {
              FUN_0459f03c(lVar18,lVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            iVar10 = FUN_06ad8c1c(&stack0x00000130,0);
            uVar6 = FUN_06ad8c60(&stack0x00000130,0);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(plVar12 + 3) <= iVar10 - 1U) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar14 = plVar12[(long)(int)(iVar10 - 1U) + 4];
            FUN_051afa80(&stack0x00000288,*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) + -1,uVar6,
                         *(undefined8 *)PTR_DAT_079fd5e8);
            if (lVar14 == 0) {
LAB_06ca606c:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar18 = *(long *)(lVar14 + 0x10);
            lVar17 = *(long *)int____TypeInfo;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_06ca606c;
            uVar4 = *(uint *)(lVar14 + 0x18);
            if (uVar4 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar4 + 1;
              *(undefined8 *)(lVar18 + (long)(int)uVar4 * 8 + 0x20) = 0;
            }
            else {
              FUN_044a8250(lVar14,0,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            FUN_041e69d4(lVar13,iVar9,*(undefined8 *)PTR_DAT_07a02800);
            auVar23 = _in_stack_00000170;
          }
        }
      }
    }
    FUN_06ad203c(&stack0x00000300,&stack0x00000170,0,0);
    in_stack_00000110 = in_stack_00000300;
    in_stack_00000118 = in_stack_00000308;
    in_stack_00000120 = in_stack_00000310;
    auVar23 = FUN_0493b124(&stack0x00000110,
                           *(undefined8 *)
                            System_Collections_Generic_ICollection<ISampleProvider>_TypeInfo);
    _in_stack_00000100 = auVar23;
    cVar3 = FUN_06ad6558(&stack0x00000100,0);
    if (cVar3 != '\0') {
      FUN_06ad203c(&stack0x00000300,&stack0x00000170,0,0);
      in_stack_00000110 = in_stack_00000300;
      in_stack_00000118 = in_stack_00000308;
      in_stack_00000120 = in_stack_00000310;
      auVar23 = FUN_0493b124(&stack0x00000110,
                             *(undefined8 *)
                              System_Collections_Generic_ICollection<ISampleProvider>_TypeInfo);
      _in_stack_00000100 = auVar23;
      auVar23 = FUN_06ad659c(&stack0x00000100,0);
      _in_stack_00000160 = auVar23;
      uVar6 = FUN_06ad7078(&stack0x00000160,0);
      FUN_06ad4178(&stack0x00000300,&stack0x00000268,uVar6,0);
      in_stack_000000e0 = in_stack_00000300;
      in_stack_000000e8 = in_stack_00000308;
      in_stack_000000f0 = in_stack_00000310;
      auVar23 = FUN_0493ee1c(&stack0x000000e0,
                             *(undefined8 *)
                              System_Linq_Expressions_Interpreter_Instruction_______TypeInfo);
      _in_stack_000000d0 = auVar23;
      uVar11 = FUN_06ad780c(&stack0x000000d0,0);
      lVar14 = FUN_06ae8db4(uVar11,in_stack_00000170,in_stack_00000178,auVar22._0_8_,auVar22._8_8_,0
                           );
      if (lVar14 == 0) {
        thunk_FUN_036aa1c8(PTR_DAT_079f5660);
        uVar16 = thunk_FUN_0367fe20();
        FUN_05e1a2c8(uVar16,uVar11,0);
        uVar11 = thunk_FUN_036aa1c8(UnityEngine_Experimental_Rendering_GraphicsFormat_____TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar16,uVar11);
      }
      lVar18 = *(long *)(unaff_x19 + 0x20);
      if (lVar18 == 0) {
LAB_06ca6088:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar17 = *(long *)(lVar18 + 0x10);
      lVar19 = *(long *)UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>_TypeInfo;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      if (lVar17 == 0) goto LAB_06ca6088;
      uVar4 = *(uint *)(lVar18 + 0x18);
      if (uVar4 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar18 + 0x18) = uVar4 + 1;
        plVar20 = (long *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
        *plVar20 = lVar14;
        thunk_FUN_036b7ad0(plVar20);
      }
      else {
        FUN_0459f03c(lVar18,lVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}


