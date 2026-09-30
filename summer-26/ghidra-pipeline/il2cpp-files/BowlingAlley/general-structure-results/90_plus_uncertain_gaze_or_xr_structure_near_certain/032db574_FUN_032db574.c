/*
FUNCTION_NAME: FUN_032db574
ENTRY_POINT: 032db574
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_032db574(long *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar8 = *(long *)Method_OVRTask_FromRequest<OVRPlugin_Result>__;
  if (lVar8 == 0) {
    return 0;
  }
  uVar10 = *(ulong *)Method_OVRTask_FromRequest<OVRSpatialAnchor_OperationResult>__;
  if (uVar10 == 0) {
    return 0;
  }
  uVar2 = param_1[1];
  uVar9 = 0;
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  lVar13 = *param_1 + 1;
  do {
    lVar12 = *(long *)(lVar8 + uVar9 * 0x18);
    uVar11 = 0;
    do {
      if (uVar2 == uVar11) goto LAB_032db6b8;
      bVar5 = *(byte *)(lVar13 + uVar11 + -1);
      bVar4 = *(byte *)(lVar12 + uVar11);
      uVar7 = bVar5 + 0x20;
      if (0x19 < bVar5 - 0x41) {
        uVar7 = (uint)bVar5;
      }
      if ((uint)bVar4 != (uVar7 & 0xff)) {
        if (((bVar5 != 0x2e) || (uVar2 - 4 != uVar11)) || (bVar4 != 0)) goto LAB_032db6b8;
        bVar4 = *(byte *)(lVar13 + uVar11);
        uVar7 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar7 = (uint)bVar4;
        }
        if ((uVar7 & 0xff) != 100) goto LAB_032db6b8;
        bVar4 = *(byte *)(lVar13 + uVar11 + 1);
        uVar7 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar7 = (uint)bVar4;
        }
        if ((uVar7 & 0xff) != 0x6c) goto LAB_032db6b8;
        bVar4 = *(byte *)(lVar13 + uVar11 + 2);
        uVar7 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar7 = (uint)bVar4;
        }
        bVar6 = (uVar7 & 0xff) == 0x6c;
        goto LAB_032db6ac;
      }
      if (bVar4 == 0) {
        bVar6 = uVar2 - 1 == uVar11;
        goto LAB_032db6ac;
      }
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
    bVar6 = *(char *)(lVar12 + uVar2) == '\0';
    uVar11 = uVar2 - 1;
LAB_032db6ac:
    if ((uVar11 < uVar2) && (bVar6)) {
      lVar13 = *(long *)(lVar8 + uVar9 * 0x18 + 8);
      if (lVar13 == 0) {
        return 0;
      }
      lVar12 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar8 + uVar9 * 0x18 + 0x10) + lVar12);
        local_40 = *puVar1;
        uVar3 = puVar1[1];
        uStack_38 = puVar1[2];
        uVar10 = FUN_0332d81c(&local_40,param_2);
        if ((uVar10 & 1) != 0) {
          return uVar3;
        }
        lVar13 = lVar13 + -1;
        lVar12 = lVar12 + 0x18;
      } while (lVar13 != 0);
      return 0;
    }
LAB_032db6b8:
    uVar9 = uVar9 + 1;
    if (uVar9 == uVar10) {
      return 0;
    }
  } while( true );
}


