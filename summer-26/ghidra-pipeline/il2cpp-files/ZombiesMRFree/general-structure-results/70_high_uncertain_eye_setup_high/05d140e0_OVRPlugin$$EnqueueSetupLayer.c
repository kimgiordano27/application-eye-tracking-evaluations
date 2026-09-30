/*
FUNCTION_NAME: OVRPlugin$$EnqueueSetupLayer
ENTRY_POINT: 05d140e0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__EnqueueSetupLayer(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar7;
  
  piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_05d1411c;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d1411c:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_06fb4b60;
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_05d14188;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar3,*(long *)PTR_DAT_06fb4b60,4);
LAB_05d14188:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05d141e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d141e4:
    plVar3 = (long *)(*(code *)*puVar2)();
                    /* try { // try from 05d141f0 to 05e141f7 has its CatchHandler @ 05d14218 */
    if (plVar3 != (long *)0x0) {
      lVar4 = *plVar3;
                    /* try { // try from 05d141f8 to 05e141ff has its CatchHandler @ 05d14228 */
                    /* try { // try from 05d14200 to 05e14203 has its CatchHandler @ 05d13dc4 */
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 05d14204 to 05e14207 has its CatchHandler @ 05d14210 */
      if (uVar5 != 0) {
                    /* try { // try from 05d14208 to 05e14237 has its CatchHandler @ 05d13dc4 */
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d14204 with catch @ 05d14210
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d14040 with catch @ 05d14214
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d141f0 with catch @ 05d14218
                        */
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                    /* try { // try from 05d14238 to 05e1423b has its CatchHandler @ 05d1424c */
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_05d14244;
          }
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d1406c with catch @ 05d1421c
                        */
          uVar5 = uVar5 - 1;
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d13fa4 with catch @ 05d14220
                        */
          piVar6 = piVar6 + 4;
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d13f48 with catch @ 05d14224
                        */
        } while (uVar5 != 0);
      }
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d141f8 with catch @ 05d14228
                        */
      puVar2 = (undefined8 *)FUN_02feb5b8(plVar3,*(long *)puVar1,0);
LAB_05d14244:
                    /* catch() { ... } // from try @ 05d14238 with catch @ 05d1424c */
      (*(code *)*puVar2)(plVar3,puVar2[1]);
      lVar4 = *unaff_x20;
                    /* try { // try from 05d14254 to 05e142bb has its CatchHandler @ 05d142d0 */
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_05d142a4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d142a4:
      (*(code *)*puVar2)(uVar7);
      if (*unaff_x19 != 0) {
        return *(undefined4 *)(*unaff_x19 + 0x3c);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


