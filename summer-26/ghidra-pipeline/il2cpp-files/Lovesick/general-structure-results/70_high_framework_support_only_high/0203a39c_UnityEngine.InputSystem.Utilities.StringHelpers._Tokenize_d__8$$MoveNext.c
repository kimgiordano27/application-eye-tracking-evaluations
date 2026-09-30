/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.StringHelpers.<Tokenize>d__8$$MoveNext
ENTRY_POINT: 0203a39c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0203a51c) */
/* WARNING: Removing unreachable block (ram,0x0203a700) */
/* WARNING: Type propagation algorithm not settling */

void UnityEngine_InputSystem_Utilities_StringHelpers_<Tokenize>d__8__MoveNext(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  ulong unaff_x26;
  undefined8 in_stack_00000008;
  
  do {
                    /* try { // try from 0203a39c to 0213a39f has its CatchHandler @ 0203a3b0 */
                    /* catch() { ... } // from try @ 0203a2ac with catch @ 0203a3a0
                       catch() { ... } // from try @ 0203a368 with catch @ 0203a3a0
                       try { // try from 0203a3a0 to 0213a3cf has its CatchHandler @ 0203a1bc */
    uVar10 = (ulong)*(ushort *)(param_1 + 0x12a);
                    /* catch() { ... } // from try @ 0203a290 with catch @ 0203a3a4
                       catch() { ... } // from try @ 0203a334 with catch @ 0203a3a4 */
    if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 0203a274 with catch @ 0203a3a8
                       catch() { ... } // from try @ 0203a300 with catch @ 0203a3a8 */
                    /* catch() { ... } // from try @ 0203a258 with catch @ 0203a3ac
                       catch() { ... } // from try @ 0203a2cc with catch @ 0203a3ac */
      piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 0203a238 with catch @ 0203a3b0
                       catch() { ... } // from try @ 0203a39c with catch @ 0203a3b0 */
                    /* catch() { ... } // from try @ 0203a210 with catch @ 0203a3b4
                       catch() { ... } // from try @ 0203a2c8 with catch @ 0203a3b4 */
                    /* catch() { ... } // from try @ 0203a1f4 with catch @ 0203a3b8 */
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar6 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0203a3e4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
                    /* try { // try from 0203a3d0 to 0213a3e7 has its CatchHandler @ 0203a424 */
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_0203a3e4:
                    /* try { // try from 0203a3e8 to 0213a413 has its CatchHandler @ 0203a1bc */
    uVar10 = (*(code *)*puVar6)();
    if ((uVar10 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_00d6225c();
      if (plVar7 == (long *)0x0) goto LAB_0203a510;
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 == 0) goto LAB_0203a4e8;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 0203a414 to 0213a423 has its CatchHandler @ 0203a424 */
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
                    /* catch() { ... } // from try @ 0203a428 with catch @ 0203a434 */
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0203a444;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
                    /* catch() { ... } // from try @ 0203a3d0 with catch @ 0203a424
                       catch() { ... } // from try @ 0203a414 with catch @ 0203a424 */
                    /* try { // try from 0203a428 to 0213a42b has its CatchHandler @ 0203a434 */
                    /* try { // try from 0203a42c to 0213a437 has its CatchHandler @ 0203a1bc */
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_0203a444:
    plVar7 = (long *)(*(code *)*puVar6)();
    if ((unaff_x26 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x1d8))();
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    (**(code **)(*unaff_x19 + 0x1d8))();
    unaff_x26 = 0;
    param_1 = *unaff_x21;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *unaff_x24) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0203a504;
    }
  }
LAB_0203a4e8:
                    /* catch() { ... } // from try @ 0203a6cc with catch @ 0203a4e8
                       catch() { ... } // from try @ 0203a714 with catch @ 0203a4e8
                       catch() { ... } // from try @ 0203a758 with catch @ 0203a4e8 */
  puVar6 = (undefined8 *)FUN_00d59724(plVar7,*unaff_x24,0);
LAB_0203a504:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_0203a510:
                    /* try { // try from 0203a520 to 0213a52b has its CatchHandler @ 0203a6e4 */
                    /* try { // try from 0203a53c to 0213a54b has its CatchHandler @ 0203a6e0 */
  (**(code **)(*unaff_x19 + 0x1f8))();
  puVar4 = StringLiteral_268;
  uVar1 = *(uint *)(unaff_x19 + 4);
  plVar7 = (long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  plVar3 = (long *)StringLiteral_2672;
  if ((uVar1 >> 4 & 1) != 0) {
                    /* try { // try from 0203a564 to 0213a573 has its CatchHandler @ 0203a6dc */
    uVar8 = FUN_020394d4();
    FUN_015f5b28(*(undefined8 *)puVar4,uVar8,0);
                    /* try { // try from 0203a584 to 0213a59f has its CatchHandler @ 0203a6d8 */
    (**(code **)(*unaff_x19 + 0x1f8))();
    uVar1 = *(uint *)(unaff_x19 + 4);
    plVar7 = (long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    plVar3 = (long *)StringLiteral_2672;
  }
  puVar6 = (undefined8 *)PTR_DAT_033ee290;
  Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ = (undefined *)plVar7;
  StringLiteral_2672 = (undefined *)plVar3;
  if ((uVar1 >> 1 & 1) != 0) {
                    /* try { // try from 0203a5a0 to 0213a5bb has its CatchHandler @ 0203a6d4 */
    in_stack_00000008 = FUN_020393e8();
                    /* try { // try from 0203a5bc to 0213a5d7 has its CatchHandler @ 0203a6d0 */
    if (*(int *)(*plVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(*plVar7);
    }
    puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_68__;
    puVar4 = 
    System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_TypeInfo
    ;
                    /* try { // try from 0203a5d8 to 0213a5f3 has its CatchHandler @ 0203a6cc */
    uVar8 = FUN_01731954(0);
    if (*(int *)(*plVar3 + 0xe0) == 0) {
                    /* try { // try from 0203a5f4 to 0213a5f7 has its CatchHandler @ 0203a6e0 */
      thunk_FUN_00d32864(*plVar3);
    }
    uVar8 = FUN_017507b8(&stack0x00000008,*(undefined8 *)puVar5,uVar8,0);
    FUN_015f5b28(*(undefined8 *)puVar4,uVar8,0);
    (**(code **)(*unaff_x19 + 0x1f8))();
    uVar1 = *(uint *)(unaff_x19 + 4);
    puVar6 = (undefined8 *)PTR_DAT_033ee290;
  }
  PTR_DAT_033ee290 = (undefined *)puVar6;
  puVar2 = (undefined8 *)PTR_DAT_033f5da8;
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_02039564();
    uVar8 = FUN_0176fc30();
    FUN_015f5b28(*puVar6,uVar8,0);
    (**(code **)(*unaff_x19 + 0x1f8))();
    uVar1 = *(uint *)(unaff_x19 + 4);
    puVar2 = (undefined8 *)PTR_DAT_033f5da8;
  }
  PTR_DAT_033f5da8 = (undefined *)puVar2;
  if ((uVar1 >> 5 & 1) != 0) {
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if (lVar9 == 0) {
      lVar9 = FUN_017b81a0(0);
      *(long *)(unaff_x20 + 0x20) = lVar9;
    }
    FUN_015f5b28(*puVar2,lVar9,0);
    (**(code **)(*unaff_x19 + 0x1f8))();
  }
  *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + -1;
  return;
}


