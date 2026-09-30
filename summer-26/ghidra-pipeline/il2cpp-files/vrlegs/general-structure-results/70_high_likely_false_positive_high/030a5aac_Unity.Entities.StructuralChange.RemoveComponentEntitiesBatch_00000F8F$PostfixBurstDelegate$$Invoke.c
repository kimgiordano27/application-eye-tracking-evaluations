/*
FUNCTION_NAME: Unity.Entities.StructuralChange.RemoveComponentEntitiesBatch_00000F8F$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a5aac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_3
*/


void Unity_Entities_StructuralChange_RemoveComponentEntitiesBatch_00000F8F_PostfixBurstDelegate__Invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
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
  undefined4 *puVar23;
  long lVar24;
  long lVar25;
  float *pfVar26;
  long lVar27;
  long lVar28;
  long unaff_x20;
  int iVar29;
  long *unaff_x21;
  undefined8 uVar30;
  float *pfVar31;
  long lVar32;
  undefined8 *puVar33;
  long *unaff_x24;
  float *pfVar34;
  long *unaff_x26;
  undefined8 unaff_x28;
  float fVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
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
  
  uVar7 = FUN_036a0ed4();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x21);
  }
  uVar8 = FUN_036d35a8(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar9 = FUN_036a0ed4();
  if (lVar9 == 0) goto LAB_030a703c;
  iVar4 = FUN_036a3408(lVar9,0);
  if (iVar4 == 0) {
    return;
  }
  lVar9 = FUN_036a0ed4();
  uVar7 = FUN_036a0e54();
  uVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf4f0);
  FUN_021de1ac();
  uVar7 = FUN_01f71424(uVar7,uVar10,*(undefined8 *)PTR_DAT_03cbf4d0);
  uVar10 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Services_Economy_EconomyExceptionReason_var);
  FUN_021de1ac();
  uVar7 = FUN_01f6d39c(uVar7,uVar10,*(undefined8 *)System_Action<Camera>_TypeInfo);
  plStack0000000000000048 = (long *)FUN_01f70920(uVar7,*(undefined8 *)PTR_DAT_03d0c9c0);
  lVar11 = FUN_036a0e54();
  if (lVar11 == 0) {
LAB_030a5c08:
    lVar12 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<DiagnosticEvent>_TypeInfo);
    FUN_027b3d9c(lVar12,0);
    lVar11 = FUN_030a71e0(lVar9,1);
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
    if (lVar12 == 0) goto LAB_030a703c;
    *(undefined8 *)(lVar12 + 0x18) = in_stack_000001d8;
    *(ulong *)(lVar12 + 0x10) = in_stack_000001d0;
    *(undefined8 *)(lVar12 + 0x28) = in_stack_000001e8;
    *(undefined8 *)(lVar12 + 0x20) = in_stack_000001e0;
    if (lVar11 == 0) goto LAB_030a703c;
    uVar40 = FUN_036a3408(lVar11,0);
    uVar7 = FUN_02b34428(0,uVar40,0);
    uVar10 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Collider>_TypeInfo);
    FUN_021de1ac(uVar10,lVar12,*(undefined8 *)System_Action<DebugUIHandlerPanel>_TypeInfo,0);
    uVar7 = FUN_01f6d39c(uVar7,uVar10,*(undefined8 *)System_Action<CGVolume>_TypeInfo);
    uVar7 = FUN_01f70920(uVar7,*(undefined8 *)System_Action<char>_TypeInfo);
    FUN_036aa17c(lVar11,uVar7,0);
    lVar12 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc8b40,1);
    if (DAT_0411f171 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbe2f0);
      DAT_0411f171 = '\x01';
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_03cbe2f0 + 0xb8);
    in_stack_00000188 = *(undefined8 *)(lVar13 + 0x68);
    param_2 = *(undefined8 *)(lVar13 + 0x60);
    in_stack_00000198 = *(undefined8 *)(lVar13 + 0x78);
    in_stack_00000190 = *(undefined8 *)(lVar13 + 0x70);
    in_stack_00000168 = *(undefined8 *)(lVar13 + 0x48);
    param_4 = *(ulong *)(lVar13 + 0x40);
    in_stack_00000178 = *(undefined8 *)(lVar13 + 0x58);
    param_3 = *(undefined8 *)(lVar13 + 0x50);
    in_stack_00000160 = param_4;
    in_stack_00000170 = param_3;
    in_stack_00000180 = param_2;
    if (lVar12 == 0) goto LAB_030a703c;
    in_stack_00000120 = param_4;
    in_stack_00000128 = in_stack_00000168;
    in_stack_00000130 = param_3;
    in_stack_00000138 = in_stack_00000178;
    in_stack_00000140 = param_2;
    in_stack_00000148 = in_stack_00000188;
    in_stack_00000150 = in_stack_00000190;
    in_stack_00000158 = in_stack_00000198;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_030a7038;
    *(undefined8 *)(lVar12 + 0x48) = in_stack_00000188;
    *(undefined8 *)(lVar12 + 0x40) = param_2;
    *(undefined8 *)(lVar12 + 0x58) = in_stack_00000198;
    *(undefined8 *)(lVar12 + 0x50) = in_stack_00000190;
    *(undefined8 *)(lVar12 + 0x28) = in_stack_00000168;
    *(ulong *)(lVar12 + 0x20) = param_4;
    *(undefined8 *)(lVar12 + 0x38) = in_stack_00000178;
    *(undefined8 *)(lVar12 + 0x30) = param_3;
    FUN_036a3534(lVar11,lVar12,0);
    FUN_036cbb80();
    FUN_036a0e10();
    puVar3 = PTR_DAT_03cc9150;
    plStack0000000000000048 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,1);
    lVar12 = *unaff_x24;
    uVar7 = FUN_036cbb80();
    if ((lVar12 == 0) ||
       (FUN_0219b634(lVar12,uVar7,&stack0x00000238,*(undefined8 *)System_Action<CGShape>_TypeInfo),
       plStack0000000000000048 == (long *)0x0)) goto LAB_030a703c;
    if ((in_stack_00000238 != 0) &&
       (lVar12 = thunk_FUN_01a89d6c(in_stack_00000238,
                                    *(undefined8 *)(*plStack0000000000000048 + 0x40)), lVar12 == 0))
    goto LAB_030a7088;
    if ((int)plStack0000000000000048[3] == 0) goto LAB_030a7038;
    plStack0000000000000048[4] = in_stack_00000238;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (plStack0000000000000048 + 4,in_stack_00000238);
    plVar17 = (long *)FUN_01ab6a94(*(undefined8 *)puVar3,1);
    lVar12 = FUN_036cbb80();
    if (plVar17 == (long *)0x0) goto LAB_030a703c;
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
    goto LAB_030a7088;
    if ((int)plVar17[3] == 0) goto LAB_030a7038;
    plVar17[4] = lVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17 + 4,lVar12);
    FUN_036a0e90();
    FUN_036a0f10();
    lVar12 = FUN_030a71e0(lVar11,0);
    bVar1 = true;
  }
  else {
    lVar11 = FUN_036a0e54();
    if (lVar11 == 0) goto LAB_030a703c;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_030a5c08;
    lVar12 = FUN_030a71e0(lVar9,0);
    if (lVar9 == 0) goto LAB_030a703c;
    bVar1 = false;
    lVar11 = lVar9;
  }
  uVar7 = FUN_036d3824(lVar11,0);
  uVar7 = FUN_025b1328(uVar7,*(undefined8 *)System_Action<DisconnectMessage>_TypeInfo,0);
  if (lVar12 != 0) {
    FUN_036d38d4(lVar12,uVar7,0);
    FUN_036a106c();
    lVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd19e8);
    FUN_0219a4f0(lVar13,*(undefined8 *)PTR_DAT_03cd19e0);
    iVar4 = FUN_036a2ca8(lVar11,0);
    puVar3 = System_Action<CGGameObject>_TypeInfo;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        fVar35 = (float)FUN_036a0fd4();
        if (0.0 < fVar35) {
          if (lVar13 == 0) goto LAB_030a703c;
          in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,iVar4);
          in_stack_000001a0 = CONCAT44(in_stack_000001a0._4_4_,fVar35);
          FUN_0219b9a4(lVar13,&stack0x00000160,&stack0x000001a0,*(undefined8 *)puVar3);
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_036a2ca8(lVar11,0);
      } while (iVar4 < iVar5);
    }
    uVar7 = FUN_036aa140(lVar11,0);
    uVar30 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar10 = FUN_036a0e54();
    uVar7 = FUN_030a50f8(uVar7,uVar30,uVar10,plStack0000000000000048);
    FUN_036aa17c(lVar12,uVar7,0);
    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
    FUN_021de1ac();
    uVar7 = FUN_01f6d39c(plStack0000000000000048,uVar7,
                         *(undefined8 *)Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
    uVar7 = FUN_01f70920(uVar7,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
    FUN_036a3534(lVar12,uVar7,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    puVar23 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uVar40 = *puVar23;
    uVar41 = puVar23[1];
    uVar42 = puVar23[2];
    uVar7 = FUN_036db02c();
    if (DAT_0411f16a == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f16a = '\x01';
    }
    FUN_036bc8cc(uVar40,uVar41,uVar42,uVar7,param_2,param_3,param_4,&stack0x000001f0,0);
    in_stack_000000e8 = 0;
    in_stack_000000e0 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    in_stack_00000118 = 0;
    in_stack_00000110 = 0;
    FUN_030a762c(lVar12,&stack0x000000e0);
    lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0688);
    Animancer_AnimancerState__OnSetIsPlaying(lVar14,*(undefined8 *)PTR_DAT_03cc0690);
    iVar4 = FUN_036a2ca8(lVar11,0);
    puVar3 = PTR_DAT_03cc0640;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        uVar40 = FUN_036a0fd4();
        if (lVar14 == 0) goto LAB_030a703c;
        in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,uVar40);
        FUN_01b5f01c(lVar14,&stack0x00000160,*(undefined8 *)puVar3);
        FUN_036a1018(0);
        iVar4 = iVar4 + 1;
        iVar5 = FUN_036a2ca8(lVar11,0);
      } while (iVar4 < iVar5);
    }
    lVar15 = FUN_036a45c0(lVar12,0);
    lVar16 = FUN_036a466c(lVar12,0);
    lVar27 = *(long *)PTR_DAT_03d26e58;
    lVar24 = *(long *)(lVar27 + 0x38);
    if (lVar24 == 0) {
      FUN_01a47054(lVar27);
      lVar24 = *(long *)(lVar27 + 0x38);
    }
    lVar24 = *(long *)(lVar24 + 0x10);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = FUN_01a46ff8();
    }
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar24 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = FUN_01a46ff8();
    }
    lStack00000000000000b8 = **(long **)(lVar24 + 0xb8);
    uVar8 = FUN_039a67c8(0);
    if ((uVar8 & 1) != 0) {
      uVar7 = FUN_036a4718(lVar12,0);
      puVar3 = System_Action<DisconnectCause>_TypeInfo;
      lVar24 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar24);
        lVar24 = *(long *)puVar3;
      }
      lVar27 = *(long *)(*(long *)(lVar24 + 0xb8) + 8);
      if (lVar27 == 0) {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar24);
          lVar24 = *(long *)puVar3;
        }
        uVar10 = **(undefined8 **)(lVar24 + 0xb8);
        lVar27 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
        FUN_021de1ac(lVar27,uVar10,*(undefined8 *)System_Action<ColumnMover>_TypeInfo,0);
        plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar17 = lVar27;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar27);
      }
      uVar7 = FUN_01f6d39c(uVar7,lVar27,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
      lStack00000000000000b8 =
           FUN_01f70920(uVar7,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
    }
    puVar3 = PTR_DAT_03cbeb90;
    if (lVar15 != 0) {
      lVar24 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb90,*(undefined4 *)(lVar15 + 0x18));
      lVar27 = FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar15 + 0x18));
      lVar18 = FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar15 + 0x18));
      plVar17 = (long *)thunk_FUN_01a89e68(*(undefined8 *)System_Action<byte>_TypeInfo);
      FUN_030a78e8(plVar17,lVar11);
      lVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
      FUN_036a1b5c(lVar19,0);
      iVar4 = FUN_036a2ca8(lVar11,0);
      fVar2 = DAT_00d38ac8;
      fVar35 = DAT_00d38798;
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          lVar20 = FUN_036a0ed4(unaff_x28,0);
          if (lVar20 == 0) goto LAB_030a703c;
          UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                    (lVar20,iVar4,0,lVar24,lVar27,lVar18,0);
          lVar20 = *(long *)puVar3;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar20 = *(long *)puVar3;
          }
          lVar28 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x10);
          if (lVar28 == 0) {
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar20 = *(long *)puVar3;
            }
            uVar7 = **(undefined8 **)(lVar20 + 0xb8);
            lVar28 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
            FUN_021de1ac(lVar28,uVar7,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0);
            plVar21 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *plVar21 = lVar28;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar28);
          }
          uVar40 = FUN_01f663ac(lVar24,lVar28,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
          lVar20 = *(long *)puVar3;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar20);
            lVar20 = *(long *)puVar3;
          }
          lVar28 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x18);
          if (lVar28 == 0) {
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar20);
              lVar20 = *(long *)System_Action<DisconnectCause>_TypeInfo;
            }
            puVar3 = System_Action<DisconnectCause>_TypeInfo;
            uVar7 = **(undefined8 **)(lVar20 + 0xb8);
            lVar28 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
            FUN_021de1ac(lVar28,uVar7,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
            plVar21 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
            *plVar21 = lVar28;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar28);
          }
          iVar5 = FUN_01f663ac(lVar27,lVar28,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
          uVar8 = FUN_039a67c8(0);
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          if ((uVar8 & 1) == 0) {
            iStack00000000000000a4 = 0;
          }
          else {
            lVar20 = *(long *)System_Action<DisconnectCause>_TypeInfo;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar20 = *(long *)puVar3;
            }
            lVar28 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x20);
            if (lVar28 == 0) {
              if (*(int *)(lVar20 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar20 = *(long *)System_Action<DisconnectCause>_TypeInfo;
              }
              puVar3 = System_Action<DisconnectCause>_TypeInfo;
              uVar7 = **(undefined8 **)(lVar20 + 0xb8);
              lVar28 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
              FUN_021de1ac(lVar28,uVar7,*(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0)
              ;
              plVar21 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
              *plVar21 = lVar28;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar28);
            }
            iStack00000000000000a4 =
                 FUN_01f663ac(lVar18,lVar28,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
          }
          uVar7 = FUN_036a2d20(lVar11,iVar4,0);
          uVar8 = FUN_025be440(uVar7,0);
          if ((uVar8 & 1) != 0) {
            in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,iVar4);
            uVar7 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
            uVar7 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar7,0);
          }
          puVar3 = PTR_DAT_03cbded8;
          if (plVar17 == (long *)0x0) goto LAB_030a703c;
          Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
                    (plVar17,iVar4,uVar7,uVar40,iVar5,iStack00000000000000a4);
          FUN_036a1018(0x42c80000,unaff_x28,iVar4,0);
          FUN_036a106c(unaff_x28,lVar19,0);
          if (((lVar19 == 0) || (lVar20 = FUN_036a45c0(lVar19,0), lVar20 == 0)) ||
             (lVar28 = FUN_036a45c0(lVar12,0), lVar28 == 0)) goto LAB_030a703c;
          if (*(int *)(lVar20 + 0x18) != *(int *)(lVar28 + 0x18)) {
            thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
            uVar7 = thunk_FUN_01a89e68();
            uVar10 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
            FUN_027a794c(uVar7,uVar10,0);
            uVar10 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar7,uVar10);
          }
          if (lVar13 == 0) goto LAB_030a703c;
          in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,iVar4);
          uVar8 = FUN_0219c130(lVar13,&stack0x00000160,
                               *(undefined8 *)System_Action<CGModule>_TypeInfo);
          uVar36 = 0;
          if ((uVar8 & 1) != 0) {
            in_stack_00000160 = CONCAT44(in_stack_00000160._4_4_,iVar4);
            FUN_0219b634(0,lVar13,&stack0x00000160,&stack0x000001a0,
                         *(undefined8 *)System_Action<CGSpots>_TypeInfo);
            uVar36 = in_stack_000001a0 & 0xffffffff;
          }
          FUN_036a1018(uVar36,unaff_x28,iVar4,0);
          lVar20 = FUN_036a45c0(lVar19,0);
          if (lVar20 == 0) goto LAB_030a703c;
          if (0 < *(int *)(lVar20 + 0x18)) {
            uVar8 = 0;
            pfVar31 = (float *)(lVar20 + 0x28);
            puVar33 = (undefined8 *)(lVar24 + 0x24);
            pfVar34 = (float *)(lVar15 + 0x28);
            do {
              if (lVar24 == 0) goto LAB_030a703c;
              if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_030a7038;
              fVar43 = *(float *)((long)puVar33 + -4);
              uVar10 = *puVar33;
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(puVar3);
                DAT_0411f172 = '\x01';
              }
              pfVar26 = *(float **)(*(long *)puVar3 + 0xb8);
              uVar22 = *(uint *)(lVar20 + 0x18);
              fVar43 = fVar43 - *pfVar26;
              fVar37 = (float)uVar10 - (float)*(undefined8 *)(pfVar26 + 1);
              fVar38 = (float)((ulong)uVar10 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(pfVar26 + 1) >> 0x20);
              if (fVar35 <= fVar38 * fVar38 + fVar43 * fVar43 + fVar37 * fVar37) {
                if (uVar22 <= uVar8) goto LAB_030a7038;
                fVar37 = pfVar31[-1];
                fVar38 = *pfVar31;
                fVar43 = (float)FUN_036bdcac(pfVar31[-2],&stack0x000001f0,0);
                if ((*(uint *)(lVar15 + 0x18) <= uVar8) ||
                   (uVar22 = *(uint *)(lVar20 + 0x18), uVar22 <= uVar8)) goto LAB_030a7038;
                fVar38 = fVar38 - *pfVar34;
                uVar10 = CONCAT44(fVar37 - (float)((ulong)*(undefined8 *)(pfVar34 + -2) >> 0x20),
                                  fVar43 - (float)*(undefined8 *)(pfVar34 + -2));
              }
              else {
                if (uVar22 <= uVar8) goto LAB_030a7038;
                uVar10 = *(undefined8 *)pfVar26;
                fVar38 = pfVar26[2];
              }
              uVar8 = uVar8 + 1;
              *(undefined8 *)(pfVar31 + -2) = uVar10;
              *pfVar31 = fVar38;
              pfVar34 = pfVar34 + 3;
              puVar33 = (undefined8 *)((long)puVar33 + 0xc);
              pfVar31 = pfVar31 + 3;
            } while ((long)uVar8 < (long)(int)uVar22);
          }
          lVar28 = FUN_036a466c(lVar19,0);
          if (lVar28 == 0) goto LAB_030a703c;
          if (0 < *(int *)(lVar28 + 0x18)) {
            uVar8 = 0;
            pfVar31 = (float *)(lVar28 + 0x28);
            pfVar34 = (float *)(lVar16 + 0x28);
            puVar33 = (undefined8 *)(lVar27 + 0x24);
            do {
              if (lVar27 == 0) goto LAB_030a703c;
              if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_030a7038;
              fVar43 = *(float *)((long)puVar33 + -4);
              uVar10 = *puVar33;
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar26 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              uVar22 = *(uint *)(lVar28 + 0x18);
              fVar43 = fVar43 - *pfVar26;
              fVar37 = (float)uVar10 - (float)*(undefined8 *)(pfVar26 + 1);
              fVar38 = (float)((ulong)uVar10 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(pfVar26 + 1) >> 0x20);
              if (fVar35 <= fVar38 * fVar38 + fVar43 * fVar43 + fVar37 * fVar37) {
                if (uVar22 <= uVar8) goto LAB_030a7038;
                fVar43 = pfVar31[-2];
                fVar37 = pfVar31[-1];
                fVar38 = *pfVar31;
                if (DAT_0411f1e2 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbdee0);
                  DAT_0411f1e2 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                fVar39 = SQRT(fVar38 * fVar38 + fVar43 * fVar43 + fVar37 * fVar37);
                if (fVar39 <= fVar2) {
                  if (DAT_0411f172 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cbded8);
                    DAT_0411f172 = '\x01';
                  }
                  pfVar26 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                  fVar43 = *pfVar26;
                  fVar37 = pfVar26[1];
                  fVar38 = pfVar26[2];
                }
                else {
                  fVar43 = fVar43 / fVar39;
                  fVar37 = fVar37 / fVar39;
                  fVar38 = fVar38 / fVar39;
                }
                fVar43 = (float)FUN_036bdd84(fVar43,&stack0x000001f0,0);
                if (lVar16 == 0) goto LAB_030a703c;
                if ((*(uint *)(lVar16 + 0x18) <= uVar8) ||
                   (uVar22 = *(uint *)(lVar28 + 0x18), uVar22 <= uVar8)) goto LAB_030a7038;
                fVar38 = fVar38 - *pfVar34;
                uVar10 = CONCAT44(fVar37 - (float)((ulong)*(undefined8 *)(pfVar34 + -2) >> 0x20),
                                  fVar43 - (float)*(undefined8 *)(pfVar34 + -2));
              }
              else {
                if (uVar22 <= uVar8) goto LAB_030a7038;
                uVar10 = *(undefined8 *)pfVar26;
                fVar38 = pfVar26[2];
              }
              uVar8 = uVar8 + 1;
              *(undefined8 *)(pfVar31 + -2) = uVar10;
              *pfVar31 = fVar38;
              puVar33 = (undefined8 *)((long)puVar33 + 0xc);
              pfVar34 = pfVar34 + 3;
              pfVar31 = pfVar31 + 3;
            } while ((long)uVar8 < (long)(int)uVar22);
          }
          uVar10 = FUN_036a4718(lVar19,0);
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          lVar25 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar25);
            lVar25 = *(long *)puVar3;
          }
          lVar32 = *(long *)(*(long *)(lVar25 + 0xb8) + 0x28);
          if (lVar32 == 0) {
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar25);
              lVar25 = *(long *)System_Action<DisconnectCause>_TypeInfo;
            }
            puVar3 = System_Action<DisconnectCause>_TypeInfo;
            uVar30 = **(undefined8 **)(lVar25 + 0xb8);
            lVar32 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
            FUN_021de1ac(lVar32,uVar30,
                         *(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,0);
            plVar21 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
            *plVar21 = lVar32;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar32);
          }
          uVar10 = FUN_01f6d39c(uVar10,lVar32,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
          lVar25 = FUN_01f70920(uVar10,*(undefined8 *)
                                        _Common_UpdateManager_UpdateJobManager<TData>_var);
          uVar8 = FUN_039a67c8(0);
          if ((uVar8 & 1) != 0) {
            if (lVar25 == 0) goto LAB_030a703c;
            if (0 < *(int *)(lVar25 + 0x18)) {
              uVar8 = 0;
              pfVar31 = (float *)(lVar25 + 0x28);
              puVar33 = (undefined8 *)(lVar18 + 0x24);
              pfVar34 = (float *)(lStack00000000000000b8 + 0x28);
              do {
                if (lVar18 == 0) goto LAB_030a703c;
                if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_030a7038;
                fVar43 = *(float *)((long)puVar33 + -4);
                uVar10 = *puVar33;
                if (DAT_0411f172 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbded8);
                  DAT_0411f172 = '\x01';
                }
                pfVar26 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                uVar22 = *(uint *)(lVar25 + 0x18);
                fVar43 = fVar43 - *pfVar26;
                fVar37 = (float)uVar10 - (float)*(undefined8 *)(pfVar26 + 1);
                fVar38 = (float)((ulong)uVar10 >> 0x20) -
                         (float)((ulong)*(undefined8 *)(pfVar26 + 1) >> 0x20);
                if (fVar35 <= fVar38 * fVar38 + fVar43 * fVar43 + fVar37 * fVar37) {
                  if (uVar22 <= uVar8) goto LAB_030a7038;
                  fVar37 = pfVar31[-1];
                  fVar38 = *pfVar31;
                  fVar43 = (float)FUN_036bdd84(pfVar31[-2],&stack0x000001f0,0);
                  if (lStack00000000000000b8 == 0) goto LAB_030a703c;
                  if ((*(uint *)(lStack00000000000000b8 + 0x18) <= uVar8) ||
                     (uVar22 = *(uint *)(lVar25 + 0x18), uVar22 <= uVar8)) goto LAB_030a7038;
                  fVar38 = fVar38 - *pfVar34;
                  uVar10 = CONCAT44(fVar37 - (float)((ulong)*(undefined8 *)(pfVar34 + -2) >> 0x20),
                                    fVar43 - (float)*(undefined8 *)(pfVar34 + -2));
                }
                else {
                  if (uVar22 <= uVar8) goto LAB_030a7038;
                  uVar10 = *(undefined8 *)pfVar26;
                  fVar38 = pfVar26[2];
                }
                uVar8 = uVar8 + 1;
                *(undefined8 *)(pfVar31 + -2) = uVar10;
                *pfVar31 = fVar38;
                pfVar34 = pfVar34 + 3;
                puVar33 = (undefined8 *)((long)puVar33 + 0xc);
                pfVar31 = pfVar31 + 3;
              } while ((long)uVar8 < (long)(int)uVar22);
            }
          }
          iVar6 = FUN_036a2da8(lVar11,iVar4,0);
          if (0 < iVar6) {
            iVar29 = 0;
            if (iVar5 < 1) {
              lVar28 = 0;
            }
            if (iStack00000000000000a4 < 1) {
              lVar25 = 0;
            }
            do {
              FUN_036a2dec(lVar11,iVar4,iVar29,0);
              FUN_036a2eb4(lVar12,uVar7,lVar20,lVar28,lVar25,0);
              iVar29 = iVar29 + 1;
            } while (iVar6 != iVar29);
          }
          iVar4 = iVar4 + 1;
          iVar5 = FUN_036a2ca8(lVar11,0);
        } while (iVar4 < iVar5);
      }
      if (plVar17 != (long *)0x0) {
        iVar4 = FUN_030a7a6c(plVar17);
        puVar3 = PTR_DAT_03cbdf88;
        if (0 < iVar4) {
          plVar21 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
          lVar11 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
          if (plVar21 == (long *)0x0) goto LAB_030a703c;
          if ((lVar11 != 0) &&
             (lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar21 + 0x40)), lVar13 == 0)) {
LAB_030a7088:
            uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar7,0);
          }
          if ((int)plVar21[3] == 0) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar21[4] = lVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21 + 4,lVar11);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar21,0);
        }
        if ((*unaff_x26 != 0) && (lVar11 = FUN_036cbbbc(*unaff_x26,0), lVar11 != 0)) {
          lVar11 = FUN_01f7e2fc(lVar11,*(undefined8 *)PTR_DAT_03cebed0);
          uVar7 = FUN_03693c80(unaff_x28,0);
          if (lVar11 != 0) {
            thunk_FUN_03692878(lVar11,uVar7,0);
            uVar7 = FUN_036a0dd4(unaff_x28,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)puVar3);
            }
            uVar8 = FUN_036cee6c(uVar7,0,0);
            if ((uVar8 & 1) != 0) {
              lVar13 = *unaff_x24;
              uVar7 = FUN_036a0dd4(unaff_x28,0);
              if (lVar13 == 0) goto LAB_030a703c;
              uVar8 = FUN_0219f8b8(lVar13,uVar7,&stack0x000001c8,
                                   *(undefined8 *)System_Action<ActionContext>_TypeInfo);
              if ((uVar8 & 1) != 0) {
                FUN_036a0e10(lVar11,in_stack_000001c8,0);
              }
            }
            FUN_036a0e90(lVar11,plStack0000000000000048,0);
            FUN_036a0f10(lVar11,lVar12,0);
            if (bVar1) {
              uVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
              FUN_036a0e90(unaff_x28,uVar7,0);
              FUN_036a0f10(unaff_x28,lVar9,0);
            }
            puVar3 = PTR_DAT_03cc0668;
            if (lVar14 != 0) {
              if (0 < *(int *)(lVar14 + 0x18)) {
                iVar4 = 0;
                do {
                  FUN_02215a88(lVar14,iVar4,&stack0x00000160,*(undefined8 *)puVar3);
                  FUN_036a1018(in_stack_00000160 & 0xffffffff,unaff_x28,iVar4,0);
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(lVar14 + 0x18));
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


