/*
FUNCTION_NAME: FUN_020b2bec
ENTRY_POINT: 020b2bec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020b2bec(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined4 uStack_140;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  puVar5 = Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__;
  if ((DAT_0482f8f8 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_Invoke__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_RemoveListener__)
    ;
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_UnitPort<ValueOutput,_IUnitOutputPort,_ValueConnection>_get_unit__
                      );
    DAT_0482f8f8 = 1;
  }
  auVar11 = _DAT_00c91fc0;
  uVar3 = _UNK_00c91a48;
  uVar10 = _DAT_00c91a40;
  *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
  *(long *)(param_1 + 0xf8) = auVar11._8_8_;
  *(long *)(param_1 + 0xf0) = auVar11._0_8_;
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  *(undefined8 *)(param_1 + 0x100) = uVar10;
  lVar9 = FUN_01f08890(*(undefined8 *)puVar5,4);
  uVar4 = DAT_00c92974;
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  FUN_04038e44(ZEXT816(0),DAT_00c92974,&local_70,0);
  if (lVar9 != 0) {
    uStack_7c = CONCAT44(local_58,uStack_5c);
    uStack_88 = uStack_68;
    local_90 = local_70;
    uStack_84 = uStack_64;
    uStack_80 = local_60;
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined8 *)(lVar9 + 0x34) = uStack_7c;
      *(ulong *)(lVar9 + 0x2c) = CONCAT44(local_60,uStack_64);
      *(ulong *)(lVar9 + 0x28) = CONCAT44(uStack_64,uStack_68);
      *(undefined8 *)(lVar9 + 0x20) = local_70;
      local_b0 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      FUN_04038e44(uVar4,DAT_00c92404,&local_b0,0);
      auVar11._4_8_ = uStack_a0;
      auVar11._0_4_ = uStack_a4;
      auVar11._12_4_ = uStack_98;
      uStack_bc = auVar11._8_8_;
      uStack_c0 = (undefined4)uStack_a0;
      uStack_c8 = uStack_a8;
      local_c4 = uStack_a4;
      uStack_d0 = local_b0;
      if (1 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + 0x50) = uStack_bc;
        *(ulong *)(lVar9 + 0x48) = CONCAT44(uStack_c0,uStack_a4);
        uVar4 = DAT_00c92548;
        *(ulong *)(lVar9 + 0x44) = CONCAT44(uStack_a4,uStack_a8);
        *(undefined8 *)(lVar9 + 0x3c) = local_b0;
        local_f0 = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        FUN_04038e44(uVar4,0x3f000000,&local_f0,0);
        auVar2._4_8_ = uStack_e0;
        auVar2._0_4_ = uStack_e4;
        auVar2._12_4_ = uStack_d8;
        uStack_fc = auVar2._8_8_;
        uStack_100 = (undefined4)uStack_e0;
        uStack_108 = uStack_e8;
        local_104 = uStack_e4;
        uStack_110 = local_f0;
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x6c) = uStack_fc;
          *(ulong *)(lVar9 + 100) = CONCAT44(uStack_100,uStack_e4);
          *(ulong *)(lVar9 + 0x60) = CONCAT44(uStack_e4,uStack_e8);
          *(undefined8 *)(lVar9 + 0x58) = local_f0;
          local_130 = 0;
          uStack_128 = 0;
          uStack_124 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          FUN_04038e44(ZEXT816(0x3f800000),DAT_00c925a0,&local_130,0);
          puVar5 = Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>__ctor__
          ;
          auVar1._4_8_ = uStack_120;
          auVar1._0_4_ = uStack_124;
          auVar1._12_4_ = uStack_118;
          uStack_140 = (undefined4)uStack_120;
          if (3 < *(uint *)(lVar9 + 0x18)) {
            *(long *)(lVar9 + 0x88) = auVar1._8_8_;
            *(ulong *)(lVar9 + 0x80) = CONCAT44(uStack_140,uStack_124);
            *(ulong *)(lVar9 + 0x7c) = CONCAT44(uStack_124,uStack_128);
            *(undefined8 *)(lVar9 + 0x74) = local_130;
            puVar8 = Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_RemoveListener__;
            puVar7 = Method_UnityEngine_Events_UnityEvent<InteractableStateArgs>_Invoke__;
            puVar6 = 
            Method_Unity_VisualScripting_UnitPort<ValueOutput,_IUnitOutputPort,_ValueConnection>_get_unit__
            ;
            uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
            FUN_04039790(uVar10,lVar9,0);
            *(undefined8 *)(param_1 + 0x128) = uVar10;
            thunk_FUN_01f51358(param_1 + 0x128,uVar10);
            auVar11 = NEON_fmov(0x3f800000,4);
            *(long *)(param_1 + 0x148) = auVar11._8_8_;
            *(long *)(param_1 + 0x140) = auVar11._0_8_;
            *(undefined1 *)(param_1 + 0x150) = 1;
            uVar10 = FUN_01f08890(*(undefined8 *)puVar6,0x40);
            *(undefined8 *)(param_1 + 0x158) = uVar10;
            thunk_FUN_01f51358(param_1 + 0x158);
            uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
            FUN_02b6aa68(uVar10,*(undefined8 *)puVar7);
            *(undefined8 *)(param_1 + 0x160) = uVar10;
            thunk_FUN_01f51358(param_1 + 0x160,uVar10);
            auVar11 = _DAT_00c8fac0;
            *(undefined4 *)(param_1 + 0x78) = 0x41200000;
            *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
            *(long *)(param_1 + 0x70) = auVar11._8_8_;
            *(long *)(param_1 + 0x68) = auVar11._0_8_;
            *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
            FUN_01fe8f24(param_1,0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


