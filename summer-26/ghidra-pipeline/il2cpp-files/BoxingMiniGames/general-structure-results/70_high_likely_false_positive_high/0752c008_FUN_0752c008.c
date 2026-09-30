/*
FUNCTION_NAME: FUN_0752c008
ENTRY_POINT: 0752c008
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void FUN_0752c008(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  long lVar10;
  long unaff_x21;
  undefined8 uVar11;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(
                Method_UnityEngine_Pool_PooledObject<List<IRuntimePanelComponent>>_System_IDisposable_Dispose__
                );
    FUN_03642964(Method_UnityEngine_Pool_PooledObject<List<int>>_System_IDisposable_Dispose__);
    FUN_03642964(Method_UnityEngine_Pool_PooledObject<List<Panel>>_System_IDisposable_Dispose__);
    FUN_03642964(
                Method_UnityEngine_Pool_PooledObject<List<RadioButton>>_System_IDisposable_Dispose__
                );
    FUN_03642964(
                Method_UnityEngine_Pool_PooledObject<List<VisualElement>>_System_IDisposable_Dispose__
                );
    FUN_03642964(
                Method_UnityEngine_Pool_PooledObject<List<CreationContext_AttributeOverrideRange>>_System_IDisposable_Dispose__
                );
    FUN_03642964(
                Method_UnityEngine_Pool_PooledObject<List<CreationContext_SerializedDataOverrideRange>>_System_IDisposable_Dispose__
                );
    FUN_03642964(
                Method_UnityEngine_Pool_PooledObject<List<FocusController_FocusedElement>>_System_IDisposable_Dispose__
                );
    FUN_03642964(
                Method_UnityEngine_Pool_PooledObject<List<HID_HIDElementDescriptor>>_System_IDisposable_Dispose__
                );
    FUN_03642964(
                Method_UnityEngine_Pool_PooledObject<List<MultiColumnCollectionHeader_SortedColumnState>>_System_IDisposable_Dispose__
                );
    FUN_03642964(
                Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<int>>_System_IDisposable_Dispose__
                );
    FUN_03642964(
                Method_UnityEngine_Pool_PooledObject<List<GradientColorKey>>_System_IDisposable_Dispose__
                );
    *(undefined1 *)(unaff_x21 + 0xc4d) = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  FUN_074ef380(*(char *)(param_2 + 0x21) == '\0',*unaff_x20,0);
  lVar4 = *unaff_x22;
  *(undefined1 *)(param_2 + 0x21) = 1;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar4 = *unaff_x22;
  }
  puVar3 = Method_UnityEngine_Pool_PooledObject<List<Panel>>_System_IDisposable_Dispose__;
  puVar2 = Method_UnityEngine_Pool_PooledObject<List<int>>_System_IDisposable_Dispose__;
  puVar1 = 
  Method_UnityEngine_Pool_PooledObject<List<IRuntimePanelComponent>>_System_IDisposable_Dispose__;
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  lVar10 = puVar7[3];
  if (lVar10 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar7 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                 Method_UnityEngine_Pool_PooledObject<List<CreationContext_SerializedDataOverrideRange>>_System_IDisposable_Dispose__
                               );
    FUN_04159474(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_Pool_PooledObject<List<MultiColumnCollectionHeader_SortedColumnState>>_System_IDisposable_Dispose__
                 ,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *plVar5 = lVar10;
    thunk_FUN_036b7ad0(plVar5,lVar10);
  }
  uVar9 = FUN_03cb4f04(uVar9,lVar10,*(undefined8 *)puVar1);
  uVar9 = FUN_03cb5804(uVar9,*(undefined8 *)puVar2);
  lVar4 = FUN_03cc668c(uVar9,*(undefined8 *)puVar3);
  puVar3 = 
  Method_UnityEngine_Pool_PooledObject<List<FocusController_FocusedElement>>_System_IDisposable_Dispose__
  ;
  puVar2 = Method_UnityEngine_Pool_PooledObject<List<VisualElement>>_System_IDisposable_Dispose__;
  puVar1 = Method_UnityEngine_Pool_PooledObject<List<RadioButton>>_System_IDisposable_Dispose__;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_0459fb44(&stack0x00000008,lVar4,
               *(undefined8 *)
                Method_UnityEngine_Pool_PooledObject<List<HID_HIDElementDescriptor>>_System_IDisposable_Dispose__
              );
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000030;
  do {
    uVar6 = FUN_05897b28(&stack0x00000030,*(undefined8 *)puVar2);
    if ((uVar6 & 1) == 0) {
      FUN_05897b24(&stack0x00000030,*(undefined8 *)puVar1);
      return;
    }
    if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar5 = *(long **)(in_stack_00000040 + 0x10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0752c23c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar3,0);
LAB_0752c23c:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
  } while( true );
}


