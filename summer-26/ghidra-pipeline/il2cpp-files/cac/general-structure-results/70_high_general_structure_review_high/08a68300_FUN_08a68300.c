/*
FUNCTION_NAME: FUN_08a68300
ENTRY_POINT: 08a68300
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6
*/


void FUN_08a68300(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_09120748;
  if ((DAT_096a4cae & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910bc70);
    FUN_03f13384(PTR_DAT_09125550);
    FUN_03f13384(PTR_DAT_09125558);
    FUN_03f13384(System_EmptyArray<Type>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventBase<ExecuteCommandEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_Rendering_DebugUI_EnumField<Enum>_TypeInfo);
    FUN_03f13384(PTR_DAT_09120748);
    FUN_03f13384(PTR_DAT_091a5b00);
    FUN_03f13384(UnityEngine_UIElements_EventBase<FocusOutEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventBase<GeometryChangedEvent>_TypeInfo);
    FUN_03f13384(UnityEngine_UIElements_EventBase<IMEEvent>_TypeInfo);
    DAT_096a4cae = 1;
  }
  puVar5 = UnityEngine_Rendering_DebugUI_EnumField<Enum>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  puVar1 = UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo;
  FUN_0896a2a8(param_3,0);
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar8 = *(long *)puVar5;
  }
  FUN_0896c434(param_3,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x260),0);
  lVar8 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
  FUN_08a6d16c(param_1,param_2,0x41a00000,lVar8,param_5);
  puVar1 = PTR_DAT_091a5b00;
  if (lVar8 != 0) {
    FUN_08969f34(lVar8,*(undefined8 *)UnityEngine_UIElements_EventBase<FocusOutEvent>_TypeInfo,0);
    FUN_08966470(lVar8,*(undefined8 *)puVar1,0);
    *(long *)(param_3 + 0x2d8) = lVar8;
    thunk_FUN_03f86000(param_3 + 0x2d8,lVar8);
    puVar7 = UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo;
    puVar6 = UnityEngine_UIElements_EventBase<ExecuteCommandEvent>_TypeInfo;
    puVar4 = System_EmptyArray<Type>_TypeInfo;
    puVar3 = PTR_DAT_09125558;
    puVar2 = PTR_DAT_09125550;
    puVar1 = PTR_DAT_0910bc70;
    if (*(long *)(param_3 + 0x2d8) != 0) {
      FUN_0896c434(*(long *)(param_3 + 0x2d8),
                   *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x278),0);
      uVar10 = *(undefined8 *)(param_3 + 0x2d8);
      uVar9 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
      FUN_04fafe60(uVar9,param_3,*(undefined8 *)puVar6,0);
      FUN_049d5c28(uVar10,uVar9,*(undefined8 *)puVar3);
      uVar9 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
      FUN_074192c4(uVar9,param_3,*(undefined8 *)puVar7,0);
      lVar8 = thunk_FUN_03f4e68c(*(undefined8 *)puVar4);
      FUN_08a64a1c();
      FUN_08a64af0(lVar8,uVar9,0xfa,0x1e);
      if (lVar8 != 0) {
        FUN_08969f34(lVar8,*(undefined8 *)UnityEngine_UIElements_EventBase<IMEEvent>_TypeInfo,0);
        *(long *)(param_3 + 0x2e0) = lVar8;
        thunk_FUN_03f86000(param_3 + 0x2e0,lVar8);
        puVar2 = UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo;
        if (*(long *)(param_3 + 0x2e0) != 0) {
          FUN_0896c434(*(long *)(param_3 + 0x2e0),
                       *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x280),0);
          FUN_08971ca8(param_3,*(undefined8 *)(param_3 + 0x2e0),0);
          uVar9 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
          FUN_074192c4(uVar9,param_3,*(undefined8 *)puVar2,0);
          lVar8 = thunk_FUN_03f4e68c(*(undefined8 *)puVar4);
          FUN_08a64a1c();
          FUN_08a64af0(lVar8,uVar9,0xfa,0x1e);
          if (lVar8 != 0) {
            FUN_08969f34(lVar8,*(undefined8 *)
                                UnityEngine_UIElements_EventBase<GeometryChangedEvent>_TypeInfo,0);
            *(long *)(param_3 + 0x2e8) = lVar8;
            thunk_FUN_03f86000(param_3 + 0x2e8,lVar8);
            if (*(long *)(param_3 + 0x2e8) != 0) {
              FUN_0896c434(*(long *)(param_3 + 0x2e8),
                           *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x288),0);
              FUN_08971ca8(param_3,*(undefined8 *)(param_3 + 0x2e8),0);
              FUN_08971ca8(param_3,*(undefined8 *)(param_3 + 0x2d8),0);
              FUN_08a6ce94(param_3,param_5);
              *(undefined8 *)(param_3 + 0x2d0) = param_4;
              thunk_FUN_03f86000(param_3 + 0x2d0,param_4);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


