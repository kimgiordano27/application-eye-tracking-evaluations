/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 01f943a4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint in_w9;
  uint *puVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar8;
  ulong unaff_x24;
  undefined1 unaff_w25;
  uint uVar9;
  
code_r0x01f943a4:
  if (unaff_x24 < in_w9) {
    uVar9 = 0;
    while( true ) {
      if ((uint)param_1 <= uVar9) goto LAB_01f94514;
      plVar3 = *(long **)(unaff_x22 + (long)(int)uVar9 * 8 + 0x20);
      if (plVar3 == (long *)0x0) goto LAB_01f94518;
      lVar8 = *(long *)(unaff_x21 + unaff_x24 * 8 + 0x20);
      uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      if (lVar8 == 0) goto LAB_01f94518;
      uVar5 = FUN_01e68100(lVar8,uVar4,0);
      if ((uVar5 & 1) != 0) break;
      param_1 = *(undefined8 *)(unaff_x22 + 0x18);
      uVar9 = uVar9 + 1;
      if ((int)param_1 <= (int)uVar9) goto LAB_01f94454;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) goto LAB_01f94514;
    }
    if (unaff_x19 == 0) goto LAB_01f94518;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar9) goto LAB_01f94514;
    *(int *)(unaff_x19 + (long)(int)uVar9 * 4 + 0x20) = (int)unaff_x24;
    if (unaff_x20 == 0) goto LAB_01f94518;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x24) goto LAB_01f94514;
    *(undefined1 *)(unaff_x20 + unaff_x24 + 0x20) = unaff_w25;
    param_1 = *(undefined8 *)(unaff_x22 + 0x18);
LAB_01f94454:
    do {
      uVar6 = (uint)param_1;
      if (uVar9 == uVar6) {
        return 0;
      }
      in_w9 = *(uint *)(unaff_x21 + 0x18);
      unaff_x24 = unaff_x24 + 1;
      if ((long)(int)in_w9 <= (long)unaff_x24) {
        if ((int)uVar6 < 1) {
          return 1;
        }
        if (unaff_x19 == 0) goto LAB_01f94518;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        uVar5 = 0;
        uVar9 = 0;
        goto LAB_01f94488;
      }
      if (0 < (int)uVar6) goto code_r0x01f943a4;
      uVar9 = 0;
    } while( true );
  }
LAB_01f94514:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
LAB_01f94488:
  if (uVar1 <= uVar5) goto LAB_01f94514;
  puVar7 = (uint *)(unaff_x19 + uVar5 * 4 + 0x20);
  uVar2 = uVar9;
  if ((*puVar7 == 0xffffffff) && ((int)uVar9 < (int)uVar6)) {
    if (unaff_x20 == 0) {
LAB_01f94518:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    do {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_01f94514;
      if (*(char *)(unaff_x20 + (int)uVar9 + 0x20) == '\0') {
        *puVar7 = uVar9;
        uVar2 = uVar9 + 1;
        break;
      }
      uVar9 = uVar9 + 1;
      uVar2 = uVar6;
    } while (uVar6 != uVar9);
  }
  uVar9 = uVar2;
  uVar5 = uVar5 + 1;
  if ((long)(int)uVar6 <= (long)uVar5) {
    return 1;
  }
  goto LAB_01f94488;
}


