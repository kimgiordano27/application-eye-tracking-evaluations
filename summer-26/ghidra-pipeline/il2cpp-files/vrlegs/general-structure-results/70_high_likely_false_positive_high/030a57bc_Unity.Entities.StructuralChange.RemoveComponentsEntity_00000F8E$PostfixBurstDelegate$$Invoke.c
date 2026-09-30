/*
FUNCTION_NAME: Unity.Entities.StructuralChange.RemoveComponentsEntity_00000F8E$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a57bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_4
*/


void Unity_Entities_StructuralChange_RemoveComponentsEntity_00000F8E_PostfixBurstDelegate__Invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  float fVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  long unaff_x19;
  long lVar28;
  long lVar29;
  undefined8 *unaff_x20;
  int iVar30;
  long unaff_x21;
  undefined8 uVar31;
  float *pfVar32;
  long lVar33;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar34;
  long *plVar35;
  float *pfVar36;
  long *plVar37;
  float fVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  long *plStack0000000000000048;
  int iStack00000000000000a4;
  long lStack00000000000000b8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  ulong in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  ulong in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  ulong in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c8;
  ulong in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000238;
  
  FUN_01ab69ac();
  FUN_01ab69ac(System_Action<CGShape>_TypeInfo);
  FUN_01ab69ac(System_Action<CGSpots>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cd19e8);
  FUN_01ab69ac(System_Action<CGVMesh>_TypeInfo);
  FUN_01ab69ac(System_Action<CGVolume>_TypeInfo);
  FUN_01ab69ac(Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
  FUN_01ab69ac(System_Action<Camera>_TypeInfo);
  FUN_01ab69ac(System_Action<CameraMode>_TypeInfo);
  FUN_01ab69ac(System_Action<char>_TypeInfo);
  FUN_01ab69ac(UnityEngine_UIElements_PanelRaycaster_var);
  FUN_01ab69ac(PTR_DAT_03d0c9c0);
  FUN_01ab69ac(_Common_UpdateManager_UpdateJobManager<TData>_var);
  FUN_01ab69ac(PTR_DAT_03cbf4d0);
  FUN_01ab69ac(PTR_DAT_03cbf4f0);
  FUN_01ab69ac(System_Action<Collider>_TypeInfo);
  FUN_01ab69ac(System_Action<Color>_TypeInfo);
  FUN_01ab69ac(Unity_Services_Economy_EconomyExceptionReason_var);
  FUN_01ab69ac(Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
  FUN_01ab69ac(System_Action<Column>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cebed0);
  FUN_01ab69ac(PTR_DAT_03cbeda8);
  FUN_01ab69ac(PTR_DAT_03cc0640);
  FUN_01ab69ac(PTR_DAT_03cc0690);
  FUN_01ab69ac(PTR_DAT_03cd2de8);
  FUN_01ab69ac(PTR_DAT_03cc0668);
  FUN_01ab69ac(PTR_DAT_03cc0688);
  FUN_01ab69ac(PTR_DAT_03cc8b40);
  FUN_01ab69ac(PTR_DAT_03cbe000);
  FUN_01ab69ac(PTR_DAT_03cbeb18);
  FUN_01ab69ac(PTR_DAT_03cbdf88);
  FUN_01ab69ac(PTR_DAT_03cc9150);
  FUN_01ab69ac(System_Action<ColumnMover>_TypeInfo);
  FUN_01ab69ac(System_Action<ColumnsDataType>_TypeInfo);
  FUN_01ab69ac(System_Action<ConfigResponse>_TypeInfo);
  FUN_01ab69ac(System_Action<ContentCatalogData>_TypeInfo);
  FUN_01ab69ac(System_Action<ContextualMenuPopulateEvent>_TypeInfo);
  FUN_01ab69ac(System_Action<CurvySpline>_TypeInfo);
  FUN_01ab69ac(System_Action<DOTweenAnimation>_TypeInfo);
  FUN_01ab69ac(System_Action<DOTweenPath>_TypeInfo);
  FUN_01ab69ac(System_Action<bool>_TypeInfo);
  FUN_01ab69ac(System_Action<DebugUIHandlerPanel>_TypeInfo);
  FUN_01ab69ac(System_Action<DiagnosticEvent>_TypeInfo);
  FUN_01ab69ac(System_Action<DisconnectCause>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cbeb90);
  FUN_01ab69ac(PTR_DAT_03cc1890);
  FUN_01ab69ac(System_Action<DisconnectMessage>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x59b) = 1;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001c8 = 0;
  lVar8 = thunk_FUN_01a89e68(*unaff_x20);
  FUN_027b3d9c(lVar8,0);
  if (lVar8 == 0) goto LAB_030a703c;
  plVar35 = (long *)(lVar8 + 0x10);
  *plVar35 = unaff_x22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar35);
  plVar37 = (long *)(lVar8 + 0x18);
  *plVar37 = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar37);
  puVar3 = PTR_DAT_03cbdf88;
  if (unaff_x19 == 0) goto LAB_030a703c;
  FUN_01f49730();
  uVar4 = in_stack_00000160;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar9 = FUN_036d35a8(uVar4,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (uVar4 == 0) goto LAB_030a703c;
  uVar9 = FUN_03692bc0(uVar4,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  uVar10 = FUN_036a0ed4(uVar4,0);
  lVar23 = *(long *)puVar3;
  if (*(int *)(lVar23 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar23);
  }
  uVar9 = FUN_036d35a8(uVar10,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar23 = FUN_036a0ed4(uVar4,0);
  if (lVar23 == 0) goto LAB_030a703c;
  iVar5 = FUN_036a3408(lVar23,0);
  if (iVar5 == 0) {
    return;
  }
  lVar23 = FUN_036a0ed4(uVar4,0);
  uVar10 = FUN_036a0e54(uVar4,0);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf4f0);
  FUN_021de1ac(uVar11,lVar8,*(undefined8 *)System_Action<CurvySpline>_TypeInfo,0);
  uVar10 = FUN_01f71424(uVar10,uVar11,*(undefined8 *)PTR_DAT_03cbf4d0);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Services_Economy_EconomyExceptionReason_var);
  FUN_021de1ac(uVar11,lVar8,*(undefined8 *)System_Action<DOTweenAnimation>_TypeInfo,0);
  uVar10 = FUN_01f6d39c(uVar10,uVar11,*(undefined8 *)System_Action<Camera>_TypeInfo);
  plStack0000000000000048 = (long *)FUN_01f70920(uVar10,*(undefined8 *)PTR_DAT_03d0c9c0);
  lVar12 = FUN_036a0e54(uVar4,0);
  if (lVar12 == 0) {
LAB_030a5c08:
    lVar13 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<DiagnosticEvent>_TypeInfo);
    FUN_027b3d9c(lVar13,0);
    lVar12 = FUN_030a71e0(lVar23,1);
    in_stack_000001d8 = 0;
    in_stack_000001d0 = 0;
    in_stack_000001e8 = 0;
    in_stack_000001e0 = 0;
    FUN_036abb70(&stack0x000001d0,0,0);
    FUN_036abb80(&stack0x000001d0,0,0);
    FUN_036abb90(&stack0x000001d0,0,0);
    FUN_036abba0(&stack0x000001d0,0,0);
    UnityEngine_TextGenerator__Invalidate(0x3f800000,&stack0x000001d0,0);
    FUN_036abb40(0,&stack0x000001d0,0);
    FUN_036abb50(0,&stack0x000001d0,0);
    FUN_036abb60(0,&stack0x000001d0,0);
    in_stack_000001a8 = in_stack_000001d8;
    in_stack_000001a0 = in_stack_000001d0;
    in_stack_000001b8 = in_stack_000001e8;
    in_stack_000001b0 = in_stack_000001e0;
    if (lVar13 == 0) goto LAB_030a703c;
    *(undefined8 *)(lVar13 + 0x18) = in_stack_000001d8;
    *(ulong *)(lVar13 + 0x10) = in_stack_000001d0;
    *(undefined8 *)(lVar13 + 0x28) = in_stack_000001e8;
    *(undefined8 *)(lVar13 + 0x20) = in_stack_000001e0;
    if (lVar12 == 0) goto LAB_030a703c;
    uVar43 = FUN_036a3408(lVar12,0);
    uVar10 = FUN_02b34428(0,uVar43,0);
    uVar11 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Collider>_TypeInfo);
    FUN_021de1ac(uVar11,lVar13,*(undefined8 *)System_Action<DebugUIHandlerPanel>_TypeInfo,0);
    uVar10 = FUN_01f6d39c(uVar10,uVar11,*(undefined8 *)System_Action<CGVolume>_TypeInfo);
    uVar10 = FUN_01f70920(uVar10,*(undefined8 *)System_Action<char>_TypeInfo);
    FUN_036aa17c(lVar12,uVar10,0);
    lVar13 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc8b40,1);
    if (DAT_0411f171 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbe2f0);
      DAT_0411f171 = '\x01';
    }
    lVar14 = *(long *)(*(long *)PTR_DAT_03cbe2f0 + 0xb8);
    in_stack_00000188 = *(undefined8 *)(lVar14 + 0x68);
    param_2 = *(undefined8 *)(lVar14 + 0x60);
    in_stack_00000198 = *(undefined8 *)(lVar14 + 0x78);
    in_stack_00000190 = *(undefined8 *)(lVar14 + 0x70);
    in_stack_00000168 = *(undefined8 *)(lVar14 + 0x48);
    param_4 = *(ulong *)(lVar14 + 0x40);
    in_stack_00000178 = *(undefined8 *)(lVar14 + 0x58);
    param_3 = *(undefined8 *)(lVar14 + 0x50);
    in_stack_00000160 = param_4;
    in_stack_00000170 = param_3;
    in_stack_00000180 = param_2;
    if (lVar13 == 0) goto LAB_030a703c;
    in_stack_00000120 = param_4;
    in_stack_00000128 = in_stack_00000168;
    in_stack_00000130 = param_3;
    in_stack_00000138 = in_stack_00000178;
    in_stack_00000140 = param_2;
    in_stack_00000148 = in_stack_00000188;
    in_stack_00000150 = in_stack_00000190;
    in_stack_00000158 = in_stack_00000198;
    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_030a7038;
    *(undefined8 *)(lVar13 + 0x48) = in_stack_00000188;
    *(undefined8 *)(lVar13 + 0x40) = param_2;
    *(undefined8 *)(lVar13 + 0x58) = in_stack_00000198;
    *(undefined8 *)(lVar13 + 0x50) = in_stack_00000190;
    *(undefined8 *)(lVar13 + 0x28) = in_stack_00000168;
    *(ulong *)(lVar13 + 0x20) = param_4;
    *(undefined8 *)(lVar13 + 0x38) = in_stack_00000178;
    *(undefined8 *)(lVar13 + 0x30) = param_3;
    FUN_036a3534(lVar12,lVar13,0);
    uVar10 = FUN_036cbb80(uVar4,0);
    FUN_036a0e10(uVar4,uVar10,0);
    puVar3 = PTR_DAT_03cc9150;
    plStack0000000000000048 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,1);
    lVar13 = *plVar35;
    uVar10 = FUN_036cbb80(uVar4,0);
    if ((lVar13 == 0) ||
       (FUN_0219b634(lVar13,uVar10,&stack0x00000238,*(undefined8 *)System_Action<CGShape>_TypeInfo),
       plStack0000000000000048 == (long *)0x0)) goto LAB_030a703c;
    if ((in_stack_00000238 != 0) &&
       (lVar13 = thunk_FUN_01a89d6c(in_stack_00000238,
                                    *(undefined8 *)(*plStack0000000000000048 + 0x40)), lVar13 == 0))
    goto LAB_030a7088;
    if ((int)plStack0000000000000048[3] == 0) goto LAB_030a7038;
    plStack0000000000000048[4] = in_stack_00000238;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (plStack0000000000000048 + 4,in_stack_00000238);
    plVar17 = (long *)FUN_01ab6a94(*(undefined8 *)puVar3,1);
    lVar13 = FUN_036cbb80(uVar4,0);
    if (plVar17 == (long *)0x0) goto LAB_030a703c;
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar14 == 0))
    goto LAB_030a7088;
    if ((int)plVar17[3] == 0) goto LAB_030a7038;
    plVar17[4] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17 + 4,lVar13);
    FUN_036a0e90(uVar4,plVar17,0);
    FUN_036a0f10(uVar4,lVar12,0);
    lVar13 = FUN_030a71e0(lVar12,0);
    bVar1 = true;
  }
  else {
    lVar12 = FUN_036a0e54(uVar4,0);
    if (lVar12 == 0) goto LAB_030a703c;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_030a5c08;
    lVar13 = FUN_030a71e0(lVar23,0);
    if (lVar23 == 0) goto LAB_030a703c;
    bVar1 = false;
    lVar12 = lVar23;
  }
  uVar10 = FUN_036d3824(lVar12,0);
  uVar10 = FUN_025b1328(uVar10,*(undefined8 *)System_Action<DisconnectMessage>_TypeInfo,0);
  if (lVar13 != 0) {
    FUN_036d38d4(lVar13,uVar10,0);
    FUN_036a106c(uVar4,lVar13,0);
    lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd19e8);
    FUN_0219a4f0(lVar14,*(undefined8 *)PTR_DAT_03cd19e0);
    iVar5 = FUN_036a2ca8(lVar12,0);
    puVar3 = System_Action<CGGameObject>_TypeInfo;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        fVar38 = (float)FUN_036a0fd4(uVar4,iVar5,0);
        if (0.0 < fVar38) {
          if (lVar14 == 0) goto LAB_030a703c;
          in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,iVar5);
          in_stack_000001a0 = CONCAT44(in_stack_000001a0._4_4_,fVar38);
          FUN_0219b9a4(lVar14,&stack0x00000160,&stack0x000001a0,*(undefined8 *)puVar3);
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_036a2ca8(lVar12,0);
      } while (iVar5 < iVar6);
    }
    uVar10 = FUN_036aa140(lVar12,0);
    uVar31 = *(undefined8 *)(lVar8 + 0x10);
    uVar11 = FUN_036a0e54(uVar4,0);
    uVar10 = FUN_030a50f8(uVar10,uVar31,uVar11,plStack0000000000000048);
    FUN_036aa17c(lVar13,uVar10,0);
    uVar10 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Entities_RuntimeApplication_UpdatePreFrame_var)
    ;
    FUN_021de1ac(uVar10,lVar8,*(undefined8 *)System_Action<DOTweenPath>_TypeInfo,0);
    uVar10 = FUN_01f6d39c(plStack0000000000000048,uVar10,
                          *(undefined8 *)Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
    uVar10 = FUN_01f70920(uVar10,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
    FUN_036a3534(lVar13,uVar10,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    puVar24 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uVar43 = *puVar24;
    uVar44 = puVar24[1];
    uVar45 = puVar24[2];
    uVar10 = FUN_036db02c();
    if (DAT_0411f16a == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f16a = '\x01';
    }
    FUN_036bc8cc(uVar43,uVar44,uVar45,uVar10,param_2,param_3,param_4,&stack0x000001f0,0);
    in_stack_000000e8 = 0;
    in_stack_000000e0 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    in_stack_00000118 = 0;
    in_stack_00000110 = 0;
    FUN_030a762c(lVar13,&stack0x000000e0);
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0688);
    Animancer_AnimancerState__OnSetIsPlaying(lVar8,*(undefined8 *)PTR_DAT_03cc0690);
    iVar5 = FUN_036a2ca8(lVar12,0);
    puVar3 = PTR_DAT_03cc0640;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        uVar43 = FUN_036a0fd4(uVar4,iVar5,0);
        if (lVar8 == 0) goto LAB_030a703c;
        in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,uVar43);
        FUN_01b5f01c(lVar8,&stack0x00000160,*(undefined8 *)puVar3);
        FUN_036a1018(0,uVar4,iVar5,0);
        iVar5 = iVar5 + 1;
        iVar6 = FUN_036a2ca8(lVar12,0);
      } while (iVar5 < iVar6);
    }
    lVar15 = FUN_036a45c0(lVar13,0);
    lVar16 = FUN_036a466c(lVar13,0);
    lVar28 = *(long *)PTR_DAT_03d26e58;
    lVar25 = *(long *)(lVar28 + 0x38);
    if (lVar25 == 0) {
      FUN_01a47054(lVar28);
      lVar25 = *(long *)(lVar28 + 0x38);
    }
    lVar25 = *(long *)(lVar25 + 0x10);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = FUN_01a46ff8();
    }
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar25 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
    if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
      lVar25 = FUN_01a46ff8();
    }
    lStack00000000000000b8 = **(long **)(lVar25 + 0xb8);
    uVar9 = FUN_039a67c8(0);
    if ((uVar9 & 1) != 0) {
      uVar10 = FUN_036a4718(lVar13,0);
      puVar3 = System_Action<DisconnectCause>_TypeInfo;
      lVar25 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar25);
        lVar25 = *(long *)puVar3;
      }
      lVar28 = *(long *)(*(long *)(lVar25 + 0xb8) + 8);
      if (lVar28 == 0) {
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar25);
          lVar25 = *(long *)puVar3;
        }
        uVar11 = **(undefined8 **)(lVar25 + 0xb8);
        lVar28 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
        FUN_021de1ac(lVar28,uVar11,*(undefined8 *)System_Action<ColumnMover>_TypeInfo,0);
        plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar17 = lVar28;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar28);
      }
      uVar10 = FUN_01f6d39c(uVar10,lVar28,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
      lStack00000000000000b8 =
           FUN_01f70920(uVar10,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
    }
    puVar3 = PTR_DAT_03cbeb90;
    if (lVar15 != 0) {
      lVar25 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb90,*(undefined4 *)(lVar15 + 0x18));
      lVar28 = FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar15 + 0x18));
      lVar18 = FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar15 + 0x18));
      plVar17 = (long *)thunk_FUN_01a89e68(*(undefined8 *)System_Action<byte>_TypeInfo);
      FUN_030a78e8(plVar17,lVar12);
      lVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
      FUN_036a1b5c(lVar19,0);
      iVar5 = FUN_036a2ca8(lVar12,0);
      fVar2 = DAT_00d38ac8;
      fVar38 = DAT_00d38798;
      if (0 < iVar5) {
        iVar5 = 0;
        do {
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          lVar20 = FUN_036a0ed4(uVar4,0);
          if (lVar20 == 0) goto LAB_030a703c;
          UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                    (lVar20,iVar5,0,lVar25,lVar28,lVar18,0);
          lVar20 = *(long *)puVar3;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar20 = *(long *)puVar3;
          }
          lVar29 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x10);
          if (lVar29 == 0) {
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar20 = *(long *)puVar3;
            }
            uVar10 = **(undefined8 **)(lVar20 + 0xb8);
            lVar29 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
            FUN_021de1ac(lVar29,uVar10,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0);
            plVar21 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *plVar21 = lVar29;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar29);
          }
          uVar43 = FUN_01f663ac(lVar25,lVar29,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
          lVar20 = *(long *)puVar3;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar20);
            lVar20 = *(long *)puVar3;
          }
          lVar29 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x18);
          if (lVar29 == 0) {
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar20);
              lVar20 = *(long *)System_Action<DisconnectCause>_TypeInfo;
            }
            puVar3 = System_Action<DisconnectCause>_TypeInfo;
            uVar10 = **(undefined8 **)(lVar20 + 0xb8);
            lVar29 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
            FUN_021de1ac(lVar29,uVar10,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
            plVar21 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
            *plVar21 = lVar29;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar29);
          }
          iVar6 = FUN_01f663ac(lVar28,lVar29,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
          uVar9 = FUN_039a67c8(0);
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          if ((uVar9 & 1) == 0) {
            iStack00000000000000a4 = 0;
          }
          else {
            lVar20 = *(long *)System_Action<DisconnectCause>_TypeInfo;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar20 = *(long *)puVar3;
            }
            lVar29 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x20);
            if (lVar29 == 0) {
              if (*(int *)(lVar20 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar20 = *(long *)System_Action<DisconnectCause>_TypeInfo;
              }
              puVar3 = System_Action<DisconnectCause>_TypeInfo;
              uVar10 = **(undefined8 **)(lVar20 + 0xb8);
              lVar29 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
              FUN_021de1ac(lVar29,uVar10,*(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0
                          );
              plVar21 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
              *plVar21 = lVar29;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar29);
            }
            iStack00000000000000a4 =
                 FUN_01f663ac(lVar18,lVar29,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
          }
          uVar10 = FUN_036a2d20(lVar12,iVar5,0);
          uVar9 = FUN_025be440(uVar10,0);
          if ((uVar9 & 1) != 0) {
            in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,iVar5);
            uVar10 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
            uVar10 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar10,0);
          }
          puVar3 = PTR_DAT_03cbded8;
          if (plVar17 == (long *)0x0) goto LAB_030a703c;
          Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
                    (plVar17,iVar5,uVar10,uVar43,iVar6,iStack00000000000000a4);
          FUN_036a1018(0x42c80000,uVar4,iVar5,0);
          FUN_036a106c(uVar4,lVar19,0);
          if (((lVar19 == 0) || (lVar20 = FUN_036a45c0(lVar19,0), lVar20 == 0)) ||
             (lVar29 = FUN_036a45c0(lVar13,0), lVar29 == 0)) goto LAB_030a703c;
          if (*(int *)(lVar20 + 0x18) != *(int *)(lVar29 + 0x18)) {
            thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
            uVar10 = thunk_FUN_01a89e68();
            uVar11 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
            FUN_027a794c(uVar10,uVar11,0);
            uVar11 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar10,uVar11);
          }
          if (lVar14 == 0) goto LAB_030a703c;
          in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,iVar5);
          uVar9 = FUN_0219c130(lVar14,&stack0x00000160,
                               *(undefined8 *)System_Action<CGModule>_TypeInfo);
          uVar39 = 0;
          if ((uVar9 & 1) != 0) {
            in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,iVar5);
            FUN_0219b634(0,lVar14,&stack0x00000160,&stack0x000001a0,
                         *(undefined8 *)System_Action<CGSpots>_TypeInfo);
            uVar39 = in_stack_000001a0 & 0xffffffff;
          }
          FUN_036a1018(uVar39,uVar4,iVar5,0);
          lVar20 = FUN_036a45c0(lVar19,0);
          if (lVar20 == 0) goto LAB_030a703c;
          if (0 < *(int *)(lVar20 + 0x18)) {
            uVar9 = 0;
            pfVar32 = (float *)(lVar20 + 0x28);
            puVar34 = (undefined8 *)(lVar25 + 0x24);
            pfVar36 = (float *)(lVar15 + 0x28);
            do {
              if (lVar25 == 0) goto LAB_030a703c;
              if (*(uint *)(lVar25 + 0x18) <= uVar9) goto LAB_030a7038;
              fVar46 = *(float *)((long)puVar34 + -4);
              uVar11 = *puVar34;
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(puVar3);
                DAT_0411f172 = '\x01';
              }
              pfVar27 = *(float **)(*(long *)puVar3 + 0xb8);
              uVar22 = *(uint *)(lVar20 + 0x18);
              fVar46 = fVar46 - *pfVar27;
              fVar40 = (float)uVar11 - (float)*(undefined8 *)(pfVar27 + 1);
              fVar41 = (float)((ulong)uVar11 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(pfVar27 + 1) >> 0x20);
              if (fVar38 <= fVar41 * fVar41 + fVar46 * fVar46 + fVar40 * fVar40) {
                if (uVar22 <= uVar9) goto LAB_030a7038;
                fVar40 = pfVar32[-1];
                fVar41 = *pfVar32;
                fVar46 = (float)FUN_036bdcac(pfVar32[-2],&stack0x000001f0,0);
                if ((*(uint *)(lVar15 + 0x18) <= uVar9) ||
                   (uVar22 = *(uint *)(lVar20 + 0x18), uVar22 <= uVar9)) goto LAB_030a7038;
                fVar41 = fVar41 - *pfVar36;
                uVar11 = CONCAT44(fVar40 - (float)((ulong)*(undefined8 *)(pfVar36 + -2) >> 0x20),
                                  fVar46 - (float)*(undefined8 *)(pfVar36 + -2));
              }
              else {
                if (uVar22 <= uVar9) goto LAB_030a7038;
                uVar11 = *(undefined8 *)pfVar27;
                fVar41 = pfVar27[2];
              }
              uVar9 = uVar9 + 1;
              *(undefined8 *)(pfVar32 + -2) = uVar11;
              *pfVar32 = fVar41;
              pfVar36 = pfVar36 + 3;
              puVar34 = (undefined8 *)((long)puVar34 + 0xc);
              pfVar32 = pfVar32 + 3;
            } while ((long)uVar9 < (long)(int)uVar22);
          }
          lVar29 = FUN_036a466c(lVar19,0);
          if (lVar29 == 0) goto LAB_030a703c;
          if (0 < *(int *)(lVar29 + 0x18)) {
            uVar9 = 0;
            pfVar32 = (float *)(lVar29 + 0x28);
            pfVar36 = (float *)(lVar16 + 0x28);
            puVar34 = (undefined8 *)(lVar28 + 0x24);
            do {
              if (lVar28 == 0) goto LAB_030a703c;
              if (*(uint *)(lVar28 + 0x18) <= uVar9) goto LAB_030a7038;
              fVar46 = *(float *)((long)puVar34 + -4);
              uVar11 = *puVar34;
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar27 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              uVar22 = *(uint *)(lVar29 + 0x18);
              fVar46 = fVar46 - *pfVar27;
              fVar40 = (float)uVar11 - (float)*(undefined8 *)(pfVar27 + 1);
              fVar41 = (float)((ulong)uVar11 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(pfVar27 + 1) >> 0x20);
              if (fVar38 <= fVar41 * fVar41 + fVar46 * fVar46 + fVar40 * fVar40) {
                if (uVar22 <= uVar9) goto LAB_030a7038;
                fVar46 = pfVar32[-2];
                fVar40 = pfVar32[-1];
                fVar41 = *pfVar32;
                if (DAT_0411f1e2 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbdee0);
                  DAT_0411f1e2 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                fVar42 = SQRT(fVar41 * fVar41 + fVar46 * fVar46 + fVar40 * fVar40);
                if (fVar42 <= fVar2) {
                  if (DAT_0411f172 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cbded8);
                    DAT_0411f172 = '\x01';
                  }
                  pfVar27 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                  fVar46 = *pfVar27;
                  fVar40 = pfVar27[1];
                  fVar41 = pfVar27[2];
                }
                else {
                  fVar46 = fVar46 / fVar42;
                  fVar40 = fVar40 / fVar42;
                  fVar41 = fVar41 / fVar42;
                }
                fVar46 = (float)FUN_036bdd84(fVar46,&stack0x000001f0,0);
                if (lVar16 == 0) goto LAB_030a703c;
                if ((*(uint *)(lVar16 + 0x18) <= uVar9) ||
                   (uVar22 = *(uint *)(lVar29 + 0x18), uVar22 <= uVar9)) goto LAB_030a7038;
                fVar41 = fVar41 - *pfVar36;
                uVar11 = CONCAT44(fVar40 - (float)((ulong)*(undefined8 *)(pfVar36 + -2) >> 0x20),
                                  fVar46 - (float)*(undefined8 *)(pfVar36 + -2));
              }
              else {
                if (uVar22 <= uVar9) goto LAB_030a7038;
                uVar11 = *(undefined8 *)pfVar27;
                fVar41 = pfVar27[2];
              }
              uVar9 = uVar9 + 1;
              *(undefined8 *)(pfVar32 + -2) = uVar11;
              *pfVar32 = fVar41;
              puVar34 = (undefined8 *)((long)puVar34 + 0xc);
              pfVar36 = pfVar36 + 3;
              pfVar32 = pfVar32 + 3;
            } while ((long)uVar9 < (long)(int)uVar22);
          }
          uVar11 = FUN_036a4718(lVar19,0);
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          lVar26 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar26);
            lVar26 = *(long *)puVar3;
          }
          lVar33 = *(long *)(*(long *)(lVar26 + 0xb8) + 0x28);
          if (lVar33 == 0) {
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar26);
              lVar26 = *(long *)System_Action<DisconnectCause>_TypeInfo;
            }
            puVar3 = System_Action<DisconnectCause>_TypeInfo;
            uVar31 = **(undefined8 **)(lVar26 + 0xb8);
            lVar33 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
            FUN_021de1ac(lVar33,uVar31,
                         *(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,0);
            plVar21 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
            *plVar21 = lVar33;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar33);
          }
          uVar11 = FUN_01f6d39c(uVar11,lVar33,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
          lVar26 = FUN_01f70920(uVar11,*(undefined8 *)
                                        _Common_UpdateManager_UpdateJobManager<TData>_var);
          uVar9 = FUN_039a67c8(0);
          if ((uVar9 & 1) != 0) {
            if (lVar26 == 0) goto LAB_030a703c;
            if (0 < *(int *)(lVar26 + 0x18)) {
              uVar9 = 0;
              pfVar32 = (float *)(lVar26 + 0x28);
              puVar34 = (undefined8 *)(lVar18 + 0x24);
              pfVar36 = (float *)(lStack00000000000000b8 + 0x28);
              do {
                if (lVar18 == 0) goto LAB_030a703c;
                if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_030a7038;
                fVar46 = *(float *)((long)puVar34 + -4);
                uVar11 = *puVar34;
                if (DAT_0411f172 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbded8);
                  DAT_0411f172 = '\x01';
                }
                pfVar27 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                uVar22 = *(uint *)(lVar26 + 0x18);
                fVar46 = fVar46 - *pfVar27;
                fVar40 = (float)uVar11 - (float)*(undefined8 *)(pfVar27 + 1);
                fVar41 = (float)((ulong)uVar11 >> 0x20) -
                         (float)((ulong)*(undefined8 *)(pfVar27 + 1) >> 0x20);
                if (fVar38 <= fVar41 * fVar41 + fVar46 * fVar46 + fVar40 * fVar40) {
                  if (uVar22 <= uVar9) goto LAB_030a7038;
                  fVar40 = pfVar32[-1];
                  fVar41 = *pfVar32;
                  fVar46 = (float)FUN_036bdd84(pfVar32[-2],&stack0x000001f0,0);
                  if (lStack00000000000000b8 == 0) goto LAB_030a703c;
                  if ((*(uint *)(lStack00000000000000b8 + 0x18) <= uVar9) ||
                     (uVar22 = *(uint *)(lVar26 + 0x18), uVar22 <= uVar9)) goto LAB_030a7038;
                  fVar41 = fVar41 - *pfVar36;
                  uVar11 = CONCAT44(fVar40 - (float)((ulong)*(undefined8 *)(pfVar36 + -2) >> 0x20),
                                    fVar46 - (float)*(undefined8 *)(pfVar36 + -2));
                }
                else {
                  if (uVar22 <= uVar9) goto LAB_030a7038;
                  uVar11 = *(undefined8 *)pfVar27;
                  fVar41 = pfVar27[2];
                }
                uVar9 = uVar9 + 1;
                *(undefined8 *)(pfVar32 + -2) = uVar11;
                *pfVar32 = fVar41;
                pfVar36 = pfVar36 + 3;
                puVar34 = (undefined8 *)((long)puVar34 + 0xc);
                pfVar32 = pfVar32 + 3;
              } while ((long)uVar9 < (long)(int)uVar22);
            }
          }
          iVar7 = FUN_036a2da8(lVar12,iVar5,0);
          if (0 < iVar7) {
            iVar30 = 0;
            if (iVar6 < 1) {
              lVar29 = 0;
            }
            if (iStack00000000000000a4 < 1) {
              lVar26 = 0;
            }
            do {
              FUN_036a2dec(lVar12,iVar5,iVar30,0);
              FUN_036a2eb4(lVar13,uVar10,lVar20,lVar29,lVar26,0);
              iVar30 = iVar30 + 1;
            } while (iVar7 != iVar30);
          }
          iVar5 = iVar5 + 1;
          iVar6 = FUN_036a2ca8(lVar12,0);
        } while (iVar5 < iVar6);
      }
      if (plVar17 != (long *)0x0) {
        iVar5 = FUN_030a7a6c(plVar17);
        puVar3 = PTR_DAT_03cbdf88;
        if (0 < iVar5) {
          plVar21 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
          lVar12 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
          if (plVar21 == (long *)0x0) goto LAB_030a703c;
          if ((lVar12 != 0) &&
             (lVar14 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar14 == 0)) {
LAB_030a7088:
            uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar10,0);
          }
          if ((int)plVar21[3] == 0) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar21[4] = lVar12;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21 + 4,lVar12);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar21,0);
        }
        if ((*plVar37 != 0) && (lVar12 = FUN_036cbbbc(*plVar37,0), lVar12 != 0)) {
          lVar12 = FUN_01f7e2fc(lVar12,*(undefined8 *)PTR_DAT_03cebed0);
          uVar10 = FUN_03693c80(uVar4,0);
          if (lVar12 != 0) {
            thunk_FUN_03692878(lVar12,uVar10,0);
            uVar10 = FUN_036a0dd4(uVar4,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)puVar3);
            }
            uVar9 = FUN_036cee6c(uVar10,0,0);
            if ((uVar9 & 1) != 0) {
              lVar14 = *plVar35;
              uVar10 = FUN_036a0dd4(uVar4,0);
              if (lVar14 == 0) goto LAB_030a703c;
              uVar9 = FUN_0219f8b8(lVar14,uVar10,&stack0x000001c8,
                                   *(undefined8 *)System_Action<ActionContext>_TypeInfo);
              if ((uVar9 & 1) != 0) {
                FUN_036a0e10(lVar12,in_stack_000001c8,0);
              }
            }
            FUN_036a0e90(lVar12,plStack0000000000000048,0);
            FUN_036a0f10(lVar12,lVar13,0);
            if (bVar1) {
              uVar10 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
              FUN_036a0e90(uVar4,uVar10,0);
              FUN_036a0f10(uVar4,lVar23,0);
            }
            puVar3 = PTR_DAT_03cc0668;
            if (lVar8 != 0) {
              if (0 < *(int *)(lVar8 + 0x18)) {
                iVar5 = 0;
                do {
                  FUN_02215a88(lVar8,iVar5,&stack0x00000160,*(undefined8 *)puVar3);
                  FUN_036a1018(in_stack_00000160 & 0xffffffff,uVar4,iVar5,0);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(lVar8 + 0x18));
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_030a703c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


