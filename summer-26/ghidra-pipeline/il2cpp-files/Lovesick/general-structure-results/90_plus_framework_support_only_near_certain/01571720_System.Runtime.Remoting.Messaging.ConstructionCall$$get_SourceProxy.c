/*
FUNCTION_NAME: System.Runtime.Remoting.Messaging.ConstructionCall$$get_SourceProxy
ENTRY_POINT: 01571720
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;weak_vector_component_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long System_Runtime_Remoting_Messaging_ConstructionCall__get_SourceProxy
               (undefined1 param_1 [16],ulong param_2)

{
  undefined4 uVar1;
  float fVar2;
  double __x;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  float *pfVar25;
  undefined8 *unaff_x20;
  float *pfVar26;
  uint uVar27;
  long unaff_x26;
  int iVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long lStack0000000000000058;
  float fStack0000000000000064;
  float *in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  double in_stack_00000108;
  
  FUN_01347408();
  in_stack_000000d0 = CONCAT44(fStack0000000000000084,fStack0000000000000080);
  in_stack_000000d8 = in_stack_00000088;
  fVar30 = (float)FUN_026884e4(&stack0x000000d0,0);
  fStack0000000000000064 = (float)param_2;
  FUN_01347408();
  puVar10 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar9 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__;
  puVar8 = Method_Meta_Voice_Logging_RingDictionaryBuffer<string,_CorrelationID>_Extract__;
  puVar7 = Method_Obi_ObiNativeList<HeightFieldHeader>_Dispose__;
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__;
  puVar5 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  puVar4 = System_Func<Color,_Color32>_TypeInfo;
  in_stack_000000f0 = CONCAT44(fStack0000000000000084,fStack0000000000000080);
  in_stack_000000f8 = in_stack_00000088;
  if (*(long *)(unaff_x26 + 0x80) != 0) {
    FUN_01323390(*(long *)(unaff_x26 + 0x80),&stack0x00000080,
                 *(undefined8 *)System_Runtime_CompilerServices_ValueTaskAwaiter_TypeInfo);
    in_stack_000000b0 = CONCAT44(fStack0000000000000084,fStack0000000000000080);
    lStack0000000000000058 = 0;
    in_stack_000000b8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000090;
    while (uVar13 = FUN_012b894c(&stack0x000000b0,*(undefined8 *)puVar4), (uVar13 & 1) != 0) {
      lVar14 = FUN_00bce924(&stack0x000000b0,*(undefined8 *)puVar8);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = *(long *)(*(long *)puVar7 + 0x20);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      pcVar16 = (char *)thunk_FUN_00d32ed4(lVar14 + 0x1c,*(undefined8 *)(lVar15 + 0x80));
      fVar33 = (float)param_2;
      if ((*pcVar16 != '\0') &&
         ((*(uint *)(in_stack_00000078 + 0x30) & *(uint *)(lVar14 + 0x18)) != 0)) {
        lVar15 = FUN_0268fd10(unaff_x26,0);
        lVar17 = FUN_0268fd10(lVar14,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0269f578(lVar17,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar31 = (float)FUN_026a0f08(lVar15,0);
        fVar34 = fVar33;
        FUN_01347408(lVar14 + 0x1c,&stack0x00000080,*unaff_x20);
        in_stack_000000a0 = CONCAT44(fStack0000000000000084,fStack0000000000000080);
        in_stack_000000a8 = in_stack_00000088;
        fVar32 = (float)FUN_026883b0(&stack0x000000a0,0);
        param_2 = (ulong)(uint)(fVar33 + fVar34);
        FUN_026883b8(fVar31 + fVar32,param_2,&stack0x000000a0,0);
        if (*(long *)(lVar14 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar1 = *(undefined4 *)(*(long *)(lVar14 + 0x50) + 0x18);
        lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320ebc(lVar15,uVar1,*(undefined8 *)StringLiteral_10550);
        if (*(long *)(lVar14 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar28 = *(int *)(*(long *)(lVar14 + 0x50) + 0x18);
        while (iVar28 = iVar28 + -1, -1 < iVar28) {
          if (*(long *)(lVar14 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(*(long *)(lVar14 + 0x50),iVar28,&stack0x00000080,*(undefined8 *)puVar9);
          param_2 = (ulong)(uint)(fVar33 + fStack0000000000000084);
          FUN_00bbed00(fVar31 + fStack0000000000000080,lVar15,*(undefined8 *)puVar5);
        }
        if (lStack0000000000000058 == 0) {
          lStack0000000000000058 =
               thunk_FUN_00d62348(*(undefined8 *)
                                   Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t_TypeInfo
                                 );
          if (lStack0000000000000058 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01320e50(lStack0000000000000058,
                       *(undefined8 *)
                        Method_System_Collections_Concurrent_ConcurrentQueue<__Il2CppFullySharedGenericType>_CopyTo__
                      );
        }
        FUN_00bcfbe4(lStack0000000000000058,lVar15,*(undefined8 *)StringLiteral_8822);
      }
    }
    FUN_012b8948(&stack0x000000b0,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebSocket_<HandleQueue>d__34>__
                );
    FUN_015a6dc0(*(undefined8 *)(unaff_x26 + 0x50),lStack0000000000000058,&stack0x000000e8,
                 &stack0x000000e0,0);
    if ((in_stack_000000e8 != 0) && (lVar14 = *(long *)(in_stack_00000078 + 0x50), lVar14 != 0)) {
      uVar1 = *(undefined4 *)(in_stack_000000e8 + 0x18);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_017726a0(8,*(undefined4 *)(lVar14 + 0x18),0);
      lVar14 = FUN_00da4fb8(*(undefined8 *)puVar10,uVar1);
      if (in_stack_000000e8 != 0) {
        uVar13 = 0;
        puVar20 = (undefined4 *)(lVar14 + 0x28);
        do {
          if ((long)(int)*(uint *)(in_stack_000000e8 + 0x18) <= (long)uVar13) {
            plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)
                                            System_Runtime_Serialization_FormatterConverter_TypeInfo
                                           ,uVar12);
            if ((int)uVar12 < 1) goto LAB_01571af0;
            uVar13 = 0;
            goto LAB_01571aa0;
          }
          if (*(uint *)(in_stack_000000e8 + 0x18) <= uVar13) goto LAB_01572184;
          if (lVar14 == 0) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_01572184;
          uVar22 = *(undefined8 *)(in_stack_000000e8 + uVar13 * 8 + 0x20);
          *puVar20 = 0;
          uVar13 = uVar13 + 1;
          *(undefined8 *)(puVar20 + -2) = uVar22;
          puVar20 = puVar20 + 3;
        } while (in_stack_000000e8 != 0);
      }
    }
  }
  goto LAB_01571f18;
  while( true ) {
    if ((lVar15 != 0) &&
       (lVar17 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar18 + 0x40)), lVar17 == 0)) {
      uVar22 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar22,0);
    }
    if (*(uint *)(plVar18 + 3) <= uVar13) goto LAB_01572184;
    plVar18[uVar13 + 4] = lVar15;
    uVar13 = uVar13 + 1;
    if (uVar12 == uVar13) break;
LAB_01571aa0:
    lVar15 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__,uVar1);
    if (plVar18 == (long *)0x0) goto LAB_01571f18;
  }
LAB_01571af0:
  lVar15 = FUN_00da4fb8(*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo,uVar1);
  lVar17 = FUN_00da4fb8(*(undefined8 *)
                         Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                        ,uVar1);
  lVar19 = FUN_00da4fb8(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                        ,uVar1);
  fVar33 = (float)FUN_015727f8(in_stack_00000070._4_4_,0x3f800000);
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  uVar3 = _LAB_028aa0d8;
  uVar22 = _DAT_028aa0d0;
  __x = DAT_028aa048;
  if (in_stack_000000e8 != 0) {
    fVar34 = fStack0000000000000064 * 0.5;
    uVar23 = *(undefined8 *)
              (*(long *)(*(long *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        + 0xb8) + 0x48);
    uVar1 = *(undefined4 *)
             (*(long *)(*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8) + 0x50);
    uVar13 = 0;
    do {
      uVar11 = in_stack_000000e0;
      if ((long)*(int *)(in_stack_000000e8 + 0x18) <= (long)uVar13) {
        *in_stack_00000068 = fVar30 + *in_stack_00000068;
        FUN_0266ed50(in_stack_00000008,0);
        uVar22 = FUN_0268b6ac(unaff_x26,0);
        FUN_0268b75c(in_stack_00000008,uVar22,0);
        FUN_0266b9c4(in_stack_00000008,lVar14,0);
        if ((int)uVar12 < 1) goto LAB_015720c8;
        uVar13 = 0;
        goto LAB_01571f84;
      }
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_01572184;
      lVar24 = lVar14 + uVar13 * 0xc;
      pfVar25 = (float *)(lVar24 + 0x20);
      fVar32 = *pfVar25;
      pfVar26 = (float *)(lVar24 + 0x24);
      fVar38 = *pfVar26;
      fVar31 = (float)FUN_026883fc(&stack0x000000f0,0);
      fVar32 = fVar32 - fVar31;
      fVar31 = (float)FUN_02688404(&stack0x000000f0,0);
      fVar38 = fVar38 - fVar31;
      if (0 < (int)uVar12) {
        uVar27 = 0;
        fVar31 = fStack0000000000000064;
        do {
          lVar24 = *(long *)(in_stack_00000078 + 0x50);
          if (lVar24 == 0) goto LAB_01571f18;
          if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_01572184;
          lVar29 = (long)(int)uVar27;
          lVar21 = *(long *)(lVar24 + lVar29 * 8 + 0x20);
          if (lVar21 == 0) goto LAB_01571f18;
          fVar39 = *in_stack_00000068;
          fVar2 = 1.0;
          if (*(int *)(lVar21 + 0x14) != 0) {
            fVar2 = fVar31;
          }
          fVar35 = 1.0;
          switch(*(undefined4 *)(lVar21 + 0x10)) {
          case 0:
            break;
          case 1:
            fVar35 = fVar33;
            break;
          case 2:
            fVar35 = fVar2;
            break;
          case 3:
            fVar35 = (float)FUN_015727f8(in_stack_00000070._4_4_,fVar2);
            lVar24 = *(long *)(in_stack_00000078 + 0x50);
            fVar31 = fStack0000000000000064;
            if (lVar24 == 0) goto LAB_01571f18;
            break;
          default:
            fVar35 = in_stack_00000070._4_4_;
            break;
          case 5:
            fVar39 = 0.0;
            fVar35 = fVar30;
          }
          if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_01572184;
          lVar24 = *(long *)(lVar24 + lVar29 * 8 + 0x20);
          if (lVar24 == 0) goto LAB_01571f18;
          fVar37 = fVar35;
          if (*(int *)(lVar24 + 0x14) != 1) {
            fVar37 = fVar2;
          }
          if (plVar18 == (long *)0x0) goto LAB_01571f18;
          if (*(uint *)(plVar18 + 3) <= uVar27) goto LAB_01572184;
          lVar24 = plVar18[lVar29 + 4];
          if (lVar24 == 0) goto LAB_01571f18;
          if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_01572184;
          uVar27 = uVar27 + 1;
          lVar24 = lVar24 + uVar13 * 8;
          *(float *)(lVar24 + 0x20) = ((fVar30 + fVar39) - fVar32) / fVar35;
          *(float *)(lVar24 + 0x24) = fVar38 / fVar37;
        } while (uVar12 != uVar27);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_01572184;
      *pfVar25 = fVar32 - fVar30 * 0.5;
      *pfVar26 = fVar38 - fVar34;
      *(undefined4 *)(lVar14 + uVar13 * 0xc + 0x28) = 0;
      dVar36 = modf(__x,&stack0x00000108);
      if (dVar36 == 0.5) {
        fVar31 = (float)in_stack_00000108;
        if (((long)in_stack_00000108 & 1U) != 0) {
          fVar31 = (float)in_stack_00000108 + 1.0;
        }
      }
      else {
        fVar31 = 255.0;
      }
      dVar36 = modf(__x,&stack0x00000108);
      if (dVar36 == 0.5) {
        fVar32 = (float)in_stack_00000108;
        if (((long)in_stack_00000108 & 1U) != 0) {
          fVar32 = (float)in_stack_00000108 + 1.0;
        }
      }
      else {
        fVar32 = 255.0;
      }
      dVar36 = modf(__x,&stack0x00000108);
      if (dVar36 == 0.5) {
        fVar38 = (float)in_stack_00000108;
        if (((long)in_stack_00000108 & 1U) != 0) {
          fVar38 = (float)in_stack_00000108 + 1.0;
        }
      }
      else {
        fVar38 = 255.0;
      }
      dVar36 = modf(__x,&stack0x00000108);
      if (dVar36 == 0.5) {
        fVar2 = (float)in_stack_00000108;
        if (((long)in_stack_00000108 & 1U) != 0) {
          fVar2 = (float)in_stack_00000108 + 1.0;
        }
      }
      else {
        fVar2 = 255.0;
      }
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_01572184;
      *(uint *)(lVar15 + uVar13 * 4 + 0x20) =
           (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
           (int)fVar2 << 0x18;
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_01572184;
      lVar24 = lVar17 + uVar13 * 0xc;
      *(undefined8 *)(lVar24 + 0x20) = uVar23;
      *(undefined4 *)(lVar24 + 0x28) = uVar1;
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_01572184;
      lVar24 = lVar19 + uVar13 * 0x10;
      uVar13 = uVar13 + 1;
      *(undefined8 *)(lVar24 + 0x28) = uVar3;
      *(undefined8 *)(lVar24 + 0x20) = uVar22;
    } while (in_stack_000000e8 != 0);
  }
  goto LAB_01571f18;
LAB_01571f84:
  do {
    switch(uVar13 & 0xffffffff) {
    case 0:
      if (plVar18 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar18 + 3) <= uVar13) {
LAB_01572184:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      FUN_0266bbc8(in_stack_00000008,plVar18[uVar13 + 4],0);
      break;
    case 1:
      if (plVar18 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar18 + 3) <= uVar13) goto LAB_01572184;
      FUN_0266bc74(in_stack_00000008,plVar18[uVar13 + 4],0);
      break;
    case 2:
      if (plVar18 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar18 + 3) <= uVar13) goto LAB_01572184;
      FUN_0266bd20(in_stack_00000008,plVar18[uVar13 + 4],0);
      break;
    case 3:
      if (plVar18 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar18 + 3) <= uVar13) goto LAB_01572184;
      UnityEngine_UIElements_StylePropertyAnimationSystem__StartTransition
                (in_stack_00000008,plVar18[uVar13 + 4],0);
      break;
    case 4:
      if (plVar18 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar18 + 3) <= uVar13) goto LAB_01572184;
      FUN_0266be78(in_stack_00000008,plVar18[uVar13 + 4],0);
      break;
    case 5:
      if (plVar18 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar18 + 3) <= uVar13) goto LAB_01572184;
      FUN_0266bf24(in_stack_00000008,plVar18[uVar13 + 4],0);
      break;
    case 6:
      if (plVar18 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar18 + 3) <= uVar13) goto LAB_01572184;
      FUN_0266bfd0(in_stack_00000008,plVar18[uVar13 + 4],0);
      break;
    case 7:
      if (plVar18 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar18 + 3) <= uVar13) goto LAB_01572184;
      FUN_0266c07c(in_stack_00000008,plVar18[uVar13 + 4],0);
    }
    uVar13 = uVar13 + 1;
  } while (uVar12 != uVar13);
LAB_015720c8:
  FUN_0266c1dc(in_stack_00000008,lVar15,0);
  FUN_0266db2c(in_stack_00000008,uVar11,0);
  FUN_0266ba70(in_stack_00000008,lVar17,0);
  uVar22 = FUN_0266bb1c(in_stack_00000008,lVar19,0);
  *(undefined8 *)(in_stack_00000010 + 0x18) = in_stack_00000008;
  if (*(char *)(in_stack_00000078 + 0x2c) != '\0') {
    uVar22 = FUN_0156fdac(uVar22,unaff_x26,in_stack_00000010);
    *(undefined8 *)(in_stack_00000010 + 0x20) = uVar22;
  }
  if (*(long *)(in_stack_00000078 + 0x60) != 0) {
    FUN_0129a054(*(long *)(in_stack_00000078 + 0x60),unaff_x26,in_stack_00000010,
                 *(undefined8 *)StringLiteral_910);
    return in_stack_00000010;
  }
LAB_01571f18:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


