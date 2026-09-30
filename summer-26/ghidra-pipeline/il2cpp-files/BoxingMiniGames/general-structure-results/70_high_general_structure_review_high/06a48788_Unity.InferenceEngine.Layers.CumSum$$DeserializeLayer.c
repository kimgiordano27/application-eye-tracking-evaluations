/*
FUNCTION_NAME: Unity.InferenceEngine.Layers.CumSum$$DeserializeLayer
ENTRY_POINT: 06a48788
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8 Unity_InferenceEngine_Layers_CumSum__DeserializeLayer(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000088;
  
  iVar1 = *(int *)(param_1 + 0x98);
  iVar5 = FUN_071bc42c(0);
  if (iVar1 == iVar5) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar7 = FUN_07170700(0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x20;
      goto LAB_06a48934;
    }
  }
  uVar6 = FUN_071bc42c(0);
  lVar8 = *unaff_x20;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar8);
    lVar8 = *unaff_x20;
  }
  lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0xa0);
  *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x98) = uVar6;
  if (lVar9 != 0) {
    FUN_0560b938(lVar9,*(undefined8 *)System_Net_CookieCollection_var);
    puVar4 = Unity_Properties_CreatePropertyAttribute_var;
    puVar3 = System_ContextBoundObject_var;
    puVar2 = Zenject_Context_var;
    lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0xa8);
    if (lVar8 != 0) {
      FUN_0461d75c(&stack0x00000010,lVar8,*(undefined8 *)UnityEngine_ControllerColliderHit_var);
      in_stack_00000068 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000060 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      uStack0000000000000078 = (undefined4)in_stack_00000028;
      uStack000000000000007c = (undefined4)((ulong)in_stack_00000028 >> 0x20);
      in_stack_00000070 = uStack0000000000000020;
      uStack0000000000000074 = uStack0000000000000024;
      in_stack_00000088 = in_stack_00000038;
      uStack0000000000000080 = (undefined4)in_stack_00000030;
      uStack0000000000000084 = (undefined4)((ulong)in_stack_00000030 >> 0x20);
      while (uVar7 = FUN_058b75e0(&stack0x00000060,*(undefined8 *)puVar3), uVar6 = in_stack_00000070
            , (uVar7 & 1) != 0) {
        lVar8 = *unaff_x20;
        in_stack_00000040 = CONCAT44(uStack0000000000000078,uStack0000000000000074);
        uStack0000000000000048 = uStack000000000000007c;
        uStack0000000000000054 = in_stack_00000088;
        uStack000000000000004c = uStack0000000000000080;
        uStack0000000000000050 = uStack0000000000000084;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar8 = *unaff_x20;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0xa0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uStack0000000000000010 = uVar6;
        uStack000000000000001c = uStack0000000000000048;
        uStack0000000000000014 = (undefined4)in_stack_00000040;
        uStack0000000000000018 = (undefined4)((ulong)in_stack_00000040 >> 0x20);
        in_stack_00000028 = uStack0000000000000054;
        uStack0000000000000020 = uStack000000000000004c;
        uStack0000000000000024 = uStack0000000000000050;
        FUN_0560b6d8(lVar8,uVar6,&stack0x00000010,*(undefined8 *)puVar4);
      }
      FUN_058b75dc(&stack0x00000060,*(undefined8 *)puVar2);
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar8 = *unaff_x20;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0xa8);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar6 = FUN_071cc928(0);
        lVar8 = *unaff_x20;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar8 = *unaff_x20;
        }
        *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x94) = uVar6;
LAB_06a48934:
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar8 = *unaff_x20;
        }
        return *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xa8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


