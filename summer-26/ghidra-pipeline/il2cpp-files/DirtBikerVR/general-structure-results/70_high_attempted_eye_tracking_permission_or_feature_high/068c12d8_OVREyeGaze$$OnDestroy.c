/*
FUNCTION_NAME: OVREyeGaze$$OnDestroy
ENTRY_POINT: 068c12d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDestroy
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
                    /* try { // try from 068c12d8 to 069c12db has its CatchHandler @ 068c1350 */
  puVar1 = PTR_DAT_084b2020;
                    /* try { // try from 068c12dc to 069c12ef has its CatchHandler @ 068c1368 */
  if ((DAT_0897c842 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b1fb8);
    FUN_03a8a718(PTR_DAT_084b2020);
    DAT_0897c842 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar2 = *(long *)puVar1;
  }
  plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_084b1fb8) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_068c138c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084b1fb8,0);
LAB_068c138c:
                    /* WARNING: Could not recover jumptable at 0x068c13b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_1,plVar6,param_3,param_4,puVar3[1]);
  return;
}


