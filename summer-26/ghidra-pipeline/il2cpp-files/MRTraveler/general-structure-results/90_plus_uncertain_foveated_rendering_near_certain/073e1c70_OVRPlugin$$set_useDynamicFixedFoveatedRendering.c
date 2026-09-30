/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 073e1c70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  undefined8 *unaff_x24;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(in_x10[4] + 8) * 0x10 + 0x138);
      goto LAB_073e1cac;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_03cf1348();
LAB_073e1cac:
  (*(code *)*puVar1)();
  plVar6 = *(long **)(unaff_x19 + 0x28);
  uVar2 = thunk_FUN_03cf5234(*unaff_x24);
  FUN_07064478();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xe) * 0x10 + 0x138);
        goto LAB_073e1d30;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x22,0xe);
LAB_073e1d30:
                    /* WARNING: Could not recover jumptable at 0x073e1d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
  return;
}


