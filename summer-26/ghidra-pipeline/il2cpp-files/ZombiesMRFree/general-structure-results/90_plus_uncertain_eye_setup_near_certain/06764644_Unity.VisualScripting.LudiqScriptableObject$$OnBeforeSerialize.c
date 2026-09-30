/*
FUNCTION_NAME: Unity.VisualScripting.LudiqScriptableObject$$OnBeforeSerialize
ENTRY_POINT: 06764644
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_VisualScripting_LudiqScriptableObject__OnBeforeSerialize(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_x9;
  long lVar7;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  long lVar8;
  long *unaff_x23;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  undefined8 in_stack_000001a0;
  int iStack00000000000001a8;
  undefined8 in_stack_000001b0;
  undefined4 uStack00000000000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined4 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  *(undefined1 *)(in_x9 + 0x28) = unaff_w22;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(param_1);
    param_1 = *unaff_x23;
  }
  puVar1 = System_Collections_Generic_List<TypeName>_TypeInfo;
  if (*(char *)(*(long *)(param_1 + 0xb8) + 0x28) != '\0') {
    in_stack_000001e8 = *(undefined8 *)(unaff_x21 + 0xf8);
    in_stack_000001e0 = *(undefined8 *)(unaff_x21 + 0xf0);
    FUN_068e47d0(&stack0x000001e0,0,0);
    FUN_068e47ec(&stack0x000001e0,0,0);
    FUN_068e41c8(&stack0x000001e0,0,0);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    puVar2 = Unity_Entities_TypeManager_SharedTypeIndex<WFX_Demo_New>_TypeInfo;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,*(long *)(*unaff_x23 + 0xb8) + 8,&stack0x000001e0,1,1,0,1,*(undefined8 *)puVar2,0
                );
    param_1 = *unaff_x23;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(param_1);
    param_1 = *unaff_x23;
  }
  if (*(char *)(*(long *)(param_1 + 0xb8) + 0x28) != '\0') {
    in_stack_000001d0 = *(undefined4 *)(unaff_x21 + 0x120);
    _uStack00000000000001b8 = *(undefined8 *)(unaff_x21 + 0x108);
    in_stack_000001b0 = *(undefined8 *)(unaff_x21 + 0x100);
    in_stack_000001c8 = *(undefined8 *)(unaff_x21 + 0x118);
    in_stack_000001c0 = *(undefined8 *)(unaff_x21 + 0x110);
    _iStack00000000000001a8 = *(undefined8 *)(unaff_x21 + 0xf8);
    in_stack_000001a0 = *(undefined8 *)(unaff_x21 + 0xf0);
    FUN_068e47d0(&stack0x000001a0,0,0);
    FUN_068e47ec(&stack0x000001a0,0,0);
    FUN_068e4844(&stack0x000001a0,0,0);
    if ((1 < iStack00000000000001a8) && (iVar3 = FUN_06900970(0), iVar3 != 0)) {
      FUN_068e4844(&stack0x000001a0,1,0);
    }
    iVar3 = FUN_069005b0(0);
    if ((iVar3 == 8) || (iVar3 = FUN_069005b0(0), iVar3 == 0xb)) {
      FUN_068e4844(&stack0x000001a0,0,0);
    }
    FUN_068e40b4(&stack0x000001a0,0,0);
    _uStack00000000000001b8 = CONCAT44(0x5c,uStack00000000000001b8);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    puVar2 = OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,*(long *)(*unaff_x23 + 0xb8) + 0x10,&stack0x000001a0,0,1,0,1,
                 *(undefined8 *)puVar2,0);
    param_1 = *unaff_x23;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(param_1);
    param_1 = *unaff_x23;
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  lVar8 = *(long *)(unaff_x20 + 0x398);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    if (lVar8 == 0) goto LAB_06764b80;
    uVar5 = *(undefined8 *)(lVar8 + 0x10);
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(param_1);
      param_1 = *unaff_x23;
      lVar7 = *(long *)(param_1 + 0xb8);
    }
    *(undefined8 *)(lVar7 + 0x18) = uVar5;
    if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_06764b80;
    *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20) =
         *(undefined8 *)(*(long *)(unaff_x20 + 0x398) + 0x10);
    *(undefined1 *)(unaff_x20 + 0x390) = 1;
  }
  else {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(param_1);
    }
    uVar5 = FUN_066431c0();
    if (lVar8 == 0) goto LAB_06764b80;
    *(undefined8 *)(lVar8 + 0x20) = uVar5;
    lVar7 = *(long *)(unaff_x20 + 0x398);
    uVar5 = FUN_066431c0();
    if (lVar7 == 0) goto LAB_06764b80;
    *(undefined8 *)(lVar7 + 0x18) = uVar5;
    puVar1 = UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo;
    lVar7 = *(long *)(unaff_x20 + 0x398);
    if (lVar7 == 0) goto LAB_06764b80;
    if (*(int *)(*(long *)UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar6 = FUN_06643c7c(lVar7 + 0x18,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_06764b80;
      lVar7 = *unaff_x23;
      uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x398) + 0x18);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar7 = *unaff_x23;
      }
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18) = uVar5;
      *(undefined1 *)(unaff_x20 + 0x390) = 0;
    }
    lVar7 = *(long *)(unaff_x20 + 0x398);
    if (lVar7 == 0) goto LAB_06764b80;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar6 = FUN_06643c7c(lVar7 + 0x20,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_06764b80;
      lVar7 = *unaff_x23;
      uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x398) + 0x20);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar7 = *unaff_x23;
      }
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20) = uVar5;
    }
  }
  if (*(int *)(*(long *)
                Unity_Entities_TypeManager_SharedTypeIndex<WFX_Demo_DeleteAfterDelay>_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar7 = FUN_069226b4(0);
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0x27) = 1;
    in_stack_00000178 = *(undefined8 *)(unaff_x21 + 0x108);
    in_stack_00000170 = *(undefined8 *)(unaff_x21 + 0x100);
    in_stack_00000188 = *(undefined8 *)(unaff_x21 + 0x118);
    in_stack_00000180 = *(undefined8 *)(unaff_x21 + 0x110);
    in_stack_00000190 = *(undefined4 *)(unaff_x21 + 0x120);
    in_stack_00000168 = *(undefined8 *)(unaff_x21 + 0xf8);
    in_stack_00000160 = *(undefined8 *)(unaff_x21 + 0xf0);
    FUN_068e40b4(&stack0x00000160,0x2e,0);
    FUN_068e41c8(&stack0x00000160,0,0);
    in_stack_00000168 = CONCAT44(in_stack_00000168._4_4_,1);
    lVar7 = *(long *)(unaff_x20 + 0x398);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar5 = FUN_0676406c();
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x58) = uVar5;
      in_stack_00000150 = *(undefined4 *)(unaff_x21 + 0x120);
      in_stack_00000138 = *(undefined8 *)(unaff_x21 + 0x108);
      in_stack_00000130 = *(undefined8 *)(unaff_x21 + 0x100);
      in_stack_00000148 = *(undefined8 *)(unaff_x21 + 0x118);
      in_stack_00000140 = *(undefined8 *)(unaff_x21 + 0x110);
      in_stack_00000128 = *(undefined8 *)(unaff_x21 + 0xf8);
      in_stack_00000120 = *(undefined8 *)(unaff_x21 + 0xf0);
      FUN_068e40b4(&stack0x00000120,0,0);
      iVar3 = FUN_068e416c(&stack0x00000120,0);
      if (iVar3 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = FUN_068e416c(&stack0x00000120,0);
      }
      FUN_068e41c8(&stack0x00000120,uVar4,0);
      in_stack_00000128 = CONCAT44(in_stack_00000128._4_4_,1);
      lVar7 = *(long *)(unaff_x20 + 0x398);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar5 = FUN_0676406c();
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x60) = uVar5;
        return;
      }
    }
  }
LAB_06764b80:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


