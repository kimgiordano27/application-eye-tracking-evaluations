/*
FUNCTION_NAME: FUN_0149ed28
ENTRY_POINT: 0149ed28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0149f298) */
/* WARNING: Removing unreachable block (ram,0x0149f368) */
/* WARNING: Removing unreachable block (ram,0x0149f4a0) */
/* WARNING: Removing unreachable block (ram,0x0149f4d0) */

void FUN_0149ed28(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_03776c98 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_2298);
    thunk_FUN_00d48444(StringLiteral_9440);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_SendUpdates__);
    thunk_FUN_00d48444(UnityEngine_Events_UnityAction<byte[],_int,_int>_TypeInfo);
    thunk_FUN_00d48444(System_Security_Util_Tokenizer_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<LogType,_SeverityEntry>_Add__);
    thunk_FUN_00d48444(Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7944);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<DoReadAsBytesAsync>d__42>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<RoomServiceTempoTarget_AudioSourcePitchSet>_MoveNext__
                      );
    thunk_FUN_00d48444(UnityEngine_Events_CachedInvokableCall<bool>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRPlugin_Result>__);
    thunk_FUN_00d48444(System_Data_UniqueConstraint_var);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(PTR_DAT_033f4b38);
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12196);
    thunk_FUN_00d48444(StringLiteral_4653);
    thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    thunk_FUN_00d48444(System_Linq_Expressions_Block4_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NavMeshLink>_Remove__);
    thunk_FUN_00d48444(UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo);
    DAT_03776c98 = 1;
  }
  puVar1 = Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_TypeInfo;
  uStack_88 = 0;
  local_80 = 0;
  local_90 = (long *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0129a9f4(*(long *)(param_1 + 0x20),
                 *(undefined8 *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_SendUpdates__
                );
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((((lVar6 != 0) &&
         (FUN_01298da0(lVar6,*(undefined8 *)System_Security_Util_Tokenizer_TypeInfo),
         param_2 != (long *)0x0)) &&
        (plVar7 = (long *)(**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310))
        , plVar7 != (long *)0x0)) &&
       ((plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                    (plVar7,*(undefined8 *)System_Linq_Expressions_Block4_TypeInfo,
                                     *(undefined8 *)(*plVar7 + 0x1b0)), plVar7 != (long *)0x0 &&
        (plVar7 = (long *)(**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250)),
        plVar7 != (long *)0x0)))) {
      lVar15 = *plVar7;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)Method_OVRTask_FromResult<OVRPlugin_Result>__) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0149ef94;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_00d59724(plVar7,*(long *)Method_OVRTask_FromResult<OVRPlugin_Result>__,0);
LAB_0149ef94:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
      puVar4 = 
      Method_System_Collections_Generic_List_Enumerator<RoomServiceTempoTarget_AudioSourcePitchSet>_MoveNext__
      ;
      puVar3 = Method_System_Collections_Generic_Dictionary<LogType,_SeverityEntry>_Add__;
      puVar2 = UnityEngine_Events_UnityAction<byte[],_int,_int>_TypeInfo;
      puVar1 = UnityEngine_Events_CachedInvokableCall<bool>_TypeInfo;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar15 = *plVar7;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
               ) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0149f028;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_00d59724(plVar7,*(long *)
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                              ,0);
LAB_0149f028:
        uVar16 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar16 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_0149f3e0;
          lVar15 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 == 0) goto LAB_0149f3b0;
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_0149f398;
        }
        lVar15 = *plVar7;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)System_Data_UniqueConstraint_var) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0149f08c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)System_Data_UniqueConstraint_var,0);
LAB_0149f08c:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar10 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,0,*(undefined8 *)(*plVar9 + 400));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x1a8))
                                    (plVar10,*(undefined8 *)StringLiteral_4653,
                                     *(undefined8 *)(*plVar10 + 0x1b0));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar11 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
        plVar10 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,0,*(undefined8 *)(*plVar9 + 400));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x1a8))
                                    (plVar10,*(undefined8 *)
                                              System_Collections_Generic_List<HashSet<Face>>_TypeInfo
                                     ,*(undefined8 *)(*plVar10 + 0x1b0));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
        plVar9 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,0,*(undefined8 *)(*plVar9 + 400));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                   (plVar9,*(undefined8 *)
                                            Method_System_Collections_Generic_List<NavMeshLink>_Remove__
                                    ,*(undefined8 *)(*plVar9 + 0x1b0));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar13 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        uVar13 = FUN_0149f608(param_1,uVar13,uVar12);
        lVar15 = FUN_010dfe04(uVar13,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>__ctor__
                             );
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(lVar15,&local_a8,*(undefined8 *)PTR_DAT_033f4b38);
        uStack_88 = uStack_a0;
        local_90 = local_a8;
        local_80 = local_98;
        while (uVar16 = FUN_012b894c(&local_90,*(undefined8 *)puVar4), (uVar16 & 1) != 0) {
          uVar13 = FUN_00acc7cc(&local_90,*(undefined8 *)puVar1);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar16 = FUN_0129aa60(*(long *)(param_1 + 0x20),uVar13,*(undefined8 *)puVar2);
          if ((uVar16 & 1) == 0) {
            lVar18 = *(long *)(param_1 + 0x20);
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                       );
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01320e50(lVar14,*(undefined8 *)
                                 System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0129a054(lVar18,uVar13,lVar14,*(undefined8 *)StringLiteral_9440);
          }
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01299bc0(*(long *)(param_1 + 0x20),uVar13,&local_78,*(undefined8 *)puVar3);
          if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00ac1158(local_78,uVar11,*(undefined8 *)puVar5);
        }
        FUN_012b8948(&local_90,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<DoReadAsBytesAsync>d__42>__
                    );
        FUN_010d9fe8(lVar15,&local_70,*(undefined8 *)StringLiteral_7944);
        uStack_68 = local_70;
        local_70 = uVar12;
        FUN_0129a054(lVar6,uVar11,&local_70,*(undefined8 *)StringLiteral_2298);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0149f398:
    if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
      puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0149f3d4;
    }
  }
LAB_0149f3b0:
  puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_10310,0);
LAB_0149f3d4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0149f3e0:
  puVar1 = UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo;
  uVar11 = *(undefined8 *)StringLiteral_12196;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uStack_a0 = FUN_01780344(uVar11,0);
  local_a8 = param_2;
  FUN_0129a054(lVar6,*(undefined8 *)puVar1,&local_a8,*(undefined8 *)StringLiteral_2298);
  FUN_0149f930(param_1,lVar6);
  return;
}


