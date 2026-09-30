/*
FUNCTION_NAME: Cognitive3D.PhysicsGaze$$OnEndSessionEvent
ENTRY_POINT: 042ec208
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: validity_gate;ray_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_PhysicsGaze__OnEndSessionEvent(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x19 + 0x60);
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_042ec258;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_042ec258:
  uVar1 = (*(code *)*puVar2)();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar3 = *plVar6;
                    /* try { // try from 042ec270 to 043ec2f7 has its CatchHandler @ 042ec55c */
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f69be0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xf) * 0x10 + 0x138);
        goto LAB_042ec2c4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f69be0,0xf);
LAB_042ec2c4:
                    /* WARNING: Could not recover jumptable at 0x042ec2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar1,0,puVar2[1]);
  return;
}


