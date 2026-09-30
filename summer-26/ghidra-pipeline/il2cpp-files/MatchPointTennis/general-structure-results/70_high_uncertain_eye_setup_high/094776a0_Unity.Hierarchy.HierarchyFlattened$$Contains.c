/*
FUNCTION_NAME: Unity.Hierarchy.HierarchyFlattened$$Contains
ENTRY_POINT: 094776a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Hierarchy_HierarchyFlattened__Contains(undefined2 param_1,undefined2 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined2 uStack0000000000000002;
  undefined2 uStack0000000000000006;
  ushort uStack0000000000000012;
  ushort uStack0000000000000014;
  ushort uStack0000000000000016;
  ushort uStack0000000000000018;
  ushort uStack0000000000000020;
  ushort uStack0000000000000024;
  ushort uStack0000000000000028;
  ushort uStack000000000000002c;
  
  uStack0000000000000012 = (ushort)*(byte *)(unaff_x20 + 0x2d);
  uStack0000000000000014 = (ushort)*(byte *)(unaff_x20 + 0x2e);
  uStack0000000000000016 = (ushort)*(byte *)(unaff_x20 + 0x2f);
  uStack0000000000000020 = (ushort)*(byte *)(unaff_x20 + 0x21);
  uStack0000000000000018 = (ushort)*(byte *)(unaff_x20 + 0x21);
  uStack0000000000000002 = param_1;
  uStack0000000000000006 = param_2;
  uStack0000000000000024 = uStack0000000000000016;
  uStack0000000000000028 = uStack0000000000000014;
  uStack000000000000002c = uStack0000000000000012;
  FUN_09477bb0();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>___ctor();
  Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>___ctor();
  lVar2 = FUN_094773e4();
  if ((lVar2 == 0) && (lVar2 = FUN_09477448(), lVar2 == 0)) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c33b0(*(undefined8 *)PTR_DAT_09fd34f8,0);
  }
  else {
    lVar2 = FUN_094773e4();
    if (lVar2 == 0) {
      puVar4 = (undefined8 *)PTR_DAT_09fd34f0;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        puVar4 = (undefined8 *)PTR_DAT_09fd34f0;
      }
    }
    else {
      lVar2 = FUN_09477448();
      if (lVar2 != 0) {
        FUN_09477c28();
        goto LAB_09477820;
      }
      puVar4 = (undefined8 *)PTR_DAT_09fd34e8;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        puVar4 = (undefined8 *)PTR_DAT_09fd34e8;
      }
    }
    FUN_094c6b48(*puVar4,0);
  }
LAB_09477820:
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_09531730();
  if ((uVar3 & 1) != 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(unaff_x20 + 0x28) == 3) {
      FUN_09476530(1);
    }
  }
  lVar2 = FUN_094773e4();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = FUN_09477448();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


