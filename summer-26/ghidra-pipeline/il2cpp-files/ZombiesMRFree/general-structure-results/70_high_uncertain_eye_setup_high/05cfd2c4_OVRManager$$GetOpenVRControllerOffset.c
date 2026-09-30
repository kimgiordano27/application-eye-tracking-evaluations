/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 05cfd2c4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cfd4d8) */

void OVRManager__GetOpenVRControllerOffset(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  
                    /* try { // try from 05cfd2c8 to 05dfd2d3 has its CatchHandler @ 05cfd5a4 */
  plVar5 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar4 = PTR_DAT_06fb82b8;
  puVar3 = PTR_DAT_06fb8270;
  puVar2 = PTR_DAT_06fb8268;
  puVar1 = PTR_DAT_06f70b38;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  do {
                    /* try { // try from 05cfd300 to 05dfd30f has its CatchHandler @ 05cfd5a8 */
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05cfd34c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)puVar1,0);
LAB_05cfd34c:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_05cfd484;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 05cfd37c to 05dfd3a3 has its CatchHandler @ 05cfd5ec */
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05cfd3a8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)puVar4,0);
LAB_05cfd3a8:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    uVar8 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_051102dc();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 05cfd3fc to 05dfd423 has its CatchHandler @ 05cfd5ac */
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* try { // try from 05cfd424 to 05dfd553 has its CatchHandler @ 05cfcb68 */
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_05cfd430;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)puVar2,1);
LAB_05cfd430:
    (*(code *)*puVar6)(plVar7,uVar8,puVar6[1]);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_05cfd4a0;
    }
  }
LAB_05cfd484:
  puVar6 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)PTR_DAT_06f70b30,0);
LAB_05cfd4a0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


