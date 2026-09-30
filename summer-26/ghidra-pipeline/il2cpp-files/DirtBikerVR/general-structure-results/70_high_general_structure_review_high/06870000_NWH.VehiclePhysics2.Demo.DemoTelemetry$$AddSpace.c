/*
FUNCTION_NAME: NWH.VehiclePhysics2.Demo.DemoTelemetry$$AddSpace
ENTRY_POINT: 06870000
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void NWH_VehiclePhysics2_Demo_DemoTelemetry__AddSpace(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x9;
  long *in_x10;
  int *piVar3;
  long unaff_x19;
  long unaff_x21;
  int unaff_w23;
  
  if (in_x9 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_06870044;
      }
      in_x9 = in_x9 + -1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_06870044:
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  if (((unaff_w23 == 7) || (unaff_w23 == 0)) && (uVar2 = FUN_0683f8c0(), (uVar2 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 0;
  }
  return;
}


