/*
FUNCTION_NAME: Unity.Entities.StructuralChange.RemoveComponentsQuery_00000F93$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a6678
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


void Unity_Entities_StructuralChange_RemoveComponentsQuery_00000F93_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  int unaff_w20;
  int iVar12;
  long unaff_x21;
  float *pfVar13;
  long lVar14;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar15;
  int unaff_w24;
  long *unaff_x25;
  float *pfVar16;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s8;
  float unaff_s9;
  float fVar21;
  undefined8 uVar22;
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
  
code_r0x030a6678:
  iStack00000000000000a4 = 0;
  do {
    uVar4 = FUN_036a2d20(unaff_x26,unaff_w24,0);
    uVar5 = FUN_025be440(uVar4,0);
    if ((uVar5 & 1) != 0) {
      in_stack_00000160 = unaff_w24;
      uVar4 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
      uVar4 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar4,0);
    }
    puVar1 = PTR_DAT_03cbded8;
    if (unaff_x25 == (long *)0x0) {
LAB_030a703c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
              (unaff_x25,unaff_w24,uVar4,in_stack_000000a0,unaff_w20,iStack00000000000000a4);
    FUN_036a1018(0x42c80000,unaff_x28,unaff_w24,0);
    FUN_036a106c(unaff_x28,unaff_x21,0);
    if (((unaff_x21 == 0) || (lVar6 = FUN_036a45c0(unaff_x21,0), lVar6 == 0)) ||
       (lVar7 = FUN_036a45c0(unaff_x29,0), lVar7 == 0)) goto LAB_030a703c;
    if (*(int *)(lVar6 + 0x18) != *(int *)(lVar7 + 0x18)) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar4 = thunk_FUN_01a89e68();
      uVar22 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
      FUN_027a794c(uVar4,uVar22,0);
      uVar22 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar22);
    }
    if (unaff_x23 == 0) goto LAB_030a703c;
    in_stack_00000160 = unaff_w24;
    uVar5 = FUN_0219c130(unaff_x23,&stack0x00000160,*(undefined8 *)System_Action<CGModule>_TypeInfo)
    ;
    uVar17 = 0;
    if ((uVar5 & 1) != 0) {
      in_stack_00000160 = unaff_w24;
      FUN_0219b634(0,unaff_x23,&stack0x00000160,&stack0x000001a0,
                   *(undefined8 *)System_Action<CGSpots>_TypeInfo);
      uVar17 = in_stack_000001a0;
    }
    FUN_036a1018(uVar17,unaff_x28,unaff_w24,0);
    lVar6 = FUN_036a45c0(unaff_x21,0);
    if (lVar6 == 0) goto LAB_030a703c;
    if (0 < *(int *)(lVar6 + 0x18)) {
      uVar5 = 0;
      pfVar13 = (float *)(lVar6 + 0x28);
      puVar3 = in_stack_00000070;
      pfVar16 = in_stack_00000078;
      do {
        if (unaff_x22 == 0) goto LAB_030a703c;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_030a7038;
        fVar21 = *(float *)((long)puVar3 + -4);
        uVar22 = *puVar3;
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(puVar1);
          DAT_0411f172 = '\x01';
        }
        pfVar11 = *(float **)(*(long *)puVar1 + 0xb8);
        uVar9 = *(uint *)(lVar6 + 0x18);
        fVar21 = fVar21 - *pfVar11;
        fVar18 = (float)uVar22 - (float)*(undefined8 *)(pfVar11 + 1);
        fVar19 = (float)((ulong)uVar22 >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pfVar11 + 1) >> 0x20);
        if (unaff_s8 <= fVar19 * fVar19 + fVar21 * fVar21 + fVar18 * fVar18) {
          if (uVar9 <= uVar5) goto LAB_030a7038;
          fVar18 = pfVar13[-1];
          fVar19 = *pfVar13;
          fVar21 = (float)FUN_036bdcac(pfVar13[-2],&stack0x000001f0,0);
          if ((*(uint *)(in_stack_000000c8 + 0x18) <= uVar5) ||
             (uVar9 = *(uint *)(lVar6 + 0x18), uVar9 <= uVar5)) goto LAB_030a7038;
          fVar19 = fVar19 - *pfVar16;
          uVar22 = CONCAT44(fVar18 - (float)((ulong)*(undefined8 *)(pfVar16 + -2) >> 0x20),
                            fVar21 - (float)*(undefined8 *)(pfVar16 + -2));
        }
        else {
          if (uVar9 <= uVar5) goto LAB_030a7038;
          uVar22 = *(undefined8 *)pfVar11;
          fVar19 = pfVar11[2];
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)(pfVar13 + -2) = uVar22;
        *pfVar13 = fVar19;
        pfVar16 = pfVar16 + 3;
        puVar3 = (undefined8 *)((long)puVar3 + 0xc);
        pfVar13 = pfVar13 + 3;
      } while ((long)uVar5 < (long)(int)uVar9);
    }
    lVar7 = FUN_036a466c(in_stack_000000b0,0);
    if (lVar7 == 0) goto LAB_030a703c;
    if (0 < *(int *)(lVar7 + 0x18)) {
      uVar5 = 0;
      pfVar13 = (float *)(lVar7 + 0x28);
      pfVar16 = in_stack_00000060;
      puVar3 = in_stack_00000068;
      do {
        if (unaff_x27 == 0) goto LAB_030a703c;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar5) goto LAB_030a7038;
        fVar21 = *(float *)((long)puVar3 + -4);
        uVar22 = *puVar3;
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
        }
        pfVar11 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
        uVar9 = *(uint *)(lVar7 + 0x18);
        fVar21 = fVar21 - *pfVar11;
        fVar18 = (float)uVar22 - (float)*(undefined8 *)(pfVar11 + 1);
        fVar19 = (float)((ulong)uVar22 >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pfVar11 + 1) >> 0x20);
        if (unaff_s8 <= fVar19 * fVar19 + fVar21 * fVar21 + fVar18 * fVar18) {
          if (uVar9 <= uVar5) goto LAB_030a7038;
          fVar21 = pfVar13[-2];
          fVar18 = pfVar13[-1];
          fVar19 = *pfVar13;
          if (DAT_0411f1e2 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbdee0);
            DAT_0411f1e2 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar20 = SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar18 * fVar18);
          if (fVar20 <= unaff_s9) {
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            pfVar11 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            fVar21 = *pfVar11;
            fVar18 = pfVar11[1];
            fVar19 = pfVar11[2];
          }
          else {
            fVar21 = fVar21 / fVar20;
            fVar18 = fVar18 / fVar20;
            fVar19 = fVar19 / fVar20;
          }
          fVar21 = (float)FUN_036bdd84(fVar21,&stack0x000001f0,0);
          if (in_stack_000000c0 == 0) goto LAB_030a703c;
          if ((*(uint *)(in_stack_000000c0 + 0x18) <= uVar5) ||
             (uVar9 = *(uint *)(lVar7 + 0x18), uVar9 <= uVar5)) goto LAB_030a7038;
          fVar19 = fVar19 - *pfVar16;
          uVar22 = CONCAT44(fVar18 - (float)((ulong)*(undefined8 *)(pfVar16 + -2) >> 0x20),
                            fVar21 - (float)*(undefined8 *)(pfVar16 + -2));
        }
        else {
          if (uVar9 <= uVar5) goto LAB_030a7038;
          uVar22 = *(undefined8 *)pfVar11;
          fVar19 = pfVar11[2];
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)(pfVar13 + -2) = uVar22;
        *pfVar13 = fVar19;
        puVar3 = (undefined8 *)((long)puVar3 + 0xc);
        pfVar16 = pfVar16 + 3;
        pfVar13 = pfVar13 + 3;
      } while ((long)uVar5 < (long)(int)uVar9);
    }
    uVar22 = FUN_036a4718(in_stack_000000b0,0);
    puVar1 = System_Action<DisconnectCause>_TypeInfo;
    lVar10 = *(long *)System_Action<DisconnectCause>_TypeInfo;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar10);
      lVar10 = *(long *)puVar1;
    }
    lVar14 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
    if (lVar14 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar10);
        lVar10 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      }
      puVar1 = System_Action<DisconnectCause>_TypeInfo;
      uVar15 = **(undefined8 **)(lVar10 + 0xb8);
      lVar14 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
      FUN_021de1ac(lVar14,uVar15,*(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,
                   0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *plVar8 = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar14);
    }
    uVar22 = FUN_01f6d39c(uVar22,lVar14,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
    lVar10 = FUN_01f70920(uVar22,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
    uVar5 = FUN_039a67c8(0);
    if ((uVar5 & 1) != 0) {
      if (lVar10 == 0) goto LAB_030a703c;
      if (0 < *(int *)(lVar10 + 0x18)) {
        uVar5 = 0;
        pfVar13 = (float *)(lVar10 + 0x28);
        puVar3 = in_stack_00000050;
        pfVar16 = in_stack_00000058;
        do {
          if (in_stack_000000d0 == 0) goto LAB_030a703c;
          if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar5) goto LAB_030a7038;
          fVar21 = *(float *)((long)puVar3 + -4);
          uVar22 = *puVar3;
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          pfVar11 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          uVar9 = *(uint *)(lVar10 + 0x18);
          fVar21 = fVar21 - *pfVar11;
          fVar18 = (float)uVar22 - (float)*(undefined8 *)(pfVar11 + 1);
          fVar19 = (float)((ulong)uVar22 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pfVar11 + 1) >> 0x20);
          if (unaff_s8 <= fVar19 * fVar19 + fVar21 * fVar21 + fVar18 * fVar18) {
            if (uVar9 <= uVar5) goto LAB_030a7038;
            fVar18 = pfVar13[-1];
            fVar19 = *pfVar13;
            fVar21 = (float)FUN_036bdd84(pfVar13[-2],&stack0x000001f0,0);
            if (in_stack_000000b8 == 0) goto LAB_030a703c;
            if ((*(uint *)(in_stack_000000b8 + 0x18) <= uVar5) ||
               (uVar9 = *(uint *)(lVar10 + 0x18), uVar9 <= uVar5)) goto LAB_030a7038;
            fVar19 = fVar19 - *pfVar16;
            uVar22 = CONCAT44(fVar18 - (float)((ulong)*(undefined8 *)(pfVar16 + -2) >> 0x20),
                              fVar21 - (float)*(undefined8 *)(pfVar16 + -2));
          }
          else {
            if (uVar9 <= uVar5) goto LAB_030a7038;
            uVar22 = *(undefined8 *)pfVar11;
            fVar19 = pfVar11[2];
          }
          uVar5 = uVar5 + 1;
          *(undefined8 *)(pfVar13 + -2) = uVar22;
          *pfVar13 = fVar19;
          pfVar16 = pfVar16 + 3;
          puVar3 = (undefined8 *)((long)puVar3 + 0xc);
          pfVar13 = pfVar13 + 3;
        } while ((long)uVar5 < (long)(int)uVar9);
      }
    }
    iVar2 = FUN_036a2da8(in_stack_000000a8,unaff_w24,0);
    if (0 < iVar2) {
      iVar12 = 0;
      if (in_stack_00000098._4_4_ < 1) {
        lVar7 = 0;
      }
      if (iStack00000000000000a4 < 1) {
        lVar10 = 0;
      }
      do {
        FUN_036a2dec(in_stack_000000a8,unaff_w24,iVar12,0);
        FUN_036a2eb4(in_stack_000000d8,uVar4,lVar6,lVar7,lVar10,0);
        iVar12 = iVar12 + 1;
      } while (iVar2 != iVar12);
    }
    unaff_w24 = unaff_w24 + 1;
    iVar2 = FUN_036a2ca8(in_stack_000000a8,0);
    puVar1 = System_Action<DisconnectCause>_TypeInfo;
    if (iVar2 <= unaff_w24) {
      if (in_stack_00000080 != (long *)0x0) {
        iVar2 = FUN_030a7a6c(in_stack_00000080);
        puVar1 = PTR_DAT_03cbdf88;
        if (0 < iVar2) {
          plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
          lVar6 = (**(code **)(*in_stack_00000080 + 0x168))
                            (in_stack_00000080,*(undefined8 *)(*in_stack_00000080 + 0x170));
          if (plVar8 == (long *)0x0) goto LAB_030a703c;
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
            uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar4,0);
          }
          if ((int)plVar8[3] == 0) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar8[4] = lVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar6);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar8,0);
        }
        if ((*in_stack_00000028 != 0) && (lVar6 = FUN_036cbbbc(*in_stack_00000028,0), lVar6 != 0)) {
          lVar6 = FUN_01f7e2fc(lVar6,*(undefined8 *)PTR_DAT_03cebed0);
          uVar4 = FUN_03693c80(in_stack_00000088,0);
          if (lVar6 != 0) {
            thunk_FUN_03692878(lVar6,uVar4,0);
            uVar4 = FUN_036a0dd4(in_stack_00000088,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)puVar1);
            }
            uVar5 = FUN_036cee6c(uVar4,0,0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *in_stack_00000038;
              uVar4 = FUN_036a0dd4(in_stack_00000088,0);
              if (lVar7 == 0) goto LAB_030a703c;
              uVar5 = FUN_0219f8b8(lVar7,uVar4,&stack0x000001c8,
                                   *(undefined8 *)System_Action<ActionContext>_TypeInfo);
              if ((uVar5 & 1) != 0) {
                FUN_036a0e10(lVar6,in_stack_000001c8,0);
              }
            }
            FUN_036a0e90(lVar6,in_stack_00000048,0);
            FUN_036a0f10(lVar6,in_stack_000000d8,0);
            if (in_stack_00000040._4_4_ != 0) {
              uVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
              FUN_036a0e90(in_stack_00000088,uVar4,0);
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
      uVar22 = **(undefined8 **)(lVar6 + 0xb8);
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
      FUN_021de1ac(uVar4,uVar22,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *puVar3 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,uVar4);
    }
    in_stack_000000a0 = FUN_01f663ac();
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar6);
      lVar6 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar6);
        lVar6 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      }
      puVar1 = System_Action<DisconnectCause>_TypeInfo;
      uVar22 = **(undefined8 **)(lVar6 + 0xb8);
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
      FUN_021de1ac(uVar4,uVar22,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *puVar3 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,uVar4);
    }
    in_stack_00000098._4_4_ = FUN_01f663ac();
    uVar5 = FUN_039a67c8(0);
    puVar1 = System_Action<DisconnectCause>_TypeInfo;
    unaff_x21 = in_stack_000000b0;
    unaff_x23 = in_stack_00000090;
    unaff_x25 = in_stack_00000080;
    unaff_x26 = in_stack_000000a8;
    unaff_x28 = in_stack_00000088;
    unaff_x29 = in_stack_000000d8;
    unaff_w20 = in_stack_00000098._4_4_;
    if ((uVar5 & 1) == 0) goto code_r0x030a6678;
    lVar6 = *(long *)System_Action<DisconnectCause>_TypeInfo;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      }
      puVar1 = System_Action<DisconnectCause>_TypeInfo;
      uVar4 = **(undefined8 **)(lVar6 + 0xb8);
      lVar7 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
      FUN_021de1ac(lVar7,uVar4,*(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar8 = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar7);
    }
    iStack00000000000000a4 =
         FUN_01f663ac(in_stack_000000d0,lVar7,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
  } while( true );
}


