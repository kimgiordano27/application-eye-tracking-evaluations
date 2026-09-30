/*
FUNCTION_NAME: OVRTelemetry.MarkerPoint$$Dispose
ENTRY_POINT: 074dac20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OVRTelemetry_MarkerPoint__Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long *plVar10;
  ulong uVar11;
  long unaff_x22;
  undefined8 *puVar12;
  long *unaff_x25;
  
  puVar2 = PTR_DAT_092250b8;
  puVar12 = *(undefined8 **)(unaff_x22 + 0xc0);
  FUN_06910324();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar5 = FUN_074af610();
  uVar4 = FUN_071d4e64(uVar5,0);
  lVar6 = thunk_FUN_03d2ef40(*puVar12);
  FUN_05a38f70(lVar6,(ulong)uVar4,*(undefined8 *)puVar2);
  plVar10 = (long *)(unaff_x20 + 0x10);
  *plVar10 = lVar6;
  thunk_FUN_03d1023c(plVar10,lVar6);
  puVar3 = PTR_DAT_092250b0;
  puVar2 = PTR_DAT_09224290;
  if (0 < (int)uVar4) {
    uVar11 = 0;
    do {
      lVar6 = *plVar10;
      FUN_071d4e68(uVar11,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_03db619c(*unaff_x25);
      }
      uVar5 = FUN_074af58c();
      uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
      FUN_074da944(uVar7,uVar5);
      if (lVar6 == 0) {
LAB_074dad84:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_074dad84;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar12 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar12 = uVar7;
        thunk_FUN_03d1023c(puVar12,uVar7);
      }
      else {
        FUN_05a39734(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
  }
  return;
}


