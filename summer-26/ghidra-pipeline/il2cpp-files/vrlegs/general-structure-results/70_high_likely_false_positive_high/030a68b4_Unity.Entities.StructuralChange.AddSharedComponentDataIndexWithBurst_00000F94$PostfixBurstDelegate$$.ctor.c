/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddSharedComponentDataIndexWithBurst_00000F94$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 030a68b4
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


void Unity_Entities_StructuralChange_AddSharedComponentDataIndexWithBurst_00000F94_PostfixBurstDelegate___ctor
               (ulong param_1,float param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  float *in_x9;
  float *pfVar9;
  undefined8 unaff_x19;
  ulong unaff_x20;
  int iVar10;
  float *pfVar11;
  float *unaff_x21;
  ulong uVar12;
  long lVar13;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar14;
  float *pfVar15;
  int unaff_w24;
  float *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 unaff_d11;
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
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
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
                    /* try { // try from 030a68b8 to 031a6953 has its CatchHandler @ 030a6824 */
    fVar17 = (float)unaff_d11 - (float)*(undefined8 *)(in_x9 + 1);
    fVar19 = (float)((ulong)unaff_d11 >> 0x20) - (float)((ulong)*(undefined8 *)(in_x9 + 1) >> 0x20);
    if (unaff_s8 <=
        fVar19 * fVar19 + (unaff_s10 - param_2) * (unaff_s10 - param_2) + fVar17 * fVar17) {
      if (param_1 <= unaff_x20) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      fVar19 = unaff_x21[-1];
      fVar18 = *unaff_x21;
      fVar17 = (float)FUN_036bdcac(unaff_x21[-2],&stack0x000001f0,0);
      if ((*(uint *)(in_stack_000000c8 + 0x18) <= unaff_x20) ||
         (param_1 = (ulong)*(uint *)(unaff_x29 + 0x18), param_1 <= unaff_x20)) goto LAB_030a7038;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030a688c with catch @ 030a692c
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030a687c with catch @ 030a6930
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030a6864 with catch @ 030a6934
                        */
      fVar18 = fVar18 - *unaff_x25;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030a68ac with catch @ 030a6938
                        */
      uVar16 = CONCAT44(fVar19 - (float)((ulong)*(undefined8 *)(unaff_x25 + -2) >> 0x20),
                        fVar17 - (float)*(undefined8 *)(unaff_x25 + -2));
    }
    else {
      if (param_1 <= unaff_x20) goto LAB_030a7038;
      uVar16 = *(undefined8 *)in_x9;
      fVar18 = in_x9[2];
    }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030a6840 with catch @ 030a693c
                        */
    unaff_x20 = unaff_x20 + 1;
    *(undefined8 *)(unaff_x21 + -2) = uVar16;
    pfVar11 = unaff_x21 + 3;
    *unaff_x21 = fVar18;
                    /* try { // try from 030a6954 to 031a6957 has its CatchHandler @ 030a696c */
    unaff_x23 = (undefined8 *)((long)unaff_x23 + 0xc);
    unaff_x25 = unaff_x25 + 3;
    if ((long)(int)param_1 <= (long)unaff_x20) {
      do {
        lVar5 = FUN_036a466c(in_stack_000000b0,0);
        if (lVar5 == 0) goto LAB_030a703c;
        if (0 < *(int *)(lVar5 + 0x18)) {
          uVar12 = 0;
          pfVar15 = (float *)(lVar5 + 0x28);
          pfVar11 = in_stack_00000060;
          puVar4 = in_stack_00000068;
          do {
            if (unaff_x27 == 0) goto LAB_030a703c;
            if (*(uint *)(unaff_x27 + 0x18) <= uVar12) goto LAB_030a7038;
            fVar17 = *(float *)((long)puVar4 + -4);
            uVar16 = *puVar4;
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            pfVar9 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            uVar7 = *(uint *)(lVar5 + 0x18);
            fVar17 = fVar17 - *pfVar9;
            fVar19 = (float)uVar16 - (float)*(undefined8 *)(pfVar9 + 1);
            fVar18 = (float)((ulong)uVar16 >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20);
            if (unaff_s8 <= fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19) {
              if (uVar7 <= uVar12) goto LAB_030a7038;
              fVar17 = pfVar15[-2];
              fVar19 = pfVar15[-1];
              fVar18 = *pfVar15;
              if (DAT_0411f1e2 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbdee0);
                DAT_0411f1e2 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              fVar20 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19);
              if (fVar20 <= unaff_s9) {
                if (DAT_0411f172 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbded8);
                  DAT_0411f172 = '\x01';
                }
                pfVar9 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                fVar17 = *pfVar9;
                fVar19 = pfVar9[1];
                fVar18 = pfVar9[2];
              }
              else {
                fVar17 = fVar17 / fVar20;
                fVar19 = fVar19 / fVar20;
                fVar18 = fVar18 / fVar20;
              }
              fVar17 = (float)FUN_036bdd84(fVar17,&stack0x000001f0,0);
              if (in_stack_000000c0 == 0) goto LAB_030a703c;
              if ((*(uint *)(in_stack_000000c0 + 0x18) <= uVar12) ||
                 (uVar7 = *(uint *)(lVar5 + 0x18), uVar7 <= uVar12)) goto LAB_030a7038;
              fVar18 = fVar18 - *pfVar11;
              uVar16 = CONCAT44(fVar19 - (float)((ulong)*(undefined8 *)(pfVar11 + -2) >> 0x20),
                                fVar17 - (float)*(undefined8 *)(pfVar11 + -2));
            }
            else {
              if (uVar7 <= uVar12) goto LAB_030a7038;
              uVar16 = *(undefined8 *)pfVar9;
              fVar18 = pfVar9[2];
            }
            uVar12 = uVar12 + 1;
            *(undefined8 *)(pfVar15 + -2) = uVar16;
            *pfVar15 = fVar18;
            puVar4 = (undefined8 *)((long)puVar4 + 0xc);
            pfVar11 = pfVar11 + 3;
            pfVar15 = pfVar15 + 3;
          } while ((long)uVar12 < (long)(int)uVar7);
        }
        uVar16 = FUN_036a4718(in_stack_000000b0,0);
        puVar1 = System_Action<DisconnectCause>_TypeInfo;
        lVar8 = *(long *)System_Action<DisconnectCause>_TypeInfo;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar8);
          lVar8 = *(long *)puVar1;
        }
        lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
        if (lVar13 == 0) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar8);
            lVar8 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          }
          puVar1 = System_Action<DisconnectCause>_TypeInfo;
          uVar14 = **(undefined8 **)(lVar8 + 0xb8);
          lVar13 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
          FUN_021de1ac(lVar13,uVar14,
                       *(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
          *plVar6 = lVar13;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar13);
        }
        uVar16 = FUN_01f6d39c(uVar16,lVar13,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
        lVar8 = FUN_01f70920(uVar16,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var
                            );
        uVar12 = FUN_039a67c8(0);
        if ((uVar12 & 1) != 0) {
          if (lVar8 == 0) goto LAB_030a703c;
          if (0 < *(int *)(lVar8 + 0x18)) {
            uVar12 = 0;
            pfVar15 = (float *)(lVar8 + 0x28);
            puVar4 = in_stack_00000050;
            pfVar11 = in_stack_00000058;
            do {
              if (in_stack_000000d0 == 0) goto LAB_030a703c;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar12) goto LAB_030a7038;
              fVar17 = *(float *)((long)puVar4 + -4);
              uVar16 = *puVar4;
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar9 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              uVar7 = *(uint *)(lVar8 + 0x18);
              fVar17 = fVar17 - *pfVar9;
              fVar19 = (float)uVar16 - (float)*(undefined8 *)(pfVar9 + 1);
              fVar18 = (float)((ulong)uVar16 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20);
              if (unaff_s8 <= fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19) {
                if (uVar7 <= uVar12) goto LAB_030a7038;
                fVar19 = pfVar15[-1];
                fVar18 = *pfVar15;
                fVar17 = (float)FUN_036bdd84(pfVar15[-2],&stack0x000001f0,0);
                if (in_stack_000000b8 == 0) goto LAB_030a703c;
                if ((*(uint *)(in_stack_000000b8 + 0x18) <= uVar12) ||
                   (uVar7 = *(uint *)(lVar8 + 0x18), uVar7 <= uVar12)) goto LAB_030a7038;
                fVar18 = fVar18 - *pfVar11;
                uVar16 = CONCAT44(fVar19 - (float)((ulong)*(undefined8 *)(pfVar11 + -2) >> 0x20),
                                  fVar17 - (float)*(undefined8 *)(pfVar11 + -2));
              }
              else {
                if (uVar7 <= uVar12) goto LAB_030a7038;
                uVar16 = *(undefined8 *)pfVar9;
                fVar18 = pfVar9[2];
              }
              uVar12 = uVar12 + 1;
              *(undefined8 *)(pfVar15 + -2) = uVar16;
              *pfVar15 = fVar18;
              pfVar11 = pfVar11 + 3;
              puVar4 = (undefined8 *)((long)puVar4 + 0xc);
              pfVar15 = pfVar15 + 3;
            } while ((long)uVar12 < (long)(int)uVar7);
          }
        }
        iVar3 = FUN_036a2da8(in_stack_000000a8,unaff_w24,0);
        if (0 < iVar3) {
          iVar10 = 0;
          if (in_stack_00000098._4_4_ < 1) {
            lVar5 = 0;
          }
          if (in_stack_000000a0._4_4_ < 1) {
            lVar8 = 0;
          }
          do {
            FUN_036a2dec(in_stack_000000a8,unaff_w24,iVar10,0);
            FUN_036a2eb4(in_stack_000000d8,unaff_x19,unaff_x29,lVar5,lVar8,0);
            iVar10 = iVar10 + 1;
          } while (iVar3 != iVar10);
        }
        unaff_w24 = unaff_w24 + 1;
        iVar3 = FUN_036a2ca8(in_stack_000000a8,0);
        puVar1 = System_Action<DisconnectCause>_TypeInfo;
        if (iVar3 <= unaff_w24) {
          if (in_stack_00000080 == (long *)0x0) goto LAB_030a703c;
          iVar3 = FUN_030a7a6c(in_stack_00000080);
          puVar1 = PTR_DAT_03cbdf88;
          if (0 < iVar3) {
            plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
            lVar5 = (**(code **)(*in_stack_00000080 + 0x168))
                              (in_stack_00000080,*(undefined8 *)(*in_stack_00000080 + 0x170));
            if (plVar6 == (long *)0x0) goto LAB_030a703c;
            if ((lVar5 != 0) &&
               (lVar8 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
              uVar16 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar16,0);
            }
            if ((int)plVar6[3] == 0) goto LAB_030a7038;
            plVar6[4] = lVar5;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar5);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar6,0);
          }
          if ((*in_stack_00000028 == 0) || (lVar5 = FUN_036cbbbc(*in_stack_00000028,0), lVar5 == 0))
          goto LAB_030a703c;
          lVar5 = FUN_01f7e2fc(lVar5,*(undefined8 *)PTR_DAT_03cebed0);
          uVar16 = FUN_03693c80(in_stack_00000088,0);
          if (lVar5 == 0) goto LAB_030a703c;
          thunk_FUN_03692878(lVar5,uVar16,0);
          uVar16 = FUN_036a0dd4(in_stack_00000088,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar1);
          }
          uVar12 = FUN_036cee6c(uVar16,0,0);
          if ((uVar12 & 1) != 0) {
            lVar8 = *in_stack_00000038;
            uVar16 = FUN_036a0dd4(in_stack_00000088,0);
            if (lVar8 == 0) goto LAB_030a703c;
            uVar12 = FUN_0219f8b8(lVar8,uVar16,&stack0x000001c8,
                                  *(undefined8 *)System_Action<ActionContext>_TypeInfo);
            if ((uVar12 & 1) != 0) {
              FUN_036a0e10(lVar5,in_stack_000001c8,0);
            }
          }
          FUN_036a0e90(lVar5,in_stack_00000048,0);
          FUN_036a0f10(lVar5,in_stack_000000d8,0);
          if (in_stack_00000040._4_4_ != 0) {
            uVar16 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
            FUN_036a0e90(in_stack_00000088,uVar16,0);
            FUN_036a0f10(in_stack_00000088,in_stack_00000030,0);
          }
          puVar1 = PTR_DAT_03cc0668;
          if (in_stack_00000020 != 0) {
            if (0 < *(int *)(in_stack_00000020 + 0x18)) {
              iVar3 = 0;
              do {
                FUN_02215a88(in_stack_00000020,iVar3,&stack0x00000160,*(undefined8 *)puVar1);
                FUN_036a1018(in_stack_00000160,in_stack_00000088,iVar3,0);
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(in_stack_00000020 + 0x18));
            }
            return;
          }
          goto LAB_030a703c;
        }
        lVar5 = FUN_036a0ed4(in_stack_00000088,0);
        if (lVar5 == 0) goto LAB_030a703c;
        UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(lVar5,unaff_w24,0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *(long *)puVar1;
        }
        if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar5 = *(long *)puVar1;
          }
          uVar14 = **(undefined8 **)(lVar5 + 0xb8);
          uVar16 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
          FUN_021de1ac(uVar16,uVar14,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0);
          puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          *puVar4 = uVar16;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar16);
        }
        uVar2 = FUN_01f663ac();
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar5);
          lVar5 = *(long *)puVar1;
        }
        if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x18) == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar5);
            lVar5 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          }
          puVar1 = System_Action<DisconnectCause>_TypeInfo;
          uVar14 = **(undefined8 **)(lVar5 + 0xb8);
          uVar16 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
          FUN_021de1ac(uVar16,uVar14,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
          puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
          *puVar4 = uVar16;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar16);
        }
        in_stack_00000098._4_4_ = FUN_01f663ac();
        uVar12 = FUN_039a67c8(0);
        puVar1 = System_Action<DisconnectCause>_TypeInfo;
        if ((uVar12 & 1) == 0) {
          in_stack_000000a0._4_4_ = 0;
        }
        else {
          lVar5 = *(long *)System_Action<DisconnectCause>_TypeInfo;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar5 = *(long *)puVar1;
          }
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar5 = *(long *)System_Action<DisconnectCause>_TypeInfo;
            }
            puVar1 = System_Action<DisconnectCause>_TypeInfo;
            uVar16 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
            FUN_021de1ac(lVar8,uVar16,*(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
            *plVar6 = lVar8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar8);
          }
          in_stack_000000a0._4_4_ =
               FUN_01f663ac(in_stack_000000d0,lVar8,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
        }
        unaff_x19 = FUN_036a2d20(in_stack_000000a8,unaff_w24,0);
        uVar12 = FUN_025be440(unaff_x19,0);
        if ((uVar12 & 1) != 0) {
          in_stack_00000160 = unaff_w24;
          uVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
          unaff_x19 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar16,0);
        }
        unaff_x26 = (long *)PTR_DAT_03cbded8;
        if (in_stack_00000080 == (long *)0x0) goto LAB_030a703c;
        Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
                  (in_stack_00000080,unaff_w24,unaff_x19,uVar2,in_stack_00000098._4_4_,
                   in_stack_000000a0._4_4_);
        FUN_036a1018(0x42c80000,in_stack_00000088,unaff_w24,0);
        FUN_036a106c(in_stack_00000088,in_stack_000000b0,0);
        if (((in_stack_000000b0 == 0) || (lVar5 = FUN_036a45c0(in_stack_000000b0,0), lVar5 == 0)) ||
           (lVar8 = FUN_036a45c0(in_stack_000000d8,0), lVar8 == 0)) goto LAB_030a703c;
        if (*(int *)(lVar5 + 0x18) != *(int *)(lVar8 + 0x18)) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
          uVar16 = thunk_FUN_01a89e68();
          uVar14 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
          FUN_027a794c(uVar16,uVar14,0);
          uVar14 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar16,uVar14);
        }
        if (in_stack_00000090 == 0) goto LAB_030a703c;
        in_stack_00000160 = unaff_w24;
        uVar12 = FUN_0219c130(in_stack_00000090,&stack0x00000160,
                              *(undefined8 *)System_Action<CGModule>_TypeInfo);
        uVar2 = 0;
        if ((uVar12 & 1) != 0) {
          in_stack_00000160 = unaff_w24;
          FUN_0219b634(0,in_stack_00000090,&stack0x00000160,&stack0x000001a0,
                       *(undefined8 *)System_Action<CGSpots>_TypeInfo);
          uVar2 = in_stack_000001a0;
        }
        FUN_036a1018(uVar2,in_stack_00000088,unaff_w24,0);
        unaff_x29 = FUN_036a45c0(in_stack_000000b0,0);
        if (unaff_x29 == 0) goto LAB_030a703c;
      } while (*(int *)(unaff_x29 + 0x18) < 1);
      unaff_x20 = 0;
      pfVar11 = (float *)(unaff_x29 + 0x28);
      unaff_x23 = in_stack_00000070;
      unaff_x25 = in_stack_00000078;
    }
    if (unaff_x22 == 0) {
LAB_030a703c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x20) goto LAB_030a7038;
    unaff_s10 = *(float *)((long)unaff_x23 + -4);
    unaff_d11 = *unaff_x23;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(unaff_x26);
      DAT_0411f172 = '\x01';
    }
    in_x9 = *(float **)(*unaff_x26 + 0xb8);
    param_1 = (ulong)*(uint *)(unaff_x29 + 0x18);
    param_2 = *in_x9;
    unaff_x21 = pfVar11;
  } while( true );
}


