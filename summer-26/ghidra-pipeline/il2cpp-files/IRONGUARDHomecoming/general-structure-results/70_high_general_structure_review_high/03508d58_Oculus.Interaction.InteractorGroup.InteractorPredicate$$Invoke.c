/*
FUNCTION_NAME: Oculus.Interaction.InteractorGroup.InteractorPredicate$$Invoke
ENTRY_POINT: 03508d58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


ulong Oculus_Interaction_InteractorGroup_InteractorPredicate__Invoke(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int in_w8;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long unaff_x24;
  long unaff_x29;
  undefined1 auVar10 [16];
  undefined1 auStack_200 [512];
  
  if (in_w8 == 0) {
    uVar7 = (**(code **)(*unaff_x20 + 0x158))();
    if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) goto LAB_035090f8;
  }
  else {
    if (in_w8 < 0x100) {
      memset(auStack_200,0,0x1fe);
      lVar3 = 0;
      auVar10._8_8_ = 0xff;
      auVar10._0_8_ = auStack_200;
    }
    else {
      if (*(int *)(*(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
      lVar3 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar3 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      plVar4 = (long *)**(long **)(lVar3 + 0xb8);
      if (plVar4 == (long *)0x0) goto LAB_035090e8;
      lVar3 = (**(code **)(*plVar4 + 0x178))
                        (plVar4,(int)unaff_x20[2],*(undefined8 *)(*plVar4 + 0x180));
      auVar10 = FUN_02722284(lVar3,*(undefined8 *)
                                    Method_Oculus_Voice_ObjectVoiceExperience_HandleFullTranscription__
                            );
    }
    puVar1 = Method_Unity_Collections_NativeQueueBlockPool_OnDomainUnload__;
    if (DAT_04832728 == '\0') {
      thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
      DAT_04832728 = '\x01';
    }
    uVar5 = FUN_0340ce04();
    uVar2 = FUN_0356c72c(uVar5,(int)unaff_x20[2],auVar10._0_8_,auVar10._8_8_,0);
    lVar8 = *(long *)puVar1;
    if (auVar10._8_4_ < uVar2) {
      FUN_0358adfc(0);
    }
    puVar1 = Method_Unity_VisualScripting_FullSerializer_fsMetaType_CreateInstance__;
    if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    lVar9 = *(long *)puVar1;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Text>__);
      lVar8 = *(long *)(lVar9 + 0x38);
      if (lVar8 == 0) {
        FUN_01ecafa0(lVar9);
        lVar8 = *(long *)(lVar9 + 0x38);
      }
    }
    uVar5 = FUN_0238dcd8(auVar10._0_8_,uVar2,*(undefined8 *)(lVar8 + 0x18));
    puVar1 = Method_Unity_VisualScripting_FullSerializer_fsForwardConverter_CanProcess__;
    if (0x7fffffff80000000 < ((ulong)uVar2 << 0x20) + 0x4000000000000000) {
      uVar5 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,lVar9);
    }
    auVar10 = FUN_027216e0(uVar5,uVar2 << 1,
                           *(undefined8 *)Method_System_IO_UnmanagedMemoryStream_WriteByte__);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_0483301b == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsForwardConverter_CanProcess__
                        );
      DAT_0483301b = '\x01';
    }
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar8 + 0xb8);
    if (DAT_0483301c == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsForwardConverter_CanProcess__
                        );
      thunk_FUN_01efb3a4(Method_System_UnitySerializationHolder__ctor__);
      thunk_FUN_01efb3a4(Method_Oculus_Interaction_PointableCanvasModule_<Start>b__31_0__);
      DAT_0483301c = '\x01';
    }
    uVar6 = FUN_0238dccc(auVar10._0_8_,auVar10._8_8_,
                         *(undefined8 *)Method_System_UnitySerializationHolder__ctor__);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar7 = FUN_0356b478(uVar6,auVar10._8_8_ & 0xffffffff,uVar5,0);
    uVar7 = uVar7 & 0xffffffff;
    if (lVar3 != 0) {
      if (*(int *)(*(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
      lVar8 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      plVar4 = (long *)**(long **)(lVar8 + 0xb8);
      if (plVar4 == (long *)0x0) {
LAB_035090e8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar4 + 0x188))(plVar4,lVar3,0,*(undefined8 *)(*plVar4 + 400));
    }
    if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
LAB_035090f8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar7;
}


