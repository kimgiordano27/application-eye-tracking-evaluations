/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember$$PostDeserializeRemapParameterNames
ENTRY_POINT: 03eb64cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_InvokeMember__PostDeserializeRemapParameterNames
               (long *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  
  puVar4 = PTR_DAT_0457ba10;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
                    /* catch() { ... } // from try @ 03eb64c0 with catch @ 03eb64e0 */
                    /* try { // try from 03eb64e4 to 03fb64fb has its CatchHandler @ 03eb66e4 */
  if ((DAT_0483abfd & 1) == 0) {
                    /* catch() { ... } // from try @ 03eb564c with catch @ 03eb64fc
                       try { // try from 03eb64fc to 03fb6523 has its CatchHandler @ 03eb50a0 */
                    /* catch() { ... } // from try @ 03eb617c with catch @ 03eb6500 */
                    /* catch() { ... } // from try @ 03eb557c with catch @ 03eb6504 */
    thunk_FUN_01efb3a4(PTR_DAT_0457b5d8);
                    /* catch() { ... } // from try @ 03eb5ccc with catch @ 03eb6508
                       catch() { ... } // from try @ 03eb61cc with catch @ 03eb6508 */
                    /* catch() { ... } // from try @ 03eb5784 with catch @ 03eb650c */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0457ba10);
                    /* try { // try from 03eb6524 to 03fb6527 has its CatchHandler @ 03eb6544 */
                    /* try { // try from 03eb6528 to 03fb6547 has its CatchHandler @ 03eb50a0 */
    thunk_FUN_01efb3a4(PTR_DAT_0457b5f0);
    thunk_FUN_01efb3a4(PTR_DAT_0457ba18);
    thunk_FUN_01efb3a4(PTR_DAT_0457b740);
                    /* catch() { ... } // from try @ 03eb6524 with catch @ 03eb6544 */
                    /* try { // try from 03eb6548 to 03fb655f has its CatchHandler @ 03eb66e4 */
    thunk_FUN_01efb3a4(PTR_DAT_0457ba20);
    DAT_0483abfd = 1;
  }
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 03eb5b48 with catch @ 03eb6560
                       catch() { ... } // from try @ 03eb61c0 with catch @ 03eb6560
                       try { // try from 03eb6560 to 03fb657b has its CatchHandler @ 03eb50a0 */
                    /* catch() { ... } // from try @ 03eb55ac with catch @ 03eb6564 */
  FUN_03eb67b8();
  param_1[7] = lVar5;
  thunk_FUN_01f51358(param_1 + 7,lVar5);
                    /* try { // try from 03eb657c to 03fb657f has its CatchHandler @ 03eb659c */
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                    /* try { // try from 03eb6580 to 03fb659f has its CatchHandler @ 03eb50a0 */
  FUN_03eb67b8();
  param_1[8] = lVar5;
  thunk_FUN_01f51358(param_1 + 8,lVar5);
                    /* catch() { ... } // from try @ 03eb657c with catch @ 03eb659c */
                    /* try { // try from 03eb65a0 to 03fb65b7 has its CatchHandler @ 03eb66e4 */
  lVar5 = FUN_01f08890(*(undefined8 *)puVar2,5);
  param_1[0xc] = lVar5;
  thunk_FUN_01f51358();
                    /* catch() { ... } // from try @ 03eb5988 with catch @ 03eb65b8
                       catch() { ... } // from try @ 03eb61b8 with catch @ 03eb65b8
                       try { // try from 03eb65b8 to 03fb65d7 has its CatchHandler @ 03eb50a0 */
                    /* catch() { ... } // from try @ 03eb6174 with catch @ 03eb65bc */
  FUN_035ac8e8(param_1,0);
                    /* catch() { ... } // from try @ 03eb587c with catch @ 03eb65c0 */
  param_1[4] = param_3;
  thunk_FUN_01f51358(param_1 + 4,param_3);
  param_1[6] = (long)param_2;
                    /* try { // try from 03eb65d8 to 03fb65db has its CatchHandler @ 03eb65fc */
                    /* try { // try from 03eb65dc to 03fb65ff has its CatchHandler @ 03eb50a0 */
  thunk_FUN_01f51358(param_1 + 6,param_2);
  (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
  puVar4 = PTR_DAT_0457ba20;
  puVar2 = PTR_DAT_0457b5d8;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch() { ... } // from try @ 03eb65d8 with catch @ 03eb65fc */
                    /* try { // try from 03eb6600 to 03fb6617 has its CatchHandler @ 03eb66e4 */
  lVar5 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 03eb616c with catch @ 03eb6618
                       try { // try from 03eb6618 to 03fb663b has its CatchHandler @ 03eb50a0 */
  uVar11 = *(undefined8 *)PTR_DAT_0457ba18;
                    /* catch() { ... } // from try @ 03eb5aa0 with catch @ 03eb661c
                       catch() { ... } // from try @ 03eb61a4 with catch @ 03eb661c */
                    /* catch() { ... } // from try @ 03eb59c8 with catch @ 03eb6620
                       catch() { ... } // from try @ 03eb61a0 with catch @ 03eb6620 */
  if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 03eb5628 with catch @ 03eb6624 */
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0457b5d8) {
                    /* catch() { ... } // from try @ 03eb663c with catch @ 03eb6660 */
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
        goto LAB_03eb6664;
      }
      uVar9 = uVar9 - 1;
                    /* try { // try from 03eb663c to 03fb663f has its CatchHandler @ 03eb6660 */
      piVar10 = piVar10 + 4;
                    /* try { // try from 03eb6640 to 03fb6663 has its CatchHandler @ 03eb50a0 */
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)PTR_DAT_0457b5d8,0xd);
LAB_03eb6664:
  puVar3 = PTR_DAT_0457b5f0;
                    /* try { // try from 03eb6664 to 03fb667b has its CatchHandler @ 03eb66e4 */
                    /* catch() { ... } // from try @ 03eb5920 with catch @ 03eb667c
                       catch() { ... } // from try @ 03eb6178 with catch @ 03eb667c
                       try { // try from 03eb667c to 03fb669b has its CatchHandler @ 03eb50a0 */
  lVar5 = (*(code *)*puVar6)(param_2,2,uVar11,puVar6[1]);
                    /* catch() { ... } // from try @ 03eb58f8 with catch @ 03eb6680
                       catch() { ... } // from try @ 03eb6170 with catch @ 03eb6680 */
  param_1[0x10] = lVar5;
  thunk_FUN_01f51358();
  lVar7 = *param_2;
  lVar5 = *(long *)puVar2;
  uVar11 = *(undefined8 *)puVar4;
                    /* try { // try from 03eb669c to 03fb669f has its CatchHandler @ 03eb66c0 */
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 03eb66a0 to 03fb66c3 has its CatchHandler @ 03eb50a0 */
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar5) {
                    /* try { // try from 03eb66dc to 03fb66e3 has its CatchHandler @ 03eb66e4 */
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
        goto LAB_03eb66e4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 03eb669c with catch @ 03eb66c0 */
    } while (uVar9 != 0);
  }
                    /* try { // try from 03eb66c4 to 03fb66cf has its CatchHandler @ 03eb66e4 */
  puVar6 = (undefined8 *)FUN_01ecb238(param_2,lVar5,0xd);
                    /* try { // try from 03eb66d0 to 03fb66db has its CatchHandler @ 03eb50a0 */
LAB_03eb66e4:
  puVar4 = PTR_DAT_0457b740;
                    /* catch() { ... } // from try @ 03eb62f4 with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb635c with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb63dc with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb6424 with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb64e4 with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb6548 with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb65a0 with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb6600 with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb6664 with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb66c4 with catch @ 03eb66e4
                       catch() { ... } // from try @ 03eb66dc with catch @ 03eb66e4 */
  lVar5 = (*(code *)*puVar6)(param_2,3,uVar11,puVar6[1]);
  param_1[0x11] = lVar5;
  thunk_FUN_01f51358();
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar3;
  }
  lVar8 = *param_2;
  lVar7 = *(long *)puVar2;
  uVar11 = *(undefined8 *)puVar4;
  uVar1 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 4);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
        goto LAB_03eb6780;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0xd);
LAB_03eb6780:
  lVar5 = (*(code *)*puVar6)(param_2,uVar1,uVar11,puVar6[1]);
  param_1[0x12] = lVar5;
  thunk_FUN_01f51358(param_1 + 0x12,lVar5);
  return;
}


