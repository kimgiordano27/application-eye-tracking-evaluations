/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 060bb6ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 106
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(in_x10[4] + 2) * 0x10 + 0x138);
      goto LAB_060bb6d4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
                    /* try { // try from 060bb6bc to 061bb6c7 has its CatchHandler @ 060bb95c */
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060bb6d4:
                    /* try { // try from 060bb6dc to 061bb6f3 has its CatchHandler @ 060bb98c */
  fVar5 = (float)(*(code *)*puVar1)();
  if (0.0 < fVar5) {
    fVar5 = (float)FUN_060bd340();
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 060bb714 to 061bb71b has its CatchHandler @ 060bb980 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_060bb750;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060bb750:
    fVar6 = (float)(*(code *)*puVar1)();
    if (fVar5 <= fVar6) {
      FUN_060bc4f4();
      return;
    }
  }
  return;
}


