/*
FUNCTION_NAME: FUN_05f19ba8
ENTRY_POINT: 05f19ba8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05f19ba8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 local_668;
  undefined8 local_660;
  undefined1 auStack_658 [512];
  undefined1 auStack_458 [512];
  undefined1 auStack_258 [512];
  long local_58;
  
  puVar3 = Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_668 = param_6;
  local_660 = param_3;
  if ((DAT_06dc415d & 1) == 0) {
    FUN_02d965b8(Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__);
    FUN_02d965b8(Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__);
    FUN_02d965b8(Method_System_ReadOnlySpan<ProbeBrickIndex_Brick>_get_Length__);
    FUN_02d965b8(
                Method_Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>__ctor__
                );
    FUN_02d965b8(Method_System_ReadOnlySpan<OVRPlugin_Bool>_get_Length__);
    DAT_06dc415d = 1;
  }
  puVar6 = 
  Method_Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>__ctor__;
  puVar5 = Method_System_ReadOnlySpan<ProbeBrickIndex_Brick>_get_Length__;
  puVar4 = Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__;
  memset(auStack_458,0,0x200);
  FUN_05d3c04c(auStack_458,*(undefined8 *)puVar3,0);
  if (param_2 != 0) {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar9 = 0;
    do {
      lVar1 = (long)iVar9;
      iVar9 = iVar9 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    if (iVar9 != 1) {
      FUN_03647340(auStack_458,0x3a,*(undefined8 *)puVar5);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar9 = -1;
      do {
        iVar9 = iVar9 + 1;
      } while (*(char *)(param_2 + iVar9) != '\0');
      FUN_03647f84(auStack_458,param_2,iVar9,*(undefined8 *)puVar4);
      FUN_03647340(auStack_458,0x3a,*(undefined8 *)puVar5);
      uVar7 = FUN_05542220(&local_660,0);
      FUN_0364738c(auStack_458,uVar7,
                   *(undefined8 *)
                    Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__)
      ;
    }
  }
  if (param_4 != 0) {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar9 = 0;
    do {
      lVar1 = (long)iVar9;
      iVar9 = iVar9 + 1;
    } while (*(char *)(param_4 + lVar1) != '\0');
    if (iVar9 != 1) {
      FUN_03647340(auStack_458,0x3a,*(undefined8 *)puVar5);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar9 = -1;
      do {
        iVar9 = iVar9 + 1;
      } while (*(char *)(param_4 + iVar9) != '\0');
      FUN_03647f84(auStack_458,param_4,iVar9,*(undefined8 *)puVar4);
    }
  }
  FUN_03647340(auStack_458,0x5d,*(undefined8 *)puVar5);
  FUN_03647340(auStack_458,0x20,*(undefined8 *)puVar5);
  uVar7 = FUN_05542220(&local_668,0);
  FUN_03647f84(auStack_458,param_5,uVar7,*(undefined8 *)puVar4);
  memcpy(auStack_658,auStack_458,0x200);
  if (DAT_06dc41b8 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_System_Collections_Generic_LinkedList<WebConnection>_AddFirst__);
    DAT_06dc41b8 = '\x01';
  }
  memcpy(auStack_258,auStack_658,0x200);
  uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)
                              Method_System_Collections_Generic_LinkedList<WebConnection>_AddFirst__
                             ,auStack_258);
  if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
  }
  FUN_0630b598(uVar8,0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


