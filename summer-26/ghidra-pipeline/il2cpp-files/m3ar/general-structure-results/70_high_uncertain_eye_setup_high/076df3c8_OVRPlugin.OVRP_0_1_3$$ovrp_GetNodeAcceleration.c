/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$ovrp_GetNodeAcceleration
ENTRY_POINT: 076df3c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076df638) */

void OVRPlugin_OVRP_0_1_3__ovrp_GetNodeAcceleration(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long in_x10;
  int *piVar11;
  long unaff_x19;
  
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* try { // try from 076df3d0 to 077df3f7 has its CatchHandler @ 076df3fc */
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == **(long **)(in_x10 + 0x260)) {
                    /* catch() { ... } // from try @ 076df34c with catch @ 076df408 */
                    /* catch() { ... } // from try @ 076df3a8 with catch @ 076df40c */
                    /* catch() { ... } // from try @ 076df344 with catch @ 076df410 */
        puVar5 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_076df414;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
                    /* try { // try from 076df3f8 to 077df487 has its CatchHandler @ 076deca0 */
                    /* catch() { ... } // from try @ 076df3d0 with catch @ 076df3fc */
                    /* catch() { ... } // from try @ 076df36c with catch @ 076df400 */
  puVar5 = (undefined8 *)FUN_0406ae20();
                    /* catch() { ... } // from try @ 076df3ac with catch @ 076df404 */
LAB_076df414:
                    /* catch() { ... } // from try @ 076df31c with catch @ 076df414 */
  puVar4 = PTR_DAT_08fae270;
  puVar3 = PTR_DAT_08fae268;
  puVar2 = PTR_DAT_08fae258;
  puVar1 = PTR_DAT_08f65880;
                    /* catch() { ... } // from try @ 076df010 with catch @ 076df418 */
                    /* catch() { ... } // from try @ 076df088 with catch @ 076df41c */
                    /* catch() { ... } // from try @ 076df308 with catch @ 076df420 */
                    /* catch() { ... } // from try @ 076df32c with catch @ 076df424 */
                    /* catch() { ... } // from try @ 076df064 with catch @ 076df428 */
                    /* catch() { ... } // from try @ 076df054 with catch @ 076df42c */
                    /* catch() { ... } // from try @ 076df194 with catch @ 076df430 */
                    /* catch() { ... } // from try @ 076df044 with catch @ 076df434 */
                    /* catch() { ... } // from try @ 076df024 with catch @ 076df438 */
                    /* catch() { ... } // from try @ 076df324 with catch @ 076df43c */
  plVar6 = (long *)(*(code *)*puVar5)();
                    /* catch() { ... } // from try @ 076df1b0 with catch @ 076df440 */
                    /* catch() { ... } // from try @ 076df170 with catch @ 076df444 */
                    /* catch() { ... } // from try @ 076df2b0 with catch @ 076df448 */
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076df4a0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar1,0);
LAB_076df4a0:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_076df5e4;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076df504;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar3,0);
LAB_076df504:
    plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    uVar8 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
    if ((unaff_x19 == 0) || (FUN_0532a918(), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076df588;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar4,0);
LAB_076df588:
    (*(code *)*puVar5)(plVar7,uVar8,puVar5[1]);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076df600;
    }
  }
LAB_076df5e4:
  puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f65868,0);
LAB_076df600:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


