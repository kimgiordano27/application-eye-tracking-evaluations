/*
FUNCTION_NAME: FUN_05c41ab4
ENTRY_POINT: 05c41ab4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05c41ab4(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int local_24;
  
  if ((DAT_06dc282f & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                );
    DAT_06dc282f = 1;
  }
  local_24 = 0;
  FUN_05c403c4(param_1);
  if (param_2 == (long *)0x0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar6 = thunk_FUN_02dd3144();
    uVar4 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<AITournament_Tier,_float>__ctor__
                              );
    FUN_0544bf54(uVar6,uVar4,0);
  }
  else {
    lVar5 = *param_2;
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                     + 0x130);
    if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__)) {
      param_2 = (long *)FUN_05c41c30(param_1,param_2);
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *param_2;
    }
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = (**(code **)(lVar5 + 0x188))(param_2,*(undefined8 *)(lVar5 + 400));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    FUN_05c41ce8(uVar6,uVar4,&local_24);
    iVar3 = local_24;
    if (local_24 == 0) {
      *(long *)(param_1 + 0x38) = (long)param_2;
      *(undefined1 *)(param_1 + 0x51) = 1;
      LeanTween__value((long *)(param_1 + 0x38),param_2);
      return;
    }
    thunk_FUN_02dfd288(Oculus_Platform_Models_LaunchUnblockFlowResult_TypeInfo);
    uVar6 = thunk_FUN_02dd3144();
    FUN_05c4675c(uVar6,iVar3,0);
  }
  uVar4 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_Dictionary<AITournament_Tier,_float>_get_Item__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar6,uVar4);
}


