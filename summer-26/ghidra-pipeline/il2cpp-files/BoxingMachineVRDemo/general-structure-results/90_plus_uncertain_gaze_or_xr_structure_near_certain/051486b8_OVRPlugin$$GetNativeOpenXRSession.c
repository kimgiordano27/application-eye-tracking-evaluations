/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 051486b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__GetNativeOpenXRSession(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_x9;
  long in_x10;
  long *unaff_x19;
  long unaff_x21;
  
  if ((*(long *)(in_x10 + -8) == in_x9) || (param_1 == *(long *)PTR_DAT_067677e0)) {
    uVar2 = 6;
  }
  else {
    uVar2 = 7;
    if ((((param_1 != *(long *)(unaff_x21 + 0x80)) && (param_1 != *(long *)(unaff_x21 + 0x78))) &&
        (param_1 != *(long *)PTR_DAT_06767820)) &&
       ((uVar2 = 0xc, param_1 != *(long *)PTR_DAT_067616f8 && (param_1 != *(long *)PTR_DAT_067657d0)
        ))) {
      lVar3 = thunk_FUN_02d9d438();
      if (lVar3 == 0) {
        lVar3 = *unaff_x19;
        if (lVar3 == *(long *)(unaff_x21 + 0x28)) {
          uVar2 = 9;
        }
        else if (lVar3 == *(long *)PTR_DAT_06768958) {
          uVar2 = 0xf;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06764580 + 0x130);
          if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06764580
             )) {
            if (lVar3 != *(long *)PTR_DAT_06762980) {
              thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
              FUN_028f4b80();
              uVar2 = FUN_04f8e414(0);
              FUN_028f4e40();
              uVar4 = thunk_FUN_02d709fc();
              uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781260);
              uVar2 = FUN_050f0ec0(uVar5,uVar2,uVar4,0);
              thunk_FUN_02dc61f4(PTR_DAT_06763b78);
              uVar4 = thunk_FUN_02d9d534();
              FUN_04f7d8e0(uVar4,uVar2,0);
              uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06781c38);
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar4,uVar2);
            }
            uVar2 = 0x11;
          }
          else {
            uVar2 = 0x10;
          }
        }
      }
      else {
        uVar2 = 0xe;
      }
    }
  }
  return uVar2;
}


