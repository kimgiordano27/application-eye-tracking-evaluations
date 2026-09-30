/*
FUNCTION_NAME: FullSerializer.fsAotCompilationManager$$IsAotModelUpToDate
ENTRY_POINT: 044a688c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 FullSerializer_fsAotCompilationManager__IsAotModelUpToDate(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  void *in_stack_00000008;
  void *in_stack_00000018;
  byte in_stack_00000020;
  void *in_stack_00000030;
  
  DAT_0a54a690 = thunk_FUN_0449f41c(param_1);
  FUN_04447bc8();
  FUN_04488c08();
  FUN_0449f2c4(*(undefined8 *)(unaff_x22 + 0x398));
  lVar2 = FUN_04484b64("System");
  if (lVar2 != 0) {
    uVar3 = FUN_04484a34();
    DAT_0a54a638 = thunk_FUN_0449f41c(uVar3,"System",&DAT_01d02bca);
                    /* catch() { ... } // from try @ 044a690c with catch @ 044a68d4
                       catch() { ... } // from try @ 044a6950 with catch @ 044a68d4
                       catch() { ... } // from try @ 044a6994 with catch @ 044a68d4 */
  }
  lVar2 = FUN_04484b64("WindowsRuntimeMetadata");
  if (lVar2 != 0) {
    uVar3 = FUN_04484a34();
    DAT_0a54a608 = thunk_FUN_0449f41c(uVar3,"Windows.Foundation","IReference`1");
                    /* try { // try from 044a6908 to 045a690b has its CatchHandler @ 044a6950 */
                    /* try { // try from 044a690c to 045a694b has its CatchHandler @ 044a68d4 */
    DAT_0a54a610 = thunk_FUN_0449f41c(uVar3,"Windows.Foundation","IReferenceArray`1");
    DAT_0a54a618 = thunk_FUN_0449f41c(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
                    /* try { // try from 044a694c to 045a694f has its CatchHandler @ 044a6950 */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 044a6908 with catch @ 044a6950
                       catch(type#1 @ 0991e038) { ... } // from try @ 044a694c with catch @ 044a6950
                       try { // try from 044a6950 to 045a6967 has its CatchHandler @ 044a68d4 */
    DAT_0a54a618 = thunk_FUN_0449f41c(uVar3,"Windows.Foundation.Collections","IKeyValuePair`2");
                    /* try { // try from 044a6968 to 045a696b has its CatchHandler @ 044a6978 */
                    /* catch() { ... } // from try @ 044a6968 with catch @ 044a6978 */
    DAT_0a54a628 = thunk_FUN_0449f41c(uVar3,"Windows.Foundation",&DAT_01d02bca);
                    /* try { // try from 044a698c to 045a6993 has its CatchHandler @ 044a69a8 */
                    /* try { // try from 044a6994 to 045a699f has its CatchHandler @ 044a68d4 */
                    /* try { // try from 044a69a0 to 045a69a7 has its CatchHandler @ 044a69a8 */
    DAT_0a54a630 = thunk_FUN_0449f41c(uVar3,"Windows.Foundation","IUriRuntimeClass");
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044a698c with catch @ 044a69a8
                       catch(type#2 @ 00000000) { ... } // from try @ 044a69a0 with catch @ 044a69a8
                        */
  }
                    /* catch() { ... } // from try @ 044a69e0 with catch @ 044a69ac
                       catch() { ... } // from try @ 044a6a24 with catch @ 044a69ac
                       catch() { ... } // from try @ 044a6a68 with catch @ 044a69ac */
  FUN_044a8ff0(DAT_0a54a428);
  thunk_FUN_04447bc8();
  lVar2 = FUN_0449541c();
  FUN_04498f50();
  FUN_04499cc0();
  uVar3 = thunk_FUN_0448520c(DAT_0a54a4b0);
                    /* try { // try from 044a69dc to 045a69df has its CatchHandler @ 044a6a24 */
                    /* try { // try from 044a69e0 to 045a6a1f has its CatchHandler @ 044a69ac */
  lVar4 = thunk_FUN_0448520c(DAT_0a54a4a8);
  FUN_0444a594(lVar4 + 0x18,lVar2);
  FUN_0444a594(lVar2,lVar4);
  FUN_0444a594(lVar2 + 8,uVar3);
  *(undefined4 *)(lVar2 + 0x28) = 1;
  uVar3 = FUN_044a5c64();
                    /* try { // try from 044a6a20 to 045a6a23 has its CatchHandler @ 044a6a24 */
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 044a69dc with catch @ 044a6a24
                       catch(type#1 @ 0991e038) { ... } // from try @ 044a6a20 with catch @ 044a6a24
                       try { // try from 044a6a24 to 045a6a3b has its CatchHandler @ 044a69ac */
  FUN_044975f4();
  FUN_04449e24();
  FUN_044accc0();
  FUN_04482b88(DAT_0a54a428);
                    /* try { // try from 044a6a3c to 045a6a3f has its CatchHandler @ 044a6a4c */
  FUN_044a8ff0(DAT_0a54a428);
                    /* catch() { ... } // from try @ 044a6a3c with catch @ 044a6a4c */
  uVar3 = FUN_044a9260(DAT_0a54a428,"Empty");
  uVar5 = FUN_04482bd4();
                    /* try { // try from 044a6a60 to 045a6a67 has its CatchHandler @ 044a6a7c */
  FUN_044a5984(uVar3,uVar5);
                    /* try { // try from 044a6a68 to 045a6a73 has its CatchHandler @ 044a69ac */
  DAT_0a54a698 = 1;
                    /* try { // try from 044a6a74 to 045a6a7b has its CatchHandler @ 044a6a7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044a6a60 with catch @ 044a6a7c
                       catch(type#2 @ 00000000) { ... } // from try @ 044a6a74 with catch @ 044a6a7c
                        */
  FUN_044529f8(&stack0x00000020,"MONO_REFLECTION_SERIALIZER");
  FUN_044529f8(&stack0x00000008,&DAT_01c9645d);
  FUN_0447b21c(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_044529f8(&stack0x00000020,"MONO_XMLSERIALIZER_THS");
  FUN_044529f8(&stack0x00000008,&DAT_01cca050);
  FUN_0447b21c(&stack0x00000020,&stack0x00000008);
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_04495478(lVar2);
  FUN_044954c0(*(undefined8 *)(lVar2 + 0x10));
  FUN_0447b85c(&stack0x00000020);
  FUN_044a6c10(&stack0x00000020);
  iVar1 = FUN_0447e9e4();
  if (iVar1 == 0) {
    in_stack_00000008 = (void *)((ulong)&stack0x00000020 | 1);
    if ((in_stack_00000020 & 1) != 0) {
      in_stack_00000008 = in_stack_00000030;
    }
    FUN_0447e824(&stack0x00000008,1);
  }
  FUN_044ac9bc();
  FUN_044aca3c();
  FUN_044800e0();
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  FUN_04448ff8(&stack0x00000038);
  return 1;
}


