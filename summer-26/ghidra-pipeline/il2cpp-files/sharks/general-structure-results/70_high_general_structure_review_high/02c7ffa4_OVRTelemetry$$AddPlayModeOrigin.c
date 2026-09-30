/*
FUNCTION_NAME: OVRTelemetry$$AddPlayModeOrigin
ENTRY_POINT: 02c7ffa4
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRTelemetry__AddPlayModeOrigin(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  uVar1 = System_Convert__ToSingle();
  if ((unaff_x20 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98,2);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_01861ac0(), lVar5 == 0)) {
LAB_02c800cc:
        uVar2 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar2,0);
      }
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(long *)(lVar4 + 0x20) = unaff_x21;
        thunk_FUN_0188fd20();
        if ((unaff_x19 != 0) && (lVar5 = thunk_FUN_01861ac0(), lVar5 == 0)) goto LAB_02c800cc;
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(long *)(lVar4 + 0x28) = unaff_x19;
          thunk_FUN_0188fd20();
          if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_033bdcd0(*(undefined8 *)PTR_DAT_0380d748,lVar4,0);
          return unaff_x19;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
  }
  else {
    unaff_x19 = unaff_x21;
    if ((uVar1 & 1) != 0) {
      thunk_FUN_01851c08(PTR_DAT_037f3900);
      uVar2 = thunk_FUN_01861bbc();
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380d750);
      FUN_033ea810(uVar2,uVar3,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380d758);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar2,uVar3);
    }
  }
  return unaff_x19;
}


