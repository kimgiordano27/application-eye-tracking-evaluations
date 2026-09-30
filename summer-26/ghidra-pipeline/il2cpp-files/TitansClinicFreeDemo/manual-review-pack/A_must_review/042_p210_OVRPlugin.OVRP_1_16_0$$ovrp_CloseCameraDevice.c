/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 01f98eec
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x24;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  
  if (unaff_x24 == 0) {
LAB_01f99048:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar3 = *(uint *)(unaff_x24 + 0x18);
  if ((int)uVar3 < 1) {
LAB_01f99010:
    if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f99958();
    *unaff_x19 = uVar6;
    thunk_FUN_01286abc();
    return 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  uVar9 = 0;
LAB_01f98f14:
  if (uVar9 < uVar3) {
    plVar8 = (long *)(unaff_x24 + (long)(int)uVar9 * 8 + 0x20);
    if (*plVar8 != 0) {
      lVar5 = FUN_01e6ba9c(*plVar8,0);
      if (*(uint *)(unaff_x24 + 0x18) <= uVar9) goto LAB_01f9904c;
      *plVar8 = lVar5;
      thunk_FUN_01286abc(plVar8,lVar5);
      if (lVar2 != 0) {
        if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
LAB_01f98d84:
          FUN_01f99324();
          return 0;
        }
        uVar10 = 0;
        uVar7 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if ((uVar7 <= uVar10) || (*(uint *)(unaff_x24 + 0x18) <= uVar9)) goto LAB_01f9904c;
          lVar5 = *(long *)(lVar2 + 0x20 + uVar10 * 8);
          if ((unaff_x21 & 1) == 0) {
            if (lVar5 == 0) break;
            uVar7 = FUN_01e68100(lVar5,*plVar8,0);
            if ((uVar7 & 1) != 0) goto LAB_01f98fc0;
          }
          else {
            iVar4 = FUN_01e672c0(lVar5,*plVar8,5,0);
            if (iVar4 == 0) goto LAB_01f98fc0;
          }
          uVar7 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar10 = uVar10 + 1;
          if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar10) goto LAB_01f98d84;
        } while( true );
      }
    }
    goto LAB_01f99048;
  }
  goto LAB_01f9904c;
LAB_01f98fc0:
  if (lVar1 == 0) goto LAB_01f99048;
  if ((uint)uVar10 < *(uint *)(lVar1 + 0x18)) {
    uVar3 = *(uint *)(unaff_x24 + 0x18);
    uVar9 = uVar9 + 1;
    if ((int)uVar3 <= (int)uVar9) goto LAB_01f99010;
    goto LAB_01f98f14;
  }
LAB_01f9904c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


