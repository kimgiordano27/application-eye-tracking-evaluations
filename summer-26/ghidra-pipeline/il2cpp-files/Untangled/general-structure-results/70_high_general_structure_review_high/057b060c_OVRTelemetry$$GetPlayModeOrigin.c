/*
FUNCTION_NAME: OVRTelemetry$$GetPlayModeOrigin
ENTRY_POINT: 057b060c
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetry__GetPlayModeOrigin(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  while( true ) {
                    /* try { // try from 057b0614 to 058b06ab has its CatchHandler @ 057b0614
                       catch() { ... } // from try @ 057b0614 with catch @ 057b0614
                       catch() { ... } // from try @ 057b077c with catch @ 057b0614
                       catch() { ... } // from try @ 057b07cc with catch @ 057b0614
                       catch() { ... } // from try @ 057b081c with catch @ 057b0614
                       catch() { ... } // from try @ 057b0890 with catch @ 057b0614 */
    uVar2 = thunk_FUN_02ef1808(param_1);
    FUN_057add18(uVar2,param_2);
    if (unaff_x23 == 0) break;
    lVar4 = *(long *)(unaff_x23 + 0x10);
    lVar5 = *unaff_x28;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_02f411dc(puVar3,uVar2);
    }
    else {
      FUN_03fd0c9c(unaff_x23,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                  );
    }
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x29 == unaff_x22) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_05784dbc();
                    /* try { // try from 057b06ac to 058b06bf has its CatchHandler @ 057b07ec */
      *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
      thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x18),uVar2);
      return;
    }
    unaff_x23 = *unaff_x21;
    FUN_0565dbf8(unaff_x22,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x26);
    }
    param_2 = FUN_05784d38();
    param_1 = *unaff_x27;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


