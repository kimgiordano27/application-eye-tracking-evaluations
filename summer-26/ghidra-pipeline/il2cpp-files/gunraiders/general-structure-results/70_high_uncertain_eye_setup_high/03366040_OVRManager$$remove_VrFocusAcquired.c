/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 03366040
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__remove_VrFocusAcquired(long param_1,ulong param_2)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
                    /* try { // try from 03366050 to 03466053 has its CatchHandler @ 03366100 */
                    /* try { // try from 03366054 to 0346611b has its CatchHandler @ 03365e94 */
  lVar4 = param_1;
  if ((DAT_04533520 & 1) == 0) {
    lVar4 = FUN_01c5d288(PTR_DAT_042303d0);
    DAT_04533520 = 1;
  }
  uVar7 = (uint)param_2;
  uVar1 = uVar7 & 0xffff;
  if (uVar1 < 0x2a) {
    if (0x29 < uVar1) goto LAB_03366150;
    if ((1L << (param_2 & 0x3f) & 0x100002600U) != 0) goto LAB_03366178;
    if ((param_2 & 0xffff) != 0x29) goto LAB_03366150;
    if (*(int *)(param_1 + 0x24) - 9U < 2) goto LAB_03366178;
LAB_03366188:
    bVar3 = false;
  }
  else {
    if (uVar1 < 0x30) {
      if ((uVar7 & 0xffff) != 0x2c) {
        if ((uVar7 & 0xffff) == 0x2f) {
          if (*(int *)(param_1 + 0x88) <= *(int *)(param_1 + 0x8c) + 1) {
            uVar5 = FUN_03360eac(param_1,1,0);
            lVar4 = 0;
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03366050 with catch @ 03366100
                        */
            if ((uVar5 & 1) == 0) {
              return false;
            }
          }
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0336600c with catch @ 03366104
                        */
          lVar6 = *(long *)(param_1 + 0x80);
          if (lVar6 != 0) {
            uVar1 = *(int *)(param_1 + 0x8c) + 1;
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              sVar2 = *(short *)(lVar6 + (long)(int)uVar1 * 2 + 0x20);
              return sVar2 == 0x2a || sVar2 == 0x2f;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4(lVar4);
        }
LAB_03366150:
        if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar5 = FUN_0324a054(param_2 & 0xffffffff,0);
        if ((uVar5 & 1) == 0) goto LAB_03366188;
      }
    }
    else if ((uVar7 & 0xffff | 0x20) != 0x7d) goto LAB_03366150;
LAB_03366178:
    bVar3 = true;
  }
  return bVar3;
}


