/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 0575d248
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetSpaceBoundary2D(code *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  lVar2 = (*param_1)();
                    /* try { // try from 0575d24c to 0585d257 has its CatchHandler @ 0575d600 */
  plVar3 = (long *)FUN_02f07f14(*unaff_x22,2);
  if (plVar3 == (long *)0x0) {
LAB_0575d368:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* try { // try from 0575d270 to 0585d273 has its CatchHandler @ 0575d5f0 */
                    /* try { // try from 0575d274 to 0585d283 has its CatchHandler @ 0575d5f4 */
  if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_02ef170c(), lVar4 == 0)) {
OVRPlugin__GetSpaceBoundary2D:
    uVar5 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar5,0);
  }
                    /* try { // try from 0575d284 to 0585d42b has its CatchHandler @ 0575cdec */
  if ((int)plVar3[3] != 0) {
    plVar3[4] = unaff_x21;
    thunk_FUN_02f411dc();
    if ((lVar2 != 0) &&
       (lVar4 = thunk_FUN_02ef170c(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto OVRPlugin__GetSpaceBoundary2D;
    puVar1 = PTR_DAT_06d02220;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar2;
      thunk_FUN_02f411dc(plVar3 + 5,lVar2);
      FUN_0561c1fc();
      lVar2 = FUN_02f07f14(*(undefined8 *)puVar1,2);
      if (lVar2 == 0) goto LAB_0575d368;
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_06d39440;
        thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x20));
        if (1 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_06d04018;
          thunk_FUN_02f411dc();
          FUN_056ebd10();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


