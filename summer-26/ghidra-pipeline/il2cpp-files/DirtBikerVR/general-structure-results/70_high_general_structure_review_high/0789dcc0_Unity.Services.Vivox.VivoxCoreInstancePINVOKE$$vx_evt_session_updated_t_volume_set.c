/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_volume_set
ENTRY_POINT: 0789dcc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0789df28) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_volume_set(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x20;
  long *plVar7;
  
  uVar3 = thunk_FUN_065cbffc();
                    /* try { // try from 0789dce0 to 0799dd0b has its CatchHandler @ 0789dfdc */
  if (((uVar3 & 1) != 0) || (uVar3 = thunk_FUN_065cbffc(), (uVar3 & 1) != 0)) {
    FUN_05fa0540();
  }
                    /* try { // try from 0789dd10 to 0799dd1f has its CatchHandler @ 0789dfc0 */
  if (unaff_x20 == 0) {
    return;
  }
  plVar7 = *(long **)(unaff_x20 + 0x28);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar7;
                    /* try { // try from 0789dd24 to 0799dd2f has its CatchHandler @ 0789dfbc */
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 0789dd38 to 0799dd47 has its CatchHandler @ 0789dfec */
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_084c3f08) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0789dd70;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)PTR_DAT_084c3f08,0);
LAB_0789dd70:
  plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  puVar2 = PTR_DAT_084c3f10;
  puVar1 = PTR_DAT_08488568;
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0789ddf4;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar1,0);
LAB_0789ddf4:
    uVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if ((uVar3 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_0789decc;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0789de58;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar2,0);
LAB_0789de58:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
    FUN_05fa052c();
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08488550) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0789dee8;
    }
  }
LAB_0789decc:
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)PTR_DAT_08488550,0);
LAB_0789dee8:
  (*(code *)*puVar4)(plVar7,puVar4[1]);
  return;
}


