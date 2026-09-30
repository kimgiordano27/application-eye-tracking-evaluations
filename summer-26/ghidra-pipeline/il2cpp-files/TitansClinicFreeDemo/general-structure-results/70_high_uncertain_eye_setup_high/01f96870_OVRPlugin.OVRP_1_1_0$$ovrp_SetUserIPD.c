/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserIPD
ENTRY_POINT: 01f96870
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0__ovrp_SetUserIPD(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long lVar5;
  uint unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  
code_r0x01f96870:
  if ((int)unaff_w26 < (int)param_1) goto LAB_01f96814;
LAB_01f96888:
  do {
    if ((int)param_1 <= (int)unaff_w26) {
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_01f96964;
      if (unaff_x21 == (long *)0x0) goto LAB_01f96960;
      lVar5 = *unaff_x25;
      if ((lVar5 != 0) &&
         (lVar3 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar4,0);
      }
                    /* try { // try from 01f968c0 to 020968c3 has its CatchHandler @ 01f968cc */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f96854 with catch @ 01f968c4
                       try { // try from 01f968c4 to 020968e3 has its CatchHandler @ 01f96798 */
      if (*(uint *)(unaff_x21 + 3) <= unaff_w22) goto LAB_01f96964;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f96820 with catch @ 01f968c8
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f96878 with catch @ 01f968cc
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f968c0 with catch @ 01f968cc
                        */
      unaff_x21[(long)(int)unaff_w22 + 4] = lVar5;
      thunk_FUN_01286abc(unaff_x21 + (long)(int)unaff_w22 + 4,lVar5);
      unaff_w22 = unaff_w22 + 1;
    }
    do {
      unaff_w24 = unaff_w24 + 1;
                    /* try { // try from 01f968e4 to 020968e7 has its CatchHandler @ 01f968f4 */
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w24) {
        if (unaff_w22 == 0) {
          lVar5 = 0;
        }
        else {
          if (unaff_w22 != 1) {
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar5 = FUN_01f969bc();
            return lVar5;
          }
          if (unaff_x21 == (long *)0x0) goto LAB_01f96960;
          if ((int)unaff_x21[3] == 0) goto LAB_01f96964;
          lVar5 = unaff_x21[4];
        }
        return lVar5;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_01f96964;
      unaff_x25 = (long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
      plVar1 = (long *)*unaff_x25;
      if ((plVar1 == (long *)0x0) ||
         (unaff_x23 = (**(code **)(*plVar1 + 0x378))(plVar1,*(undefined8 *)(*plVar1 + 0x380)),
         unaff_x23 == 0)) goto LAB_01f96960;
    } while (*(long *)(unaff_x23 + 0x18) == 0);
    if (unaff_x19 == 0) {
LAB_01f96960:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    if ((int)param_1 < 1) {
      unaff_w26 = 0;
      goto LAB_01f96888;
    }
    unaff_w26 = 0;
LAB_01f96814:
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w26) {
LAB_01f96964:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    plVar1 = *(long **)(unaff_x23 + (long)(int)unaff_w26 * 8 + 0x20);
    if (plVar1 == (long *)0x0) goto LAB_01f96960;
    plVar1 = (long *)(**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w26) goto LAB_01f96964;
    if (plVar1 == (long *)0x0) goto LAB_01f96960;
    uVar2 = (**(code **)(*plVar1 + 0x8b8))
                      (plVar1,*(undefined8 *)(unaff_x19 + (long)(int)unaff_w26 * 8 + 0x20),
                       *(undefined8 *)(*plVar1 + 0x8c0));
    if ((uVar2 & 1) != 0) break;
                    /* try { // try from 01f96884 to 020968bf has its CatchHandler @ 01f96798 */
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
  } while( true );
  param_1 = *(undefined8 *)(unaff_x19 + 0x18);
  unaff_w26 = unaff_w26 + 1;
  goto code_r0x01f96870;
}


