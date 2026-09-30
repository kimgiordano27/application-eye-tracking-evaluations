/*
FUNCTION_NAME: Unity.Entities.StructuralChange.RemoveComponentQuery_00000F92$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a6384
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


void Unity_Entities_StructuralChange_RemoveComponentQuery_00000F92_PostfixBurstDelegate__Invoke
               (void)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  float *pfVar18;
  undefined8 *unaff_x19;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  float *pfVar22;
  long lVar23;
  long unaff_x23;
  undefined8 *puVar24;
  undefined8 uVar25;
  float *pfVar26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  long in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack00000000000000a4;
  undefined8 in_stack_000000a8;
  long in_stack_000000b8;
  long in_stack_000000c0;
  int in_stack_00000160;
  undefined4 in_stack_000001a0;
  undefined8 in_stack_000001c8;
  
  lVar8 = FUN_01ab6a94(*unaff_x19,*(undefined4 *)(unaff_x27 + 0x18));
                    /* try { // try from 030a6390 to 031a6397 has its CatchHandler @ 030a63b4 */
                    /* try { // try from 030a6398 to 031a63cf has its CatchHandler @ 030a6268 */
  lVar9 = FUN_01ab6a94(*unaff_x19,*(undefined4 *)(unaff_x27 + 0x18));
  lVar10 = FUN_01ab6a94(*unaff_x19,*(undefined4 *)(unaff_x27 + 0x18));
  plVar11 = (long *)thunk_FUN_01a89e68(*(undefined8 *)System_Action<byte>_TypeInfo);
  FUN_030a78e8(plVar11,in_stack_000000a8);
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
                (lVar13,iVar4,0,lVar8,lVar9,lVar10,0);
      lVar13 = *(long *)puVar3;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *(long *)puVar3;
      }
      lVar19 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
      if (lVar19 == 0) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *(long *)puVar3;
        }
        uVar20 = **(undefined8 **)(lVar13 + 0xb8);
        lVar19 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
        FUN_021de1ac(lVar19,uVar20,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        *plVar14 = lVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar19);
      }
      uVar5 = FUN_01f663ac(lVar8,lVar19,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
      lVar13 = *(long *)puVar3;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar13);
        lVar13 = *(long *)puVar3;
      }
      lVar19 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
      if (lVar19 == 0) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
          lVar13 = *(long *)System_Action<DisconnectCause>_TypeInfo;
        }
        puVar3 = System_Action<DisconnectCause>_TypeInfo;
        uVar20 = **(undefined8 **)(lVar13 + 0xb8);
        lVar19 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
        FUN_021de1ac(lVar19,uVar20,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
        *plVar14 = lVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar19);
      }
      iVar6 = FUN_01f663ac(lVar9,lVar19,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
      uVar15 = FUN_039a67c8(0);
      puVar3 = System_Action<DisconnectCause>_TypeInfo;
      if ((uVar15 & 1) == 0) {
        iStack00000000000000a4 = 0;
      }
      else {
        lVar13 = *(long *)System_Action<DisconnectCause>_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *(long *)puVar3;
        }
        lVar19 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x20);
        if (lVar19 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar13 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          }
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          uVar20 = **(undefined8 **)(lVar13 + 0xb8);
          lVar19 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
          FUN_021de1ac(lVar19,uVar20,*(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0);
          plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
          *plVar14 = lVar19;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar19);
        }
        iStack00000000000000a4 =
             FUN_01f663ac(lVar10,lVar19,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
      }
      uVar20 = FUN_036a2d20(in_stack_000000a8,iVar4,0);
      uVar15 = FUN_025be440(uVar20,0);
      if ((uVar15 & 1) != 0) {
        in_stack_00000160 = iVar4;
        uVar20 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
        uVar20 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar20,0);
      }
      puVar3 = PTR_DAT_03cbded8;
      if (plVar11 == (long *)0x0) goto LAB_030a703c;
      Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
                (plVar11,iVar4,uVar20,uVar5,iVar6,iStack00000000000000a4);
      FUN_036a1018(0x42c80000,unaff_x28,iVar4,0);
      FUN_036a106c(unaff_x28,lVar12,0);
      if (((lVar12 == 0) || (lVar13 = FUN_036a45c0(lVar12,0), lVar13 == 0)) ||
         (lVar19 = FUN_036a45c0(unaff_x29,0), lVar19 == 0)) goto LAB_030a703c;
      if (*(int *)(lVar13 + 0x18) != *(int *)(lVar19 + 0x18)) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar20 = thunk_FUN_01a89e68();
        uVar31 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
        FUN_027a794c(uVar20,uVar31,0);
        uVar31 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar20,uVar31);
      }
      if (unaff_x23 == 0) goto LAB_030a703c;
      in_stack_00000160 = iVar4;
      uVar15 = FUN_0219c130(unaff_x23,&stack0x00000160,
                            *(undefined8 *)System_Action<CGModule>_TypeInfo);
      uVar5 = 0;
      if ((uVar15 & 1) != 0) {
        in_stack_00000160 = iVar4;
        FUN_0219b634(0,unaff_x23,&stack0x00000160,&stack0x000001a0,
                     *(undefined8 *)System_Action<CGSpots>_TypeInfo);
        uVar5 = in_stack_000001a0;
      }
      FUN_036a1018(uVar5,unaff_x28,iVar4,0);
      lVar13 = FUN_036a45c0(lVar12,0);
      if (lVar13 == 0) goto LAB_030a703c;
      if (0 < *(int *)(lVar13 + 0x18)) {
        uVar15 = 0;
        pfVar22 = (float *)(lVar13 + 0x28);
        puVar24 = (undefined8 *)(lVar8 + 0x24);
        pfVar26 = (float *)(unaff_x27 + 0x28);
        do {
          if (lVar8 == 0) goto LAB_030a703c;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_030a7038;
          fVar30 = *(float *)((long)puVar24 + -4);
          uVar31 = *puVar24;
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(puVar3);
            DAT_0411f172 = '\x01';
          }
          pfVar18 = *(float **)(*(long *)puVar3 + 0xb8);
          uVar16 = *(uint *)(lVar13 + 0x18);
          fVar30 = fVar30 - *pfVar18;
          fVar27 = (float)uVar31 - (float)*(undefined8 *)(pfVar18 + 1);
          fVar28 = (float)((ulong)uVar31 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pfVar18 + 1) >> 0x20);
          if (fVar1 <= fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27) {
            if (uVar16 <= uVar15) goto LAB_030a7038;
            fVar27 = pfVar22[-1];
            fVar28 = *pfVar22;
            fVar30 = (float)FUN_036bdcac(pfVar22[-2],&stack0x000001f0,0);
            if ((*(uint *)(unaff_x27 + 0x18) <= uVar15) ||
               (uVar16 = *(uint *)(lVar13 + 0x18), uVar16 <= uVar15)) goto LAB_030a7038;
            fVar28 = fVar28 - *pfVar26;
            uVar31 = CONCAT44(fVar27 - (float)((ulong)*(undefined8 *)(pfVar26 + -2) >> 0x20),
                              fVar30 - (float)*(undefined8 *)(pfVar26 + -2));
          }
          else {
            if (uVar16 <= uVar15) goto LAB_030a7038;
            uVar31 = *(undefined8 *)pfVar18;
            fVar28 = pfVar18[2];
          }
          uVar15 = uVar15 + 1;
          *(undefined8 *)(pfVar22 + -2) = uVar31;
          *pfVar22 = fVar28;
          pfVar26 = pfVar26 + 3;
          puVar24 = (undefined8 *)((long)puVar24 + 0xc);
          pfVar22 = pfVar22 + 3;
        } while ((long)uVar15 < (long)(int)uVar16);
      }
      lVar19 = FUN_036a466c(lVar12,0);
      if (lVar19 == 0) goto LAB_030a703c;
      if (0 < *(int *)(lVar19 + 0x18)) {
        uVar15 = 0;
        pfVar22 = (float *)(lVar19 + 0x28);
        pfVar26 = (float *)(in_stack_000000c0 + 0x28);
        puVar24 = (undefined8 *)(lVar9 + 0x24);
        do {
          if (lVar9 == 0) goto LAB_030a703c;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_030a7038;
          fVar30 = *(float *)((long)puVar24 + -4);
          uVar31 = *puVar24;
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          pfVar18 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          uVar16 = *(uint *)(lVar19 + 0x18);
          fVar30 = fVar30 - *pfVar18;
          fVar27 = (float)uVar31 - (float)*(undefined8 *)(pfVar18 + 1);
          fVar28 = (float)((ulong)uVar31 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pfVar18 + 1) >> 0x20);
          if (fVar1 <= fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27) {
            if (uVar16 <= uVar15) goto LAB_030a7038;
            fVar30 = pfVar22[-2];
            fVar27 = pfVar22[-1];
            fVar28 = *pfVar22;
            if (DAT_0411f1e2 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbdee0);
              DAT_0411f1e2 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar29 = SQRT(fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27);
            if (fVar29 <= fVar2) {
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar18 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              fVar30 = *pfVar18;
              fVar27 = pfVar18[1];
              fVar28 = pfVar18[2];
            }
            else {
              fVar30 = fVar30 / fVar29;
              fVar27 = fVar27 / fVar29;
              fVar28 = fVar28 / fVar29;
            }
            fVar30 = (float)FUN_036bdd84(fVar30,&stack0x000001f0,0);
            if (in_stack_000000c0 == 0) goto LAB_030a703c;
            if ((*(uint *)(in_stack_000000c0 + 0x18) <= uVar15) ||
               (uVar16 = *(uint *)(lVar19 + 0x18), uVar16 <= uVar15)) goto LAB_030a7038;
            fVar28 = fVar28 - *pfVar26;
            uVar31 = CONCAT44(fVar27 - (float)((ulong)*(undefined8 *)(pfVar26 + -2) >> 0x20),
                              fVar30 - (float)*(undefined8 *)(pfVar26 + -2));
          }
          else {
            if (uVar16 <= uVar15) goto LAB_030a7038;
            uVar31 = *(undefined8 *)pfVar18;
            fVar28 = pfVar18[2];
          }
          uVar15 = uVar15 + 1;
          *(undefined8 *)(pfVar22 + -2) = uVar31;
          *pfVar22 = fVar28;
          puVar24 = (undefined8 *)((long)puVar24 + 0xc);
          pfVar26 = pfVar26 + 3;
          pfVar22 = pfVar22 + 3;
        } while ((long)uVar15 < (long)(int)uVar16);
      }
      uVar31 = FUN_036a4718(lVar12,0);
      puVar3 = System_Action<DisconnectCause>_TypeInfo;
      lVar17 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar17);
        lVar17 = *(long *)puVar3;
      }
      lVar23 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x28);
      if (lVar23 == 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar17);
          lVar17 = *(long *)System_Action<DisconnectCause>_TypeInfo;
        }
        puVar3 = System_Action<DisconnectCause>_TypeInfo;
        uVar25 = **(undefined8 **)(lVar17 + 0xb8);
        lVar23 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
        FUN_021de1ac(lVar23,uVar25,
                     *(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
        *plVar14 = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar23);
      }
      uVar31 = FUN_01f6d39c(uVar31,lVar23,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
      lVar17 = FUN_01f70920(uVar31,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var)
      ;
      uVar15 = FUN_039a67c8(0);
      if ((uVar15 & 1) != 0) {
        if (lVar17 == 0) goto LAB_030a703c;
        if (0 < *(int *)(lVar17 + 0x18)) {
          uVar15 = 0;
          pfVar22 = (float *)(lVar17 + 0x28);
          puVar24 = (undefined8 *)(lVar10 + 0x24);
          pfVar26 = (float *)(in_stack_000000b8 + 0x28);
          do {
            if (lVar10 == 0) goto LAB_030a703c;
            if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_030a7038;
            fVar30 = *(float *)((long)puVar24 + -4);
            uVar31 = *puVar24;
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            pfVar18 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            uVar16 = *(uint *)(lVar17 + 0x18);
            fVar30 = fVar30 - *pfVar18;
            fVar27 = (float)uVar31 - (float)*(undefined8 *)(pfVar18 + 1);
            fVar28 = (float)((ulong)uVar31 >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar18 + 1) >> 0x20);
            if (fVar1 <= fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27) {
              if (uVar16 <= uVar15) goto LAB_030a7038;
              fVar27 = pfVar22[-1];
              fVar28 = *pfVar22;
              fVar30 = (float)FUN_036bdd84(pfVar22[-2],&stack0x000001f0,0);
              if (in_stack_000000b8 == 0) goto LAB_030a703c;
              if ((*(uint *)(in_stack_000000b8 + 0x18) <= uVar15) ||
                 (uVar16 = *(uint *)(lVar17 + 0x18), uVar16 <= uVar15)) goto LAB_030a7038;
              fVar28 = fVar28 - *pfVar26;
              uVar31 = CONCAT44(fVar27 - (float)((ulong)*(undefined8 *)(pfVar26 + -2) >> 0x20),
                                fVar30 - (float)*(undefined8 *)(pfVar26 + -2));
            }
            else {
              if (uVar16 <= uVar15) goto LAB_030a7038;
              uVar31 = *(undefined8 *)pfVar18;
              fVar28 = pfVar18[2];
            }
            uVar15 = uVar15 + 1;
            *(undefined8 *)(pfVar22 + -2) = uVar31;
            *pfVar22 = fVar28;
            pfVar26 = pfVar26 + 3;
            puVar24 = (undefined8 *)((long)puVar24 + 0xc);
            pfVar22 = pfVar22 + 3;
          } while ((long)uVar15 < (long)(int)uVar16);
        }
      }
      iVar7 = FUN_036a2da8(in_stack_000000a8,iVar4,0);
      if (0 < iVar7) {
        iVar21 = 0;
        if (iVar6 < 1) {
          lVar19 = 0;
        }
        if (iStack00000000000000a4 < 1) {
          lVar17 = 0;
        }
        do {
          FUN_036a2dec(in_stack_000000a8,iVar4,iVar21,0);
          FUN_036a2eb4(unaff_x29,uVar20,lVar13,lVar19,lVar17,0);
          iVar21 = iVar21 + 1;
        } while (iVar7 != iVar21);
      }
      iVar4 = iVar4 + 1;
      iVar6 = FUN_036a2ca8(in_stack_000000a8,0);
    } while (iVar4 < iVar6);
  }
  if (plVar11 != (long *)0x0) {
    iVar4 = FUN_030a7a6c(plVar11);
    puVar3 = PTR_DAT_03cbdf88;
    if (0 < iVar4) {
      plVar14 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      lVar8 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      if (plVar14 == (long *)0x0) goto LAB_030a703c;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0)) {
        uVar20 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar20,0);
      }
      if ((int)plVar14[3] == 0) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar14[4] = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 4,lVar8);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar14,0);
    }
    if ((*in_stack_00000028 != 0) && (lVar8 = FUN_036cbbbc(*in_stack_00000028,0), lVar8 != 0)) {
      lVar8 = FUN_01f7e2fc(lVar8,*(undefined8 *)PTR_DAT_03cebed0);
      uVar20 = FUN_03693c80(unaff_x28,0);
      if (lVar8 != 0) {
        thunk_FUN_03692878(lVar8,uVar20,0);
        uVar20 = FUN_036a0dd4(unaff_x28,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar3);
        }
        uVar15 = FUN_036cee6c(uVar20,0,0);
        if ((uVar15 & 1) != 0) {
          lVar9 = *in_stack_00000038;
          uVar20 = FUN_036a0dd4(unaff_x28,0);
          if (lVar9 == 0) goto LAB_030a703c;
          uVar15 = FUN_0219f8b8(lVar9,uVar20,&stack0x000001c8,
                                *(undefined8 *)System_Action<ActionContext>_TypeInfo);
          if ((uVar15 & 1) != 0) {
            FUN_036a0e10(lVar8,in_stack_000001c8,0);
          }
        }
        FUN_036a0e90(lVar8,in_stack_00000048,0);
        FUN_036a0f10(lVar8,unaff_x29,0);
        if (in_stack_00000040._4_4_ != 0) {
          uVar20 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
          FUN_036a0e90(unaff_x28,uVar20,0);
          FUN_036a0f10(unaff_x28,in_stack_00000030,0);
        }
        puVar3 = PTR_DAT_03cc0668;
        if (in_stack_00000020 != 0) {
          if (0 < *(int *)(in_stack_00000020 + 0x18)) {
            iVar4 = 0;
            do {
              FUN_02215a88(in_stack_00000020,iVar4,&stack0x00000160,*(undefined8 *)puVar3);
              FUN_036a1018(in_stack_00000160,unaff_x28,iVar4,0);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(in_stack_00000020 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_030a703c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


