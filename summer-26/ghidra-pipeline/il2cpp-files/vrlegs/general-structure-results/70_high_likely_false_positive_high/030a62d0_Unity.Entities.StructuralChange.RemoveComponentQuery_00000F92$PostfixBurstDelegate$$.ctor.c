/*
FUNCTION_NAME: Unity.Entities.StructuralChange.RemoveComponentQuery_00000F92$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 030a62d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Entities_StructuralChange_RemoveComponentQuery_00000F92_PostfixBurstDelegate___ctor
               (long param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  int in_w9;
  float *pfVar21;
  long lVar22;
  int iVar23;
  undefined8 uVar24;
  float *pfVar25;
  long lVar26;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar27;
  undefined8 unaff_x25;
  float *pfVar28;
  long *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long in_stack_00000020;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack00000000000000a4;
  undefined8 in_stack_000000a8;
  long in_stack_000000c0;
  int in_stack_00000160;
  undefined4 in_stack_000001a0;
  undefined8 in_stack_000001c8;
  
  if (in_w9 == 0) {
    thunk_FUN_01a58e78(param_1);
    param_1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(param_1 + 0xb8) + 8) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(param_1);
      param_1 = *unaff_x22;
    }
    uVar24 = **(undefined8 **)(param_1 + 0xb8);
    uVar8 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
    FUN_021de1ac(uVar8,uVar24,*(undefined8 *)System_Action<ColumnMover>_TypeInfo,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar9 = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar9,uVar8);
  }
                    /* try { // try from 030a6358 to 031a635f has its CatchHandler @ 030a63c0 */
  uVar8 = FUN_01f6d39c();
                    /* try { // try from 030a6368 to 031a6373 has its CatchHandler @ 030a63bc */
  lVar10 = FUN_01f70920(uVar8,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
  puVar3 = PTR_DAT_03cbeb90;
  if (unaff_x27 != 0) {
                    /* try { // try from 030a6380 to 031a638b has its CatchHandler @ 030a63b8 */
    lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb90,*(undefined4 *)(unaff_x27 + 0x18));
    lVar12 = FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(unaff_x27 + 0x18));
    lVar13 = FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(unaff_x27 + 0x18));
    plVar14 = (long *)thunk_FUN_01a89e68(*(undefined8 *)System_Action<byte>_TypeInfo);
    FUN_030a78e8(plVar14,in_stack_000000a8);
    lVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
    FUN_036a1b5c(lVar15,0);
    iVar4 = FUN_036a2ca8(in_stack_000000a8,0);
    fVar2 = DAT_00d38ac8;
    fVar1 = DAT_00d38798;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        puVar3 = System_Action<DisconnectCause>_TypeInfo;
        lVar16 = FUN_036a0ed4(unaff_x28,0);
        if (lVar16 == 0) goto LAB_030a703c;
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray
                  (lVar16,iVar4,0,lVar11,lVar12,lVar13,0);
        lVar16 = *(long *)puVar3;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *(long *)puVar3;
        }
        lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
        if (lVar22 == 0) {
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar16 = *(long *)puVar3;
          }
          uVar8 = **(undefined8 **)(lVar16 + 0xb8);
          lVar22 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
          FUN_021de1ac(lVar22,uVar8,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0);
          plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          *plVar17 = lVar22;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar22);
        }
        uVar5 = FUN_01f663ac(lVar11,lVar22,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
        lVar16 = *(long *)puVar3;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
          lVar16 = *(long *)puVar3;
        }
        lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x18);
        if (lVar22 == 0) {
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar16);
            lVar16 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          }
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          uVar8 = **(undefined8 **)(lVar16 + 0xb8);
          lVar22 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
          FUN_021de1ac(lVar22,uVar8,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
          plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar17 = lVar22;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar22);
        }
        iVar6 = FUN_01f663ac(lVar12,lVar22,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
        uVar18 = FUN_039a67c8(0);
        puVar3 = System_Action<DisconnectCause>_TypeInfo;
        if ((uVar18 & 1) == 0) {
          iStack00000000000000a4 = 0;
        }
        else {
          lVar16 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar16 = *(long *)puVar3;
          }
          lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
          if (lVar22 == 0) {
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar16 = *(long *)System_Action<DisconnectCause>_TypeInfo;
            }
            puVar3 = System_Action<DisconnectCause>_TypeInfo;
            uVar8 = **(undefined8 **)(lVar16 + 0xb8);
            lVar22 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
            FUN_021de1ac(lVar22,uVar8,*(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0);
            plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
            *plVar17 = lVar22;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar22);
          }
          iStack00000000000000a4 =
               FUN_01f663ac(lVar13,lVar22,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
        }
        uVar8 = FUN_036a2d20(in_stack_000000a8,iVar4,0);
        uVar18 = FUN_025be440(uVar8,0);
        if ((uVar18 & 1) != 0) {
          in_stack_00000160 = iVar4;
          uVar8 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
          uVar8 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar8,0);
        }
        puVar3 = PTR_DAT_03cbded8;
        if (plVar14 == (long *)0x0) goto LAB_030a703c;
        Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
                  (plVar14,iVar4,uVar8,uVar5,iVar6,iStack00000000000000a4);
        FUN_036a1018(0x42c80000,unaff_x28,iVar4,0);
        FUN_036a106c(unaff_x28,lVar15,0);
        if (((lVar15 == 0) || (lVar16 = FUN_036a45c0(lVar15,0), lVar16 == 0)) ||
           (lVar22 = FUN_036a45c0(unaff_x29,0), lVar22 == 0)) goto LAB_030a703c;
        if (*(int *)(lVar16 + 0x18) != *(int *)(lVar22 + 0x18)) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
          uVar8 = thunk_FUN_01a89e68();
          uVar24 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
          FUN_027a794c(uVar8,uVar24,0);
          uVar24 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar8,uVar24);
        }
        if (unaff_x23 == 0) goto LAB_030a703c;
        in_stack_00000160 = iVar4;
        uVar18 = FUN_0219c130(unaff_x23,&stack0x00000160,
                              *(undefined8 *)System_Action<CGModule>_TypeInfo);
        uVar5 = 0;
        if ((uVar18 & 1) != 0) {
          in_stack_00000160 = iVar4;
          FUN_0219b634(0,unaff_x23,&stack0x00000160,&stack0x000001a0,
                       *(undefined8 *)System_Action<CGSpots>_TypeInfo);
          uVar5 = in_stack_000001a0;
        }
        FUN_036a1018(uVar5,unaff_x28,iVar4,0);
        lVar16 = FUN_036a45c0(lVar15,0);
        if (lVar16 == 0) goto LAB_030a703c;
        if (0 < *(int *)(lVar16 + 0x18)) {
          uVar18 = 0;
          pfVar25 = (float *)(lVar16 + 0x28);
          puVar9 = (undefined8 *)(lVar11 + 0x24);
          pfVar28 = (float *)(unaff_x27 + 0x28);
          do {
            if (lVar11 == 0) goto LAB_030a703c;
            if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_030a7038;
            fVar32 = *(float *)((long)puVar9 + -4);
            uVar24 = *puVar9;
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(puVar3);
              DAT_0411f172 = '\x01';
            }
            pfVar21 = *(float **)(*(long *)puVar3 + 0xb8);
            uVar19 = *(uint *)(lVar16 + 0x18);
            fVar32 = fVar32 - *pfVar21;
            fVar29 = (float)uVar24 - (float)*(undefined8 *)(pfVar21 + 1);
            fVar30 = (float)((ulong)uVar24 >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar21 + 1) >> 0x20);
            if (fVar1 <= fVar30 * fVar30 + fVar32 * fVar32 + fVar29 * fVar29) {
              if (uVar19 <= uVar18) goto LAB_030a7038;
              fVar29 = pfVar25[-1];
              fVar30 = *pfVar25;
              fVar32 = (float)FUN_036bdcac(pfVar25[-2],&stack0x000001f0,0);
              if ((*(uint *)(unaff_x27 + 0x18) <= uVar18) ||
                 (uVar19 = *(uint *)(lVar16 + 0x18), uVar19 <= uVar18)) goto LAB_030a7038;
              fVar30 = fVar30 - *pfVar28;
              uVar24 = CONCAT44(fVar29 - (float)((ulong)*(undefined8 *)(pfVar28 + -2) >> 0x20),
                                fVar32 - (float)*(undefined8 *)(pfVar28 + -2));
            }
            else {
              if (uVar19 <= uVar18) goto LAB_030a7038;
              uVar24 = *(undefined8 *)pfVar21;
              fVar30 = pfVar21[2];
            }
            uVar18 = uVar18 + 1;
            *(undefined8 *)(pfVar25 + -2) = uVar24;
            *pfVar25 = fVar30;
            pfVar28 = pfVar28 + 3;
            puVar9 = (undefined8 *)((long)puVar9 + 0xc);
            pfVar25 = pfVar25 + 3;
          } while ((long)uVar18 < (long)(int)uVar19);
        }
        lVar22 = FUN_036a466c(lVar15,0);
        if (lVar22 == 0) goto LAB_030a703c;
        if (0 < *(int *)(lVar22 + 0x18)) {
          uVar18 = 0;
          pfVar25 = (float *)(lVar22 + 0x28);
          pfVar28 = (float *)(in_stack_000000c0 + 0x28);
          puVar9 = (undefined8 *)(lVar12 + 0x24);
          do {
            if (lVar12 == 0) goto LAB_030a703c;
            if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_030a7038;
            fVar32 = *(float *)((long)puVar9 + -4);
            uVar24 = *puVar9;
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            pfVar21 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            uVar19 = *(uint *)(lVar22 + 0x18);
            fVar32 = fVar32 - *pfVar21;
            fVar29 = (float)uVar24 - (float)*(undefined8 *)(pfVar21 + 1);
            fVar30 = (float)((ulong)uVar24 >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar21 + 1) >> 0x20);
            if (fVar1 <= fVar30 * fVar30 + fVar32 * fVar32 + fVar29 * fVar29) {
              if (uVar19 <= uVar18) goto LAB_030a7038;
              fVar32 = pfVar25[-2];
              fVar29 = pfVar25[-1];
              fVar30 = *pfVar25;
              if (DAT_0411f1e2 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbdee0);
                DAT_0411f1e2 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              fVar31 = SQRT(fVar30 * fVar30 + fVar32 * fVar32 + fVar29 * fVar29);
              if (fVar31 <= fVar2) {
                if (DAT_0411f172 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbded8);
                  DAT_0411f172 = '\x01';
                }
                pfVar21 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                fVar32 = *pfVar21;
                fVar29 = pfVar21[1];
                fVar30 = pfVar21[2];
              }
              else {
                fVar32 = fVar32 / fVar31;
                fVar29 = fVar29 / fVar31;
                fVar30 = fVar30 / fVar31;
              }
              fVar32 = (float)FUN_036bdd84(fVar32,&stack0x000001f0,0);
              if (in_stack_000000c0 == 0) goto LAB_030a703c;
              if ((*(uint *)(in_stack_000000c0 + 0x18) <= uVar18) ||
                 (uVar19 = *(uint *)(lVar22 + 0x18), uVar19 <= uVar18)) goto LAB_030a7038;
              fVar30 = fVar30 - *pfVar28;
              uVar24 = CONCAT44(fVar29 - (float)((ulong)*(undefined8 *)(pfVar28 + -2) >> 0x20),
                                fVar32 - (float)*(undefined8 *)(pfVar28 + -2));
            }
            else {
              if (uVar19 <= uVar18) goto LAB_030a7038;
              uVar24 = *(undefined8 *)pfVar21;
              fVar30 = pfVar21[2];
            }
            uVar18 = uVar18 + 1;
            *(undefined8 *)(pfVar25 + -2) = uVar24;
            *pfVar25 = fVar30;
            puVar9 = (undefined8 *)((long)puVar9 + 0xc);
            pfVar28 = pfVar28 + 3;
            pfVar25 = pfVar25 + 3;
          } while ((long)uVar18 < (long)(int)uVar19);
        }
        uVar24 = FUN_036a4718(lVar15,0);
        puVar3 = System_Action<DisconnectCause>_TypeInfo;
        lVar20 = *(long *)System_Action<DisconnectCause>_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
          lVar20 = *(long *)puVar3;
        }
        lVar26 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x28);
        if (lVar26 == 0) {
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar20);
            lVar20 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          }
          puVar3 = System_Action<DisconnectCause>_TypeInfo;
          uVar27 = **(undefined8 **)(lVar20 + 0xb8);
          lVar26 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
          FUN_021de1ac(lVar26,uVar27,
                       *(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,0);
          plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
          *plVar17 = lVar26;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar26);
        }
        uVar24 = FUN_01f6d39c(uVar24,lVar26,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
        lVar20 = FUN_01f70920(uVar24,*(undefined8 *)
                                      _Common_UpdateManager_UpdateJobManager<TData>_var);
        uVar18 = FUN_039a67c8(0);
        if ((uVar18 & 1) != 0) {
          if (lVar20 == 0) goto LAB_030a703c;
          if (0 < *(int *)(lVar20 + 0x18)) {
            uVar18 = 0;
            pfVar25 = (float *)(lVar20 + 0x28);
            puVar9 = (undefined8 *)(lVar13 + 0x24);
            pfVar28 = (float *)(lVar10 + 0x28);
            do {
              if (lVar13 == 0) goto LAB_030a703c;
              if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_030a7038;
              fVar32 = *(float *)((long)puVar9 + -4);
              uVar24 = *puVar9;
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar21 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              uVar19 = *(uint *)(lVar20 + 0x18);
              fVar32 = fVar32 - *pfVar21;
              fVar29 = (float)uVar24 - (float)*(undefined8 *)(pfVar21 + 1);
              fVar30 = (float)((ulong)uVar24 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(pfVar21 + 1) >> 0x20);
              if (fVar1 <= fVar30 * fVar30 + fVar32 * fVar32 + fVar29 * fVar29) {
                if (uVar19 <= uVar18) goto LAB_030a7038;
                fVar29 = pfVar25[-1];
                fVar30 = *pfVar25;
                fVar32 = (float)FUN_036bdd84(pfVar25[-2],&stack0x000001f0,0);
                if (lVar10 == 0) goto LAB_030a703c;
                if ((*(uint *)(lVar10 + 0x18) <= uVar18) ||
                   (uVar19 = *(uint *)(lVar20 + 0x18), uVar19 <= uVar18)) goto LAB_030a7038;
                fVar30 = fVar30 - *pfVar28;
                uVar24 = CONCAT44(fVar29 - (float)((ulong)*(undefined8 *)(pfVar28 + -2) >> 0x20),
                                  fVar32 - (float)*(undefined8 *)(pfVar28 + -2));
              }
              else {
                if (uVar19 <= uVar18) goto LAB_030a7038;
                uVar24 = *(undefined8 *)pfVar21;
                fVar30 = pfVar21[2];
              }
              uVar18 = uVar18 + 1;
              *(undefined8 *)(pfVar25 + -2) = uVar24;
              *pfVar25 = fVar30;
              pfVar28 = pfVar28 + 3;
              puVar9 = (undefined8 *)((long)puVar9 + 0xc);
              pfVar25 = pfVar25 + 3;
            } while ((long)uVar18 < (long)(int)uVar19);
          }
        }
        iVar7 = FUN_036a2da8(in_stack_000000a8,iVar4,0);
        if (0 < iVar7) {
          iVar23 = 0;
          if (iVar6 < 1) {
            lVar22 = 0;
          }
          if (iStack00000000000000a4 < 1) {
            lVar20 = 0;
          }
          do {
            FUN_036a2dec(in_stack_000000a8,iVar4,iVar23,0);
            FUN_036a2eb4(unaff_x29,uVar8,lVar16,lVar22,lVar20,0);
            iVar23 = iVar23 + 1;
          } while (iVar7 != iVar23);
        }
        iVar4 = iVar4 + 1;
        iVar6 = FUN_036a2ca8(in_stack_000000a8,0);
      } while (iVar4 < iVar6);
    }
    if (plVar14 != (long *)0x0) {
      iVar4 = FUN_030a7a6c(plVar14);
      puVar3 = PTR_DAT_03cbdf88;
      if (0 < iVar4) {
        plVar17 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
        lVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        if (plVar17 == (long *)0x0) goto LAB_030a703c;
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0)) {
          uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar8,0);
        }
        if ((int)plVar17[3] == 0) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar17[4] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17 + 4,lVar10);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar17,0);
      }
      if ((*unaff_x26 != 0) && (lVar10 = FUN_036cbbbc(*unaff_x26,0), lVar10 != 0)) {
        lVar10 = FUN_01f7e2fc(lVar10,*(undefined8 *)PTR_DAT_03cebed0);
        uVar8 = FUN_03693c80(unaff_x28,0);
        if (lVar10 != 0) {
          thunk_FUN_03692878(lVar10,uVar8,0);
          uVar8 = FUN_036a0dd4(unaff_x28,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar3);
          }
          uVar18 = FUN_036cee6c(uVar8,0,0);
          if ((uVar18 & 1) != 0) {
            lVar11 = *in_stack_00000038;
            uVar8 = FUN_036a0dd4(unaff_x28,0);
            if (lVar11 == 0) goto LAB_030a703c;
            uVar18 = FUN_0219f8b8(lVar11,uVar8,&stack0x000001c8,
                                  *(undefined8 *)System_Action<ActionContext>_TypeInfo);
            if ((uVar18 & 1) != 0) {
              FUN_036a0e10(lVar10,in_stack_000001c8,0);
            }
          }
          FUN_036a0e90(lVar10,in_stack_00000048,0);
          FUN_036a0f10(lVar10,unaff_x29,0);
          if (in_stack_00000040._4_4_ != 0) {
            uVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
            FUN_036a0e90(unaff_x28,uVar8,0);
            FUN_036a0f10(unaff_x28,unaff_x25,0);
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
  }
LAB_030a703c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


