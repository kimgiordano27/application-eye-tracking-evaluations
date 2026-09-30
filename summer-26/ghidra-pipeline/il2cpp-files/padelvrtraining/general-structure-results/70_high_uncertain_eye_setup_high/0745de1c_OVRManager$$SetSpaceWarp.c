/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp
ENTRY_POINT: 0745de1c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetSpaceWarp
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_09222ef8;
  plVar7 = *(long **)(unaff_x19 + 0x50);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09222ef8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0745deac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_09222ef8,1);
                    /* try { // try from 0745de6c to 0755de6f has its CatchHandler @ 0745df40 */
LAB_0745deac:
    (*(code *)*puVar2)(plVar7,unaff_x19 + 0x3c,puVar2[1]);
    lVar3 = FUN_08a4d98c();
                    /* try { // try from 0745decc to 0755defb has its CatchHandler @ 0745df44 */
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      plVar7 = *(long **)(unaff_x19 + 0x50);
      uVar8 = FUN_08a5bb30(*(long *)(unaff_x19 + 0x20),0);
      uVar9 = FUN_08a5a0a8(0);
      if (plVar7 != (long *)0x0) {
                    /* try { // try from 0745df00 to 0755df0f has its CatchHandler @ 0745df3c */
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 0745df10 to 0755df5f has its CatchHandler @ 0745de08 */
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745decc with catch @ 0745df44
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745de7c with catch @ 0745df48
                        */
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_0745df54;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745df00 with catch @ 0745df3c
                        */
        puVar2 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar1,2);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745de6c with catch @ 0745df40
                        */
LAB_0745df54:
                    /* try { // try from 0745df60 to 0755df77 has its CatchHandler @ 0745dfc8 */
        (*(code *)*puVar2)(uVar8,param_2,param_3,param_4,uVar9,plVar7,puVar2[1]);
        if (lVar3 != 0) {
                    /* try { // try from 0745df78 to 0755dfb7 has its CatchHandler @ 0745de08 */
          FUN_08a5d814(lVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


