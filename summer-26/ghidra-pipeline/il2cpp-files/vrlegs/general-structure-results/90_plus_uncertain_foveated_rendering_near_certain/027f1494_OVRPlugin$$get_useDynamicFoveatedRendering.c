/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 027f1494
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFoveatedRendering(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_04125151 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cc9ef0);
    DAT_04125151 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_03cc9ef0 + 0x130);
    if (((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_03cc9ef0))
       && (uVar3 = FUN_027ef930(param_1), (uVar3 & 1) != 0)) {
      lVar4 = *(long *)(param_1 + 0x48);
      thunk_FUN_01a4b338();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x28);
      lVar4 = param_2[0x12];
      if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_027d7ed8(uVar5,lVar4,0);
      if ((uVar3 & 1) != 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
        thunk_FUN_01a4b338();
        thunk_FUN_01a4b338();
        uVar5 = 1;
        *(uint *)(param_1 + 0x38) = uVar1 | 0x100000;
        goto LAB_027f15c4;
      }
    }
  }
  uVar5 = 0;
LAB_027f15c4:
  FUN_027eff1c(param_1,param_2,uVar5);
  return;
}


