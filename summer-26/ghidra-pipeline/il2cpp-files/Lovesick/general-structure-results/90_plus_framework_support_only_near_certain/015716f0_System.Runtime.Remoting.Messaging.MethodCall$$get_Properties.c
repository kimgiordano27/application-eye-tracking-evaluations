/*
FUNCTION_NAME: System.Runtime.Remoting.Messaging.MethodCall$$get_Properties
ENTRY_POINT: 015716f0
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

long System_Runtime_Remoting_Messaging_MethodCall__get_Properties
               (undefined1 param_1 [16],ulong param_2,undefined8 param_3,undefined8 param_4)

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
  undefined *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined4 *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  float *pfVar26;
  undefined8 unaff_x21;
  float *pfVar27;
  uint uVar28;
  long unaff_x26;
  int iVar29;
  long unaff_x27;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
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
  
                    /* catch() { ... } // from try @ 01571654 with catch @ 015716f0
                       catch() { ... } // from try @ 015716ac with catch @ 015716f0 */
                    /* catch() { ... } // from try @ 01571624 with catch @ 015716f4
                       catch() { ... } // from try @ 015716a8 with catch @ 015716f4 */
  FUN_026682c8(param_3,param_4,0);
  FUN_0266622c();
  puVar10 = Method_ReturnMotelKeys_KeyPlaced__;
                    /* try { // try from 01571710 to 01671727 has its CatchHandler @ 01571750 */
  FUN_01347408(unaff_x26 + 0x1c,&stack0x00000080,*(undefined8 *)Method_ReturnMotelKeys_KeyPlaced__);
  in_stack_000000d0 = CONCAT44(fStack0000000000000084,fStack0000000000000080);
  in_stack_000000d8 = in_stack_00000088;
  fVar31 = (float)FUN_026884e4(&stack0x000000d0,0);
  fStack0000000000000064 = (float)param_2;
  FUN_01347408(unaff_x26 + 0x1c,&stack0x00000080,*(undefined8 *)puVar10);
  puVar11 = 
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
    while (uVar14 = FUN_012b894c(&stack0x000000b0,*(undefined8 *)puVar4), (uVar14 & 1) != 0) {
      lVar15 = FUN_00bce924(&stack0x000000b0,*(undefined8 *)puVar8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *(long *)(*(long *)puVar7 + 0x20);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      pcVar17 = (char *)thunk_FUN_00d32ed4(lVar15 + 0x1c,*(undefined8 *)(lVar16 + 0x80));
      fVar34 = (float)param_2;
      if ((*pcVar17 != '\0') &&
         ((*(uint *)(in_stack_00000078 + 0x30) & *(uint *)(lVar15 + 0x18)) != 0)) {
        lVar16 = FUN_0268fd10(unaff_x26,0);
        lVar18 = FUN_0268fd10(lVar15,0);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0269f578(lVar18,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar32 = (float)FUN_026a0f08(lVar16,0);
        fVar35 = fVar34;
        FUN_01347408(lVar15 + 0x1c,&stack0x00000080,*(undefined8 *)puVar10);
        in_stack_000000a0 = CONCAT44(fStack0000000000000084,fStack0000000000000080);
        in_stack_000000a8 = in_stack_00000088;
        fVar33 = (float)FUN_026883b0(&stack0x000000a0,0);
        param_2 = (ulong)(uint)(fVar34 + fVar35);
        FUN_026883b8(fVar32 + fVar33,param_2,&stack0x000000a0,0);
        if (*(long *)(lVar15 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar1 = *(undefined4 *)(*(long *)(lVar15 + 0x50) + 0x18);
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320ebc(lVar16,uVar1,*(undefined8 *)StringLiteral_10550);
        if (*(long *)(lVar15 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar29 = *(int *)(*(long *)(lVar15 + 0x50) + 0x18);
        while (iVar29 = iVar29 + -1, -1 < iVar29) {
          if (*(long *)(lVar15 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(*(long *)(lVar15 + 0x50),iVar29,&stack0x00000080,*(undefined8 *)puVar9);
          param_2 = (ulong)(uint)(fVar34 + fStack0000000000000084);
          FUN_00bbed00(fVar32 + fStack0000000000000080,lVar16,*(undefined8 *)puVar5);
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
        FUN_00bcfbe4(lStack0000000000000058,lVar16,*(undefined8 *)StringLiteral_8822);
      }
    }
    FUN_012b8948(&stack0x000000b0,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebSocket_<HandleQueue>d__34>__
                );
    FUN_015a6dc0(*(undefined8 *)(unaff_x26 + 0x50),lStack0000000000000058,&stack0x000000e8,
                 &stack0x000000e0,0);
    if ((in_stack_000000e8 != 0) && (lVar15 = *(long *)(in_stack_00000078 + 0x50), lVar15 != 0)) {
      uVar1 = *(undefined4 *)(in_stack_000000e8 + 0x18);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_017726a0(8,*(undefined4 *)(lVar15 + 0x18),0);
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar11,uVar1);
      if (in_stack_000000e8 != 0) {
        uVar14 = 0;
        puVar21 = (undefined4 *)(lVar15 + 0x28);
        do {
          if ((long)(int)*(uint *)(in_stack_000000e8 + 0x18) <= (long)uVar14) {
            plVar19 = (long *)FUN_00da4fb8(*(undefined8 *)
                                            System_Runtime_Serialization_FormatterConverter_TypeInfo
                                           ,uVar13);
            if ((int)uVar13 < 1) goto LAB_01571af0;
            uVar14 = 0;
            goto LAB_01571aa0;
          }
          if (*(uint *)(in_stack_000000e8 + 0x18) <= uVar14) goto LAB_01572184;
          if (lVar15 == 0) break;
          if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_01572184;
          uVar23 = *(undefined8 *)(in_stack_000000e8 + uVar14 * 8 + 0x20);
          *puVar21 = 0;
          uVar14 = uVar14 + 1;
          *(undefined8 *)(puVar21 + -2) = uVar23;
          puVar21 = puVar21 + 3;
        } while (in_stack_000000e8 != 0);
      }
    }
  }
  goto LAB_01571f18;
  while( true ) {
    if ((lVar16 != 0) &&
       (lVar18 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar19 + 0x40)), lVar18 == 0)) {
      uVar23 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar23,0);
    }
    if (*(uint *)(plVar19 + 3) <= uVar14) goto LAB_01572184;
    plVar19[uVar14 + 4] = lVar16;
    uVar14 = uVar14 + 1;
    if (uVar13 == uVar14) break;
LAB_01571aa0:
    lVar16 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__,uVar1);
    if (plVar19 == (long *)0x0) goto LAB_01571f18;
  }
LAB_01571af0:
  lVar16 = FUN_00da4fb8(*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo,uVar1);
  lVar18 = FUN_00da4fb8(*(undefined8 *)
                         Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                        ,uVar1);
  lVar20 = FUN_00da4fb8(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                        ,uVar1);
  fVar34 = (float)FUN_015727f8(in_stack_00000070._4_4_,0x3f800000);
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  uVar3 = _LAB_028aa0d8;
  uVar23 = _DAT_028aa0d0;
  __x = DAT_028aa048;
  if (in_stack_000000e8 != 0) {
    fVar35 = fStack0000000000000064 * 0.5;
    uVar24 = *(undefined8 *)
              (*(long *)(*(long *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        + 0xb8) + 0x48);
    uVar1 = *(undefined4 *)
             (*(long *)(*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8) + 0x50);
    uVar14 = 0;
    do {
      uVar12 = in_stack_000000e0;
      if ((long)*(int *)(in_stack_000000e8 + 0x18) <= (long)uVar14) {
        *in_stack_00000068 = fVar31 + *in_stack_00000068;
        FUN_0266ed50(unaff_x21,0);
        uVar23 = FUN_0268b6ac(unaff_x26,0);
        FUN_0268b75c(unaff_x21,uVar23,0);
        FUN_0266b9c4(unaff_x21,lVar15,0);
        if ((int)uVar13 < 1) goto LAB_015720c8;
        uVar14 = 0;
        goto LAB_01571f84;
      }
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_01572184;
      lVar25 = lVar15 + uVar14 * 0xc;
      pfVar26 = (float *)(lVar25 + 0x20);
      fVar33 = *pfVar26;
      pfVar27 = (float *)(lVar25 + 0x24);
      fVar39 = *pfVar27;
      fVar32 = (float)FUN_026883fc(&stack0x000000f0,0);
      fVar33 = fVar33 - fVar32;
      fVar32 = (float)FUN_02688404(&stack0x000000f0,0);
      fVar39 = fVar39 - fVar32;
      if (0 < (int)uVar13) {
        uVar28 = 0;
        fVar32 = fStack0000000000000064;
        do {
          lVar25 = *(long *)(in_stack_00000078 + 0x50);
          if (lVar25 == 0) goto LAB_01571f18;
          if (*(uint *)(lVar25 + 0x18) <= uVar28) goto LAB_01572184;
          lVar30 = (long)(int)uVar28;
          lVar22 = *(long *)(lVar25 + lVar30 * 8 + 0x20);
          if (lVar22 == 0) goto LAB_01571f18;
          fVar40 = *in_stack_00000068;
          fVar2 = 1.0;
          if (*(int *)(lVar22 + 0x14) != 0) {
            fVar2 = fVar32;
          }
          fVar36 = 1.0;
          switch(*(undefined4 *)(lVar22 + 0x10)) {
          case 0:
            break;
          case 1:
            fVar36 = fVar34;
            break;
          case 2:
            fVar36 = fVar2;
            break;
          case 3:
            fVar36 = (float)FUN_015727f8(in_stack_00000070._4_4_,fVar2);
            lVar25 = *(long *)(in_stack_00000078 + 0x50);
            fVar32 = fStack0000000000000064;
            if (lVar25 == 0) goto LAB_01571f18;
            break;
          default:
            fVar36 = in_stack_00000070._4_4_;
            break;
          case 5:
            fVar40 = 0.0;
            fVar36 = fVar31;
          }
          if (*(uint *)(lVar25 + 0x18) <= uVar28) goto LAB_01572184;
          lVar25 = *(long *)(lVar25 + lVar30 * 8 + 0x20);
          if (lVar25 == 0) goto LAB_01571f18;
          fVar38 = fVar36;
          if (*(int *)(lVar25 + 0x14) != 1) {
            fVar38 = fVar2;
          }
          if (plVar19 == (long *)0x0) goto LAB_01571f18;
          if (*(uint *)(plVar19 + 3) <= uVar28) goto LAB_01572184;
          lVar25 = plVar19[lVar30 + 4];
          if (lVar25 == 0) goto LAB_01571f18;
          if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_01572184;
          uVar28 = uVar28 + 1;
          lVar25 = lVar25 + uVar14 * 8;
          *(float *)(lVar25 + 0x20) = ((fVar31 + fVar40) - fVar33) / fVar36;
          *(float *)(lVar25 + 0x24) = fVar39 / fVar38;
        } while (uVar13 != uVar28);
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_01572184;
      *pfVar26 = fVar33 - fVar31 * 0.5;
      *pfVar27 = fVar39 - fVar35;
      *(undefined4 *)(lVar15 + uVar14 * 0xc + 0x28) = 0;
      dVar37 = modf(__x,&stack0x00000108);
      if (dVar37 == 0.5) {
        fVar32 = (float)in_stack_00000108;
        if (((long)in_stack_00000108 & 1U) != 0) {
          fVar32 = (float)in_stack_00000108 + 1.0;
        }
      }
      else {
        fVar32 = 255.0;
      }
      dVar37 = modf(__x,&stack0x00000108);
      if (dVar37 == 0.5) {
        fVar33 = (float)in_stack_00000108;
        if (((long)in_stack_00000108 & 1U) != 0) {
          fVar33 = (float)in_stack_00000108 + 1.0;
        }
      }
      else {
        fVar33 = 255.0;
      }
      dVar37 = modf(__x,&stack0x00000108);
      if (dVar37 == 0.5) {
        fVar39 = (float)in_stack_00000108;
        if (((long)in_stack_00000108 & 1U) != 0) {
          fVar39 = (float)in_stack_00000108 + 1.0;
        }
      }
      else {
        fVar39 = 255.0;
      }
      dVar37 = modf(__x,&stack0x00000108);
      if (dVar37 == 0.5) {
        fVar2 = (float)in_stack_00000108;
        if (((long)in_stack_00000108 & 1U) != 0) {
          fVar2 = (float)in_stack_00000108 + 1.0;
        }
      }
      else {
        fVar2 = 255.0;
      }
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_01572184;
      *(uint *)(lVar16 + uVar14 * 4 + 0x20) =
           (int)fVar32 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar39 & 0xffU) << 0x10 |
           (int)fVar2 << 0x18;
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_01572184;
      lVar25 = lVar18 + uVar14 * 0xc;
      *(undefined8 *)(lVar25 + 0x20) = uVar24;
      *(undefined4 *)(lVar25 + 0x28) = uVar1;
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_01572184;
      lVar25 = lVar20 + uVar14 * 0x10;
      uVar14 = uVar14 + 1;
      *(undefined8 *)(lVar25 + 0x28) = uVar3;
      *(undefined8 *)(lVar25 + 0x20) = uVar23;
    } while (in_stack_000000e8 != 0);
  }
  goto LAB_01571f18;
LAB_01571f84:
  do {
    switch(uVar14 & 0xffffffff) {
    case 0:
      if (plVar19 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar19 + 3) <= uVar14) {
LAB_01572184:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      FUN_0266bbc8(unaff_x21,plVar19[uVar14 + 4],0);
      break;
    case 1:
      if (plVar19 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar19 + 3) <= uVar14) goto LAB_01572184;
      FUN_0266bc74(unaff_x21,plVar19[uVar14 + 4],0);
      break;
    case 2:
      if (plVar19 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar19 + 3) <= uVar14) goto LAB_01572184;
      FUN_0266bd20(unaff_x21,plVar19[uVar14 + 4],0);
      break;
    case 3:
      if (plVar19 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar19 + 3) <= uVar14) goto LAB_01572184;
      UnityEngine_UIElements_StylePropertyAnimationSystem__StartTransition
                (unaff_x21,plVar19[uVar14 + 4],0);
      break;
    case 4:
      if (plVar19 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar19 + 3) <= uVar14) goto LAB_01572184;
      FUN_0266be78(unaff_x21,plVar19[uVar14 + 4],0);
      break;
    case 5:
      if (plVar19 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar19 + 3) <= uVar14) goto LAB_01572184;
      FUN_0266bf24(unaff_x21,plVar19[uVar14 + 4],0);
      break;
    case 6:
      if (plVar19 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar19 + 3) <= uVar14) goto LAB_01572184;
      FUN_0266bfd0(unaff_x21,plVar19[uVar14 + 4],0);
      break;
    case 7:
      if (plVar19 == (long *)0x0) goto LAB_01571f18;
      if (*(uint *)(plVar19 + 3) <= uVar14) goto LAB_01572184;
      FUN_0266c07c(unaff_x21,plVar19[uVar14 + 4],0);
    }
    uVar14 = uVar14 + 1;
  } while (uVar13 != uVar14);
LAB_015720c8:
  FUN_0266c1dc(unaff_x21,lVar16,0);
  FUN_0266db2c(unaff_x21,uVar12,0);
  FUN_0266ba70(unaff_x21,lVar18,0);
  uVar23 = FUN_0266bb1c(unaff_x21,lVar20,0);
  *(undefined8 *)(unaff_x27 + 0x18) = unaff_x21;
  if (*(char *)(in_stack_00000078 + 0x2c) != '\0') {
    uVar23 = FUN_0156fdac(uVar23,unaff_x26,unaff_x27);
    *(undefined8 *)(unaff_x27 + 0x20) = uVar23;
  }
  if (*(long *)(in_stack_00000078 + 0x60) != 0) {
    FUN_0129a054(*(long *)(in_stack_00000078 + 0x60),unaff_x26,unaff_x27,
                 *(undefined8 *)StringLiteral_910);
    return unaff_x27;
  }
LAB_01571f18:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


