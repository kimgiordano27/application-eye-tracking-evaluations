/*
FUNCTION_NAME: FUN_010d643c
ENTRY_POINT: 010d643c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_010d643c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined *puVar6;
  
                    /* try { // try from 010d6440 to 011d649b has its CatchHandler @ 010d624c */
  plVar9 = *(long **)(param_2 + 0x38);
  if (plVar9 == (long *)0x0) {
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    plVar9 = *(long **)(param_2 + 0x38);
    if (plVar9 == (long *)0x0) {
      FUN_00d59478(param_2);
      plVar9 = *(long **)(param_2 + 0x38);
    }
  }
  if ((*(byte *)(*plVar9 + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar1 = thunk_FUN_00d62348();
  if (lVar1 == 0) {
LAB_010d66e8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 010d649c to 011d649f has its CatchHandler @ 010d64e4 */
                    /* try { // try from 010d64a0 to 011d64a3 has its CatchHandler @ 010d64e0 */
                    /* try { // try from 010d64a4 to 011d64a7 has its CatchHandler @ 010d64dc */
  puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 8);
                    /* try { // try from 010d64a8 to 011d64ab has its CatchHandler @ 010d64d8 */
                    /* try { // try from 010d64ac to 011d64af has its CatchHandler @ 010d64d4 */
                    /* try { // try from 010d64b0 to 011d64b3 has its CatchHandler @ 010d64d0 */
                    /* try { // try from 010d64b4 to 011d64b7 has its CatchHandler @ 010d64cc */
  (*(code *)puVar8[2])(*puVar8,puVar8,lVar1,0,0);
                    /* try { // try from 010d64b8 to 011d64bb has its CatchHandler @ 010d64c8 */
                    /* try { // try from 010d64bc to 011d64bf has its CatchHandler @ 010d64c4 */
                    /* try { // try from 010d64c0 to 011d652f has its CatchHandler @ 010d624c */
                    /* catch() { ... } // from try @ 010d64bc with catch @ 010d64c4 */
  *(undefined8 *)(lVar1 + 0x10) = param_1;
                    /* catch() { ... } // from try @ 010d64b8 with catch @ 010d64c8 */
  uVar2 = FUN_0169f70c(param_1,0,0);
                    /* catch() { ... } // from try @ 010d64b4 with catch @ 010d64cc */
  if ((uVar2 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar10 = thunk_FUN_00d48444(Meta_WitAi_Requests_VRequest_<>c__DisplayClass116_0_TypeInfo);
    FUN_016ec5b8(uVar3,uVar10,0);
    uVar10 = thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_ArrayLengthInstruction_TypeInfo)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar10);
  }
                    /* catch() { ... } // from try @ 010d64b0 with catch @ 010d64d0 */
                    /* catch() { ... } // from try @ 010d64ac with catch @ 010d64d4 */
  if (*(long *)(lVar1 + 0x10) == 0) goto LAB_010d66e8;
                    /* catch() { ... } // from try @ 010d64a8 with catch @ 010d64d8 */
                    /* catch() { ... } // from try @ 010d64a4 with catch @ 010d64dc */
  uVar2 = FUN_016ac334(*(long *)(lVar1 + 0x10),0);
                    /* catch() { ... } // from try @ 010d64a0 with catch @ 010d64e0 */
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 010d649c with catch @ 010d64e4 */
    plVar9 = *(long **)(lVar1 + 0x10);
                    /* catch() { ... } // from try @ 010d6390 with catch @ 010d64e8 */
    if (plVar9 == (long *)0x0) goto LAB_010d66e8;
                    /* catch() { ... } // from try @ 010d6364 with catch @ 010d64ec */
                    /* catch() { ... } // from try @ 010d63a0 with catch @ 010d64f0 */
                    /* catch() { ... } // from try @ 010d6368 with catch @ 010d64f4 */
                    /* catch() { ... } // from try @ 010d6344 with catch @ 010d64f8 */
    uVar3 = (**(code **)(*plVar9 + 0x3f8))(plVar9,*(undefined8 *)(*plVar9 + 0x400));
    puVar6 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
                    /* catch() { ... } // from try @ 010d6334 with catch @ 010d64fc */
                    /* catch() { ... } // from try @ 010d6404 with catch @ 010d6500 */
                    /* catch() { ... } // from try @ 010d6428 with catch @ 010d6504 */
                    /* catch() { ... } // from try @ 010d63f4 with catch @ 010d6508 */
                    /* catch() { ... } // from try @ 010d6438 with catch @ 010d650c */
                    /* catch() { ... } // from try @ 010d6418 with catch @ 010d6510 */
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 010d63e4 with catch @ 010d6514 */
                    /* catch() { ... } // from try @ 010d63d4 with catch @ 010d6518 */
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar10 = FUN_01780344(uVar10,0);
                    /* try { // try from 010d6530 to 011d6533 has its CatchHandler @ 010d655c */
                    /* try { // try from 010d6534 to 011d656b has its CatchHandler @ 010d624c */
    uVar2 = FUN_0178a8c4(uVar3,uVar10,0);
    if ((uVar2 & 1) != 0) {
                    /* try { // try from 010d66d0 to 011d66d7 has its CatchHandler @ 010d69d8 */
      uVar3 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
      plVar9 = (long *)FUN_00da4fb8(uVar3,5);
      if (plVar9 == (long *)0x0) goto LAB_010d66e8;
                    /* try { // try from 010d67c4 to 011d6803 has its CatchHandler @ 010d69ec */
      lVar4 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                );
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0))
      goto LAB_010d67e8;
      lVar4 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                );
      if ((int)plVar9[3] == 0) goto LAB_010d6808;
      plVar9[4] = lVar4;
      plVar7 = *(long **)(lVar1 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_010d66e8;
                    /* try { // try from 010d6820 to 011d683f has its CatchHandler @ 010d69e4 */
      lVar1 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((lVar1 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)) {
LAB_010d67e8:
        uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar3,0);
      }
                    /* try { // try from 010d6840 to 011d687f has its CatchHandler @ 010d69f0 */
      if (*(uint *)(plVar9 + 3) < 2) {
LAB_010d6808:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar9[5] = lVar1;
      lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_119__);
      if ((lVar1 != 0) &&
         (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar9 + 0x40)), lVar1 == 0))
      goto LAB_010d67e8;
      lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_119__);
      if (*(uint *)(plVar9 + 3) < 3) goto LAB_010d6808;
      plVar9[6] = lVar1;
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
      lVar1 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar7 = (long *)FUN_01780344(uVar3,0);
      uVar3 = 0;
      if (plVar7 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      }
      FUN_00ac2be8(plVar9);
      FUN_00acb0b4(plVar9,uVar3);
      FUN_00acb320(plVar9,3,uVar3);
      FUN_00ac2be8(plVar9);
      puVar6 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
      uVar3 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                );
      FUN_00acb0b4(plVar9,uVar3);
      uVar3 = thunk_FUN_00d48444(puVar6);
      FUN_00acb320(plVar9,4,uVar3);
      uVar3 = FUN_01600844(plVar9,0);
      goto LAB_010d6780;
    }
    plVar9 = *(long **)(lVar1 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_010d66e8;
    lVar4 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
                    /* catch() { ... } // from try @ 010d6530 with catch @ 010d655c */
    if (lVar4 == 0) goto LAB_010d66e8;
    if (*(int *)(lVar4 + 0x18) == 1) {
                    /* try { // try from 010d656c to 011d6573 has its CatchHandler @ 010d6588 */
      plVar9 = *(long **)(lVar4 + 0x20);
      if (plVar9 == (long *)0x0) goto LAB_010d66e8;
                    /* try { // try from 010d6574 to 011d657f has its CatchHandler @ 010d624c */
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
                    /* try { // try from 010d6580 to 011d6587 has its CatchHandler @ 010d6588 */
                    /* catch() { ... } // from try @ 010d656c with catch @ 010d6588
                       catch() { ... } // from try @ 010d6580 with catch @ 010d6588 */
                    /* try { // try from 010d658c to 011d66bf has its CatchHandler @ 010d658c
                       catch() { ... } // from try @ 010d658c with catch @ 010d658c
                       catch() { ... } // from try @ 010d6880 with catch @ 010d658c
                       catch() { ... } // from try @ 010d6998 with catch @ 010d658c
                       catch() { ... } // from try @ 010d6a0c with catch @ 010d658c
                       catch() { ... } // from try @ 010d6a4c with catch @ 010d658c */
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      uVar3 = FUN_01780344(uVar3,0);
      if (plVar9 == (long *)0x0) goto LAB_010d66e8;
      uVar2 = (**(code **)(*plVar9 + 0x2c8))(plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x2d0));
      if ((uVar2 & 1) != 0) {
        uVar3 = FUN_01c72124(*(undefined8 *)(lVar1 + 0x10),0,0);
        *(undefined8 *)(lVar1 + 0x10) = uVar3;
        if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x38) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        lVar4 = thunk_FUN_00d62348();
        if (lVar4 != 0) {
          local_40 = &local_38;
          puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 0x30);
          local_38 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x20);
          local_48 = lVar1;
          (*(code *)puVar8[2])(*puVar8,puVar8,lVar4,&local_48,&local_38);
          return lVar4;
        }
        goto LAB_010d66e8;
      }
                    /* try { // try from 010d6730 to 011d673b has its CatchHandler @ 010d69d4 */
      plVar9 = *(long **)(lVar1 + 0x10);
      FUN_00ac2be8(plVar9);
                    /* try { // try from 010d6740 to 011d6747 has its CatchHandler @ 010d69d0 */
      uVar3 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      uVar10 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                 );
                    /* try { // try from 010d675c to 011d678f has its CatchHandler @ 010d69e0 */
      puVar6 = Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__;
    }
    else {
      FUN_00ac2be8(lVar1);
      plVar9 = *(long **)(lVar1 + 0x10);
                    /* try { // try from 010d66f8 to 011d66fb has its CatchHandler @ 010d69c0 */
                    /* try { // try from 010d66fc to 011d670b has its CatchHandler @ 010d69c4 */
      FUN_00ac2be8(plVar9);
      uVar3 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
                    /* try { // try from 010d6710 to 011d671b has its CatchHandler @ 010d69c8 */
      uVar10 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                 );
      puVar6 = StringLiteral_391;
                    /* try { // try from 010d6728 to 011d672b has its CatchHandler @ 010d69cc */
    }
  }
  else {
    plVar9 = *(long **)(lVar1 + 0x10);
    FUN_00ac2be8(plVar9);
    uVar3 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    uVar10 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                               );
    puVar6 = Method_Newtonsoft_Json_JsonTextReader_ParseComment__;
                    /* try { // try from 010d66c0 to 011d66c7 has its CatchHandler @ 010d69dc */
  }
  uVar5 = thunk_FUN_00d48444(puVar6);
  uVar3 = FUN_01600424(uVar10,uVar3,uVar5,0);
LAB_010d6780:
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
                    /* try { // try from 010d67a4 to 011d67c3 has its CatchHandler @ 010d69e8 */
  FUN_016f2f28(uVar10,uVar3,0);
  uVar3 = thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_ArrayLengthInstruction_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar3);
}


