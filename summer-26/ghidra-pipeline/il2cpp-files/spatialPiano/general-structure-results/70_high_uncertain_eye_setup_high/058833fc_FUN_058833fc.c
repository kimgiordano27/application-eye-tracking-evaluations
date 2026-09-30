/*
FUNCTION_NAME: FUN_058833fc
ENTRY_POINT: 058833fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_058833fc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_06bc1157 & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_HashSet<TrackableId>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet<InternedString>_Contains__);
    DAT_06bc1157 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  FUN_058801bc(param_1);
  puVar2 = Method_System_Collections_Generic_HashSet<TrackableId>__ctor__;
  puVar1 = Method_System_Collections_Generic_HashSet<InternedString>_Contains__;
  if (param_2 == 0) goto LAB_0588360c;
  uStack_48 = *(undefined8 *)(param_2 + 0x90);
  local_50 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = FUN_03cd4ff4(&local_50,0,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__)
  ;
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_2 + 0xa8) == 0) {
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar6 = *(long *)puVar1;
      }
      FUN_05883610(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x78),param_2,2);
      lVar6 = *(long *)(param_2 + 0x28);
      if (lVar6 == 0) goto LAB_0588360c;
      uVar4 = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)(lVar6 + 0x50) = uVar4;
      lVar6 = *(long *)(param_2 + 0x28);
      if (lVar6 == 0) goto LAB_0588360c;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(param_2 + 0x98);
      uVar4 = FUN_0588bf08(lVar6,0);
      uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80);
      goto LAB_05883544;
    }
  }
  else if (*(long *)(param_2 + 0xa8) == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067cb910);
    uVar4 = thunk_FUN_02f45270();
    uVar5 = thunk_FUN_02f6ef30(
                              Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__
                              );
    FUN_050d7c20(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02f6ef30(
                              Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_GetEnumerator__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,uVar5);
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar1;
  }
  FUN_05883610(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x78),param_2,10);
  lVar6 = *(long *)(param_2 + 0x28);
  if (lVar6 == 0) {
LAB_0588360c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(param_2 + 0xa8);
  uVar4 = FUN_0588bf08(lVar6,0);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88);
LAB_05883544:
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_058957b4(uVar7,1,uVar9,uVar8,0);
  FUN_05881214(param_1,uVar5,uVar4,uVar7);
  return 1;
}


