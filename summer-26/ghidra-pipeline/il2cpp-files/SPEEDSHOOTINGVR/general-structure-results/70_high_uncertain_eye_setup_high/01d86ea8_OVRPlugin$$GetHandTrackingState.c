/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 01d86ea8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetHandTrackingState(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar7;
  long *plVar8;
  
                    /* try { // try from 01d86eac to 01e86ecb has its CatchHandler @ 01d86aac */
  lVar4 = (**(code **)(param_1 + 0x628))(param_2,param_3,*(undefined8 *)(param_1 + 0x630));
  if (lVar4 == 0) {
LAB_01d86f78:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
                    /* try { // try from 01d86ecc to 01e86edb has its CatchHandler @ 01d86edc */
      if (uVar1 <= uVar7) {
LAB_01d86f7c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar8 = (long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
      plVar5 = (long *)*plVar8;
                    /* catch() { ... } // from try @ 01d86e94 with catch @ 01d86edc
                       catch() { ... } // from try @ 01d86ecc with catch @ 01d86edc */
      if (plVar5 == (long *)0x0) goto LAB_01d86f78;
                    /* try { // try from 01d86ee0 to 01e86ee3 has its CatchHandler @ 01d86ee8 */
                    /* catch() { ... } // from try @ 01d86da8 with catch @ 01d86ee8
                       catch() { ... } // from try @ 01d86e58 with catch @ 01d86ee8
                       catch() { ... } // from try @ 01d86ee0 with catch @ 01d86ee8 */
      iVar3 = (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
      if (iVar3 == 0) {
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_01d86f7c;
        plVar8 = (long *)*plVar8;
        if (plVar8 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)PTR_DAT_02353ea0 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_02353ea0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(plVar8);
          }
        }
        if (*unaff_x20 != 0) {
          puVar6 = (undefined8 *)(*unaff_x20 + 0x18);
          *puVar6 = plVar8;
          thunk_FUN_0106e12c(puVar6,plVar8);
          return plVar8;
        }
        goto LAB_01d86f78;
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar1);
  }
  return unaff_x19;
}


