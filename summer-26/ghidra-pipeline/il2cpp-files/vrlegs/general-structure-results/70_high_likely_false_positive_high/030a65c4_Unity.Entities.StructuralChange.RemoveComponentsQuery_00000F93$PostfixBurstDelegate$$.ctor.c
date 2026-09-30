/*
FUNCTION_NAME: Unity.Entities.StructuralChange.RemoveComponentsQuery_00000F93$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 030a65c4
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


void Unity_Entities_StructuralChange_RemoveComponentsQuery_00000F93_PostfixBurstDelegate___ctor
               (undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long unaff_x20;
  int iVar12;
  undefined8 unaff_x21;
  undefined8 uVar13;
  float *pfVar14;
  long lVar15;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar16;
  int unaff_w24;
  long *unaff_x25;
  float *pfVar17;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  long *unaff_x29;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_s8;
  float unaff_s9;
  float fVar22;
  undefined8 uVar23;
  long in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  float *in_stack_00000058;
  float *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  float *in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined4 in_stack_000000a0;
  int iStack00000000000000a4;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  int in_stack_00000160;
  undefined4 in_stack_000001a0;
  undefined8 in_stack_000001c8;
  
  do {
    FUN_021de1ac(param_1,unaff_x21,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x18);
    *puVar4 = param_1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,param_1);
    do {
      iVar2 = FUN_01f663ac();
      uVar5 = FUN_039a67c8(0);
      puVar1 = System_Action<DisconnectCause>_TypeInfo;
      if ((uVar5 & 1) == 0) {
        iStack00000000000000a4 = 0;
      }
      else {
        lVar6 = *(long *)System_Action<DisconnectCause>_TypeInfo;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar1;
        }
        lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
        if (lVar11 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          }
          puVar1 = System_Action<DisconnectCause>_TypeInfo;
          uVar13 = **(undefined8 **)(lVar6 + 0xb8);
          lVar11 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
          FUN_021de1ac(lVar11,uVar13,*(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0);
          plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
          *plVar7 = lVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar11);
        }
        iStack00000000000000a4 =
             FUN_01f663ac(in_stack_000000d0,lVar11,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
      }
      uVar13 = FUN_036a2d20(unaff_x26,unaff_w24,0);
      uVar5 = FUN_025be440(uVar13,0);
      if ((uVar5 & 1) != 0) {
        in_stack_00000160 = unaff_w24;
        uVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
        uVar13 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar13,0);
      }
      puVar1 = PTR_DAT_03cbded8;
      if (unaff_x25 == (long *)0x0) {
LAB_030a703c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
                (unaff_x25,unaff_w24,uVar13,in_stack_000000a0,iVar2,iStack00000000000000a4);
      FUN_036a1018(0x42c80000,unaff_x23,unaff_w24,0);
      FUN_036a106c(unaff_x23,in_stack_000000b0,0);
      if (((in_stack_000000b0 == 0) || (lVar6 = FUN_036a45c0(in_stack_000000b0,0), lVar6 == 0)) ||
         (lVar11 = FUN_036a45c0(unaff_x28,0), lVar11 == 0)) goto LAB_030a703c;
      if (*(int *)(lVar6 + 0x18) != *(int *)(lVar11 + 0x18)) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar13 = thunk_FUN_01a89e68();
        uVar23 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
        FUN_027a794c(uVar13,uVar23,0);
        uVar23 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar13,uVar23);
      }
      if (unaff_x20 == 0) goto LAB_030a703c;
      in_stack_00000160 = unaff_w24;
      uVar5 = FUN_0219c130(unaff_x20,&stack0x00000160,
                           *(undefined8 *)System_Action<CGModule>_TypeInfo);
      uVar18 = 0;
      if ((uVar5 & 1) != 0) {
        in_stack_00000160 = unaff_w24;
        FUN_0219b634(0,unaff_x20,&stack0x00000160,&stack0x000001a0,
                     *(undefined8 *)System_Action<CGSpots>_TypeInfo);
        uVar18 = in_stack_000001a0;
      }
      FUN_036a1018(uVar18,unaff_x23,unaff_w24,0);
      lVar6 = FUN_036a45c0(in_stack_000000b0,0);
      if (lVar6 == 0) goto LAB_030a703c;
      if (0 < *(int *)(lVar6 + 0x18)) {
        uVar5 = 0;
        pfVar14 = (float *)(lVar6 + 0x28);
        puVar4 = in_stack_00000070;
        pfVar17 = in_stack_00000078;
        do {
          if (unaff_x22 == 0) goto LAB_030a703c;
          if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_030a7038;
          fVar22 = *(float *)((long)puVar4 + -4);
          uVar23 = *puVar4;
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(puVar1);
            DAT_0411f172 = '\x01';
          }
          pfVar10 = *(float **)(*(long *)puVar1 + 0xb8);
          uVar8 = *(uint *)(lVar6 + 0x18);
          fVar22 = fVar22 - *pfVar10;
          fVar19 = (float)uVar23 - (float)*(undefined8 *)(pfVar10 + 1);
          fVar20 = (float)((ulong)uVar23 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pfVar10 + 1) >> 0x20);
          if (unaff_s8 <= fVar20 * fVar20 + fVar22 * fVar22 + fVar19 * fVar19) {
            if (uVar8 <= uVar5) goto LAB_030a7038;
            fVar19 = pfVar14[-1];
            fVar20 = *pfVar14;
            fVar22 = (float)FUN_036bdcac(pfVar14[-2],&stack0x000001f0,0);
            if ((*(uint *)(in_stack_000000c8 + 0x18) <= uVar5) ||
               (uVar8 = *(uint *)(lVar6 + 0x18), uVar8 <= uVar5)) goto LAB_030a7038;
            fVar20 = fVar20 - *pfVar17;
            uVar23 = CONCAT44(fVar19 - (float)((ulong)*(undefined8 *)(pfVar17 + -2) >> 0x20),
                              fVar22 - (float)*(undefined8 *)(pfVar17 + -2));
          }
          else {
            if (uVar8 <= uVar5) goto LAB_030a7038;
            uVar23 = *(undefined8 *)pfVar10;
            fVar20 = pfVar10[2];
          }
          uVar5 = uVar5 + 1;
          *(undefined8 *)(pfVar14 + -2) = uVar23;
          *pfVar14 = fVar20;
          pfVar17 = pfVar17 + 3;
          puVar4 = (undefined8 *)((long)puVar4 + 0xc);
          pfVar14 = pfVar14 + 3;
        } while ((long)uVar5 < (long)(int)uVar8);
      }
      lVar11 = FUN_036a466c(in_stack_000000b0,0);
      if (lVar11 == 0) goto LAB_030a703c;
      if (0 < *(int *)(lVar11 + 0x18)) {
        uVar5 = 0;
        pfVar14 = (float *)(lVar11 + 0x28);
        pfVar17 = in_stack_00000060;
        puVar4 = in_stack_00000068;
        do {
          if (unaff_x27 == 0) goto LAB_030a703c;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar5) goto LAB_030a7038;
          fVar22 = *(float *)((long)puVar4 + -4);
          uVar23 = *puVar4;
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          pfVar10 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          uVar8 = *(uint *)(lVar11 + 0x18);
          fVar22 = fVar22 - *pfVar10;
          fVar19 = (float)uVar23 - (float)*(undefined8 *)(pfVar10 + 1);
          fVar20 = (float)((ulong)uVar23 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pfVar10 + 1) >> 0x20);
          if (unaff_s8 <= fVar20 * fVar20 + fVar22 * fVar22 + fVar19 * fVar19) {
            if (uVar8 <= uVar5) goto LAB_030a7038;
            fVar22 = pfVar14[-2];
            fVar19 = pfVar14[-1];
            fVar20 = *pfVar14;
            if (DAT_0411f1e2 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbdee0);
              DAT_0411f1e2 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar21 = SQRT(fVar20 * fVar20 + fVar22 * fVar22 + fVar19 * fVar19);
            if (fVar21 <= unaff_s9) {
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar10 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              fVar22 = *pfVar10;
              fVar19 = pfVar10[1];
              fVar20 = pfVar10[2];
            }
            else {
              fVar22 = fVar22 / fVar21;
              fVar19 = fVar19 / fVar21;
              fVar20 = fVar20 / fVar21;
            }
            fVar22 = (float)FUN_036bdd84(fVar22,&stack0x000001f0,0);
            if (in_stack_000000c0 == 0) goto LAB_030a703c;
            if ((*(uint *)(in_stack_000000c0 + 0x18) <= uVar5) ||
               (uVar8 = *(uint *)(lVar11 + 0x18), uVar8 <= uVar5)) goto LAB_030a7038;
            fVar20 = fVar20 - *pfVar17;
            uVar23 = CONCAT44(fVar19 - (float)((ulong)*(undefined8 *)(pfVar17 + -2) >> 0x20),
                              fVar22 - (float)*(undefined8 *)(pfVar17 + -2));
          }
          else {
            if (uVar8 <= uVar5) goto LAB_030a7038;
            uVar23 = *(undefined8 *)pfVar10;
            fVar20 = pfVar10[2];
          }
          uVar5 = uVar5 + 1;
          *(undefined8 *)(pfVar14 + -2) = uVar23;
          *pfVar14 = fVar20;
          puVar4 = (undefined8 *)((long)puVar4 + 0xc);
          pfVar17 = pfVar17 + 3;
          pfVar14 = pfVar14 + 3;
        } while ((long)uVar5 < (long)(int)uVar8);
      }
      uVar23 = FUN_036a4718(in_stack_000000b0,0);
      puVar1 = System_Action<DisconnectCause>_TypeInfo;
      lVar9 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar9);
        lVar9 = *(long *)puVar1;
      }
      lVar15 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
      if (lVar15 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar9);
          lVar9 = *(long *)System_Action<DisconnectCause>_TypeInfo;
        }
        puVar1 = System_Action<DisconnectCause>_TypeInfo;
        uVar16 = **(undefined8 **)(lVar9 + 0xb8);
        lVar15 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
        FUN_021de1ac(lVar15,uVar16,
                     *(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
        *plVar7 = lVar15;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar15);
      }
      uVar23 = FUN_01f6d39c(uVar23,lVar15,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
      lVar9 = FUN_01f70920(uVar23,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
      uVar5 = FUN_039a67c8(0);
      if ((uVar5 & 1) != 0) {
        if (lVar9 == 0) goto LAB_030a703c;
        if (0 < *(int *)(lVar9 + 0x18)) {
          uVar5 = 0;
          pfVar14 = (float *)(lVar9 + 0x28);
          puVar4 = in_stack_00000050;
          pfVar17 = in_stack_00000058;
          do {
            if (in_stack_000000d0 == 0) goto LAB_030a703c;
            if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar5) goto LAB_030a7038;
            fVar22 = *(float *)((long)puVar4 + -4);
            uVar23 = *puVar4;
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            pfVar10 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            uVar8 = *(uint *)(lVar9 + 0x18);
            fVar22 = fVar22 - *pfVar10;
            fVar19 = (float)uVar23 - (float)*(undefined8 *)(pfVar10 + 1);
            fVar20 = (float)((ulong)uVar23 >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar10 + 1) >> 0x20);
            if (unaff_s8 <= fVar20 * fVar20 + fVar22 * fVar22 + fVar19 * fVar19) {
              if (uVar8 <= uVar5) goto LAB_030a7038;
              fVar19 = pfVar14[-1];
              fVar20 = *pfVar14;
              fVar22 = (float)FUN_036bdd84(pfVar14[-2],&stack0x000001f0,0);
              if (in_stack_000000b8 == 0) goto LAB_030a703c;
              if ((*(uint *)(in_stack_000000b8 + 0x18) <= uVar5) ||
                 (uVar8 = *(uint *)(lVar9 + 0x18), uVar8 <= uVar5)) goto LAB_030a7038;
              fVar20 = fVar20 - *pfVar17;
              uVar23 = CONCAT44(fVar19 - (float)((ulong)*(undefined8 *)(pfVar17 + -2) >> 0x20),
                                fVar22 - (float)*(undefined8 *)(pfVar17 + -2));
            }
            else {
              if (uVar8 <= uVar5) goto LAB_030a7038;
              uVar23 = *(undefined8 *)pfVar10;
              fVar20 = pfVar10[2];
            }
            uVar5 = uVar5 + 1;
            *(undefined8 *)(pfVar14 + -2) = uVar23;
            *pfVar14 = fVar20;
            pfVar17 = pfVar17 + 3;
            puVar4 = (undefined8 *)((long)puVar4 + 0xc);
            pfVar14 = pfVar14 + 3;
          } while ((long)uVar5 < (long)(int)uVar8);
        }
      }
      iVar3 = FUN_036a2da8(in_stack_000000a8,unaff_w24,0);
      if (0 < iVar3) {
        iVar12 = 0;
        if (iVar2 < 1) {
          lVar11 = 0;
        }
        if (iStack00000000000000a4 < 1) {
          lVar9 = 0;
        }
        do {
          FUN_036a2dec(in_stack_000000a8,unaff_w24,iVar12,0);
          FUN_036a2eb4(in_stack_000000d8,uVar13,lVar6,lVar11,lVar9,0);
          iVar12 = iVar12 + 1;
        } while (iVar3 != iVar12);
      }
      unaff_w24 = unaff_w24 + 1;
      iVar2 = FUN_036a2ca8(in_stack_000000a8,0);
      puVar1 = System_Action<DisconnectCause>_TypeInfo;
      if (iVar2 <= unaff_w24) {
        if (in_stack_00000080 != (long *)0x0) {
          iVar2 = FUN_030a7a6c(in_stack_00000080);
          puVar1 = PTR_DAT_03cbdf88;
          if (0 < iVar2) {
            plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
            lVar6 = (**(code **)(*in_stack_00000080 + 0x168))
                              (in_stack_00000080,*(undefined8 *)(*in_stack_00000080 + 0x170));
            if (plVar7 == (long *)0x0) goto LAB_030a703c;
            if ((lVar6 != 0) &&
               (lVar11 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0)) {
              uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar13,0);
            }
            if ((int)plVar7[3] == 0) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            plVar7[4] = lVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar6);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar7,0);
          }
          if ((*in_stack_00000028 != 0) && (lVar6 = FUN_036cbbbc(*in_stack_00000028,0), lVar6 != 0))
          {
            lVar6 = FUN_01f7e2fc(lVar6,*(undefined8 *)PTR_DAT_03cebed0);
            uVar13 = FUN_03693c80(in_stack_00000088,0);
            if (lVar6 != 0) {
              thunk_FUN_03692878(lVar6,uVar13,0);
              uVar13 = FUN_036a0dd4(in_stack_00000088,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)puVar1);
              }
              uVar5 = FUN_036cee6c(uVar13,0,0);
              if ((uVar5 & 1) != 0) {
                lVar11 = *in_stack_00000038;
                uVar13 = FUN_036a0dd4(in_stack_00000088,0);
                if (lVar11 == 0) goto LAB_030a703c;
                uVar5 = FUN_0219f8b8(lVar11,uVar13,&stack0x000001c8,
                                     *(undefined8 *)System_Action<ActionContext>_TypeInfo);
                if ((uVar5 & 1) != 0) {
                  FUN_036a0e10(lVar6,in_stack_000001c8,0);
                }
              }
              FUN_036a0e90(lVar6,in_stack_00000048,0);
              FUN_036a0f10(lVar6,in_stack_000000d8,0);
              if (in_stack_00000040._4_4_ != 0) {
                uVar13 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
                FUN_036a0e90(in_stack_00000088,uVar13,0);
                FUN_036a0f10(in_stack_00000088,in_stack_00000030,0);
              }
              puVar1 = PTR_DAT_03cc0668;
              if (in_stack_00000020 != 0) {
                if (0 < *(int *)(in_stack_00000020 + 0x18)) {
                  iVar2 = 0;
                  do {
                    FUN_02215a88(in_stack_00000020,iVar2,&stack0x00000160,*(undefined8 *)puVar1);
                    FUN_036a1018(in_stack_00000160,in_stack_00000088,iVar2,0);
                    iVar2 = iVar2 + 1;
                  } while (iVar2 < *(int *)(in_stack_00000020 + 0x18));
                }
                return;
              }
            }
          }
        }
        goto LAB_030a703c;
      }
      lVar6 = FUN_036a0ed4(in_stack_00000088,0);
      if (lVar6 == 0) goto LAB_030a703c;
      UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(lVar6,unaff_w24,0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar1;
      }
      if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar1;
        }
        uVar23 = **(undefined8 **)(lVar6 + 0xb8);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
        FUN_021de1ac(uVar13,uVar23,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0);
        puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        *puVar4 = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar13);
      }
      in_stack_000000a0 = FUN_01f663ac();
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar6);
        lVar6 = *(long *)puVar1;
      }
      unaff_x20 = in_stack_00000090;
      unaff_x25 = in_stack_00000080;
      unaff_x26 = in_stack_000000a8;
      unaff_x23 = in_stack_00000088;
      unaff_x28 = in_stack_000000d8;
    } while (*(long *)(*(long *)(lVar6 + 0xb8) + 0x18) != 0);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar6);
      lVar6 = *(long *)System_Action<DisconnectCause>_TypeInfo;
    }
    unaff_x29 = (long *)System_Action<DisconnectCause>_TypeInfo;
    unaff_x21 = **(undefined8 **)(lVar6 + 0xb8);
    param_1 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
  } while( true );
}


