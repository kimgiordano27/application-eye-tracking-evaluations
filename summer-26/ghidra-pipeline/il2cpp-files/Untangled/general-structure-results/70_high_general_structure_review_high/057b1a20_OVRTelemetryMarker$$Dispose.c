/*
FUNCTION_NAME: OVRTelemetryMarker$$Dispose
ENTRY_POINT: 057b1a20
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OVRTelemetryMarker__Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  ulong uVar9;
  uint unaff_w22;
  long lVar10;
  long *unaff_x25;
  
  thunk_FUN_02f411dc();
  puVar3 = PTR_DAT_06d5b7a0;
  puVar2 = PTR_DAT_06d5b798;
                    /* try { // try from 057b1a28 to 058b1a37 has its CatchHandler @ 057b1d78 */
  if (0 < (int)unaff_w22) {
                    /* try { // try from 057b1a40 to 058b1a53 has its CatchHandler @ 057b1dc8 */
    uVar9 = 0;
    do {
      lVar10 = *unaff_x20;
      FUN_0565dbf8(uVar9,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x25);
      }
      uVar4 = FUN_05787d34();
      uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_057b1880(uVar5,uVar4);
      if (lVar10 == 0) {
LAB_057b1b24:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar8 = *(long *)puVar3;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_057b1b24;
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar5;
        thunk_FUN_02f411dc(puVar6,uVar5);
      }
      else {
        FUN_03fd0c9c(lVar10,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = uVar9 + 1;
    } while (unaff_w22 != uVar9);
  }
  return;
}


