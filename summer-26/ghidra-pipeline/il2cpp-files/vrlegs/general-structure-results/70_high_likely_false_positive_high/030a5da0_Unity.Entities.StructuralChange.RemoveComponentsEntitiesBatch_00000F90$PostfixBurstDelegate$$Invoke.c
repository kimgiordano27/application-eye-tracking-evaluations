/*
FUNCTION_NAME: Unity.Entities.StructuralChange.RemoveComponentsEntitiesBatch_00000F90$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a5da0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void Unity_Entities_StructuralChange_RemoveComponentsEntitiesBatch_00000F90_PostfixBurstDelegate__Invoke
               (long *param_1)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  float *pfVar25;
  long lVar26;
  long lVar27;
  long unaff_x20;
  int iVar28;
  long unaff_x21;
  undefined8 uVar29;
  undefined8 uVar30;
  float *pfVar31;
  long lVar32;
  undefined8 *puVar33;
  long *unaff_x24;
  undefined8 unaff_x25;
  float *pfVar34;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
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
  ulong uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  float in_stack_000001a0;
  undefined8 in_stack_000001c8;
  long in_stack_00000238;
  
  lVar21 = *(long *)(*param_1 + 0xb8);
  uStack0000000000000188 = *(undefined8 *)(lVar21 + 0x68);
  uVar15 = *(undefined8 *)(lVar21 + 0x60);
  uStack0000000000000198 = *(undefined8 *)(lVar21 + 0x78);
  uStack0000000000000190 = *(undefined8 *)(lVar21 + 0x70);
  uStack0000000000000168 = *(undefined8 *)(lVar21 + 0x48);
  uVar14 = *(ulong *)(lVar21 + 0x40);
  uStack0000000000000178 = *(undefined8 *)(lVar21 + 0x58);
  uVar30 = *(undefined8 *)(lVar21 + 0x50);
  uStack0000000000000160 = uVar14;
  uStack0000000000000170 = uVar30;
  uStack0000000000000180 = uVar15;
  if (unaff_x21 != 0) {
    in_stack_00000120 = uVar14;
    in_stack_00000128 = uStack0000000000000168;
    in_stack_00000130 = uVar30;
    in_stack_00000138 = uStack0000000000000178;
    in_stack_00000140 = uVar15;
    in_stack_00000148 = uStack0000000000000188;
    in_stack_00000150 = uStack0000000000000190;
    in_stack_00000158 = uStack0000000000000198;
    if (*(int *)(unaff_x21 + 0x18) == 0) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(undefined8 *)(unaff_x21 + 0x48) = uStack0000000000000188;
    *(undefined8 *)(unaff_x21 + 0x40) = uVar15;
    *(undefined8 *)(unaff_x21 + 0x58) = uStack0000000000000198;
    *(undefined8 *)(unaff_x21 + 0x50) = uStack0000000000000190;
    *(undefined8 *)(unaff_x21 + 0x28) = uStack0000000000000168;
    *(ulong *)(unaff_x21 + 0x20) = uVar14;
    *(undefined8 *)(unaff_x21 + 0x38) = uStack0000000000000178;
    *(undefined8 *)(unaff_x21 + 0x30) = uVar30;
    FUN_036a3534();
    FUN_036cbb80();
    FUN_036a0e10();
    puVar2 = PTR_DAT_03cc9150;
    plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,1);
    lVar21 = *unaff_x24;
    uVar7 = FUN_036cbb80();
    if ((lVar21 != 0) &&
       (FUN_0219b634(lVar21,uVar7,&stack0x00000238,*(undefined8 *)System_Action<CGShape>_TypeInfo),
       plVar6 != (long *)0x0)) {
      if ((in_stack_00000238 != 0) &&
         (lVar21 = thunk_FUN_01a89d6c(in_stack_00000238,*(undefined8 *)(*plVar6 + 0x40)),
         lVar21 == 0)) {
LAB_030a7088:
        uVar15 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar15,0);
      }
      if ((int)plVar6[3] == 0) goto LAB_030a7038;
      plVar6[4] = in_stack_00000238;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar6 + 4,in_stack_00000238);
      plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)puVar2,1);
      lVar21 = FUN_036cbb80();
      if (plVar8 == (long *)0x0) goto LAB_030a703c;
      if ((lVar21 != 0) &&
         (lVar9 = thunk_FUN_01a89d6c(lVar21,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_030a7088;
      if ((int)plVar8[3] == 0) goto LAB_030a7038;
      plVar8[4] = lVar21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar21);
      FUN_036a0e90();
      FUN_036a0f10();
      lVar21 = FUN_030a71e0();
      uVar7 = FUN_036d3824();
      uVar7 = FUN_025b1328(uVar7,*(undefined8 *)System_Action<DisconnectMessage>_TypeInfo,0);
      if (lVar21 != 0) {
        FUN_036d38d4(lVar21,uVar7,0);
        FUN_036a106c();
        lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd19e8);
        FUN_0219a4f0(lVar9,*(undefined8 *)PTR_DAT_03cd19e0);
        iVar3 = FUN_036a2ca8();
        puVar2 = System_Action<CGGameObject>_TypeInfo;
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            fVar35 = (float)FUN_036a0fd4();
            if (0.0 < fVar35) {
              if (lVar9 == 0) goto LAB_030a703c;
              uStack0000000000000160 = CONCAT44(uStack0000000000000160._4_4_,iVar3);
              in_stack_000001a0 = fVar35;
              FUN_0219b9a4(lVar9,&stack0x00000160,&stack0x000001a0,*(undefined8 *)puVar2);
            }
            iVar3 = iVar3 + 1;
            iVar4 = FUN_036a2ca8(unaff_x27,0);
          } while (iVar3 < iVar4);
        }
        uVar7 = FUN_036aa140(unaff_x27,0);
        uVar29 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar10 = FUN_036a0e54();
        uVar7 = FUN_030a50f8(uVar7,uVar29,uVar10,plVar6);
        FUN_036aa17c(lVar21,uVar7,0);
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                    Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
        FUN_021de1ac();
        uVar7 = FUN_01f6d39c(plVar6,uVar7,
                             *(undefined8 *)Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
        uVar7 = FUN_01f70920(uVar7,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
        FUN_036a3534(lVar21,uVar7,0);
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
        }
        puVar22 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
        uVar39 = *puVar22;
        uVar40 = puVar22[1];
        uVar41 = puVar22[2];
        uVar7 = FUN_036db02c();
        if (DAT_0411f16a == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f16a = '\x01';
        }
        FUN_036bc8cc(uVar39,uVar40,uVar41,uVar7,uVar15,uVar30,uVar14,&stack0x000001f0,0);
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        FUN_030a762c(lVar21,&stack0x000000e0);
        lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0688);
        Animancer_AnimancerState__OnSetIsPlaying(lVar11,*(undefined8 *)PTR_DAT_03cc0690);
        iVar3 = FUN_036a2ca8(unaff_x27,0);
        puVar2 = PTR_DAT_03cc0640;
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            uVar39 = FUN_036a0fd4();
            if (lVar11 == 0) goto LAB_030a703c;
            uStack0000000000000160 = CONCAT44(uStack0000000000000160._4_4_,uVar39);
            FUN_01b5f01c(lVar11,&stack0x00000160,*(undefined8 *)puVar2);
            FUN_036a1018(0);
            iVar3 = iVar3 + 1;
            iVar4 = FUN_036a2ca8(unaff_x27,0);
          } while (iVar3 < iVar4);
        }
        lVar12 = FUN_036a45c0(lVar21,0);
        lVar13 = FUN_036a466c(lVar21,0);
        lVar26 = *(long *)PTR_DAT_03d26e58;
        lVar23 = *(long *)(lVar26 + 0x38);
        if (lVar23 == 0) {
          FUN_01a47054(lVar26);
          lVar23 = *(long *)(lVar26 + 0x38);
        }
        lVar23 = *(long *)(lVar23 + 0x10);
        if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = FUN_01a46ff8();
        }
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar23 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
        if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = FUN_01a46ff8();
        }
        lStack00000000000000b8 = **(long **)(lVar23 + 0xb8);
        uVar14 = FUN_039a67c8(0);
        if ((uVar14 & 1) != 0) {
          uVar15 = FUN_036a4718(lVar21,0);
          puVar2 = System_Action<DisconnectCause>_TypeInfo;
          lVar23 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar23);
            lVar23 = *(long *)puVar2;
          }
          lVar26 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
          if (lVar26 == 0) {
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar23);
              lVar23 = *(long *)puVar2;
            }
            uVar30 = **(undefined8 **)(lVar23 + 0xb8);
            lVar26 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
            FUN_021de1ac(lVar26,uVar30,*(undefined8 *)System_Action<ColumnMover>_TypeInfo,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar8 = lVar26;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar26);
          }
          uVar15 = FUN_01f6d39c(uVar15,lVar26,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
          lStack00000000000000b8 =
               FUN_01f70920(uVar15,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var)
          ;
        }
        puVar2 = PTR_DAT_03cbeb90;
        if (lVar12 != 0) {
          lVar23 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb90,*(undefined4 *)(lVar12 + 0x18));
          lVar26 = FUN_01ab6a94(*(undefined8 *)puVar2,*(undefined4 *)(lVar12 + 0x18));
          lVar16 = FUN_01ab6a94(*(undefined8 *)puVar2,*(undefined4 *)(lVar12 + 0x18));
          plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)System_Action<byte>_TypeInfo);
          FUN_030a78e8(plVar8,unaff_x27);
          lVar17 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
          FUN_036a1b5c(lVar17,0);
          iVar3 = FUN_036a2ca8(unaff_x27,0);
          fVar1 = DAT_00d38ac8;
          fVar35 = DAT_00d38798;
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              puVar2 = System_Action<DisconnectCause>_TypeInfo;
              lVar18 = FUN_036a0ed4(unaff_x28,0);
              if (lVar18 == 0) goto LAB_030a703c;
              UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                        (lVar18,iVar3,0,lVar23,lVar26,lVar16,0);
              lVar18 = *(long *)puVar2;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar18 = *(long *)puVar2;
              }
              lVar27 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x10);
              if (lVar27 == 0) {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar18 = *(long *)puVar2;
                }
                uVar15 = **(undefined8 **)(lVar18 + 0xb8);
                lVar27 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
                FUN_021de1ac(lVar27,uVar15,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0)
                ;
                plVar19 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                *plVar19 = lVar27;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19,lVar27);
              }
              uVar39 = FUN_01f663ac(lVar23,lVar27,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
              lVar18 = *(long *)puVar2;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar18);
                lVar18 = *(long *)puVar2;
              }
              lVar27 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x18);
              if (lVar27 == 0) {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar18);
                  lVar18 = *(long *)System_Action<DisconnectCause>_TypeInfo;
                }
                puVar2 = System_Action<DisconnectCause>_TypeInfo;
                uVar15 = **(undefined8 **)(lVar18 + 0xb8);
                lVar27 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
                FUN_021de1ac(lVar27,uVar15,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
                plVar19 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
                *plVar19 = lVar27;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19,lVar27);
              }
              iVar4 = FUN_01f663ac(lVar26,lVar27,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
              uVar14 = FUN_039a67c8(0);
              puVar2 = System_Action<DisconnectCause>_TypeInfo;
              if ((uVar14 & 1) == 0) {
                iStack00000000000000a4 = 0;
              }
              else {
                lVar18 = *(long *)System_Action<DisconnectCause>_TypeInfo;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar18 = *(long *)puVar2;
                }
                lVar27 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x20);
                if (lVar27 == 0) {
                  if (*(int *)(lVar18 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar18 = *(long *)System_Action<DisconnectCause>_TypeInfo;
                  }
                  puVar2 = System_Action<DisconnectCause>_TypeInfo;
                  uVar15 = **(undefined8 **)(lVar18 + 0xb8);
                  lVar27 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
                  FUN_021de1ac(lVar27,uVar15,
                               *(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0);
                  plVar19 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
                  *plVar19 = lVar27;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19,lVar27);
                }
                iStack00000000000000a4 =
                     FUN_01f663ac(lVar16,lVar27,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
              }
              uVar15 = FUN_036a2d20(unaff_x27,iVar3,0);
              uVar14 = FUN_025be440(uVar15,0);
              if ((uVar14 & 1) != 0) {
                uStack0000000000000160 = CONCAT44(uStack0000000000000160._4_4_,iVar3);
                uVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
                uVar15 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar15,0);
              }
              puVar2 = PTR_DAT_03cbded8;
              if (plVar8 == (long *)0x0) goto LAB_030a703c;
              Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
                        (plVar8,iVar3,uVar15,uVar39,iVar4,iStack00000000000000a4);
              FUN_036a1018(0x42c80000,unaff_x28,iVar3,0);
              FUN_036a106c(unaff_x28,lVar17,0);
              if (((lVar17 == 0) || (lVar18 = FUN_036a45c0(lVar17,0), lVar18 == 0)) ||
                 (lVar27 = FUN_036a45c0(lVar21,0), lVar27 == 0)) goto LAB_030a703c;
              if (*(int *)(lVar18 + 0x18) != *(int *)(lVar27 + 0x18)) {
                thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
                uVar15 = thunk_FUN_01a89e68();
                uVar30 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
                FUN_027a794c(uVar15,uVar30,0);
                uVar30 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar15,uVar30);
              }
              if (lVar9 == 0) goto LAB_030a703c;
              uStack0000000000000160 = CONCAT44(uStack0000000000000160._4_4_,iVar3);
              uVar14 = FUN_0219c130(lVar9,&stack0x00000160,
                                    *(undefined8 *)System_Action<CGModule>_TypeInfo);
              fVar42 = 0.0;
              if ((uVar14 & 1) != 0) {
                uStack0000000000000160 = CONCAT44(uStack0000000000000160._4_4_,iVar3);
                FUN_0219b634(0,lVar9,&stack0x00000160,&stack0x000001a0,
                             *(undefined8 *)System_Action<CGSpots>_TypeInfo);
                fVar42 = in_stack_000001a0;
              }
              FUN_036a1018(fVar42,unaff_x28,iVar3,0);
              lVar18 = FUN_036a45c0(lVar17,0);
              if (lVar18 == 0) goto LAB_030a703c;
              if (0 < *(int *)(lVar18 + 0x18)) {
                uVar14 = 0;
                pfVar31 = (float *)(lVar18 + 0x28);
                puVar33 = (undefined8 *)(lVar23 + 0x24);
                pfVar34 = (float *)(lVar12 + 0x28);
                do {
                  if (lVar23 == 0) goto LAB_030a703c;
                  if (*(uint *)(lVar23 + 0x18) <= uVar14) goto LAB_030a7038;
                  fVar42 = *(float *)((long)puVar33 + -4);
                  uVar30 = *puVar33;
                  if (DAT_0411f172 == '\0') {
                    FUN_01ab69ac(puVar2);
                    DAT_0411f172 = '\x01';
                  }
                  pfVar25 = *(float **)(*(long *)puVar2 + 0xb8);
                  uVar20 = *(uint *)(lVar18 + 0x18);
                  fVar42 = fVar42 - *pfVar25;
                  fVar36 = (float)uVar30 - (float)*(undefined8 *)(pfVar25 + 1);
                  fVar37 = (float)((ulong)uVar30 >> 0x20) -
                           (float)((ulong)*(undefined8 *)(pfVar25 + 1) >> 0x20);
                  if (fVar35 <= fVar37 * fVar37 + fVar42 * fVar42 + fVar36 * fVar36) {
                    if (uVar20 <= uVar14) goto LAB_030a7038;
                    fVar36 = pfVar31[-1];
                    fVar37 = *pfVar31;
                    fVar42 = (float)FUN_036bdcac(pfVar31[-2],&stack0x000001f0,0);
                    if ((*(uint *)(lVar12 + 0x18) <= uVar14) ||
                       (uVar20 = *(uint *)(lVar18 + 0x18), uVar20 <= uVar14)) goto LAB_030a7038;
                    fVar37 = fVar37 - *pfVar34;
                    uVar30 = CONCAT44(fVar36 - (float)((ulong)*(undefined8 *)(pfVar34 + -2) >> 0x20)
                                      ,fVar42 - (float)*(undefined8 *)(pfVar34 + -2));
                  }
                  else {
                    if (uVar20 <= uVar14) goto LAB_030a7038;
                    uVar30 = *(undefined8 *)pfVar25;
                    fVar37 = pfVar25[2];
                  }
                  uVar14 = uVar14 + 1;
                  *(undefined8 *)(pfVar31 + -2) = uVar30;
                  *pfVar31 = fVar37;
                  pfVar34 = pfVar34 + 3;
                  puVar33 = (undefined8 *)((long)puVar33 + 0xc);
                  pfVar31 = pfVar31 + 3;
                } while ((long)uVar14 < (long)(int)uVar20);
              }
              lVar27 = FUN_036a466c(lVar17,0);
              if (lVar27 == 0) goto LAB_030a703c;
              if (0 < *(int *)(lVar27 + 0x18)) {
                uVar14 = 0;
                pfVar31 = (float *)(lVar27 + 0x28);
                pfVar34 = (float *)(lVar13 + 0x28);
                puVar33 = (undefined8 *)(lVar26 + 0x24);
                do {
                  if (lVar26 == 0) goto LAB_030a703c;
                  if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_030a7038;
                  fVar42 = *(float *)((long)puVar33 + -4);
                  uVar30 = *puVar33;
                  if (DAT_0411f172 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cbded8);
                    DAT_0411f172 = '\x01';
                  }
                  pfVar25 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                  uVar20 = *(uint *)(lVar27 + 0x18);
                  fVar42 = fVar42 - *pfVar25;
                  fVar36 = (float)uVar30 - (float)*(undefined8 *)(pfVar25 + 1);
                  fVar37 = (float)((ulong)uVar30 >> 0x20) -
                           (float)((ulong)*(undefined8 *)(pfVar25 + 1) >> 0x20);
                  if (fVar35 <= fVar37 * fVar37 + fVar42 * fVar42 + fVar36 * fVar36) {
                    if (uVar20 <= uVar14) goto LAB_030a7038;
                    fVar42 = pfVar31[-2];
                    fVar36 = pfVar31[-1];
                    fVar37 = *pfVar31;
                    if (DAT_0411f1e2 == '\0') {
                      FUN_01ab69ac(PTR_DAT_03cbdee0);
                      DAT_0411f1e2 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    fVar38 = SQRT(fVar37 * fVar37 + fVar42 * fVar42 + fVar36 * fVar36);
                    if (fVar38 <= fVar1) {
                      if (DAT_0411f172 == '\0') {
                        FUN_01ab69ac(PTR_DAT_03cbded8);
                        DAT_0411f172 = '\x01';
                      }
                      pfVar25 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                      fVar42 = *pfVar25;
                      fVar36 = pfVar25[1];
                      fVar37 = pfVar25[2];
                    }
                    else {
                      fVar42 = fVar42 / fVar38;
                      fVar36 = fVar36 / fVar38;
                      fVar37 = fVar37 / fVar38;
                    }
                    fVar42 = (float)FUN_036bdd84(fVar42,&stack0x000001f0,0);
                    if (lVar13 == 0) goto LAB_030a703c;
                    if ((*(uint *)(lVar13 + 0x18) <= uVar14) ||
                       (uVar20 = *(uint *)(lVar27 + 0x18), uVar20 <= uVar14)) goto LAB_030a7038;
                    fVar37 = fVar37 - *pfVar34;
                    uVar30 = CONCAT44(fVar36 - (float)((ulong)*(undefined8 *)(pfVar34 + -2) >> 0x20)
                                      ,fVar42 - (float)*(undefined8 *)(pfVar34 + -2));
                  }
                  else {
                    if (uVar20 <= uVar14) goto LAB_030a7038;
                    uVar30 = *(undefined8 *)pfVar25;
                    fVar37 = pfVar25[2];
                  }
                  uVar14 = uVar14 + 1;
                  *(undefined8 *)(pfVar31 + -2) = uVar30;
                  *pfVar31 = fVar37;
                  puVar33 = (undefined8 *)((long)puVar33 + 0xc);
                  pfVar34 = pfVar34 + 3;
                  pfVar31 = pfVar31 + 3;
                } while ((long)uVar14 < (long)(int)uVar20);
              }
              uVar30 = FUN_036a4718(lVar17,0);
              puVar2 = System_Action<DisconnectCause>_TypeInfo;
              lVar24 = *(long *)System_Action<DisconnectCause>_TypeInfo;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar24);
                lVar24 = *(long *)puVar2;
              }
              lVar32 = *(long *)(*(long *)(lVar24 + 0xb8) + 0x28);
              if (lVar32 == 0) {
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar24);
                  lVar24 = *(long *)System_Action<DisconnectCause>_TypeInfo;
                }
                puVar2 = System_Action<DisconnectCause>_TypeInfo;
                uVar7 = **(undefined8 **)(lVar24 + 0xb8);
                lVar32 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
                FUN_021de1ac(lVar32,uVar7,
                             *(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,0);
                plVar19 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
                *plVar19 = lVar32;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19,lVar32);
              }
              uVar30 = FUN_01f6d39c(uVar30,lVar32,*(undefined8 *)System_Action<CameraMode>_TypeInfo)
              ;
              lVar24 = FUN_01f70920(uVar30,*(undefined8 *)
                                            _Common_UpdateManager_UpdateJobManager<TData>_var);
              uVar14 = FUN_039a67c8(0);
              if ((uVar14 & 1) != 0) {
                if (lVar24 == 0) goto LAB_030a703c;
                if (0 < *(int *)(lVar24 + 0x18)) {
                  uVar14 = 0;
                  pfVar31 = (float *)(lVar24 + 0x28);
                  puVar33 = (undefined8 *)(lVar16 + 0x24);
                  pfVar34 = (float *)(lStack00000000000000b8 + 0x28);
                  do {
                    if (lVar16 == 0) goto LAB_030a703c;
                    if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_030a7038;
                    fVar42 = *(float *)((long)puVar33 + -4);
                    uVar30 = *puVar33;
                    if (DAT_0411f172 == '\0') {
                      FUN_01ab69ac(PTR_DAT_03cbded8);
                      DAT_0411f172 = '\x01';
                    }
                    pfVar25 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                    uVar20 = *(uint *)(lVar24 + 0x18);
                    fVar42 = fVar42 - *pfVar25;
                    fVar36 = (float)uVar30 - (float)*(undefined8 *)(pfVar25 + 1);
                    fVar37 = (float)((ulong)uVar30 >> 0x20) -
                             (float)((ulong)*(undefined8 *)(pfVar25 + 1) >> 0x20);
                    if (fVar35 <= fVar37 * fVar37 + fVar42 * fVar42 + fVar36 * fVar36) {
                      if (uVar20 <= uVar14) goto LAB_030a7038;
                      fVar36 = pfVar31[-1];
                      fVar37 = *pfVar31;
                      fVar42 = (float)FUN_036bdd84(pfVar31[-2],&stack0x000001f0,0);
                      if (lStack00000000000000b8 == 0) goto LAB_030a703c;
                      if ((*(uint *)(lStack00000000000000b8 + 0x18) <= uVar14) ||
                         (uVar20 = *(uint *)(lVar24 + 0x18), uVar20 <= uVar14)) goto LAB_030a7038;
                      fVar37 = fVar37 - *pfVar34;
                      uVar30 = CONCAT44(fVar36 - (float)((ulong)*(undefined8 *)(pfVar34 + -2) >>
                                                        0x20),
                                        fVar42 - (float)*(undefined8 *)(pfVar34 + -2));
                    }
                    else {
                      if (uVar20 <= uVar14) goto LAB_030a7038;
                      uVar30 = *(undefined8 *)pfVar25;
                      fVar37 = pfVar25[2];
                    }
                    uVar14 = uVar14 + 1;
                    *(undefined8 *)(pfVar31 + -2) = uVar30;
                    *pfVar31 = fVar37;
                    pfVar34 = pfVar34 + 3;
                    puVar33 = (undefined8 *)((long)puVar33 + 0xc);
                    pfVar31 = pfVar31 + 3;
                  } while ((long)uVar14 < (long)(int)uVar20);
                }
              }
              iVar5 = FUN_036a2da8(unaff_x27,iVar3,0);
              if (0 < iVar5) {
                iVar28 = 0;
                if (iVar4 < 1) {
                  lVar27 = 0;
                }
                if (iStack00000000000000a4 < 1) {
                  lVar24 = 0;
                }
                do {
                  FUN_036a2dec(unaff_x27,iVar3,iVar28,0);
                  FUN_036a2eb4(lVar21,uVar15,lVar18,lVar27,lVar24,0);
                  iVar28 = iVar28 + 1;
                } while (iVar5 != iVar28);
              }
              iVar3 = iVar3 + 1;
              iVar4 = FUN_036a2ca8(unaff_x27,0);
            } while (iVar3 < iVar4);
          }
          if (plVar8 != (long *)0x0) {
            iVar3 = FUN_030a7a6c(plVar8);
            puVar2 = PTR_DAT_03cbdf88;
            if (0 < iVar3) {
              plVar19 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
              lVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
              if (plVar19 == (long *)0x0) goto LAB_030a703c;
              if ((lVar9 != 0) &&
                 (lVar12 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar12 == 0))
              goto LAB_030a7088;
              if ((int)plVar19[3] == 0) goto LAB_030a7038;
              plVar19[4] = lVar9;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19 + 4,lVar9);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar19,0);
            }
            if ((*unaff_x26 != 0) && (lVar9 = FUN_036cbbbc(*unaff_x26,0), lVar9 != 0)) {
              lVar9 = FUN_01f7e2fc(lVar9,*(undefined8 *)PTR_DAT_03cebed0);
              uVar15 = FUN_03693c80(unaff_x28,0);
              if (lVar9 != 0) {
                thunk_FUN_03692878(lVar9,uVar15,0);
                uVar15 = FUN_036a0dd4(unaff_x28,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)puVar2);
                }
                uVar14 = FUN_036cee6c(uVar15,0,0);
                if ((uVar14 & 1) != 0) {
                  lVar12 = *unaff_x24;
                  uVar15 = FUN_036a0dd4(unaff_x28,0);
                  if (lVar12 == 0) goto LAB_030a703c;
                  uVar14 = FUN_0219f8b8(lVar12,uVar15,&stack0x000001c8,
                                        *(undefined8 *)System_Action<ActionContext>_TypeInfo);
                  if ((uVar14 & 1) != 0) {
                    FUN_036a0e10(lVar9,in_stack_000001c8,0);
                  }
                }
                FUN_036a0e90(lVar9,plVar6,0);
                FUN_036a0f10(lVar9,lVar21,0);
                uVar15 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
                FUN_036a0e90(unaff_x28,uVar15,0);
                FUN_036a0f10(unaff_x28,unaff_x25,0);
                puVar2 = PTR_DAT_03cc0668;
                if (lVar11 != 0) {
                  if (0 < *(int *)(lVar11 + 0x18)) {
                    iVar3 = 0;
                    do {
                      FUN_02215a88(lVar11,iVar3,&stack0x00000160,*(undefined8 *)puVar2);
                      FUN_036a1018(uStack0000000000000160 & 0xffffffff,unaff_x28,iVar3,0);
                      iVar3 = iVar3 + 1;
                    } while (iVar3 < *(int *)(lVar11 + 0x18));
                  }
                  return;
                }
              }
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


