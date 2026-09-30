/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 068c12e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x21;
  long *plVar5;
  long unaff_x22;
  
  plVar5 = *(long **)(unaff_x21 + 0x20);
                    /* try { // try from 068c12f0 to 069c132f has its CatchHandler @ 068c11d4 */
  if ((*(byte *)(unaff_x22 + 0x842) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b1fb8);
    FUN_03a8a718(PTR_DAT_084b2020);
    *(undefined1 *)(unaff_x22 + 0x842) = 1;
  }
  lVar1 = *plVar5;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar1 = *plVar5;
  }
                    /* try { // try from 068c1330 to 069c1333 has its CatchHandler @ 068c1370 */
  plVar5 = (long *)**(undefined8 **)(lVar1 + 0xb8);
                    /* try { // try from 068c1334 to 069c133b has its CatchHandler @ 068c11d4 */
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 068c133c to 069c133f has its CatchHandler @ 068c136c */
  lVar1 = *plVar5;
                    /* try { // try from 068c1340 to 069c1343 has its CatchHandler @ 068c11d4 */
                    /* try { // try from 068c1344 to 069c1347 has its CatchHandler @ 068c1358 */
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
                    /* try { // try from 068c1348 to 069c134f has its CatchHandler @ 068c1360 */
  if (uVar3 != 0) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 068c12d8 with catch @ 068c1350
                       try { // try from 068c1350 to 069c138b has its CatchHandler @ 068c11d4 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 068c12a0 with catch @ 068c1354
                        */
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 068c1344 with catch @ 068c1358
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 068c1270 with catch @ 068c135c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 068c1348 with catch @ 068c1360
                        */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_084b1fb8) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_068c138c;
      }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 068c1254 with catch @ 068c1364
                        */
      uVar3 = uVar3 - 1;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 068c12dc with catch @ 068c1368
                        */
      piVar4 = piVar4 + 4;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 068c133c with catch @ 068c136c
                        */
    } while (uVar3 != 0);
  }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 068c123c with catch @ 068c1370
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 068c1330 with catch @ 068c1370
                        */
  puVar2 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)PTR_DAT_084b1fb8,0);
LAB_068c138c:
                    /* try { // try from 068c138c to 069c138f has its CatchHandler @ 068c139c */
                    /* catch() { ... } // from try @ 068c138c with catch @ 068c139c */
                    /* try { // try from 068c13a0 to 069c13a7 has its CatchHandler @ 068c13b0 */
                    /* try { // try from 068c13a8 to 069c13b3 has its CatchHandler @ 068c11d4 */
                    /* WARNING: Could not recover jumptable at 0x068c13b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 068c13a0 with catch @ 068c13b0
                        */
  (*(code *)*puVar2)(plVar5,param_2,param_3,puVar2[1]);
  return;
}


