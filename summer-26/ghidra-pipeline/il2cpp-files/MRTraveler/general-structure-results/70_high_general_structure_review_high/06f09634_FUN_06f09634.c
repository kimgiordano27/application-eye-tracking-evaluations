/*
FUNCTION_NAME: FUN_06f09634
ENTRY_POINT: 06f09634
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;strong_file_logging_hits_3
*/


void FUN_06f09634(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 long param_6,undefined8 param_7,undefined8 param_8,void *param_9)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_120 [88];
  undefined1 auStack_c8 [88];
  
                    /* catch() { ... } // from try @ 06f09594 with catch @ 06f09634
                       catch() { ... } // from try @ 06f09614 with catch @ 06f09634 */
                    /* try { // try from 06f0963c to 0700963f has its CatchHandler @ 06f09738 */
                    /* try { // try from 06f09640 to 07009693 has its CatchHandler @ 06f08f54 */
                    /* catch() { ... } // from try @ 06f09334 with catch @ 06f09644 */
                    /* catch() { ... } // from try @ 06f0925c with catch @ 06f09648 */
                    /* catch() { ... } // from try @ 06f09248 with catch @ 06f0964c */
                    /* catch() { ... } // from try @ 06f091c8 with catch @ 06f09650 */
                    /* catch() { ... } // from try @ 06f09284 with catch @ 06f09654 */
                    /* catch() { ... } // from try @ 06f09274 with catch @ 06f09658 */
                    /* catch() { ... } // from try @ 06f0919c with catch @ 06f0965c
                       catch() { ... } // from try @ 06f09458 with catch @ 06f0965c */
                    /* catch() { ... } // from try @ 06f090f4 with catch @ 06f09660
                       catch() { ... } // from try @ 06f0944c with catch @ 06f09660 */
                    /* catch() { ... } // from try @ 06f090e0 with catch @ 06f09664
                       catch() { ... } // from try @ 06f09448 with catch @ 06f09664 */
  if (*(char *)(param_5 + 0x44) == '\0') {
    if (DAT_0940fffc == '\0') {
                    /* try { // try from 06f09694 to 070096ab has its CatchHandler @ 06f09728 */
      FUN_03c8f898(PTR_DAT_08e69f40);
      DAT_0940fffc = '\x01';
    }
                    /* try { // try from 06f096ac to 07009717 has its CatchHandler @ 06f08f54 */
    puVar2 = *(uint **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
    uVar7 = (ulong)*puVar2;
    param_2 = (float)puVar2[1];
    param_3 = (float)puVar2[2];
    param_4 = (float)puVar2[3];
  }
  else {
                    /* catch() { ... } // from try @ 06f09164 with catch @ 06f09668 */
    if (param_6 == 0)
    goto System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray;
                    /* catch() { ... } // from try @ 06f0910c with catch @ 06f0966c
                       catch() { ... } // from try @ 06f09450 with catch @ 06f0966c */
                    /* catch() { ... } // from try @ 06f090ac with catch @ 06f09670 */
                    /* catch() { ... } // from try @ 06f09220 with catch @ 06f09674
                       catch() { ... } // from try @ 06f09444 with catch @ 06f09674 */
    lVar1 = FUN_085dee20(param_6,0);
                    /* catch() { ... } // from try @ 06f091e0 with catch @ 06f09678
                       catch() { ... } // from try @ 06f09440 with catch @ 06f09678 */
    if (lVar1 == 0)
    goto System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray;
    uVar7 = FUN_085eb388(lVar1,0);
  }
  fVar4 = (float)FUN_085d2bd4(uVar7,0);
  if ((param_6 != 0) &&
     (fVar9 = param_2, fVar10 = param_3, lVar1 = FUN_085dee20(param_6,0), lVar1 != 0)) {
    fVar5 = (float)FUN_085eb388(lVar1,0);
    lVar3 = *(long *)(param_5 + 0x20);
    memcpy(auStack_c8,param_9,0x58);
    if (lVar3 != 0) {
      uVar11 = *(undefined4 *)(param_5 + 0x30);
      uVar14 = *(undefined4 *)(param_5 + 0x34);
      uVar13 = *(undefined4 *)(param_5 + 0x28);
      uVar12 = *(undefined4 *)(param_5 + 0x2c);
      memcpy(auStack_120,auStack_c8,0x58);
      uVar8 = FUN_06f080ec(uVar13,uVar12,uVar11,uVar14,lVar3,auStack_120);
      fVar6 = (float)FUN_085d2810(uVar8,fVar4,param_2,param_3,0);
      FUN_085eb410((fVar9 * param_2 + param_4 * fVar6 + fVar5 * param_3) - fVar10 * fVar4,
                   (fVar10 * fVar6 + param_4 * fVar4 + fVar9 * param_3) - fVar5 * param_2,
                   (fVar5 * fVar4 + param_4 * param_2 + fVar10 * param_3) - fVar9 * fVar6,
                   ((param_4 * param_3 - fVar5 * fVar6) - fVar9 * fVar4) - fVar10 * param_2,lVar1,0)
      ;
      return;
    }
  }
System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


