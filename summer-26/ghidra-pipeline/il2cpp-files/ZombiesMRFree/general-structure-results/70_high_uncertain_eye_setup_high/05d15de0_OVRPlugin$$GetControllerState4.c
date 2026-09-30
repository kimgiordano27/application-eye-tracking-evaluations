/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 05d15de0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 3) * 0x10 + 0x138);
      goto LAB_05d15e04;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_05d15e04:
  (*(code *)*puVar3)();
  plVar7 = *(long **)(unaff_x19 + 0x198);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_05d15e80;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar7,*unaff_x21,5);
LAB_05d15e80:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  uVar1 = FUN_05d14a14();
  uVar2 = FUN_05d14c44();
  uVar1 = (*(uint *)(unaff_x19 + 400) | uVar1) & (uVar2 ^ 0xffffffff);
  *(uint *)(unaff_x19 + 400) = uVar1;
  if ((uVar2 != 0) && (uVar1 == 0)) {
    *(undefined1 *)(unaff_x19 + 0x179) = 1;
  }
  return;
}


