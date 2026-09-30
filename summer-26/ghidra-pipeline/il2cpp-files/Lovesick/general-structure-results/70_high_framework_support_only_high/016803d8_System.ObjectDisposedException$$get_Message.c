/*
FUNCTION_NAME: System.ObjectDisposedException$$get_Message
ENTRY_POINT: 016803d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_13;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_ObjectDisposedException__get_Message(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *plVar15;
  undefined8 in_stack_00000008;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<TriangulationPoint>__);
  thunk_FUN_00d48444(StringLiteral_4488);
  thunk_FUN_00d48444(StringLiteral_6724);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 016803c0 with catch @ 01680414
                        */
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<EdgeLookup,_Face>__ctor__);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0168038c with catch @ 01680418
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01680358 with catch @ 0168041c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01680374 with catch @ 01680420
                        */
  thunk_FUN_00d48444(Method_UIToggle_OffPressed__);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0168035c with catch @ 01680424
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01680340 with catch @ 01680428
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01680330 with catch @ 0168042c
                        */
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_MoveNext__);
  thunk_FUN_00d48444(
                    System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_TypeInfo
                    );
                    /* try { // try from 01680444 to 01780447 has its CatchHandler @ 01680468 */
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                    /* try { // try from 01680448 to 0178046f has its CatchHandler @ 016801b8 */
  *(undefined1 *)(unaff_x26 + 0x481) = 1;
  in_stack_00000008 = 0;
  if (unaff_x19 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                              );
    FUN_016ec5b8(uVar5,uVar7,0);
    uVar7 = thunk_FUN_00d48444(PTR_DAT_033effa8);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar7);
  }
  if (unaff_x24 < 1) {
    uVar5 = thunk_FUN_00d48444(StringLiteral_1856);
    uVar5 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar5,0);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(
                              Method_Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_set_LastUpdatedFrameId__
                              );
    FUN_016efd4c(uVar9,uVar7,uVar5,0);
    goto LAB_01680930;
  }
                    /* catch() { ... } // from try @ 01680444 with catch @ 01680468 */
  uVar4 = FUN_0169ad7c();
                    /* try { // try from 01680470 to 01780477 has its CatchHandler @ 0168048c */
  if ((uVar4 & 1) == 0) {
LAB_016804c0:
    if (unaff_x20[8] != 0) {
      uVar5 = thunk_FUN_00d93c64();
      plVar15 = (long *)unaff_x20[8];
      if (plVar15 == (long *)0x0) goto LAB_01680830;
      lVar11 = *plVar15;
      lVar10 = unaff_x20[9];
      lVar12 = unaff_x20[10];
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_6724) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto System_OperationCanceledException___ctor;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar15,*(long *)StringLiteral_6724,0);
System_OperationCanceledException___ctor:
      (*(code *)*puVar6)(plVar15,uVar5,lVar10,lVar12,&stack0x00000008,puVar6[1]);
    }
    puVar8 = StringLiteral_4488;
    lVar10 = thunk_FUN_00d6225c();
    if (lVar10 != 0) {
      plVar15 = (long *)thunk_FUN_00d6225c();
      if (plVar15 == (long *)0x0) goto FUN_016808ec;
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Collections_Generic_List<XRLoader>_Insert__);
      if (lVar10 == 0) goto LAB_01680830;
      lVar12 = *plVar15;
      uVar4 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar8) {
            lVar12 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
            goto LAB_016805f4;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      lVar12 = FUN_00d59724(plVar15,*(long *)puVar8,0);
LAB_016805f4:
      FUN_01679b94(lVar10,plVar15,*(undefined8 *)(lVar12 + 8));
      (**(code **)(*unaff_x20 + 0x1d8))();
    }
    if (((unaff_x25 != 0) && (lVar10 = FUN_017959a4(), lVar10 != 0)) &&
       (lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__),
       lVar10 == 0)) {
FUN_016808ec:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    puVar3 = Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
    lVar10 = FUN_0167e304();
    if (lVar10 == 0) {
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)Method_UIToggle_OffPressed__);
      if (lVar10 == 0) {
LAB_01680830:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (unaff_x21 != (long *)0x0) {
        lVar12 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar12 + 300);
        if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
           (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar12))
        goto System_OverflowException___ctor;
      }
      FUN_01680948(lVar10);
      FUN_0167e434();
      if ((*(byte *)(lVar10 + 0x50) & 7) != 0) {
        plVar15 = (long *)FUN_0167e290();
        if (plVar15 == (long *)0x0) goto LAB_01680830;
        (**(code **)(*plVar15 + 0x178))(plVar15,lVar10,*(undefined8 *)(*plVar15 + 0x180));
      }
      lVar12 = *unaff_x20;
    }
    else {
      puVar8 = Method_OVRPlugin_<>c_<_cctor>b__796_72__;
      if (*(long *)(lVar10 + 0x10) != 0) goto LAB_016808fc;
      if (unaff_x21 != (long *)0x0) {
        lVar12 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar12 + 300);
        if ((*(byte *)(*unaff_x21 + 300) < bVar2) ||
           (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != lVar12)) {
System_OverflowException___ctor:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
      }
      FUN_01680b34(lVar10);
      if (0 < *(int *)(lVar10 + 0x20)) {
        FUN_0167f8d0();
      }
      uVar1 = *(uint *)(lVar10 + 0x50);
      if ((uVar1 & 7) != 0) {
        plVar15 = (long *)FUN_0167e290();
        if (plVar15 == (long *)0x0) goto LAB_01680830;
        (**(code **)(*plVar15 + 0x178))(plVar15,lVar10,*(undefined8 *)(*plVar15 + 0x180));
        uVar1 = *(uint *)(lVar10 + 0x50);
      }
      if (((uVar1 & 1) == 0) && ((uVar1 & 6) == 0 || (uVar1 & 0x4000) != 0)) {
        FUN_0167f554();
        *(undefined8 *)(lVar10 + 0x40) = 0;
      }
      lVar12 = *unaff_x20;
      if (*(int *)(lVar10 + 0x24) + *(int *)(lVar10 + 0x20) < 1) {
        pcVar13 = *(code **)(lVar12 + 0x1f8);
        goto LAB_01680804;
      }
    }
    pcVar13 = *(code **)(lVar12 + 0x1e8);
LAB_01680804:
    (*pcVar13)();
    return;
  }
  puVar8 = PTR_DAT_033f7150;
  if (unaff_x21 != (long *)0x0) {
                    /* try { // try from 01680478 to 01780483 has its CatchHandler @ 016801b8 */
    lVar10 = *unaff_x21;
                    /* try { // try from 01680484 to 0178048b has its CatchHandler @ 0168048c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01680470 with catch @ 0168048c
                       catch(type#2 @ 00000000) { ... } // from try @ 01680484 with catch @ 0168048c
                        */
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_MoveNext__ + 300)
    ;
    if (((bVar2 <= *(byte *)(lVar10 + 300)) &&
        (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) ==
         *(long *)Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_MoveNext__)) ||
       (lVar10 == *(long *)
                   System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_TypeInfo
       )) goto LAB_016804c0;
  }
LAB_016808fc:
  uVar5 = thunk_FUN_00d48444(puVar8);
  uVar5 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar5,0);
  thunk_FUN_00d48444(
                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                    );
  uVar9 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_01679968(uVar9,uVar5);
LAB_01680930:
  uVar5 = thunk_FUN_00d48444(PTR_DAT_033effa8);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar5);
}


