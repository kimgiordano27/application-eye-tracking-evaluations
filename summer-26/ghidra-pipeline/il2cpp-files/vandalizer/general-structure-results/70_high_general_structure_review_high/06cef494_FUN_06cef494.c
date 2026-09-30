/*
FUNCTION_NAME: FUN_06cef494
ENTRY_POINT: 06cef494
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_06cef494(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = System_Predicate<NavMeshBuildSource>_TypeInfo;
  puVar3 = System_Predicate<LogEntry>_TypeInfo;
  if ((DAT_07a50b17 & 1) == 0) {
    FUN_031f20f4(System_Predicate<LogEntry>_TypeInfo);
    FUN_031f20f4(System_Predicate<NavMeshBuildSource>_TypeInfo);
    FUN_031f20f4(Photon_Voice_IAudioPusher<float>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<DerObjectIdentifier>_TypeInfo);
    DAT_07a50b17 = 1;
  }
  lVar4 = FUN_03d78ef4(param_1,*(undefined8 *)puVar3);
  plVar6 = (long *)(param_1 + 0xe0);
  *plVar6 = lVar4;
  thunk_FUN_0329bf60(plVar6,lVar4);
  lVar7 = *plVar6;
  lVar4 = thunk_FUN_0322f04c(lVar7,*(undefined8 *)puVar2);
  plVar8 = (long *)(param_1 + 0xe8);
  *plVar8 = lVar4;
  uVar5 = thunk_FUN_0322f04c(lVar7,*(undefined8 *)puVar2);
  thunk_FUN_0329bf60(plVar8,uVar5);
  *(bool *)(param_1 + 0xf0) = *plVar8 != 0;
  puVar3 = System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo;
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo)) {
      *(long **)(param_1 + 0x108) = plVar8;
      thunk_FUN_0329bf60(param_1 + 0x108,plVar8);
      plVar8 = *(long **)(param_1 + 0xe0);
      *(undefined1 *)(param_1 + 0x1c1) = 1;
    }
    puVar2 = Photon_Voice_IAudioPusher<float>_TypeInfo;
    lVar4 = thunk_FUN_0322f04c(plVar8,*(undefined8 *)puVar3);
    if (lVar4 != 0) {
      *(long *)(param_1 + 0xf8) = lVar4;
      thunk_FUN_0329bf60((long *)(param_1 + 0xf8),lVar4);
      *(undefined1 *)(param_1 + 0x1c3) = 1;
    }
    lVar4 = thunk_FUN_0322f04c(*plVar6,*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      *(long *)(param_1 + 0x100) = lVar4;
      thunk_FUN_0329bf60(param_1 + 0x100);
      *(undefined1 *)(param_1 + 0x1c2) = 1;
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)System_Collections_Generic_HashSet<DerObjectIdentifier>_TypeInfo +
                       0x130);
      if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Collections_Generic_HashSet<DerObjectIdentifier>_TypeInfo)) {
        *(long **)(param_1 + 0x110) = plVar6;
        thunk_FUN_0329bf60(param_1 + 0x110);
        *(undefined1 *)(param_1 + 0x1c0) = 1;
      }
    }
  }
  FUN_06cef6b0(param_1);
  FUN_06cef020(param_1);
  FUN_06cef1a8(param_1);
  FUN_06cef768(param_1);
  FUN_06cef3b4(param_1);
  return;
}


