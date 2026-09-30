/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddSharedComponentDataIndexWithBurst_00000F94$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a6968
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


void Unity_Entities_StructuralChange_AddSharedComponentDataIndexWithBurst_00000F94_PostfixBurstDelegate__Invoke
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  undefined8 unaff_x19;
  int iVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  int unaff_w24;
  float *pfVar14;
  long unaff_x27;
  long unaff_x29;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s8;
  float unaff_s9;
  float fVar18;
  undefined8 uVar19;
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
  
  while( true ) {
                    /* catch() { ... } // from try @ 030a6954 with catch @ 030a696c */
    if (0 < *(int *)(param_1 + 0x18)) {
                    /* try { // try from 030a6978 to 031a6983 has its CatchHandler @ 030a6998 */
      uVar11 = 0;
      pfVar10 = (float *)(param_1 + 0x28);
      pfVar14 = in_stack_00000060;
      puVar4 = in_stack_00000068;
      do {
        if (unaff_x27 == 0) goto LAB_030a703c;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar11) goto LAB_030a7038;
        fVar18 = *(float *)((long)puVar4 + -4);
        uVar19 = *puVar4;
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
        }
        pfVar8 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
        uVar6 = *(uint *)(param_1 + 0x18);
        fVar18 = fVar18 - *pfVar8;
        fVar15 = (float)uVar19 - (float)*(undefined8 *)(pfVar8 + 1);
        fVar16 = (float)((ulong)uVar19 >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pfVar8 + 1) >> 0x20);
        if (unaff_s8 <= fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15) {
          if (uVar6 <= uVar11) goto LAB_030a7038;
          fVar18 = pfVar10[-2];
          fVar15 = pfVar10[-1];
          fVar16 = *pfVar10;
          if (DAT_0411f1e2 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbdee0);
            DAT_0411f1e2 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar17 = SQRT(fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15);
          if (fVar17 <= unaff_s9) {
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            pfVar8 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            fVar18 = *pfVar8;
            fVar15 = pfVar8[1];
            fVar16 = pfVar8[2];
          }
          else {
            fVar18 = fVar18 / fVar17;
            fVar15 = fVar15 / fVar17;
            fVar16 = fVar16 / fVar17;
          }
          fVar18 = (float)FUN_036bdd84(fVar18,&stack0x000001f0,0);
          if (in_stack_000000c0 == 0) goto LAB_030a703c;
          if ((*(uint *)(in_stack_000000c0 + 0x18) <= uVar11) ||
             (uVar6 = *(uint *)(param_1 + 0x18), uVar6 <= uVar11)) goto LAB_030a7038;
          fVar16 = fVar16 - *pfVar14;
          uVar19 = CONCAT44(fVar15 - (float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20),
                            fVar18 - (float)*(undefined8 *)(pfVar14 + -2));
        }
        else {
          if (uVar6 <= uVar11) goto LAB_030a7038;
          uVar19 = *(undefined8 *)pfVar8;
          fVar16 = pfVar8[2];
        }
        uVar11 = uVar11 + 1;
        *(undefined8 *)(pfVar10 + -2) = uVar19;
        *pfVar10 = fVar16;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        pfVar14 = pfVar14 + 3;
        pfVar10 = pfVar10 + 3;
      } while ((long)uVar11 < (long)(int)uVar6);
    }
    uVar19 = FUN_036a4718(in_stack_000000b0,0);
    puVar1 = System_Action<DisconnectCause>_TypeInfo;
    lVar7 = *(long *)System_Action<DisconnectCause>_TypeInfo;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar7 = *(long *)puVar1;
    }
    lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
    if (lVar12 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar7);
        lVar7 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      }
      puVar1 = System_Action<DisconnectCause>_TypeInfo;
      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
      lVar12 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Column>_TypeInfo);
      FUN_021de1ac(lVar12,uVar13,*(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,
                   0);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *plVar5 = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar12);
    }
    uVar19 = FUN_01f6d39c(uVar19,lVar12,*(undefined8 *)System_Action<CameraMode>_TypeInfo);
    lVar7 = FUN_01f70920(uVar19,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
    uVar11 = FUN_039a67c8(0);
    if ((uVar11 & 1) != 0) {
      if (lVar7 == 0) goto LAB_030a703c;
      if (0 < *(int *)(lVar7 + 0x18)) {
        uVar11 = 0;
        pfVar10 = (float *)(lVar7 + 0x28);
        puVar4 = in_stack_00000050;
        pfVar14 = in_stack_00000058;
        do {
          if (in_stack_000000d0 == 0) goto LAB_030a703c;
          if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar11) goto LAB_030a7038;
          fVar18 = *(float *)((long)puVar4 + -4);
          uVar19 = *puVar4;
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          pfVar8 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          uVar6 = *(uint *)(lVar7 + 0x18);
          fVar18 = fVar18 - *pfVar8;
          fVar15 = (float)uVar19 - (float)*(undefined8 *)(pfVar8 + 1);
          fVar16 = (float)((ulong)uVar19 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pfVar8 + 1) >> 0x20);
          if (unaff_s8 <= fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15) {
            if (uVar6 <= uVar11) goto LAB_030a7038;
            fVar15 = pfVar10[-1];
            fVar16 = *pfVar10;
            fVar18 = (float)FUN_036bdd84(pfVar10[-2],&stack0x000001f0,0);
            if (in_stack_000000b8 == 0) goto LAB_030a703c;
            if ((*(uint *)(in_stack_000000b8 + 0x18) <= uVar11) ||
               (uVar6 = *(uint *)(lVar7 + 0x18), uVar6 <= uVar11)) goto LAB_030a7038;
            fVar16 = fVar16 - *pfVar14;
            uVar19 = CONCAT44(fVar15 - (float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20),
                              fVar18 - (float)*(undefined8 *)(pfVar14 + -2));
          }
          else {
            if (uVar6 <= uVar11) goto LAB_030a7038;
            uVar19 = *(undefined8 *)pfVar8;
            fVar16 = pfVar8[2];
          }
          uVar11 = uVar11 + 1;
          *(undefined8 *)(pfVar10 + -2) = uVar19;
          *pfVar10 = fVar16;
          pfVar14 = pfVar14 + 3;
          puVar4 = (undefined8 *)((long)puVar4 + 0xc);
          pfVar10 = pfVar10 + 3;
        } while ((long)uVar11 < (long)(int)uVar6);
      }
    }
    iVar3 = FUN_036a2da8(in_stack_000000a8,unaff_w24,0);
    if (0 < iVar3) {
      iVar9 = 0;
      if (in_stack_00000098._4_4_ < 1) {
        param_1 = 0;
      }
      if (in_stack_000000a0._4_4_ < 1) {
        lVar7 = 0;
      }
      do {
        FUN_036a2dec(in_stack_000000a8,unaff_w24,iVar9,0);
        FUN_036a2eb4(in_stack_000000d8,unaff_x19,unaff_x29,param_1,lVar7,0);
        iVar9 = iVar9 + 1;
      } while (iVar3 != iVar9);
    }
    unaff_w24 = unaff_w24 + 1;
    iVar3 = FUN_036a2ca8(in_stack_000000a8,0);
    puVar1 = System_Action<DisconnectCause>_TypeInfo;
    if (iVar3 <= unaff_w24) break;
    lVar7 = FUN_036a0ed4(in_stack_00000088,0);
    if (lVar7 == 0) goto LAB_030a703c;
    UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray(lVar7,unaff_w24,0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x10) == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar1;
      }
      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
      uVar19 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
      FUN_021de1ac(uVar19,uVar13,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,0);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *puVar4 = uVar19;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar19);
    }
    uVar2 = FUN_01f663ac();
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar7 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar7);
        lVar7 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      }
      puVar1 = System_Action<DisconnectCause>_TypeInfo;
      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
      uVar19 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
      FUN_021de1ac(uVar19,uVar13,*(undefined8 *)System_Action<ConfigResponse>_TypeInfo,0);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *puVar4 = uVar19;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar19);
    }
    in_stack_00000098._4_4_ = FUN_01f663ac();
    uVar11 = FUN_039a67c8(0);
    puVar1 = System_Action<DisconnectCause>_TypeInfo;
    if ((uVar11 & 1) == 0) {
      in_stack_000000a0._4_4_ = 0;
    }
    else {
      lVar7 = *(long *)System_Action<DisconnectCause>_TypeInfo;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar1;
      }
      lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar7 = *(long *)System_Action<DisconnectCause>_TypeInfo;
        }
        puVar1 = System_Action<DisconnectCause>_TypeInfo;
        uVar19 = **(undefined8 **)(lVar7 + 0xb8);
        lVar12 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Color>_TypeInfo);
        FUN_021de1ac(lVar12,uVar19,*(undefined8 *)System_Action<ContentCatalogData>_TypeInfo,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
        *plVar5 = lVar12;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar12);
      }
      in_stack_000000a0._4_4_ =
           FUN_01f663ac(in_stack_000000d0,lVar12,*(undefined8 *)System_Action<CGVMesh>_TypeInfo);
    }
    unaff_x19 = FUN_036a2d20(in_stack_000000a8,unaff_w24,0);
    uVar11 = FUN_025be440(unaff_x19,0);
    if ((uVar11 & 1) != 0) {
      in_stack_00000160 = unaff_w24;
      uVar19 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000160);
      unaff_x19 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cc1890,uVar19,0);
    }
    puVar1 = PTR_DAT_03cbded8;
    if (in_stack_00000080 == (long *)0x0) goto LAB_030a703c;
    Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__Constructor
              (in_stack_00000080,unaff_w24,unaff_x19,uVar2,in_stack_00000098._4_4_,
               in_stack_000000a0._4_4_);
    FUN_036a1018(0x42c80000,in_stack_00000088,unaff_w24,0);
    FUN_036a106c(in_stack_00000088,in_stack_000000b0,0);
    if (((in_stack_000000b0 == 0) || (lVar7 = FUN_036a45c0(in_stack_000000b0,0), lVar7 == 0)) ||
       (lVar12 = FUN_036a45c0(in_stack_000000d8,0), lVar12 == 0)) goto LAB_030a703c;
    if (*(int *)(lVar7 + 0x18) != *(int *)(lVar12 + 0x18)) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar19 = thunk_FUN_01a89e68();
      uVar13 = thunk_FUN_01a6ca08(System_Action<DropdownMenuAction>_TypeInfo);
      FUN_027a794c(uVar19,uVar13,0);
      uVar13 = thunk_FUN_01a6ca08(System_Action<Enum>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar19,uVar13);
    }
    if (in_stack_00000090 == 0) goto LAB_030a703c;
    in_stack_00000160 = unaff_w24;
    uVar11 = FUN_0219c130(in_stack_00000090,&stack0x00000160,
                          *(undefined8 *)System_Action<CGModule>_TypeInfo);
    uVar2 = 0;
    if ((uVar11 & 1) != 0) {
      in_stack_00000160 = unaff_w24;
      FUN_0219b634(0,in_stack_00000090,&stack0x00000160,&stack0x000001a0,
                   *(undefined8 *)System_Action<CGSpots>_TypeInfo);
      uVar2 = in_stack_000001a0;
    }
    FUN_036a1018(uVar2,in_stack_00000088,unaff_w24,0);
    unaff_x29 = FUN_036a45c0(in_stack_000000b0,0);
    if (unaff_x29 == 0) goto LAB_030a703c;
    if (0 < *(int *)(unaff_x29 + 0x18)) {
      uVar11 = 0;
      pfVar10 = (float *)(unaff_x29 + 0x28);
      puVar4 = in_stack_00000070;
      pfVar14 = in_stack_00000078;
      do {
        if (unaff_x22 == 0) goto LAB_030a703c;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_030a7038;
        fVar18 = *(float *)((long)puVar4 + -4);
        uVar19 = *puVar4;
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(puVar1);
          DAT_0411f172 = '\x01';
        }
        pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
        uVar6 = *(uint *)(unaff_x29 + 0x18);
        fVar18 = fVar18 - *pfVar8;
        fVar15 = (float)uVar19 - (float)*(undefined8 *)(pfVar8 + 1);
        fVar16 = (float)((ulong)uVar19 >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pfVar8 + 1) >> 0x20);
        if (unaff_s8 <= fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15) {
          if (uVar6 <= uVar11) goto LAB_030a7038;
          fVar15 = pfVar10[-1];
          fVar16 = *pfVar10;
          fVar18 = (float)FUN_036bdcac(pfVar10[-2],&stack0x000001f0,0);
          if ((*(uint *)(in_stack_000000c8 + 0x18) <= uVar11) ||
             (uVar6 = *(uint *)(unaff_x29 + 0x18), uVar6 <= uVar11)) goto LAB_030a7038;
          fVar16 = fVar16 - *pfVar14;
          uVar19 = CONCAT44(fVar15 - (float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20),
                            fVar18 - (float)*(undefined8 *)(pfVar14 + -2));
        }
        else {
          if (uVar6 <= uVar11) goto LAB_030a7038;
          uVar19 = *(undefined8 *)pfVar8;
          fVar16 = pfVar8[2];
        }
        uVar11 = uVar11 + 1;
        *(undefined8 *)(pfVar10 + -2) = uVar19;
        *pfVar10 = fVar16;
        pfVar14 = pfVar14 + 3;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        pfVar10 = pfVar10 + 3;
      } while ((long)uVar11 < (long)(int)uVar6);
    }
    param_1 = FUN_036a466c(in_stack_000000b0,0);
    if (param_1 == 0) goto LAB_030a703c;
  }
  if (in_stack_00000080 != (long *)0x0) {
    iVar3 = FUN_030a7a6c(in_stack_00000080);
    puVar1 = PTR_DAT_03cbdf88;
    if (0 < iVar3) {
      plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      lVar7 = (**(code **)(*in_stack_00000080 + 0x168))
                        (in_stack_00000080,*(undefined8 *)(*in_stack_00000080 + 0x170));
      if (plVar5 == (long *)0x0) goto LAB_030a703c;
      if ((lVar7 != 0) &&
         (lVar12 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
        uVar19 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar19,0);
      }
      if ((int)plVar5[3] == 0) {
LAB_030a7038:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar5[4] = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar7);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a90c(*(undefined8 *)PTR_DAT_03cc1890,plVar5,0);
    }
    if ((*in_stack_00000028 != 0) && (lVar7 = FUN_036cbbbc(*in_stack_00000028,0), lVar7 != 0)) {
      lVar7 = FUN_01f7e2fc(lVar7,*(undefined8 *)PTR_DAT_03cebed0);
      uVar19 = FUN_03693c80(in_stack_00000088,0);
      if (lVar7 != 0) {
        thunk_FUN_03692878(lVar7,uVar19,0);
        uVar19 = FUN_036a0dd4(in_stack_00000088,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar1);
        }
        uVar11 = FUN_036cee6c(uVar19,0,0);
        if ((uVar11 & 1) != 0) {
          lVar12 = *in_stack_00000038;
          uVar19 = FUN_036a0dd4(in_stack_00000088,0);
          if (lVar12 == 0) goto LAB_030a703c;
          uVar11 = FUN_0219f8b8(lVar12,uVar19,&stack0x000001c8,
                                *(undefined8 *)System_Action<ActionContext>_TypeInfo);
          if ((uVar11 & 1) != 0) {
            FUN_036a0e10(lVar7,in_stack_000001c8,0);
          }
        }
        FUN_036a0e90(lVar7,in_stack_00000048,0);
        FUN_036a0f10(lVar7,in_stack_000000d8,0);
        if (in_stack_00000040._4_4_ != 0) {
          uVar19 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,0);
          FUN_036a0e90(in_stack_00000088,uVar19,0);
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
      }
    }
  }
LAB_030a703c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


