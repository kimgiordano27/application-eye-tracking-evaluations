/*
FUNCTION_NAME: Obi.ObiNativeList<Vector3>$$Upload<Vector3>
ENTRY_POINT: 01902378
PROGRAM: simulator-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Obi_ObiNativeList<Vector3>__Upload<Vector3>(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  do {
    puVar1 = (undefined8 *)0x0;
    while( true ) {
      *(undefined8 **)(unaff_x21 + unaff_x20 * 8) = puVar1;
      unaff_x20 = unaff_x20 + 1;
      if (unaff_x20 == 0x100) {
        return;
      }
      puVar2 = *(undefined8 **)(unaff_x21 + unaff_x20 * 8);
      if (puVar2 == (undefined8 *)0x0) break;
      puVar1 = (undefined8 *)0x0;
      do {
        puVar3 = (undefined8 *)*puVar2;
        if ((puVar1 == (undefined8 *)0x0) && (puVar2[1] == unaff_x19)) {
          *puVar2 = 0;
          puVar1 = puVar2;
        }
        else if (puVar2 != unaff_x22) {
          FUN_018fd6ec();
        }
        puVar2 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
  } while( true );
}


