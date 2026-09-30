/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05bc4fc0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


uint OVRPlugin__get_useDynamicFoveatedRendering(long param_1,long param_2,float *param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x22;
  undefined8 uVar5;
  float fVar6;
  float unaff_s8;
  uint uStack000000000000000c;
  
  if ((*(byte *)(unaff_x22 + 0xae1) & 1) == 0) {
    FUN_03188a78(PTR_DAT_07113608);
    FUN_03188a78(PTR_DAT_070c1b68);
    *(undefined1 *)(unaff_x22 + 0xae1) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  uStack000000000000000c = 0;
  *param_3 = 1.0;
  if ((iVar1 == 2) ||
     (uStack000000000000000c = FUN_05bc3020(param_1,param_2), uStack000000000000000c == 0)) {
    fVar6 = (float)FUN_05bc2c64(param_1,param_2,&stack0x0000000c,0);
    *param_3 = fVar6;
  }
  else {
    fVar6 = *param_3;
  }
  puVar2 = PTR_DAT_070c1b68;
  if (unaff_s8 <= fVar6) {
    if (uStack000000000000000c == 0) {
      if (*(char *)(param_1 + 0x13c) == '\0') goto LAB_05bc5048;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uStack000000000000000c = *(uint *)(param_1 + 0x138) & *(uint *)(param_2 + 0xe4);
    }
    uVar4 = uStack000000000000000c;
                    /* try { // try from 05bc508c to 05cc50df has its CatchHandler @ 05bc508c
                       catch() { ... } // from try @ 05bc508c with catch @ 05bc508c
                       catch() { ... } // from try @ 05bc514c with catch @ 05bc508c
                       catch() { ... } // from try @ 05bc5190 with catch @ 05bc508c
                       catch() { ... } // from try @ 05bc5210 with catch @ 05bc508c
                       catch() { ... } // from try @ 05bc521c with catch @ 05bc508c */
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_069d69b8(uVar5,0,0);
    if ((((uVar3 & 1) != 0) && ((uVar4 >> 1 & 1) != 0)) &&
       (uVar3 = FUN_05bc5218(uVar3,param_2,*(undefined8 *)(param_1 + 0x150)), (uVar3 & 1) == 0)) {
      uVar4 = uVar4 & 0xfffffffd;
      uStack000000000000000c = uVar4;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x160);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_069d69b8(uVar5,0,0);
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) &&
       (uVar3 = FUN_05bc5218(uVar3,param_2,*(undefined8 *)(param_1 + 0x160)), (uVar3 & 1) == 0)) {
      uVar4 = uVar4 & 0xfffffffe;
    }
  }
  else {
LAB_05bc5048:
    uVar4 = 0;
  }
  return uVar4;
}


