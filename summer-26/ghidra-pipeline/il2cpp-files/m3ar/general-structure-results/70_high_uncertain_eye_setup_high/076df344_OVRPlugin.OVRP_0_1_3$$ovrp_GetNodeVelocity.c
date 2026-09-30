/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$ovrp_GetNodeVelocity
ENTRY_POINT: 076df344
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076df638) */

void OVRPlugin_OVRP_0_1_3__ovrp_GetNodeVelocity(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
                    /* try { // try from 076df344 to 077df34b has its CatchHandler @ 076df410 */
                    /* try { // try from 076df34c to 077df36b has its CatchHandler @ 076df408 */
  if ((DAT_0954828b & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fae258);
                    /* try { // try from 076df36c to 077df393 has its CatchHandler @ 076df400 */
    FUN_0403162c(PTR_DAT_08f65868);
    FUN_0403162c(PTR_DAT_08fae260);
    FUN_0403162c(PTR_DAT_08fae268);
    FUN_0403162c(PTR_DAT_08f65880);
                    /* try { // try from 076df398 to 077df39b has its CatchHandler @ 076df468 */
    FUN_0403162c(PTR_DAT_08fae270);
                    /* try { // try from 076df3a8 to 077df3ab has its CatchHandler @ 076df40c */
    DAT_0954828b = 1;
  }
                    /* try { // try from 076df3ac to 077df3cf has its CatchHandler @ 076df404 */
  if ((char)param_1[8] == '\0') {
    return;
  }
  plVar11 = (long *)param_1[5];
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08fae260) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_076df414;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08fae260,0);
LAB_076df414:
  puVar4 = PTR_DAT_08fae270;
  puVar3 = PTR_DAT_08fae268;
  puVar2 = PTR_DAT_08fae258;
  puVar1 = PTR_DAT_08f65880;
  plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
  do {
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076df4a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar1,0);
LAB_076df4a0:
    uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_076df5e4;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076df504;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar3,0);
LAB_076df504:
    plVar6 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    uVar7 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
    if ((param_1 == (long *)0x0) ||
       (FUN_0532a918(uVar7,param_1,*(undefined8 *)(*param_1 + 0x180),0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076df588;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar4,0);
LAB_076df588:
    (*(code *)*puVar5)(plVar6,uVar7,puVar5[1]);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076df600;
    }
  }
LAB_076df5e4:
  puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f65868,0);
LAB_076df600:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
  return;
}


