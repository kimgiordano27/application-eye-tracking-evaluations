/*
FUNCTION_NAME: FUN_05937d08
ENTRY_POINT: 05937d08
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3
*/


void FUN_05937d08(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_066d36cf & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__);
    FUN_02b3c81c(PTR_DAT_0631f0a0);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(PTR_DAT_0631ec68);
    FUN_02b3c81c(Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<TwoPaneSplitViewOrientation>_set_defaultValue__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                );
    DAT_066d36cf = 1;
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_059380f4;
  uVar6 = FUN_059283a4();
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_059380f4;
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = FUN_0592854c();
    FUN_05870b84(uVar8,uVar4,2,0);
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_059380f4;
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = FUN_059285dc();
    if (*(int *)(*(long *)PTR_DAT_0631f0a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631f0a0);
    }
    FUN_0586c31c(uVar8,*(undefined8 *)
                        Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>__ctor__
                 ,uVar5 & 1,0);
  }
  puVar3 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__;
  lVar9 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)
           Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *(long *)puVar3;
  }
  uVar4 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar8 = FUN_05857530(param_5,0);
  if (lVar9 != 0) {
    thunk_FUN_05c5bc88(lVar9,uVar4,uVar8,0);
    puVar1 = 
    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<TwoPaneSplitViewOrientation>_set_defaultValue__
    ;
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_059380f4;
    fVar10 = (float)*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
    thunk_FUN_05c5ba68(fVar10,fVar10,0,0,*(long *)(param_2 + 0x10),
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4),0);
    lVar7 = *(long *)(param_2 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar7 == 0) goto LAB_059380f4;
    uVar12 = *(undefined4 *)(param_2 + 0x30);
    uVar13 = *(undefined4 *)(param_2 + 0x34);
    uVar4 = *(undefined4 *)(param_2 + 0x2c);
    thunk_FUN_05c5ba68(*(undefined4 *)(param_2 + 0x28),uVar4,uVar12,uVar13,lVar7,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xe0),0);
    puVar2 = Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__;
    puVar1 = PTR_DAT_0631ec68;
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_059380f4;
    thunk_FUN_05c5b850(*(long *)(param_2 + 0x10),**(undefined4 **)(*(long *)puVar3 + 0xb8),
                       *(undefined4 *)(param_2 + 0x18),0);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar11 = FUN_0596d984(param_3,param_4,uVar8,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cac198(&local_d0,2,0);
    local_80 = local_b0;
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    if ((*(long *)(param_2 + 0x20) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x1a0), lVar7 == 0)) goto LAB_059380f4;
    uVar6 = FUN_057ec748(lVar7,0);
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(param_2 + 0x20) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x1a0), lVar7 == 0)) goto LAB_059380f4;
      uStack_98 = *(undefined8 *)(lVar7 + 0x48);
      local_a0 = *(undefined8 *)(lVar7 + 0x40);
      uStack_88 = *(undefined8 *)(lVar7 + 0x58);
      uStack_90 = *(undefined8 *)(lVar7 + 0x50);
      local_80 = *(undefined8 *)(lVar7 + 0x60);
    }
    if (param_4 == 0) goto LAB_059380f4;
    uStack_c8 = *(undefined8 *)(param_4 + 0x30);
    local_d0 = *(undefined8 *)(param_4 + 0x28);
    uStack_b8 = *(undefined8 *)(param_4 + 0x40);
    uStack_c0 = *(undefined8 *)(param_4 + 0x38);
    local_b0 = *(undefined8 *)(param_4 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uStack_f8 = uStack_c8;
    local_100 = local_d0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    local_e0 = local_b0;
    uStack_128 = uStack_98;
    local_130 = local_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    local_110 = local_80;
    uVar6 = FUN_05cac694(&local_100,&local_130,0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_059380f4;
      uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar6 = FUN_05c8c45c(uVar8,0,0);
      if ((uVar6 & 1) == 0) goto LAB_0593808c;
    }
    lVar7 = *(long *)(param_2 + 0x20);
    if ((lVar7 != 0) && (param_1 != 0)) {
      FUN_057f7f2c(*(undefined4 *)(lVar7 + 300),*(undefined4 *)(lVar7 + 0x130),
                   *(undefined4 *)(lVar7 + 0x134),*(undefined4 *)(lVar7 + 0x138),param_1,0);
LAB_0593808c:
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__ +
                  0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_058654c8(uVar11,uVar4,uVar12,uVar13,param_1,param_3,uVar8,1,0);
      return;
    }
  }
LAB_059380f4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


