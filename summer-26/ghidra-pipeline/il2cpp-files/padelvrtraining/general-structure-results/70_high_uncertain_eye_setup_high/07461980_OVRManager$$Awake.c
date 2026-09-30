/*
FUNCTION_NAME: OVRManager$$Awake
ENTRY_POINT: 07461980
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__Awake(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* try { // try from 07461988 to 07561997 has its CatchHandler @ 074619a0 */
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 07461970 with catch @ 07461998
                        */
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
                    /* try { // try from 074619c8 to 075619cb has its CatchHandler @ 074619d8 */
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_074619cc;
      }
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 07461954 with catch @ 074619a0
                       catch(type#1 @ 08cb6798) { ... } // from try @ 07461988 with catch @ 074619a0
                        */
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* try { // try from 074619a8 to 075619ab has its CatchHandler @ 074619f0 */
    } while (uVar6 != 0);
  }
                    /* try { // try from 074619ac to 075619c7 has its CatchHandler @ 074618d8 */
  puVar4 = (undefined8 *)FUN_03d8f370();
LAB_074619cc:
                    /* try { // try from 074619cc to 075619e7 has its CatchHandler @ 074618d8 */
                    /* catch() { ... } // from try @ 074619c8 with catch @ 074619d8 */
  uVar6 = (*(code *)*puVar4)();
  if ((uVar6 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar5 = *unaff_x20;
                    /* try { // try from 074619e8 to 075619ef has its CatchHandler @ 074619f0 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_07461a38;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370();
LAB_07461a38:
    uVar2 = (*(code *)*puVar4)();
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_07461a98;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370();
LAB_07461a98:
    uVar3 = (*(code *)*puVar4)();
    bVar1 = (uVar3 & uVar2) != 0;
  }
  return bVar1;
}


