/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_loop_buffer_capacity_get
ENTRY_POINT: 0789eb58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0789ed04) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_loop_buffer_capacity_get
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  long *plStack0000000000000018;
  
  puVar2 = PTR_DAT_084c3f10;
  puVar1 = PTR_DAT_08488568;
                    /* try { // try from 0789eb60 to 0799eb67 has its CatchHandler @ 0789ed0c */
  puStack0000000000000008 = (undefined1 *)&stack0x00000018;
  uStack0000000000000000 = 0;
  plStack0000000000000018 = param_1;
  do {
    plVar3 = plStack0000000000000018;
    if (plStack0000000000000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plStack0000000000000018;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0789ebd0;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 0789ebac to 0799ebe7 has its CatchHandler @ 0789ed74 */
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plStack0000000000000018,*(long *)puVar1,0);
LAB_0789ebd0:
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    plVar3 = plStack0000000000000018;
    if ((uVar6 & 1) == 0) {
      if (plStack0000000000000018 == (long *)0x0) {
        return;
      }
      lVar5 = *plStack0000000000000018;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0789eca8;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plStack0000000000000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plStack0000000000000018;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0789ec34;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plStack0000000000000018,*(long *)puVar2,0);
LAB_0789ec34:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
    FUN_05fa052c();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08488550) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0789ecc4;
    }
  }
LAB_0789eca8:
  puVar4 = (undefined8 *)FUN_03ac43c4(plStack0000000000000018,*(long *)PTR_DAT_08488550,0);
LAB_0789ecc4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


