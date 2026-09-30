/*
FUNCTION_NAME: TempoSlider$$SliderValueChanged
ENTRY_POINT: 00ee934c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void TempoSlider__SliderValueChanged(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uVar5 = thunk_FUN_015fe514();
  if (((uVar5 & 1) != 0) || (uVar5 = thunk_FUN_015fe514(), (uVar5 & 1) != 0)) {
                    /* try { // try from 00ee9374 to 00fe93bf has its CatchHandler @ 00ee951c */
    lVar6 = FUN_00ee688c();
    if ((lVar6 == 0) ||
       (lVar6 = FUN_010dfe04(*(undefined8 *)(lVar6 + 0x50),
                             *(undefined8 *)
                              Method_System_Threading_SemaphoreSlim_CancellationTokenCanceledEventHandler__
                            ),
       puVar3 = 
       Method_UnityEngine_ProBuilder_MeshOperations_ConnectElements_<>c_<ConnectEdgesInFace>b__5_2__
       , puVar2 = Method_System_Xml_XmlWellFormedWriter_WriteRaw__,
       puVar1 = Polenter_Serialization_Advanced_XmlPropertySerializer_TypeInfo, lVar6 == 0))
    goto LAB_00ee96c4;
    FUN_01323390(lVar6,&stack0x00000008,
                 *(undefined8 *)Method_System_Collections_Generic_List<OVRSceneRoom>_Remove__);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      plVar7 = (long *)FUN_00ac8de8(&stack0x00000020,*(undefined8 *)puVar2);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar7 + 0x2e8))(plVar7,*(undefined8 *)(*plVar7 + 0x2f0));
    }
    FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar1);
  }
  puVar1 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
  if (*(char *)(unaff_x19 + 0x11c) == '\0') {
    return;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) {
    return;
  }
  fVar11 = (float)FUN_02689300(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03774e19 == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    DAT_03774e19 = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  puVar4 = StringLiteral_5423;
  puVar3 = StringLiteral_1715;
  puVar2 = Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_Add__;
  if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_00ee96c4;
  if (*(float *)(**(long **)(lVar6 + 0xb8) + 0xe0) <= fVar11) {
    return;
  }
  if (*(char *)(unaff_x19 + 0xfd) == '\0') {
LAB_00ee9550:
    lVar6 = *(long *)puVar3;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x110);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar3;
    }
    lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar6 + 0xb8);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar9 == 0) goto LAB_00ee96c4;
      FUN_012d239c(lVar9,uVar10,*(undefined8 *)PTR_DAT_033eedc8,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = lVar9;
    }
  }
  else {
    lVar6 = FUN_026f2bb4();
    if (lVar6 == 0) goto LAB_00ee96c4;
    FUN_010e58e8(lVar6,&stack0x00000008,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebSocket_<Connect>d__30>__
                );
    if (in_stack_00000008 == 0) goto LAB_00ee9550;
    lVar6 = *(long *)puVar3;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x110);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar3;
    }
    lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar6 + 0xb8);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar9 == 0) goto LAB_00ee96c4;
      FUN_012d239c(lVar9,uVar10,*(undefined8 *)PTR_DAT_033eb1c0,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = lVar9;
    }
  }
  FUN_010dafe8(uVar8,lVar9,&stack0x00000008,*(undefined8 *)puVar2);
  if (in_stack_00000008 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(in_stack_00000008 + 0x18);
  }
  uVar5 = FUN_015ff8a0(uVar8,0);
  if ((uVar5 & 1) != 0) {
LAB_00ee9678:
    if (0.0 < *(float *)(unaff_x19 + 0x118)) {
      *(undefined1 *)(unaff_x19 + 0x11c) = 0;
      FUN_0268ea48();
    }
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03774e19 == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    DAT_03774e19 = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    lVar9 = *(long *)(**(long **)(lVar6 + 0xb8) + 0xd8);
    lVar6 = FUN_0268fd10();
    if ((lVar6 != 0) && (FUN_0269f578(lVar6,0), lVar9 != 0)) {
      FUN_00fb7f74(lVar9,uVar8,0,0);
      goto LAB_00ee9678;
    }
  }
LAB_00ee96c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


