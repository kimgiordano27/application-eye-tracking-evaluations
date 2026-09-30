/*
FUNCTION_NAME: UniGLTF.MeshUploader$$BuildMeshAndUploadAsync
ENTRY_POINT: 02f95618
PROGRAM: vrlegs-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f95770) */
/* WARNING: Removing unreachable block (ram,0x02f95718) */
/* WARNING: Removing unreachable block (ram,0x02f95780) */
/* WARNING: Removing unreachable block (ram,0x02f9573c) */

long UniGLTF_MeshUploader__BuildMeshAndUploadAsync(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x24;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x28) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_02f95678;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01a472ec();
LAB_02f95678:
  uVar2 = (*(code *)*puVar1)();
  *(undefined8 *)(unaff_x24 + 0x20) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  plVar3 = (long *)thunk_FUN_01a89d6c();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f95700;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01a472ec(plVar3,*unaff_x27,0);
LAB_02f95700:
    (*(code *)*puVar1)(plVar3,puVar1[1]);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return unaff_x24;
}


