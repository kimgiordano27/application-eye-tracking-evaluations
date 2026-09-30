/*
FUNCTION_NAME: FUN_07814560
ENTRY_POINT: 07814560
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_4
*/


void FUN_07814560(float param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  float fVar20;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  if ((DAT_08272336 & 1) == 0) {
    FUN_0373b518(
                Method_System_Collections_Concurrent_ConcurrentQueue<StrikerProfiler_StrikerProfilerEntry>_GetEnumerator__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>__ctor__
                );
    FUN_0373b518(PTR_DAT_07d86c58);
    FUN_0373b518(Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<byte[]>_GetAwaiter__
                );
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<Guid,_Action<Guid>>_TryGetValue__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_Dispose__
                );
    FUN_0373b518(PTR_DAT_07d96fa8);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionConfig>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_Dispose__
                );
    DAT_08272336 = 1;
  }
  puVar11 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_Dispose__;
  puVar10 = 
  Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionConfig>_Dispose__
  ;
  puVar9 = 
  Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_Dispose__
  ;
  puVar8 = Method_System_Collections_Generic_Dictionary<Guid,_Action<Guid>>_TryGetValue__;
  puVar7 = Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<byte[]>_GetAwaiter__;
  puVar6 = 
  Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__;
  puVar5 = 
  Method_System_Collections_Concurrent_ConcurrentQueue<StrikerProfiler_StrikerProfilerEntry>_GetEnumerator__
  ;
  puVar4 = PTR_DAT_07d86c58;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if ((*(long *)(param_5 + 0x38) != 0) &&
     (lVar19 = *(long *)(*(long *)(param_5 + 0x38) + 0x4c0), lVar19 != 0)) {
    lVar13 = FUN_049cec24(lVar19,0,*(undefined8 *)PTR_DAT_07d96fa8);
    plVar18 = (long *)(param_5 + 0x50);
    *plVar18 = lVar13;
    thunk_FUN_037aeb94(plVar18,lVar13);
    FUN_049cf910(&local_b0,lVar19,*(undefined8 *)puVar7);
    fVar20 = 0.0;
    uStack_88 = uStack_a8;
    local_90 = local_b0;
    local_80 = local_a0;
    do {
      uVar14 = FUN_05d64e98(&local_90,*(undefined8 *)puVar6);
      lVar19 = local_80;
      if ((uVar14 & 1) == 0) goto LAB_07814720;
      if (*(char *)(param_5 + 0x79) == '\0') {
        if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_07714198(local_80,0);
        param_4 = param_3;
      }
      else {
        if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_07714198(local_80,0);
      }
      fVar20 = fVar20 + (float)param_4;
    } while (fVar20 <= param_1);
    *plVar18 = lVar19;
    thunk_FUN_037aeb94(plVar18,lVar19);
LAB_07814720:
    FUN_05d64e94(&local_90,*(undefined8 *)puVar5);
    FUN_07813484(param_5,1);
    *(float *)(param_5 + 0x28) = param_1;
    uVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_07812de0();
    *(undefined8 *)(param_5 + 0x40) = uVar15;
    thunk_FUN_037aeb94((undefined8 *)(param_5 + 0x40),uVar15);
    lVar19 = thunk_FUN_037788cc(*(undefined8 *)puVar10);
    FUN_07812f30();
    if (lVar19 != 0) {
      lVar13 = FUN_07716374(lVar19,0);
      lVar16 = *(long *)puVar10;
      cVar2 = *(char *)(param_5 + 0x79);
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar16);
        lVar16 = *(long *)puVar10;
      }
      lVar1 = 0x18;
      if (cVar2 != '\0') {
        lVar1 = 0x10;
      }
      if (lVar13 != 0) {
        lVar17 = *(long *)(lVar13 + 0x10);
        uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + lVar1);
        lVar16 = *(long *)puVar4;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar17 != 0) {
          uVar3 = *(uint *)(lVar13 + 0x18);
          if (uVar3 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar17 + (long)(int)uVar3 * 8 + 0x20) = uVar15;
            thunk_FUN_037aeb94();
          }
          else {
            FUN_049ceef4(lVar13,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(param_5 + 0x48) = lVar19;
          thunk_FUN_037aeb94((long *)(param_5 + 0x48),lVar19);
          if (*(long *)(param_5 + 0x30) != 0) {
            local_98 = *(undefined8 *)(*(long *)(param_5 + 0x30) + 0x440);
            FUN_07721998(&local_98,*(undefined8 *)(param_5 + 0x40),0);
            if (*(long *)(param_5 + 0x30) != 0) {
              FUN_0771dbc4(*(long *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x48),0);
              if ((*(long *)(param_5 + 0x38) != 0) &&
                 (lVar19 = *(long *)(*(long *)(param_5 + 0x38) + 0x4c0), lVar19 != 0)) {
                uVar12 = FUN_049cfab8(lVar19,*(undefined8 *)(param_5 + 0x50),*(undefined8 *)puVar8);
                if ((*(long *)(param_5 + 0x38) != 0) &&
                   (lVar19 = *(long *)(*(long *)(param_5 + 0x38) + 0x4b8), lVar19 != 0)) {
                  uVar15 = FUN_049cec24(lVar19,uVar12,*(undefined8 *)puVar11);
                  if (*(long *)(param_5 + 0x38) != 0) {
                    FUN_07815104(*(long *)(param_5 + 0x38),uVar15,0);
                    if (*(long *)(param_5 + 0x70) != 0) {
                      uVar12 = FUN_07813260(*(long *)(param_5 + 0x70),
                                            *(undefined8 *)(param_5 + 0x50));
                      *(undefined4 *)(param_5 + 0x58) = uVar12;
                      FUN_07814970(param_5);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


