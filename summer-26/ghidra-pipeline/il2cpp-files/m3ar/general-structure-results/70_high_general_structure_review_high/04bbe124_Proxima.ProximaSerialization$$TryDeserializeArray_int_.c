/*
FUNCTION_NAME: Proxima.ProximaSerialization$$TryDeserializeArray<int>
ENTRY_POINT: 04bbe124
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 Proxima_ProximaSerialization__TryDeserializeArray<int>(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  
  FUN_0403162c();
  plVar3 = *(long **)(unaff_x19 + 0x38);
  if (plVar3 == (long *)0x0) {
    FUN_0406ab48();
    plVar3 = *(long **)(unaff_x19 + 0x38);
  }
  if ((*(ushort *)(*plVar3 + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  lVar1 = thunk_FUN_0406deb8();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
    FUN_075cc8dc();
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar2 = thunk_FUN_0406deb8();
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20))
              (uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


