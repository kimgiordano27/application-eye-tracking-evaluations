/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppShouldQuit
ENTRY_POINT: 01f965e8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppShouldQuit(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  uint unaff_w20;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x25;
  undefined8 *puVar6;
  uint uVar7;
  
                    /* try { // try from 01f965e8 to 020965f3 has its CatchHandler @ 01f96608 */
  puVar6 = *(undefined8 **)(unaff_x25 + 0x650);
  plVar1 = (long *)FUN_01230af8(*puVar6);
                    /* try { // try from 01f965f4 to 020965ff has its CatchHandler @ 01f960e4 */
                    /* try { // try from 01f96600 to 02096607 has its CatchHandler @ 01f96608 */
                    /* catch() { ... } // from try @ 01f965e8 with catch @ 01f96608
                       catch() { ... } // from try @ 01f96600 with catch @ 01f96608 */
                    /* try { // try from 01f9660c to 02096693 has its CatchHandler @ 01f9660c
                       catch() { ... } // from try @ 01f9660c with catch @ 01f9660c
                       catch() { ... } // from try @ 01f966f8 with catch @ 01f9660c
                       catch() { ... } // from try @ 01f96738 with catch @ 01f9660c
                       catch() { ... } // from try @ 01f96780 with catch @ 01f9660c */
  FUN_01f89ca0(*unaff_x19,0,plVar1,0,unaff_w20,0);
  if (plVar1 != (long *)0x0) {
    if ((int)unaff_w20 < (int)plVar1[3]) {
      uVar7 = 0;
      plVar4 = plVar1 + (long)(int)unaff_w20 + 4;
      do {
        lVar3 = *unaff_x19;
        if (lVar3 == 0) goto LAB_01f96724;
        if (*(uint *)(lVar3 + 0x18) <= unaff_w20) goto LAB_01f9658c;
        lVar3 = *(long *)(lVar3 + (long)(int)unaff_w20 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_01f96724;
        uVar5 = *puVar6;
        lVar2 = thunk_FUN_0124baac(lVar3,uVar5);
        if (lVar2 == 0) {
LAB_01f96728:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(lVar3,uVar5);
        }
        uVar5 = *puVar6;
        lVar2 = thunk_FUN_0124baac(lVar3,uVar5);
        if (lVar2 == 0) goto LAB_01f96728;
        if (*(uint *)(lVar2 + 0x18) <= uVar7) {
LAB_01f9658c:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar3 != 0) &&
           (lVar2 = thunk_FUN_0124baac(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
          uVar5 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar5,0);
        }
        if (*(uint *)(plVar1 + 3) <= unaff_w20 + uVar7) goto LAB_01f9658c;
        *plVar4 = lVar3;
        thunk_FUN_01286abc(plVar4,lVar3);
        uVar7 = uVar7 + 1;
        plVar4 = plVar4 + 1;
      } while ((int)(unaff_w20 + uVar7) < (int)plVar1[3]);
    }
    *unaff_x19 = (long)plVar1;
    thunk_FUN_01286abc();
    return;
  }
LAB_01f96724:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


