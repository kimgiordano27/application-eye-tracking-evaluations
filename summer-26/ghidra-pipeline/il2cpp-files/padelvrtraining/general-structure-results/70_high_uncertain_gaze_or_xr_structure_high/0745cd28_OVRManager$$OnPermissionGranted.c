/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 0745cd28
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 0745cd28 to 0755cd4f has its CatchHandler @ 0745cdb0 */
  if ((bRam00000000098457ed & 1) == 0) {
    FUN_03d2d2b0(PTR_StringLiteral_51754_09222a38);
    bRam00000000098457ed = 1;
  }
                    /* try { // try from 0745cd50 to 0755cd97 has its CatchHandler @ 0745cc0c */
  puVar1 = PTR_StringLiteral_51754_09222a38;
  lVar5 = *(long *)(param_1 + 0x38);
  do {
    lVar3 = FUN_071bfc68(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_03d2ee44(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(lVar3,uVar6);
      }
    }
                    /* try { // try from 0745cd98 to 0755cd9b has its CatchHandler @ 0745cda4 */
    lVar3 = FUN_03d703d8((long *)(param_1 + 0x38),lVar4,lVar5);
                    /* try { // try from 0745cd9c to 0755cdc7 has its CatchHandler @ 0745cc0c */
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745cd98 with catch @ 0745cda4
                        */
  } while (bVar2);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745cd14 with catch @ 0745cda8
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745cd00 with catch @ 0745cdac
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745cd28 with catch @ 0745cdb0
                        */
  return;
}


