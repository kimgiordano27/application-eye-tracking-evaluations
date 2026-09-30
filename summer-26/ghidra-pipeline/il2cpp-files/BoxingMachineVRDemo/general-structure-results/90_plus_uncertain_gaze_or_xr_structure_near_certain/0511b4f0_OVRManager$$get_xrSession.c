/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 0511b4f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0511b5bc) */

void OVRManager__get_xrSession(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x20;
  long *unaff_x23;
  
  FUN_050c472c();
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_050c47fc(param_1);
  if (unaff_x20 != 0) {
    FUN_050c2e58(param_1);
  }
  do {
    uVar1 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
  } while ((uVar1 & 1) != 0);
  lVar3 = *param_1;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0511b590;
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4(param_1,*unaff_x23,0);
LAB_0511b590:
  (*(code *)*puVar2)(param_1,puVar2[1]);
  return;
}


