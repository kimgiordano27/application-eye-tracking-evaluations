/*
FUNCTION_NAME: FUN_01d18698
ENTRY_POINT: 01d18698
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


void FUN_01d18698(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 local_60 [16];
  int local_44;
  
  if ((DAT_0377f2bf & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Events_UnityEvent<ObiParticlePicker_ParticlePickEventArgs>_Invoke__
                      );
    thunk_FUN_00d48444(StringLiteral_4871);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__);
    thunk_FUN_00d48444(PTR_DAT_033f58e0);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_VolumeParameter<DepthOfFieldMode>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SerializationErrorCallback>_Add__);
    thunk_FUN_00d48444(Obi_OniConstraintsBatchImpl_TypeInfo);
    thunk_FUN_00d48444(Method_CatchPhrasePuzzle_WordPlaced__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_729);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnStopListening__
                      );
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DebugUIPrefabBundle>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_u32__);
    DAT_0377f2bf = 1;
  }
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  lVar12 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_u32__);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(lVar7,0);
    puVar4 = PTR_DAT_033f58e0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_017d6b74(param_1 + 10,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar11 = *(long *)(lVar12 + 0x60);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar6 = *(int *)(lVar11 + 0x18);
    iVar1 = *(int *)(lVar11 + 0x1c);
    iVar2 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18);
    iVar3 = param_1[0xc];
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar6 = FUN_017726a0(iVar2 - (iVar1 + iVar6),iVar3,0);
    *(int *)(lVar7 + 0x18) = iVar6;
    if (iVar6 == 0) {
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      lVar12 = thunk_FUN_00d62348();
      if (lVar12 != 0) {
        FUN_0177134c(lVar12,0);
        uVar10 = thunk_FUN_00d48444(Method_System_Runtime_Serialization_ObjectManager_RecordFixup__)
        ;
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar12,uVar10);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((char)param_1[0xd] == '\0') {
      lVar7 = *(long *)(lVar12 + 0x60);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar8 = *(long **)(lVar12 + 0x28);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = (**(code **)(*plVar8 + 0x2b8))
                        (plVar8,*(undefined8 *)(lVar7 + 0x10),
                         *(int *)(lVar7 + 0x18) + *(int *)(lVar7 + 0x1c),iVar6,
                         *(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar8 + 0x2c0));
    }
    else {
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)Method_CatchPhrasePuzzle_WordPlaced__);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_012d1810(lVar11,lVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<DebugUIPrefabBundle>_MoveNext__
                   ,0);
      if (*(int *)(*(long *)
                    Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = FUN_01148454(lVar11,*(undefined8 *)
                                   Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnStopListening__
                          );
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_60 = FUN_013bdbc8(lVar7,0,*(undefined8 *)StringLiteral_729);
    uVar9 = FUN_0127e6c0(local_60,*(undefined8 *)Obi_OniConstraintsBatchImpl_TypeInfo);
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(param_1 + 2,local_60,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<ObiParticlePicker_ParticlePickEventArgs>_Invoke__
                  );
      return;
    }
  }
  FUN_0127e70c(local_60,&local_44,
               *(undefined8 *)
                Method_System_Collections_Generic_List<SerializationErrorCallback>_Add__);
  iVar6 = local_44;
  if (-1 < local_44) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar12 = *(long *)(lVar12 + 0x60);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar1 = *(int *)(lVar12 + 0x20) + local_44;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + local_44;
    *(int *)(lVar12 + 0x20) = iVar1;
    if (local_44 == 0) {
      iVar6 = -(uint)(0 < iVar1);
      *(undefined1 *)(lVar12 + 0x24) = 1;
    }
  }
  *param_1 = -2;
  puVar4 = StringLiteral_4871;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_44 = iVar6;
  FUN_011ccb9c(param_1 + 2,&local_44,*(undefined8 *)puVar4);
  return;
}


