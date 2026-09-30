/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 01d83b74
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_fixedFoveatedRenderingLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  code *in_x9;
  
  uVar4 = (*in_x9)();
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar4 = FUN_01d603f8();
    if ((uVar4 & 1) == 0) {
      uVar5 = thunk_FUN_010303a8(PTR_DAT_02358390);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar6 = thunk_FUN_010400dc();
                    /* try { // try from 01d83cb0 to 01e83cbb has its CatchHandler @ 01d84324 */
      uVar8 = thunk_FUN_010303a8(PTR_DAT_0234d278);
      FUN_01c5e198(uVar6,uVar5,uVar8,0);
      uVar5 = thunk_FUN_010303a8(PTR_DAT_023591e0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar6,uVar5);
    }
  }
  puVar2 = PTR_DAT_02358388;
  puVar1 = PTR_DAT_0234bcc8;
  if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar5 = FUN_01d7ad74();
  uVar6 = FUN_01d79950();
  uVar3 = FUN_01110908(uVar5,uVar6,*(undefined8 *)puVar2);
  if ((int)uVar3 < 0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar7 = FUN_01d7aea0();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    uVar5 = *(undefined8 *)(lVar7 + (ulong)uVar3 * 8 + 0x20);
  }
  return uVar5;
}


