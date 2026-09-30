/*
FUNCTION_NAME: Meta.Voice.Audio.BaseAudioSystem<__Il2CppFullySharedGenericType,-object>$$GenerateClip
ENTRY_POINT: 010d2bec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_Voice_Audio_BaseAudioSystem<__Il2CppFullySharedGenericType,_object>__GenerateClip(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 unaff_x21;
  undefined8 uVar10;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined *puVar7;
  
  FUN_00d59478();
  if ((*(byte *)(**(long **)(unaff_x19 + 0x38) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar1 = thunk_FUN_00d62348();
  if (lVar1 == 0) {
LAB_010d2ff8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 010d2c10 to 011d2c17 has its CatchHandler @ 010d2dc0 */
                    /* try { // try from 010d2c20 to 011d2c27 has its CatchHandler @ 010d2db8 */
  puVar9 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8);
  (*(code *)puVar9[2])(*puVar9,puVar9,lVar1,0,0);
                    /* try { // try from 010d2c38 to 011d2c3b has its CatchHandler @ 010d2d9c */
                    /* try { // try from 010d2c3c to 011d2c4b has its CatchHandler @ 010d2dbc */
  *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
  uVar2 = FUN_0169f70c();
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 010d2de0 to 011d2e17 has its CatchHandler @ 010d2af4 */
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar10 = thunk_FUN_00d48444(Meta_WitAi_Requests_VRequest_<>c__DisplayClass116_0_TypeInfo);
                    /* catch() { ... } // from try @ 010d2ddc with catch @ 010d2e08 */
    FUN_016ec5b8(uVar4,uVar10,0);
                    /* try { // try from 010d2e18 to 011d2e1f has its CatchHandler @ 010d2e34 */
    uVar10 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_List<MedleyAmpPuzzleSwitch>_get_Item__
                               );
                    /* try { // try from 010d2e20 to 011d2e2b has its CatchHandler @ 010d2af4 */
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar10);
  }
                    /* try { // try from 010d2c50 to 011d2c5b has its CatchHandler @ 010d2db0 */
  if (*(long *)(lVar1 + 0x10) == 0) goto LAB_010d2ff8;
  uVar2 = FUN_016ac334(*(long *)(lVar1 + 0x10),0);
  if ((uVar2 & 1) == 0) {
    plVar3 = *(long **)(lVar1 + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_010d2ff8;
                    /* try { // try from 010d2c68 to 011d2c6b has its CatchHandler @ 010d2dac */
                    /* try { // try from 010d2c70 to 011d2c7b has its CatchHandler @ 010d2da0 */
    uVar4 = (**(code **)(*plVar3 + 0x3f8))(plVar3,*(undefined8 *)(*plVar3 + 0x400));
    puVar7 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
                    /* try { // try from 010d2c80 to 011d2c87 has its CatchHandler @ 010d2da8 */
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
                    /* try { // try from 010d2c9c to 011d2cc7 has its CatchHandler @ 010d2dc4 */
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar10 = FUN_01780344(uVar10,0);
    uVar2 = FUN_0178a8c4(uVar4,uVar10,0);
    if ((uVar2 & 1) == 0) {
      plVar3 = *(long **)(lVar1 + 0x10);
      if (plVar3 == (long *)0x0) goto LAB_010d2ff8;
      lVar5 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
                    /* try { // try from 010d2cd8 to 011d2cf7 has its CatchHandler @ 010d2db4 */
      if (lVar5 == 0) goto LAB_010d2ff8;
      if (*(int *)(lVar5 + 0x18) != 1) {
        FUN_00ac2be8(lVar1);
        plVar3 = *(long **)(lVar1 + 0x10);
        FUN_00ac2be8(plVar3);
        uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        uVar10 = thunk_FUN_00d48444(
                                   Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                   );
                    /* try { // try from 010d2f7c to 011d2f83 has its CatchHandler @ 010d316c */
        puVar7 = PTR_DAT_033ec8c8;
        goto LAB_010d2f84;
      }
                    /* try { // try from 010d2cf8 to 011d2d07 has its CatchHandler @ 010d2da4 */
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
                    /* try { // try from 010d2d08 to 011d2d6b has its CatchHandler @ 010d2af4 */
      uVar4 = FUN_01780344(uVar4,0);
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_010d3040;
      plVar3 = *(long **)(lVar5 + 0x20);
      if (plVar3 == (long *)0x0) goto LAB_010d2ff8;
      uVar10 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__);
      }
      uVar2 = FUN_01c60be0(uVar4,uVar10,0);
      if ((uVar2 & 1) != 0) {
                    /* try { // try from 010d2d6c to 011d2d6f has its CatchHandler @ 010d2d94 */
                    /* try { // try from 010d2d70 to 011d2d73 has its CatchHandler @ 010d2d90 */
        uVar4 = FUN_01c6001c(*(undefined8 *)(lVar1 + 0x10),0,0);
                    /* try { // try from 010d2d74 to 011d2d77 has its CatchHandler @ 010d2d8c */
        *(undefined8 *)(lVar1 + 0x10) = uVar4;
                    /* try { // try from 010d2d78 to 011d2d7b has its CatchHandler @ 010d2d88 */
                    /* try { // try from 010d2d7c to 011d2d83 has its CatchHandler @ 010d2d98 */
                    /* try { // try from 010d2d84 to 011d2ddb has its CatchHandler @ 010d2af4 */
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x132) & 1) == 0) {
                    /* catch() { ... } // from try @ 010d2d78 with catch @ 010d2d88 */
          FUN_00d5941c();
        }
                    /* catch() { ... } // from try @ 010d2d74 with catch @ 010d2d8c */
        lVar5 = thunk_FUN_00d62348();
                    /* catch() { ... } // from try @ 010d2d70 with catch @ 010d2d90 */
        if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 010d2d6c with catch @ 010d2d94 */
                    /* catch() { ... } // from try @ 010d2d7c with catch @ 010d2d98 */
          in_stack_00000010 = &stack0x00000018;
                    /* catch() { ... } // from try @ 010d2c38 with catch @ 010d2d9c */
                    /* catch() { ... } // from try @ 010d2c70 with catch @ 010d2da0 */
                    /* catch() { ... } // from try @ 010d2cf8 with catch @ 010d2da4 */
          puVar9 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
                    /* catch() { ... } // from try @ 010d2c80 with catch @ 010d2da8 */
          in_stack_00000018 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
                    /* catch() { ... } // from try @ 010d2c68 with catch @ 010d2dac */
                    /* catch() { ... } // from try @ 010d2c50 with catch @ 010d2db0 */
                    /* catch() { ... } // from try @ 010d2cd8 with catch @ 010d2db4 */
                    /* catch() { ... } // from try @ 010d2c20 with catch @ 010d2db8 */
                    /* catch() { ... } // from try @ 010d2c3c with catch @ 010d2dbc */
                    /* catch() { ... } // from try @ 010d2c10 with catch @ 010d2dc0 */
          in_stack_00000008 = lVar1;
                    /* catch() { ... } // from try @ 010d2c9c with catch @ 010d2dc4 */
          (*(code *)puVar9[2])(*puVar9,puVar9,lVar5,&stack0x00000008,&stack0x00000018);
                    /* try { // try from 010d2ddc to 011d2ddf has its CatchHandler @ 010d2e08 */
          return lVar5;
        }
        goto LAB_010d2ff8;
      }
      uVar4 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
      plVar3 = (long *)FUN_00da4fb8(uVar4,5);
      if (plVar3 == (long *)0x0) goto LAB_010d2ff8;
      lVar5 = thunk_FUN_00d48444(
                                Method_Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator_ReceiveAnchorRemoved__
                                );
      if ((lVar5 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_010d3020;
      lVar5 = thunk_FUN_00d48444(
                                Method_Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator_ReceiveAnchorRemoved__
                                );
      if ((int)plVar3[3] == 0) goto LAB_010d3040;
      plVar3[4] = lVar5;
      plVar8 = *(long **)(lVar1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_010d2ff8;
      lVar1 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_010d3020;
      if (*(uint *)(plVar3 + 3) < 2) goto LAB_010d3040;
      plVar3[5] = lVar1;
      lVar1 = thunk_FUN_00d48444(Newtonsoft_Json_Linq_JTokenReader_TypeInfo);
      if ((lVar1 != 0) &&
         (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_010d3020;
      lVar1 = thunk_FUN_00d48444(Newtonsoft_Json_Linq_JTokenReader_TypeInfo);
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_010d3040;
      plVar3[6] = lVar1;
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    }
    else {
      uVar4 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
      plVar3 = (long *)FUN_00da4fb8(uVar4,5);
      if (plVar3 == (long *)0x0) goto LAB_010d2ff8;
      lVar5 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                );
      if ((lVar5 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_010d3020;
      lVar5 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                );
      if ((int)plVar3[3] == 0) goto LAB_010d3040;
      plVar3[4] = lVar5;
      plVar8 = *(long **)(lVar1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_010d2ff8;
      lVar1 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_010d3020:
        uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar4,0);
      }
      if (*(uint *)(plVar3 + 3) < 2) {
LAB_010d3040:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar3[5] = lVar1;
      lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_119__);
      if ((lVar1 != 0) &&
         (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_010d3020;
      lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_119__);
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_010d3040;
      plVar3[6] = lVar1;
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    }
    lVar1 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar8 = (long *)FUN_01780344(uVar4,0);
    uVar4 = 0;
    if (plVar8 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    FUN_00ac2be8(plVar3);
    FUN_00acb0b4(plVar3,uVar4);
    FUN_00acb320(plVar3,3,uVar4);
    FUN_00ac2be8(plVar3);
    puVar7 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
    uVar4 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                              );
    FUN_00acb0b4(plVar3,uVar4);
    uVar4 = thunk_FUN_00d48444(puVar7);
    FUN_00acb320(plVar3,4,uVar4);
    uVar4 = FUN_01600844(plVar3,0);
  }
  else {
                    /* try { // try from 010d2e2c to 011d2e33 has its CatchHandler @ 010d2e34 */
    plVar3 = *(long **)(lVar1 + 0x10);
                    /* catch() { ... } // from try @ 010d2e18 with catch @ 010d2e34
                       catch() { ... } // from try @ 010d2e2c with catch @ 010d2e34 */
    FUN_00ac2be8(plVar3);
                    /* try { // try from 010d2e3c to 011d2f7b has its CatchHandler @ 010d2e3c
                       catch() { ... } // from try @ 010d2e3c with catch @ 010d2e3c
                       catch() { ... } // from try @ 010d2fd4 with catch @ 010d2e3c
                       catch() { ... } // from try @ 010d3154 with catch @ 010d2e3c
                       catch() { ... } // from try @ 010d318c with catch @ 010d2e3c
                       catch() { ... } // from try @ 010d31bc with catch @ 010d2e3c */
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    uVar10 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                               );
    puVar7 = Method_Newtonsoft_Json_JsonTextReader_ParseComment__;
LAB_010d2f84:
    uVar6 = thunk_FUN_00d48444(puVar7);
                    /* try { // try from 010d2f8c to 011d2f93 has its CatchHandler @ 010d3168 */
    uVar4 = FUN_01600424(uVar10,uVar4,uVar6,0);
  }
                    /* try { // try from 010d2fa4 to 011d2fc3 has its CatchHandler @ 010d3170 */
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
                    /* try { // try from 010d2fc4 to 011d2fd3 has its CatchHandler @ 010d3164 */
  FUN_016f2f28(uVar10,uVar4,0);
  uVar4 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_List<MedleyAmpPuzzleSwitch>_get_Item__
                            );
                    /* try { // try from 010d2fd4 to 011d3143 has its CatchHandler @ 010d2e3c */
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar4);
}


