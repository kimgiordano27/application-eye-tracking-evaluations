/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 04f2d288
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
code_r0x04f2d288:
  puVar2 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(unaff_x23,unaff_w21,puVar2[1]), unaff_x22 != (long *)0x0) {
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_04f2d2f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(unaff_x22,*unaff_x25,9);
LAB_04f2d2f8:
    uVar4 = (*(code *)*puVar2)(unaff_x22,uVar1);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      FUN_05c5458c(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                   *(long *)(unaff_x19 + 0x28),unaff_w21,0);
    }
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == unaff_w20) {
      return;
    }
    unaff_x23 = *(long **)(unaff_x19 + 0x68);
    if (unaff_x23 == (long *)0x0) break;
    param_1 = *unaff_x23;
    unaff_x22 = *(long **)(unaff_x19 + 0x58);
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          in_x9 = (long)*piVar5;
          goto code_r0x04f2d288;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(unaff_x23,*unaff_x24,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


