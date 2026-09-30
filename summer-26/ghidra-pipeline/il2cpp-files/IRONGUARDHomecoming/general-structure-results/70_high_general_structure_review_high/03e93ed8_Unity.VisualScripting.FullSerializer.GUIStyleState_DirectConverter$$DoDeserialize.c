/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.GUIStyleState_DirectConverter$$DoDeserialize
ENTRY_POINT: 03e93ed8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_GUIStyleState_DirectConverter__DoDeserialize
               (undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x19;
  int iVar12;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  if (1 < *(uint *)(unaff_x22 + -8)) {
    *(undefined8 *)(unaff_x20 + 0x28) = param_1;
    thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x28),param_1);
    if (2 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)PTR_DAT_0457a680;
      thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x30));
      if (3 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x38) = *unaff_x21;
        thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x38));
        puVar3 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
                    /* try { // try from 03e93f40 to 03f93fcb has its CatchHandler @ 03e93f40
                       catch() { ... } // from try @ 03e93f40 with catch @ 03e93f40
                       catch() { ... } // from try @ 03e9403c with catch @ 03e93f40
                       catch() { ... } // from try @ 03e94074 with catch @ 03e93f40
                       catch() { ... } // from try @ 03e940b8 with catch @ 03e93f40
                       catch() { ... } // from try @ 03e940e8 with catch @ 03e93f40 */
        if (4 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x40) =
               *(undefined8 *)
                Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
          thunk_FUN_01f51358();
          uVar5 = FUN_0340efe8();
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar3);
          }
          FUN_0403eb34(uVar5);
          lVar8 = *(long *)(unaff_x19 + 0xb0);
          if (lVar8 != 0) {
            iVar12 = *(int *)(lVar8 + 0x18);
            *(undefined4 *)(lVar8 + 0x18) = 0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (0 < iVar12) {
              FUN_0358d1e4(*(undefined8 *)(lVar8 + 0x10),0,iVar12,0);
            }
                    /* try { // try from 03e93fcc to 03f93fd3 has its CatchHandler @ 03e94080 */
            lVar8 = *(long *)(unaff_x19 + 0xc0);
            if (lVar8 != 0) {
              iVar12 = *(int *)(lVar8 + 0x18);
              *(undefined4 *)(lVar8 + 0x18) = 0;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (0 < iVar12) {
                    /* try { // try from 03e93fec to 03f93ff3 has its CatchHandler @ 03e94098 */
                FUN_0358d1e4(*(undefined8 *)(lVar8 + 0x10),0,iVar12,0);
              }
              puVar4 = PTR_DAT_0457b2e8;
              puVar3 = PTR_DAT_0457b2b8;
              lVar8 = *(long *)(unaff_x19 + 0xd0);
              if (lVar8 != 0) {
                    /* try { // try from 03e9400c to 03f94013 has its CatchHandler @ 03e9407c */
                iVar12 = 0;
                    /* try { // try from 03e9401c to 03f9402b has its CatchHandler @ 03e9408c */
                do {
                  if (*(int *)(lVar8 + 0x18) <= iVar12) {
                    FUN_03e93770();
                    return;
                  }
                    /* try { // try from 03e94038 to 03f9403b has its CatchHandler @ 03e9409c */
                    /* try { // try from 03e9403c to 03f9405b has its CatchHandler @ 03e93f40 */
                  lVar8 = FUN_030f28e4(lVar8,iVar12,*(undefined8 *)PTR_DAT_0457b2e0);
                  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0457b2f0);
                    /* try { // try from 03e9405c to 03f9405f has its CatchHandler @ 03e94094 */
                    /* try { // try from 03e94060 to 03f94063 has its CatchHandler @ 03e94090 */
                    /* try { // try from 03e94064 to 03f94067 has its CatchHandler @ 03e94088 */
                  FUN_040cf2e8(lVar6,0);
                    /* try { // try from 03e94068 to 03f9406b has its CatchHandler @ 03e94084 */
                    /* try { // try from 03e9406c to 03f9406f has its CatchHandler @ 03e94078 */
                    /* try { // try from 03e94070 to 03f94073 has its CatchHandler @ 03e94074 */
                    /* catch() { ... } // from try @ 03e94070 with catch @ 03e94074
                       try { // try from 03e94074 to 03f940b3 has its CatchHandler @ 03e93f40 */
                    /* catch() { ... } // from try @ 03e9406c with catch @ 03e94078 */
                    /* catch() { ... } // from try @ 03e9400c with catch @ 03e9407c */
                  if ((lVar6 == 0) || (FUN_040cf284(lVar6,iVar12,0), lVar8 == 0)) break;
                  *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(lVar8 + 0x50);
                  thunk_FUN_01f51358();
                  in_stack_00000028 = 0;
                  in_stack_00000030 = 0;
                  in_stack_00000038 = 0;
                  FUN_040cf0dc(*(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar8 + 0x20),
                               *(undefined4 *)(lVar8 + 0x24),*(undefined4 *)(lVar8 + 0x28),
                               *(undefined4 *)(lVar8 + 0x2c),&stack0x00000028,0);
                  in_stack_00000018 = in_stack_00000030;
                  in_stack_00000010 = in_stack_00000028;
                  in_stack_00000020 = in_stack_00000038;
                  FUN_040cf2a0(lVar6,&stack0x00000010,0);
                  FUN_040ceef0();
                  FUN_040cf2c0(lVar6,0,0,0);
                  FUN_040cf2d0(0x3f800000,lVar6,0);
                  FUN_040cf2e0(lVar6,0,0);
                  lVar7 = *(long *)(unaff_x19 + 0xc0);
                  if (lVar7 == 0) break;
                  lVar9 = *(long *)(lVar7 + 0x10);
                  lVar11 = *(long *)PTR_DAT_0457b2c0;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar9 == 0) break;
                  uVar2 = *(uint *)(lVar7 + 0x18);
                  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                    plVar10 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar10 = lVar6;
                    thunk_FUN_01f51358(plVar10,lVar6);
                  }
                  else {
                    FUN_030f2bb4(lVar7,lVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                  FUN_035ac8e8(lVar7,0);
                  *(undefined1 *)(lVar7 + 0x10) = 2;
                  *(long *)(lVar7 + 0x20) = lVar6;
                  thunk_FUN_01f51358((long *)(lVar7 + 0x20),lVar6);
                  iVar1 = 0xfffe;
                  if (*(int *)(lVar8 + 0x44) != 0) {
                    iVar1 = *(int *)(lVar8 + 0x44);
                  }
                  *(int *)(lVar7 + 0x14) = iVar1;
                  FUN_03e9526c(lVar7,*(undefined8 *)(lVar8 + 0x38));
                  *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(lVar8 + 0x30);
                  lVar8 = *(long *)(unaff_x19 + 0xb0);
                  if (lVar8 == 0) break;
                  lVar6 = *(long *)(lVar8 + 0x10);
                  lVar9 = *(long *)puVar3;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar6 == 0) break;
                  uVar2 = *(uint *)(lVar8 + 0x18);
                  if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                    plVar10 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar10 = lVar7;
                    thunk_FUN_01f51358(plVar10,lVar7);
                  }
                  else {
                    FUN_030f2bb4(lVar8,lVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar8 = *(long *)(unaff_x19 + 0xd0);
                  iVar12 = iVar12 + 1;
                } while (lVar8 != 0);
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


