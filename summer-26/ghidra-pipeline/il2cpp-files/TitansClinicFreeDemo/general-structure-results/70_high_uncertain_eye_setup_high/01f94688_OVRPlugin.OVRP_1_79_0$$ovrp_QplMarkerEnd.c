/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_QplMarkerEnd
ENTRY_POINT: 01f94688
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_QplMarkerEnd(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  if ((DAT_0293df08 & 1) == 0) {
                    /* try { // try from 01f946a4 to 020946ab has its CatchHandler @ 01f94764 */
    thunk_FUN_01279b34(PTR_DAT_027b3650);
    DAT_0293df08 = 1;
  }
  if (param_2 != (long *)0x0) {
                    /* try { // try from 01f946b8 to 020946bb has its CatchHandler @ 01f94760 */
    plVar2 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,(int)param_2[3]);
    if (0 < (int)param_2[3]) {
      uVar10 = 0;
      uVar7 = param_2[3] & 0xffffffff;
      plVar8 = plVar2 + 4;
      do {
        if (uVar7 <= uVar10) goto LAB_01f947e8;
                    /* try { // try from 01f946f4 to 02094727 has its CatchHandler @ 01f9475c */
        if (plVar2 == (long *)0x0) goto LAB_01f947ec;
        lVar9 = param_2[uVar10 + 4];
        if ((lVar9 != 0) &&
           (lVar3 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
        goto LAB_01f947f0;
        if (*(uint *)(plVar2 + 3) <= uVar10) goto LAB_01f947e8;
        *plVar8 = lVar9;
        thunk_FUN_01286abc(plVar8,lVar9);
        uVar6 = *(uint *)(param_2 + 3);
        uVar7 = (ulong)uVar6;
        uVar10 = uVar10 + 1;
        plVar8 = plVar8 + 1;
      } while ((long)uVar10 < (long)(int)uVar6);
      if (0 < (int)uVar6) {
        if (param_1 == 0) goto LAB_01f947ec;
        lVar9 = 0;
        plVar8 = param_2 + 4;
        do {
          uVar6 = (uint)uVar7;
          if ((*(uint *)(param_1 + 0x18) <= (uint)lVar9) ||
             (uVar1 = *(uint *)(param_1 + 0x20 + lVar9 * 4), *(uint *)(plVar2 + 3) <= uVar1)) {
LAB_01f947e8:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          lVar3 = plVar2[(long)(int)uVar1 + 4];
          if (lVar3 != 0) {
            lVar4 = thunk_FUN_0124baac(lVar3,*(undefined8 *)(*param_2 + 0x40));
            if (lVar4 == 0) {
LAB_01f947f0:
              uVar5 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
              FUN_01230b78(uVar5,0);
            }
            uVar6 = (uint)param_2[3];
          }
          if (uVar6 <= (uint)lVar9) goto LAB_01f947e8;
          *plVar8 = lVar3;
          thunk_FUN_01286abc(plVar8,lVar3);
          uVar7 = param_2[3];
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while ((int)lVar9 < (int)uVar7);
      }
    }
    return;
  }
LAB_01f947ec:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


