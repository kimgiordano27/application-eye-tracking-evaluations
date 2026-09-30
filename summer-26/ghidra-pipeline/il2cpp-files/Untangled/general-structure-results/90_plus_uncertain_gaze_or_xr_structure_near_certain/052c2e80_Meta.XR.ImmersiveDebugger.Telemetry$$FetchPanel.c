/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$FetchPanel
ENTRY_POINT: 052c2e80
PROGRAM: Untangled-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__FetchPanel(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x24;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if (in_w8 != 0) {
    lVar3 = *unaff_x20;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066c971c(lVar3,0,0);
    uVar5 = 0;
    uVar4 = *(undefined8 *)PTR_DAT_06d3d418;
    if ((uVar1 & 1) != 0) {
      if (*unaff_x20 == 0) goto LAB_052c30fc;
      uVar5 = FUN_066cd398(*unaff_x20,0);
    }
    uVar2 = FUN_066cd398();
    uVar5 = FUN_05465734(uVar4,uVar5,*(undefined8 *)PTR_DAT_06d03438,uVar2,0);
    if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
    }
    FUN_06694324(uVar5,0);
  }
  lVar3 = *unaff_x21;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*unaff_x21 == 0) goto LAB_052c30fc;
    lVar3 = *(long *)(*unaff_x21 + 0x48);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar1 = FUN_066cd30c(uVar5,0);
      if ((uVar1 & 1) != 0) {
        if (((*unaff_x21 == 0) || (lVar3 = *(long *)(*unaff_x21 + 0x48), lVar3 == 0)) ||
           (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) goto LAB_052c30fc;
        lVar3 = *(long *)(lVar3 + 0x20);
        if ((lVar3 != 0) && (*(char *)(unaff_x19 + 0x34) != '\0')) {
          fVar9 = *(float *)(lVar3 + 0x20);
          fVar10 = *(float *)(lVar3 + 0x24);
          fVar6 = (float)FUN_066bda8c(*(undefined4 *)(lVar3 + 0x1c),fVar9,fVar10,
                                      *(undefined4 *)(lVar3 + 0x28),0);
          fVar9 = fVar9 * DAT_013f6f10;
          fVar10 = fVar10 * DAT_013f6f10;
          fVar7 = (float)FUN_066be0b4(fVar6 * DAT_013f6f10,0);
          fVar9 = fVar9 * DAT_013f6ba4;
          fVar10 = fVar10 * DAT_013f6ba4;
          fVar6 = DAT_013f6ba4;
          uVar8 = FUN_066bd9f4(fVar7 * DAT_013f6ba4,0);
          *(undefined4 *)(unaff_x19 + 0xa4) = uVar8;
          *(float *)(unaff_x19 + 0xa8) = fVar9;
          *(float *)(unaff_x19 + 0xac) = fVar10;
          *(float *)(unaff_x19 + 0xb0) = fVar6;
          if (((*(long *)(unaff_x19 + 0x68) != 0) &&
              ((lVar3 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x48), lVar3 != 0 &&
               (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)))) &&
             (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
            uVar8 = *(undefined4 *)(lVar3 + 0x18);
            *(undefined8 *)(unaff_x19 + 0xc4) = *(undefined8 *)(lVar3 + 0x10);
            *(undefined4 *)(unaff_x19 + 0xcc) = uVar8;
            return;
          }
          goto LAB_052c30fc;
        }
      }
    }
  }
  if (*(char *)(unaff_x19 + 0x34) == '\0') {
    return;
  }
  lVar3 = *unaff_x20;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066c971c(lVar3,0,0);
  uVar5 = 0;
  uVar4 = *(undefined8 *)PTR_DAT_06d3d410;
  if ((uVar1 & 1) != 0) {
    if (*unaff_x20 == 0) {
LAB_052c30fc:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = FUN_066cd398(*unaff_x20,0);
  }
  uVar2 = FUN_066cd398();
  uVar5 = FUN_05465734(uVar4,uVar5,*(undefined8 *)PTR_DAT_06d03438,uVar2,0);
  if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
  }
  FUN_06694324(uVar5,0);
  return;
}


