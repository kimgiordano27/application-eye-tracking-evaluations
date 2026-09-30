/*
FUNCTION_NAME: FUN_018d3ed4
ENTRY_POINT: 018d3ed4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_018d3ed4(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  long *plVar16;
  undefined8 local_70;
  undefined1 local_64 [4];
  undefined *puVar14;
  
  if ((DAT_03779a3d & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionSetupExtensions_AddAction__);
    thunk_FUN_00d48444(PTR_DAT_033edba0);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_JsonSchema>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(PTR_DAT_033ef338);
    thunk_FUN_00d48444(PTR_DAT_033eb550);
    DAT_03779a3d = 1;
  }
  local_70 = 0;
  if (param_2 == (long *)0x0) {
LAB_018d4178:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar10 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  puVar7 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  puVar6 = Method_UnityEngine_InputSystem_InputActionSetupExtensions_AddAction__;
  puVar5 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  puVar4 = System_Collections_Generic_Dictionary<string,_JsonSchema>_TypeInfo;
  puVar3 = PTR_DAT_033ef338;
  puVar2 = PTR_DAT_033edba0;
  puVar1 = PTR_DAT_033eb550;
  puVar14 = 
  Method_System_Collections_Concurrent_ConcurrentBag<__Il2CppFullySharedGenericType>_System_Collections_ICollection_get_SyncRoot__
  ;
  if ((uVar10 & 1) != 0) {
    plVar16 = (long *)0x0;
    do {
      iVar8 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if (iVar8 == 4) {
        plVar11 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250))
        ;
        if (plVar11 == (long *)0x0) goto LAB_018d4178;
        uVar13 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        uVar10 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
        puVar14 = 
        Method_System_Collections_Concurrent_ConcurrentBag<__Il2CppFullySharedGenericType>_System_Collections_ICollection_get_SyncRoot__
        ;
        if ((uVar10 & 1) == 0) break;
        uVar10 = FUN_015fe560(uVar13,*(undefined8 *)puVar3,5,0);
        if ((uVar10 & 1) == 0) {
          uVar10 = FUN_015fe560(uVar13,*(undefined8 *)puVar1,5,0);
          if ((uVar10 & 1) == 0) {
            FUN_018087ac(param_2,0);
          }
          else {
            if (param_3 == 0) goto LAB_018d4178;
            FUN_01101594(param_3,param_2,local_64,*(undefined8 *)puVar6);
            FUN_01347274(&local_70,local_64,*(undefined8 *)puVar4);
          }
        }
        else {
          plVar16 = (long *)(**(code **)(*param_2 + 0x248))
                                      (param_2,*(undefined8 *)(*param_2 + 0x250));
          if ((plVar16 != (long *)0x0) && (*plVar16 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar16);
          }
        }
      }
      else if (iVar8 == 0xd) {
        puVar14 = PTR_DAT_033f0db8;
        if (plVar16 != (long *)0x0) {
          uVar9 = FUN_00bf141c(&local_70,*(undefined8 *)puVar2);
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
          if (lVar12 != 0) {
            FUN_02021868(lVar12,plVar16,uVar9,0);
            return lVar12;
          }
          goto LAB_018d4178;
        }
        break;
      }
      uVar10 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      puVar14 = 
      Method_System_Collections_Concurrent_ConcurrentBag<__Il2CppFullySharedGenericType>_System_Collections_ICollection_get_SyncRoot__
      ;
    } while ((uVar10 & 1) != 0);
  }
  uVar13 = thunk_FUN_00d48444(puVar14);
  uVar13 = FUN_01801b58(param_2,uVar13,0);
  uVar15 = thunk_FUN_00d48444(
                             Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IBeginDragHandler>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar13,uVar15);
}


