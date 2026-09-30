/*
FUNCTION_NAME: FUN_0783aa50
ENTRY_POINT: 0783aa50
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0783ad4c) */

void FUN_0783aa50(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  undefined1 local_40 [16];
  long local_28;
  
  if ((DAT_08272491 & 1) == 0) {
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_fsData>_get_Current__
                );
    FUN_0373b518(Method_UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_Get__);
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(
                Method_System_Collections_Concurrent_ConcurrentQueue<StrikerProfiler_StrikerProfilerEntry>_GetEnumerator__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_Dispose__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<Nullable<int>>_GetAwaiter__
                );
    FUN_0373b518(Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<byte[]>_GetAwaiter__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_get_Current__
                );
    DAT_08272491 = 1;
  }
  local_28 = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (param_2 == (long *)0x0) {
LAB_0783ad34:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((char)param_2[2] == '\0') {
    if (0 < (int)param_2[0x68]) {
      if (*(int *)(*(long *)Method_UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_Get__ +
                  0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      local_40 = FUN_0544a9f4(&local_28,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary_Enumerator<string,_fsData>_get_Current__
                             );
      lVar3 = local_28;
      local_48 = param_2[0x88];
      uVar7 = FUN_07721974(&local_48,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4(uVar7,uVar7);
      }
      FUN_049cf100(lVar3,uVar7,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<Nullable<int>>_GetAwaiter__
                  );
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_049cf910(&local_78,local_28,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<byte[]>_GetAwaiter__
                  );
      puVar2 = 
      Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__
      ;
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      do {
        do {
          uVar8 = FUN_05d64e98(&local_60,*(undefined8 *)puVar2);
          lVar3 = local_50;
          if ((uVar8 & 1) == 0) goto LAB_0783ac6c;
          if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          local_48 = *(long *)(local_50 + 0x440);
          plVar6 = (long *)FUN_07721958(&local_48,0);
        } while (plVar6 != param_2);
        FUN_0783aa50(param_1,lVar3);
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
      } while ((*(byte *)(param_1 + 0x34) & 1) == 0);
LAB_0783ac6c:
      FUN_05d64e94(&local_60,
                   *(undefined8 *)
                    Method_System_Collections_Concurrent_ConcurrentQueue<StrikerProfiler_StrikerProfilerEntry>_GetEnumerator__
                  );
      FUN_04fafc80(local_40,*(undefined8 *)
                             Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_MoveNext__
                  );
    }
  }
  else {
    if (param_1 == 0) goto LAB_0783ad34;
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 != param_2) {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_Dispose__
                       + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_Dispose__
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(param_2);
      }
      if (plVar6 == (long *)0x0) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        uVar4 = uVar4 ^ 1;
      }
      uVar8 = FUN_07852f54(param_2,param_1,uVar4 & 1,1,0);
      uVar4 = *(uint *)(param_1 + 0x34);
      if ((uVar8 & 1) != 0) {
        uVar4 = uVar4 | 1;
        *(uint *)(param_1 + 0x34) = uVar4;
      }
      if (((uVar4 >> 4 & 1) == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_0783ad34;
      iVar5 = FUN_075fd7f0(*(long *)(param_1 + 0x50),0);
      if (iVar5 == 0xc) {
        uVar4 = *(uint *)(param_1 + 0x34);
        if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_0755e78c(uVar4 & 1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_get_Current__
                     ,0);
      }
    }
  }
  return;
}


