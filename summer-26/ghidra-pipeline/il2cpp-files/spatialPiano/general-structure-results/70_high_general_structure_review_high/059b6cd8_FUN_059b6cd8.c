/*
FUNCTION_NAME: FUN_059b6cd8
ENTRY_POINT: 059b6cd8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x059b6e54) */

void FUN_059b6cd8(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar2 = Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__;
  if ((DAT_06bc1c53 & 1) == 0) {
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__);
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_Unity_Collections_NativeArray<long>_Dispose__);
    DAT_06bc1c53 = 1;
  }
  puVar1 = Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar3 = (long *)FUN_0442be88(0,param_2,*(undefined8 *)puVar1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_0635e004(plVar3,param_1,0);
  *(undefined4 *)((long)param_1 + 0x37c) = param_2;
  (**(code **)(*param_1 + 0x188))(param_1,plVar3,*(undefined8 *)(*param_1 + 400));
  puVar2 = Method_Unity_Collections_NativeArray<long>_Dispose__;
  lVar4 = *(long *)Method_Unity_Collections_NativeArray<long>_Dispose__;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar2;
  }
  FUN_06361d7c(param_1,*(undefined8 *)(lVar4 + 0xb8),0);
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059b6e2c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)PTR_DAT_067c91b0,0);
LAB_059b6e2c:
    (*(code *)*puVar5)(plVar3,puVar5[1]);
  }
  return;
}


