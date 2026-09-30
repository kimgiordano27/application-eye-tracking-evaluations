/*
FUNCTION_NAME: FUN_027a1b08
ENTRY_POINT: 027a1b08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x027a1d6c) */
/* WARNING: Removing unreachable block (ram,0x027a1d78) */

void FUN_027a1b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03788753 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_high_u64__);
    thunk_FUN_00d48444(StringLiteral_2586);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIVertex>_set_Capacity__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_118__);
    thunk_FUN_00d48444(Method_UnityEngine_Bindings_NativeNameAttribute__ctor__);
    thunk_FUN_00d48444(StringLiteral_8874);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_56_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11480);
    thunk_FUN_00d48444(StringLiteral_5862);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03788753 = 1;
  }
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  uVar13 = *(undefined8 *)(param_1 + 0x158);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_0268b4e0(uVar13,0,0);
  puVar5 = StringLiteral_5862;
  puVar1 = OVRPlugin_OVRP_1_56_0_TypeInfo;
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)StringLiteral_5862 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar6 = StringLiteral_11480;
    lVar8 = FUN_0135c4fc(*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_010e6164(*(long *)(param_1 + 0x158),lVar8,
                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_118__);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar8,&local_88,*(undefined8 *)StringLiteral_8874);
    puVar4 = StringLiteral_2586;
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_high_u64__;
    puVar2 = Method_UnityEngine_Bindings_NativeNameAttribute__ctor__;
    puVar1 = Method_System_Collections_Generic_List<UIVertex>_set_Capacity__;
    uStack_68 = uStack_80;
    local_70 = local_88;
    local_60 = local_78;
    while (uVar7 = FUN_012b894c(&local_70,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      plVar9 = (long *)FUN_00ce6c50(&local_70,*(undefined8 *)puVar1);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_027a1cfc;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,0);
LAB_027a1cfc:
      (*(code *)*puVar10)(plVar9,param_2,puVar10[1]);
    }
    FUN_012b8948(&local_70,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0135c5dc(lVar8,*(undefined8 *)puVar6);
  }
  return;
}


