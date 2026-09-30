/*
FUNCTION_NAME: FUN_016e5a88
ENTRY_POINT: 016e5a88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_016e5a88(long param_1,long param_2,undefined2 *param_3,long param_4,undefined2 *param_5,
                 undefined8 param_6)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte local_98 [4];
  int local_94;
  undefined8 local_90;
  int local_84;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  undefined1 local_68 [8];
  
  if ((DAT_0377880f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_get_initialValueCaptured__
                      );
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Interaction_InteractorDebugVisual_UpdateVisualState__);
    thunk_FUN_00d48444(UnityEngine_UIElements_UIR_MeshBuilder_AllocMeshData_Allocator_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7176);
    thunk_FUN_00d48444(FullSerializer_fsData_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1b18);
    thunk_FUN_00d48444(Method_System_Data_FunctionNode_GetDataType__);
    DAT_0377880f = 1;
  }
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_get_initialValueCaptured__
  ;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  iVar14 = (int)param_2;
  if (iVar14 != 0) {
    uVar1 = *(undefined2 *)(param_1 + ((param_2 << 0x20) + -0x100000000 >> 0x1f));
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_get_initialValueCaptured__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_016c38c4(uVar1,0);
    iVar13 = (int)param_4;
    if ((uVar7 & 1) == 0) {
      if (iVar13 == 0) goto LAB_016e5e30;
      uVar1 = *param_3;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_016c38c4(uVar1,0);
    }
    else {
      if (iVar13 == 0) goto LAB_016e5e30;
      uVar5 = 1;
    }
    uVar1 = *(undefined2 *)((long)param_3 + ((param_4 << 0x20) + -0x100000000 >> 0x1f));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_016c38c4(uVar1,0);
    iVar12 = (int)param_6;
    if ((uVar7 & 1) == 0) {
      if (iVar12 == 0) goto LAB_016e5e30;
      uVar1 = *param_5;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_016c38c4(uVar1,0);
    }
    else {
      uVar6 = 1;
    }
    puVar4 = Method_System_Configuration_IgnoreSection_IsModified__;
    puVar3 = Method_System_Data_FunctionNode_GetDataType__;
    puVar2 = PTR_DAT_033f1b18;
    uVar8 = FUN_01120480(param_1,param_2,
                         *(undefined8 *)Method_System_Configuration_IgnoreSection_IsModified__);
    uVar9 = FUN_01120480(param_3,param_4,*(undefined8 *)puVar4);
    uVar10 = FUN_01120480(param_5,param_6,*(undefined8 *)puVar4);
    uVar8 = FUN_017bd580(uVar8,0);
    uVar9 = FUN_017bd580(uVar9,0);
    uVar10 = FUN_017bd580(uVar10,0);
    local_108[0] = 0;
    FUN_00bdfa38(local_108,uVar6 & 1,*(undefined8 *)puVar2);
    puVar2 = FullSerializer_fsData_TypeInfo;
    local_98[0] = (byte)uVar5 & 1;
    local_68[0] = local_108[0];
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_138 = 0;
    local_140 = 0;
    local_94 = iVar12;
    local_90 = uVar10;
    local_84 = iVar13;
    local_80 = uVar9;
    local_74 = iVar14;
    local_70 = uVar8;
    FUN_01209d08(&local_140,&local_70,&local_74,&local_80,&local_84,&local_90,&local_94,local_98,
                 local_68,*(undefined8 *)puVar3);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar2;
    }
    puVar3 = Method_Oculus_Interaction_InteractorDebugVisual_UpdateVisualState__;
    lVar15 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    uStack_f8 = uStack_138;
    local_100 = local_140;
    uStack_e8 = uStack_128;
    uStack_f0 = local_130;
    uStack_d8 = uStack_118;
    local_e0 = local_120;
    if (lVar15 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar2;
      }
      uVar8 = **(undefined8 **)(lVar11 + 0xb8);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_013acc9c(lVar15,uVar8,*(undefined8 *)StringLiteral_7176,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar15;
      uStack_c8 = uStack_f8;
      local_d0 = local_100;
      uStack_b8 = uStack_e8;
      local_c0 = uStack_f0;
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
    }
    else {
      uStack_c8 = uStack_138;
      local_d0 = local_140;
      uStack_b8 = uStack_128;
      local_c0 = local_130;
      uStack_a8 = uStack_118;
      local_b0 = local_120;
    }
    uStack_168 = uStack_c8;
    local_170 = local_d0;
    uStack_158 = uStack_b8;
    uStack_160 = local_c0;
    uStack_148 = uStack_a8;
    local_150 = local_b0;
    local_100 = local_d0;
    uStack_f8 = uStack_c8;
    uStack_f0 = local_c0;
    uStack_e8 = uStack_b8;
    local_e0 = local_b0;
    uStack_d8 = uStack_a8;
    FUN_011437e4(iVar13 + iVar14 + iVar12 + (~uVar5 & 1) + (~uVar6 & 1),&local_170,lVar15,
                 *(undefined8 *)
                  UnityEngine_UIElements_UIR_MeshBuilder_AllocMeshData_Allocator_TypeInfo);
    return;
  }
LAB_016e5e30:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


