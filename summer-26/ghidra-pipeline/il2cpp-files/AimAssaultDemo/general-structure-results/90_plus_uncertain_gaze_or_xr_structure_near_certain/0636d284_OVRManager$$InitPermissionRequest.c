/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 0636d284
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0636d794) */
/* WARNING: Removing unreachable block (ram,0x0636d478) */
/* WARNING: Removing unreachable block (ram,0x0636d47c) */
/* WARNING: Removing unreachable block (ram,0x0636d48c) */
/* WARNING: Removing unreachable block (ram,0x0636d494) */
/* WARNING: Removing unreachable block (ram,0x0636d4bc) */
/* WARNING: Removing unreachable block (ram,0x0636d4a0) */
/* WARNING: Removing unreachable block (ram,0x0636d4ac) */
/* WARNING: Removing unreachable block (ram,0x0636d4c8) */
/* WARNING: Removing unreachable block (ram,0x0636d7f4) */
/* WARNING: Removing unreachable block (ram,0x0636d4dc) */
/* WARNING: Removing unreachable block (ram,0x0636d4f8) */
/* WARNING: Removing unreachable block (ram,0x0636d508) */
/* WARNING: Removing unreachable block (ram,0x0636d510) */
/* WARNING: Removing unreachable block (ram,0x0636d538) */
/* WARNING: Removing unreachable block (ram,0x0636d51c) */
/* WARNING: Removing unreachable block (ram,0x0636d528) */
/* WARNING: Removing unreachable block (ram,0x0636d544) */
/* WARNING: Removing unreachable block (ram,0x0636d6d8) */
/* WARNING: Removing unreachable block (ram,0x0636d6f0) */
/* WARNING: Removing unreachable block (ram,0x0636d704) */
/* WARNING: Removing unreachable block (ram,0x0636d70c) */
/* WARNING: Removing unreachable block (ram,0x0636d734) */
/* WARNING: Removing unreachable block (ram,0x0636d718) */
/* WARNING: Removing unreachable block (ram,0x0636d724) */
/* WARNING: Removing unreachable block (ram,0x0636d740) */
/* WARNING: Removing unreachable block (ram,0x0636d74c) */
/* WARNING: Removing unreachable block (ram,0x0636d750) */
/* WARNING: Removing unreachable block (ram,0x0636d554) */
/* WARNING: Removing unreachable block (ram,0x0636d564) */
/* WARNING: Removing unreachable block (ram,0x0636d56c) */
/* WARNING: Removing unreachable block (ram,0x0636d594) */
/* WARNING: Removing unreachable block (ram,0x0636d578) */
/* WARNING: Removing unreachable block (ram,0x0636d584) */
/* WARNING: Removing unreachable block (ram,0x0636d5a4) */
/* WARNING: Removing unreachable block (ram,0x0636d778) */
/* WARNING: Removing unreachable block (ram,0x0636d5b4) */
/* WARNING: Removing unreachable block (ram,0x0636d684) */
/* WARNING: Removing unreachable block (ram,0x0636d5c8) */
/* WARNING: Removing unreachable block (ram,0x0636d5f8) */
/* WARNING: Removing unreachable block (ram,0x0636d610) */
/* WARNING: Removing unreachable block (ram,0x0636d6ac) */
/* WARNING: Removing unreachable block (ram,0x0636d6b0) */
/* WARNING: Removing unreachable block (ram,0x0636d624) */
/* WARNING: Removing unreachable block (ram,0x0636d628) */
/* WARNING: Removing unreachable block (ram,0x0636d780) */
/* WARNING: Removing unreachable block (ram,0x0636d638) */
/* WARNING: Removing unreachable block (ram,0x0636d654) */
/* WARNING: Removing unreachable block (ram,0x0636d6a4) */
/* WARNING: Removing unreachable block (ram,0x0636d7f8) */

void OVRManager__InitPermissionRequest(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  
  (*(code *)*param_1)();
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(unaff_x24);
  }
  if (unaff_w27 == 0) {
    return;
  }
  if (unaff_x20 == unaff_x21) {
    return;
  }
                    /* try { // try from 0636d2a8 to 0646d2b3 has its CatchHandler @ 0636d55c */
                    /* try { // try from 0636d2b4 to 0646d2bb has its CatchHandler @ 0636d620 */
  if ((unaff_x20 == (long *)0x0) || ((**(code **)(*unaff_x20 + 0x698))(), unaff_x21 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* try { // try from 0636d2bc to 0646d2bf has its CatchHandler @ 0636d618 */
  lVar4 = *unaff_x21;
                    /* try { // try from 0636d2c0 to 0646d2c3 has its CatchHandler @ 0636d610 */
                    /* try { // try from 0636d2c4 to 0646d2c7 has its CatchHandler @ 0636d584 */
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 0636d2c8 to 0646d2db has its CatchHandler @ 0636d570 */
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
                    /* try { // try from 0636d2fc to 0646d2ff has its CatchHandler @ 0636d57c */
                    /* try { // try from 0636d300 to 0646d303 has its CatchHandler @ 0636d628 */
                    /* try { // try from 0636d304 to 0646d307 has its CatchHandler @ 0636d560 */
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0636d308;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 0636d2f0 to 0646d2fb has its CatchHandler @ 0636d548 */
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_0636d308:
                    /* try { // try from 0636d308 to 0646d30b has its CatchHandler @ 0636d574 */
                    /* try { // try from 0636d30c to 0646d30f has its CatchHandler @ 0636d554 */
                    /* try { // try from 0636d310 to 0646d327 has its CatchHandler @ 0636d558 */
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_07d89700;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar5 = *plVar3;
                    /* try { // try from 0636d328 to 0646d32f has its CatchHandler @ 0636d544 */
    lVar4 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* try { // try from 0636d334 to 0646d347 has its CatchHandler @ 0636d540 */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0636d370;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 0636d34c to 0646d39f has its CatchHandler @ 0636d53c */
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar3,lVar4,0);
LAB_0636d370:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) == 0) break;
    lVar5 = *plVar3;
    lVar4 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0636d3d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar3,lVar4,1);
LAB_0636d3d0:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    FUN_06372d34();
    (**(code **)(*unaff_x20 + 0x6e8))();
  } while( true );
  plVar3 = (long *)thunk_FUN_037787d0(plVar3,*unaff_x25);
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0636d464;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar3,*unaff_x25,0);
LAB_0636d464:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  return;
}


