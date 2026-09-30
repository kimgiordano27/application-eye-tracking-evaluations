/*
FUNCTION_NAME: FUN_04186374
ENTRY_POINT: 04186374
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_04186374(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_0552aca4(param_1,0);
  if (param_2 < 0) {
    FUN_05509450(0xc,4,0);
  }
  else if (param_2 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    uVar2 = **(undefined8 **)(lVar1 + 0xb8);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    goto Unity_Collections_NativeArray<Binding_Baselib_RegisteredNetwork_Request>__op_Implicit;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  uVar2 = FUN_02d966a4(lVar1,param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
Unity_Collections_NativeArray<Binding_Baselib_RegisteredNetwork_Request>__op_Implicit:
  LeanTween__value(param_1 + 0x10,uVar2);
  return;
}


