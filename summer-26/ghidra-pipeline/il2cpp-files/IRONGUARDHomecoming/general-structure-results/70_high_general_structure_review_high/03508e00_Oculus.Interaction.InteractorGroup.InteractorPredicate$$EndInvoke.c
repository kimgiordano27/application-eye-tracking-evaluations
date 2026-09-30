/*
FUNCTION_NAME: Oculus.Interaction.InteractorGroup.InteractorPredicate$$EndInvoke
ENTRY_POINT: 03508e00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined4
Oculus_Interaction_InteractorGroup_InteractorPredicate__EndInvoke(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long unaff_x24;
  long unaff_x29;
  undefined1 auVar9 [16];
  
  auVar9 = FUN_02722284(param_2,*param_1);
  puVar1 = Method_Unity_Collections_NativeQueueBlockPool_OnDomainUnload__;
  if (DAT_04832728 == '\0') {
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
    DAT_04832728 = '\x01';
  }
  uVar4 = FUN_0340ce04();
  uVar2 = FUN_0356c72c(uVar4,*(undefined4 *)(unaff_x20 + 0x10),auVar9._0_8_,auVar9._8_8_,0);
  lVar7 = *(long *)puVar1;
  if (auVar9._8_4_ < uVar2) {
    FUN_0358adfc(0);
  }
  puVar1 = Method_Unity_VisualScripting_FullSerializer_fsMetaType_CreateInstance__;
  if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar8 = *(long *)puVar1;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Text>__);
    lVar7 = *(long *)(lVar8 + 0x38);
    if (lVar7 == 0) {
      FUN_01ecafa0(lVar8);
      lVar7 = *(long *)(lVar8 + 0x38);
    }
  }
  uVar4 = FUN_0238dcd8(auVar9._0_8_,uVar2,*(undefined8 *)(lVar7 + 0x18));
  puVar1 = Method_Unity_VisualScripting_FullSerializer_fsForwardConverter_CanProcess__;
  if (((ulong)uVar2 << 0x20) + 0x4000000000000000 < 0x7fffffff80000001) {
    auVar9 = FUN_027216e0(uVar4,uVar2 << 1,
                          *(undefined8 *)Method_System_IO_UnmanagedMemoryStream_WriteByte__);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_0483301b == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsForwardConverter_CanProcess__
                        );
      DAT_0483301b = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar7 = *(long *)puVar1;
    }
    uVar4 = **(undefined8 **)(lVar7 + 0xb8);
    if (DAT_0483301c == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsForwardConverter_CanProcess__
                        );
      thunk_FUN_01efb3a4(Method_System_UnitySerializationHolder__ctor__);
      thunk_FUN_01efb3a4(Method_Oculus_Interaction_PointableCanvasModule_<Start>b__31_0__);
      DAT_0483301c = '\x01';
    }
    uVar5 = FUN_0238dccc(auVar9._0_8_,auVar9._8_8_,
                         *(undefined8 *)Method_System_UnitySerializationHolder__ctor__);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar3 = FUN_0356b478(uVar5,auVar9._8_8_ & 0xffffffff,uVar4,0);
    if (param_2 != 0) {
      if (*(int *)(*(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
      lVar7 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      plVar6 = (long *)**(long **)(lVar7 + 0xb8);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar6 + 0x188))(plVar6,param_2,0,*(undefined8 *)(*plVar6 + 400));
    }
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar4 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,lVar8);
}


