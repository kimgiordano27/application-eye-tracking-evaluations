/*
FUNCTION_NAME: FUN_04a8efc0
ENTRY_POINT: 04a8efc0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_04a8efc0(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
LAB_04a8f060:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)((long)param_1 + 0xc) == *(int *)(lVar2 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)uVar1 * 0x18;
          lVar4 = *(long *)(lVar2 + 0x28);
          lVar3 = *(long *)(lVar2 + 0x20);
          param_1[4] = *(long *)(lVar2 + 0x30);
          param_1[3] = lVar4;
          param_1[2] = lVar3;
          thunk_FUN_02dd37b4(param_1 + 3,0);
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      goto LAB_04a8f060;
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__Dispose
            (param_1);
  return 0;
}


