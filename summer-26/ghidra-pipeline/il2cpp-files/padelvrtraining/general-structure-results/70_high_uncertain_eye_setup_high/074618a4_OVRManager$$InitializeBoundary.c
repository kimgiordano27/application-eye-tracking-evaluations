/*
FUNCTION_NAME: OVRManager$$InitializeBoundary
ENTRY_POINT: 074618a4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__InitializeBoundary(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  
  puVar1 = PTR_DAT_0921fb90;
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0921fb90) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_074618f8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
                    /* try { // try from 074618d8 to 0756190b has its CatchHandler @ 074618d8
                       catch() { ... } // from try @ 074618d8 with catch @ 074618d8
                       catch() { ... } // from try @ 07461930 with catch @ 074618d8
                       catch() { ... } // from try @ 07461974 with catch @ 074618d8
                       catch() { ... } // from try @ 074619ac with catch @ 074618d8
                       catch() { ... } // from try @ 074619cc with catch @ 074618d8 */
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_03d8f370();
LAB_074618f8:
  plVar7 = (long *)(*(code *)*puVar6)();
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 0746190c to 0756192f has its CatchHandler @ 0746193c */
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 07461930 to 07561953 has its CatchHandler @ 074618d8 */
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0921fbf0) {
                    /* try { // try from 07461954 to 0756196b has its CatchHandler @ 074619a0 */
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_07461960;
        }
        uVar9 = uVar9 - 1;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746190c with catch @ 0746193c
                        */
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_0921fbf0,0);
LAB_07461960:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
    puVar2 = PTR_DAT_0921fbb0;
    if (unaff_x19 != (long *)0x0) {
                    /* try { // try from 07461970 to 07561973 has its CatchHandler @ 07461998 */
                    /* try { // try from 07461974 to 07561987 has its CatchHandler @ 074618d8 */
      lVar8 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0921fbb0) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_074619cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370();
LAB_074619cc:
      uVar9 = (*(code *)*puVar6)();
      if ((uVar9 & 1) == 0) {
        bVar3 = false;
      }
      else {
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_07461a38;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07461a38:
        uVar4 = (*(code *)*puVar6)();
        lVar8 = *unaff_x19;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
              goto LAB_07461a98;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07461a98:
        uVar5 = (*(code *)*puVar6)();
        bVar3 = (uVar5 & uVar4) != 0;
      }
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


