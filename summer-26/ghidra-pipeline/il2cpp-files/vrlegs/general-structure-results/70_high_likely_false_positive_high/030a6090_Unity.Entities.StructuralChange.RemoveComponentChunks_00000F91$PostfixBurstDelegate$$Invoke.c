/*
FUNCTION_NAME: Unity.Entities.StructuralChange.RemoveComponentChunks_00000F91$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a6090
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Entities_StructuralChange_RemoveComponentChunks_00000F91_PostfixBurstDelegate__Invoke
               (undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 uVar23;
  float *pfVar24;
  long lVar25;
  long unaff_x23;
  undefined8 *puVar26;
  undefined8 uVar27;
  long *unaff_x24;
  undefined8 unaff_x25;
  float *pfVar28;
  long *unaff_x26;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  int iVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack00000000000000a4;
  undefined8 in_stack_000000a8;
  long lStack00000000000000b8;
  int in_stack_00000160;
  undefined4 in_stack_000001a0;
  undefined8 in_stack_000001c8;
  
  FUN_01f70920(param_6,*param_1);
  FUN_036a3534();
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
  }
  puVar16 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  uVar34 = *puVar16;
  uVar35 = puVar16[1];
  uVar36 = puVar16[2];
  uVar30 = FUN_036db02c();
  if (DAT_0411f16a == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f16a = '\x01';
  }
  FUN_036bc8cc(uVar34,uVar35,uVar36,uVar30,param_3,param_4,param_5,&stack0x000001f0,0);
  FUN_030a762c();
  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0688);
  Animancer_AnimancerState__OnSetIsPlaying(lVar6,*(undefined8 *)PTR_DAT_03cc0690);
  iVar4 = FUN_036a2ca8(in_stack_000000a8,0);
  puVar3 = PTR_DAT_03cc0640;
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      iVar29 = FUN_036a0fd4();
      if (lVar6 == 0) goto LAB_030a703c;
      in_stack_00000160 = iVar29;
      FUN_01b5f01c(lVar6,&stack0x00000160,*(undefined8 *)puVar3);
      FUN_036a1018(0);
      iVar4 = iVar4 + 1;
      iVar29 = FUN_036a2ca8(in_stack_000000a8,0);
    } while (iVar4 < iVar29);
  }
  lVar7 = FUN_036a45c0();
  lVar8 = FUN_036a466c();
  lVar20 = *(long *)PTR_DAT_03d26e58;
  lVar17 = *(long *)(lVar20 + 0x38);
  if (lVar17 == 0) {
    FUN_01a47054(lVar20);
    lVar17 = *(long *)(lVar20 + 0x38);
  }
  lVar17 = *(long *)(lVar17 + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_01a46ff8();
  }
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar17 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_01a46ff8();
  }
  lStack00000000000000b8 = **(long **)(lVar17 + 0xb8);
  uVar9 = FUN_039a67c8(0);
  if ((uVar9 & 1) != 0) {
    uVar30 = FUN_036a4718();
    puVar3 = System_Action<DisconnectCause>_TypeInfo;
    lVar17 = *(long *)System_Action<DisconnectCause>_TypeInfo;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar17);
      lVar17 = *(long *)puVar3;
    }
    lVar20 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
    if (lVar20 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar17);
        lVar17 = *(long *)puVar3;
      }
      uVar23 = **(undefined8 **)(lVar17 + 0xb8);
      lVar20 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
      FUN_021de1ac(lVar20,uVar23,*(undefined8 *)System_Action<ColumnMover>_TypeInfo,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar10 = lVar20;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar20);
    }
    uVar30 = FUN_01f6d39c(uVar30,lVar20,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
    lStack00000000000000b8 =
         FUN_01f70920(uVar30,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
  }
  puVar3 = PTR_DAT_03cbeb90;
  if (lVar7 != 0) {
    lVar17 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb90,*(undefined4 *)(lVar7 + 0x18));
    lVar20 = FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar7 + 0x18));
    lVar11 = FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar7 + 0x18));
    plVar10 = (long *)thunk_FUN_01a89e68(*(undefined8 *)System_Action<byte>_TypeInfo);
    FUN_030a78e8(plVar10,in_stack_000000a8);
    lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
    FUN_036a1b5c(lVar12,0);
    iVar4 = FUN_036a2ca8(in_stack_000000a8,0);
    fVar2 = DAT_00d38ac8;
    fVar1 = DAT_00d38798;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        puVar3 = System_Action<DisconnectCause>_TypeInfo;
        lVar13 = FUN_036a0ed4(unaff_x28,0);
        if (lVar13 == 0) goto LAB_030a703c;
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                  (lVar13,iVar4,0,lVar17,lVar20,lVar11,0);
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *(long *)puVar3;
        }
        lVar21 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
        if (lVar21 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar13 = *(long *)puVar3;
          }
          uVar30 = **(undefined8 **)(lVar13 + 0xb8);
          lVar21 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
          FUN_021de1ac(lVar21,uVar30,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0);
          plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          *plVar14 = lVar21;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar21);
        }
        uVar34 = FUN_01f663ac(lVar17,lVar21,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
          lVar13 = *(long *)puVar3;
        }
        lVar21 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
        if (lVar21 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar13);
            lVar13 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          }
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          uVar30 = **(undefined8 **)(lVar13 + 0xb8);
          lVar21 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
          FUN_021de1ac(lVar21,uVar30,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
          plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar14 = lVar21;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar21);
        }
        iVar29 = FUN_01f663ac(lVar20,lVar21,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
        uVar9 = FUN_039a67c8(0);
        puVar3 = System_Action<DisconnectCause>_TypeInfo;
        if ((uVar9 & 1) == 0) {
          iStack00000000000000a4 = 0;
        }
        else {
          lVar13 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar13 = *(long *)puVar3;
          }
          lVar21 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x20);
          if (lVar21 == 0) {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *(long *)System_Action<DisconnectCause>_TypeInfo;
            }
            puVar3 = System_Action<DisconnectCause>_TypeInfo;
            uVar30 = **(undefined8 **)(lVar13 + 0xb8);
            lVar21 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
            FUN_021de1ac(lVar21,uVar30,*(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0);
            plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
            *plVar14 = lVar21;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar21);
          }
          iStack00000000000000a4 =
               FUN_01f663ac(lVar11,lVar21,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
        }
        uVar30 = FUN_036a2d20(in_stack_000000a8,iVar4,0);
        uVar9 = FUN_025be440(uVar30,0);
        if ((uVar9 & 1) != 0) {
          in_stack_00000160 = iVar4;
          uVar30 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
          uVar30 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar30,0);
        }
        puVar3 = PTR_DAT_03cbded8;
        if (plVar10 == (long *)0x0) goto LAB_030a703c;
        Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
                  (plVar10,iVar4,uVar30,uVar34,iVar29,iStack00000000000000a4);
        FUN_036a1018(0x42c80000,unaff_x28,iVar4,0);
        FUN_036a106c(unaff_x28,lVar12,0);
        if (((lVar12 == 0) || (lVar13 = FUN_036a45c0(lVar12,0), lVar13 == 0)) ||
           (lVar21 = FUN_036a45c0(unaff_x29,0), lVar21 == 0)) goto LAB_030a703c;
        if (*(int *)(lVar13 + 0x18) != *(int *)(lVar21 + 0x18)) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
          uVar30 = thunk_FUN_01a89e68();
          uVar23 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
          FUN_027a794c(uVar30,uVar23,0);
          uVar23 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar30,uVar23);
        }
        if (unaff_x23 == 0) goto LAB_030a703c;
        in_stack_00000160 = iVar4;
        uVar9 = FUN_0219c130(unaff_x23,&stack0x00000160,
                             *(undefined8 *)System_Action<CGModule>_TypeInfo);
        uVar34 = 0;
        if ((uVar9 & 1) != 0) {
          in_stack_00000160 = iVar4;
          FUN_0219b634(0,unaff_x23,&stack0x00000160,&stack0x000001a0,
                       *(undefined8 *)System_Action<CGSpots>_TypeInfo);
          uVar34 = in_stack_000001a0;
        }
        FUN_036a1018(uVar34,unaff_x28,iVar4,0);
        lVar13 = FUN_036a45c0(lVar12,0);
        if (lVar13 == 0) goto LAB_030a703c;
        if (0 < *(int *)(lVar13 + 0x18)) {
          uVar9 = 0;
          pfVar24 = (float *)(lVar13 + 0x28);
          puVar26 = (undefined8 *)(lVar17 + 0x24);
          pfVar28 = (float *)(lVar7 + 0x28);
          do {
            if (lVar17 == 0) goto LAB_030a703c;
            if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_030a7038;
            fVar37 = *(float *)((long)puVar26 + -4);
            uVar23 = *puVar26;
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(puVar3);
              DAT_0411f172 = '\x01';
            }
            pfVar19 = *(float **)(*(long *)puVar3 + 0xb8);
            uVar15 = *(uint *)(lVar13 + 0x18);
            fVar37 = fVar37 - *pfVar19;
            fVar31 = (float)uVar23 - (float)*(undefined8 *)(pfVar19 + 1);
            fVar32 = (float)((ulong)uVar23 >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar19 + 1) >> 0x20);
            if (fVar1 <= fVar32 * fVar32 + fVar37 * fVar37 + fVar31 * fVar31) {
              if (uVar15 <= uVar9) goto LAB_030a7038;
              fVar31 = pfVar24[-1];
              fVar32 = *pfVar24;
              fVar37 = (float)FUN_036bdcac(pfVar24[-2],&stack0x000001f0,0);
              if ((*(uint *)(lVar7 + 0x18) <= uVar9) ||
                 (uVar15 = *(uint *)(lVar13 + 0x18), uVar15 <= uVar9)) goto LAB_030a7038;
              fVar32 = fVar32 - *pfVar28;
              uVar23 = CONCAT44(fVar31 - (float)((ulong)*(undefined8 *)(pfVar28 + -2) >> 0x20),
                                fVar37 - (float)*(undefined8 *)(pfVar28 + -2));
            }
            else {
              if (uVar15 <= uVar9) goto LAB_030a7038;
              uVar23 = *(undefined8 *)pfVar19;
              fVar32 = pfVar19[2];
            }
            uVar9 = uVar9 + 1;
            *(undefined8 *)(pfVar24 + -2) = uVar23;
            *pfVar24 = fVar32;
            pfVar28 = pfVar28 + 3;
            puVar26 = (undefined8 *)((long)puVar26 + 0xc);
            pfVar24 = pfVar24 + 3;
          } while ((long)uVar9 < (long)(int)uVar15);
        }
        lVar21 = FUN_036a466c(lVar12,0);
        if (lVar21 == 0) goto LAB_030a703c;
        if (0 < *(int *)(lVar21 + 0x18)) {
          uVar9 = 0;
          pfVar24 = (float *)(lVar21 + 0x28);
          pfVar28 = (float *)(lVar8 + 0x28);
          puVar26 = (undefined8 *)(lVar20 + 0x24);
          do {
            if (lVar20 == 0) goto LAB_030a703c;
            if (*(uint *)(lVar20 + 0x18) <= uVar9) goto LAB_030a7038;
            fVar37 = *(float *)((long)puVar26 + -4);
            uVar23 = *puVar26;
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            pfVar19 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            uVar15 = *(uint *)(lVar21 + 0x18);
            fVar37 = fVar37 - *pfVar19;
            fVar31 = (float)uVar23 - (float)*(undefined8 *)(pfVar19 + 1);
            fVar32 = (float)((ulong)uVar23 >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar19 + 1) >> 0x20);
            if (fVar1 <= fVar32 * fVar32 + fVar37 * fVar37 + fVar31 * fVar31) {
              if (uVar15 <= uVar9) goto LAB_030a7038;
              fVar37 = pfVar24[-2];
              fVar31 = pfVar24[-1];
              fVar32 = *pfVar24;
              if (DAT_0411f1e2 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbdee0);
                DAT_0411f1e2 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              fVar33 = SQRT(fVar32 * fVar32 + fVar37 * fVar37 + fVar31 * fVar31);
              if (fVar33 <= fVar2) {
                if (DAT_0411f172 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbded8);
                  DAT_0411f172 = '\x01';
                }
                pfVar19 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                fVar37 = *pfVar19;
                fVar31 = pfVar19[1];
                fVar32 = pfVar19[2];
              }
              else {
                fVar37 = fVar37 / fVar33;
                fVar31 = fVar31 / fVar33;
                fVar32 = fVar32 / fVar33;
              }
              fVar37 = (float)FUN_036bdd84(fVar37,&stack0x000001f0,0);
              if (lVar8 == 0) goto LAB_030a703c;
              if ((*(uint *)(lVar8 + 0x18) <= uVar9) ||
                 (uVar15 = *(uint *)(lVar21 + 0x18), uVar15 <= uVar9)) goto LAB_030a7038;
              fVar32 = fVar32 - *pfVar28;
              uVar23 = CONCAT44(fVar31 - (float)((ulong)*(undefined8 *)(pfVar28 + -2) >> 0x20),
                                fVar37 - (float)*(undefined8 *)(pfVar28 + -2));
            }
            else {
              if (uVar15 <= uVar9) goto LAB_030a7038;
              uVar23 = *(undefined8 *)pfVar19;
              fVar32 = pfVar19[2];
            }
            uVar9 = uVar9 + 1;
            *(undefined8 *)(pfVar24 + -2) = uVar23;
            *pfVar24 = fVar32;
            puVar26 = (undefined8 *)((long)puVar26 + 0xc);
            pfVar28 = pfVar28 + 3;
            pfVar24 = pfVar24 + 3;
          } while ((long)uVar9 < (long)(int)uVar15);
        }
        uVar23 = FUN_036a4718(lVar12,0);
        puVar3 = System_Action<DisconnectCause>_TypeInfo;
        lVar18 = *(long *)System_Action<DisconnectCause>_TypeInfo;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
          lVar18 = *(long *)puVar3;
        }
        lVar25 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x28);
        if (lVar25 == 0) {
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar18);
            lVar18 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          }
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          uVar27 = **(undefined8 **)(lVar18 + 0xb8);
          lVar25 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
          FUN_021de1ac(lVar25,uVar27,
                       *(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,0);
          plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
          *plVar14 = lVar25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar25);
        }
        uVar23 = FUN_01f6d39c(uVar23,lVar25,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
        lVar18 = FUN_01f70920(uVar23,*(undefined8 *)
                                      _Common_UpdateManager_UpdateJobManager<TData>_var);
        uVar9 = FUN_039a67c8(0);
        if ((uVar9 & 1) != 0) {
          if (lVar18 == 0) goto LAB_030a703c;
          if (0 < *(int *)(lVar18 + 0x18)) {
            uVar9 = 0;
            pfVar24 = (float *)(lVar18 + 0x28);
            puVar26 = (undefined8 *)(lVar11 + 0x24);
            pfVar28 = (float *)(lStack00000000000000b8 + 0x28);
            do {
              if (lVar11 == 0) goto LAB_030a703c;
              if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_030a7038;
              fVar37 = *(float *)((long)puVar26 + -4);
              uVar23 = *puVar26;
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar19 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              uVar15 = *(uint *)(lVar18 + 0x18);
              fVar37 = fVar37 - *pfVar19;
              fVar31 = (float)uVar23 - (float)*(undefined8 *)(pfVar19 + 1);
              fVar32 = (float)((ulong)uVar23 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(pfVar19 + 1) >> 0x20);
              if (fVar1 <= fVar32 * fVar32 + fVar37 * fVar37 + fVar31 * fVar31) {
                if (uVar15 <= uVar9) goto LAB_030a7038;
                fVar31 = pfVar24[-1];
                fVar32 = *pfVar24;
                fVar37 = (float)FUN_036bdd84(pfVar24[-2],&stack0x000001f0,0);
                if (lStack00000000000000b8 == 0) goto LAB_030a703c;
                if ((*(uint *)(lStack00000000000000b8 + 0x18) <= uVar9) ||
                   (uVar15 = *(uint *)(lVar18 + 0x18), uVar15 <= uVar9)) goto LAB_030a7038;
                fVar32 = fVar32 - *pfVar28;
                uVar23 = CONCAT44(fVar31 - (float)((ulong)*(undefined8 *)(pfVar28 + -2) >> 0x20),
                                  fVar37 - (float)*(undefined8 *)(pfVar28 + -2));
              }
              else {
                if (uVar15 <= uVar9) goto LAB_030a7038;
                uVar23 = *(undefined8 *)pfVar19;
                fVar32 = pfVar19[2];
              }
              uVar9 = uVar9 + 1;
              *(undefined8 *)(pfVar24 + -2) = uVar23;
              *pfVar24 = fVar32;
              pfVar28 = pfVar28 + 3;
              puVar26 = (undefined8 *)((long)puVar26 + 0xc);
              pfVar24 = pfVar24 + 3;
            } while ((long)uVar9 < (long)(int)uVar15);
          }
        }
        iVar5 = FUN_036a2da8(in_stack_000000a8,iVar4,0);
        if (0 < iVar5) {
          iVar22 = 0;
          if (iVar29 < 1) {
            lVar21 = 0;
          }
          if (iStack00000000000000a4 < 1) {
            lVar18 = 0;
          }
          do {
            FUN_036a2dec(in_stack_000000a8,iVar4,iVar22,0);
            FUN_036a2eb4(unaff_x29,uVar30,lVar13,lVar21,lVar18,0);
            iVar22 = iVar22 + 1;
          } while (iVar5 != iVar22);
        }
        iVar4 = iVar4 + 1;
        iVar29 = FUN_036a2ca8(in_stack_000000a8,0);
      } while (iVar4 < iVar29);
    }
    if (plVar10 != (long *)0x0) {
      iVar4 = FUN_030a7a6c(plVar10);
      puVar3 = PTR_DAT_03cbdf88;
      if (0 < iVar4) {
        plVar14 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
        lVar7 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        if (plVar14 == (long *)0x0) goto LAB_030a703c;
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
          uVar30 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar30,0);
        }
        if ((int)plVar14[3] == 0) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar14[4] = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 4,lVar7);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar14,0);
      }
      if ((*unaff_x26 != 0) && (lVar7 = FUN_036cbbbc(*unaff_x26,0), lVar7 != 0)) {
        lVar7 = FUN_01f7e2fc(lVar7,*(undefined8 *)PTR_DAT_03cebed0);
        uVar30 = FUN_03693c80(unaff_x28,0);
        if (lVar7 != 0) {
          thunk_FUN_03692878(lVar7,uVar30,0);
          uVar30 = FUN_036a0dd4(unaff_x28,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar3);
          }
          uVar9 = FUN_036cee6c(uVar30,0,0);
          if ((uVar9 & 1) != 0) {
            lVar8 = *unaff_x24;
            uVar30 = FUN_036a0dd4(unaff_x28,0);
            if (lVar8 == 0) goto LAB_030a703c;
            uVar9 = FUN_0219f8b8(lVar8,uVar30,&stack0x000001c8,
                                 *(undefined8 *)System_Action<ActionContext>_TypeInfo);
            if ((uVar9 & 1) != 0) {
              FUN_036a0e10(lVar7,in_stack_000001c8,0);
            }
          }
          FUN_036a0e90(lVar7,in_stack_00000048,0);
          FUN_036a0f10(lVar7,unaff_x29,0);
          if (in_stack_00000040._4_4_ != 0) {
            uVar30 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
            FUN_036a0e90(unaff_x28,uVar30,0);
            FUN_036a0f10(unaff_x28,unaff_x25,0);
          }
          puVar3 = PTR_DAT_03cc0668;
          if (lVar6 != 0) {
            if (0 < *(int *)(lVar6 + 0x18)) {
              iVar4 = 0;
              do {
                FUN_02215a88(lVar6,iVar4,&stack0x00000160,*(undefined8 *)puVar3);
                FUN_036a1018(in_stack_00000160,unaff_x28,iVar4,0);
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(lVar6 + 0x18));
            }
            return;
          }
        }
      }
    }
  }
LAB_030a703c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


