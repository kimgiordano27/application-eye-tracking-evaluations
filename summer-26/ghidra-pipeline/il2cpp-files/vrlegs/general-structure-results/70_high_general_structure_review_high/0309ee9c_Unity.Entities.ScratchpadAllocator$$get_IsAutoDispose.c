/*
FUNCTION_NAME: Unity.Entities.ScratchpadAllocator$$get_IsAutoDispose
ENTRY_POINT: 0309ee9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_Entities_ScratchpadAllocator__get_IsAutoDispose(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar9;
  long unaff_x21;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe188);
    FUN_01ab69ac(System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var);
    FUN_01ab69ac(UnityEngine_InputSystem_LowLevel_IInputStateTypeInfo_var);
    FUN_01ab69ac(UnityEngine_Timeline_IMarker_var);
    FUN_01ab69ac(
                Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc1820);
    FUN_01ab69ac(PTR_DAT_03cc1828);
    FUN_01ab69ac(PTR_DAT_03cc1790);
    FUN_01ab69ac(System_FlagsAttribute_var);
    *(undefined1 *)(unaff_x21 + 0x56c) = 1;
  }
  in_stack_00000008 = 0;
  if (-1 < unaff_w20) {
    if (((unaff_x19 == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x30), lVar4 == 0)) goto LAB_0309f148;
    if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
      return 0;
    }
    FUN_02215a88(lVar4,unaff_w20,&stack0x00000018,
                 *(undefined8 *)
                  Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                );
    puVar2 = System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var;
    lVar4 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    if (*(int *)(*(long *)System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (DAT_0412b5aa == '\0') {
      FUN_01ab69ac(System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var);
      DAT_0412b5aa = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar2;
    }
    if (**(char **)(lVar5 + 0xb8) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_03cbe188 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_0366d138(0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)System_FlagsAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_03054410(lVar4,&stack0x00000008,0);
        if ((uVar6 & 1) != 0) {
          if (in_stack_00000008 == 0) goto LAB_0309f148;
          iVar1 = *(int *)(in_stack_00000008 + 0x10);
          if (-1 < iVar1) {
            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
               (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x40), lVar5 == 0))
            goto LAB_0309f148;
            if (iVar1 < *(int *)(lVar5 + 0x18)) {
              in_stack_00000010 = 0;
              uStack0000000000000018 = iVar1;
              FUN_02241190(&stack0x00000010,&stack0x00000018,*(undefined8 *)PTR_DAT_03cc1828);
              return in_stack_00000010;
            }
          }
        }
      }
    }
    if (lVar4 == 0) {
LAB_0309f148:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar9 = *(undefined8 *)(lVar4 + 0x14);
    FUN_01ba9478();
    uVar3 = uStack0000000000000018;
    puVar2 = PTR_DAT_03cc1790;
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_03cc1790 + 0x20) + 0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    pbVar7 = (byte *)thunk_FUN_01a59484();
    if (((uint)*pbVar7 & ~uVar3 >> 0x1f) != 0) {
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x40), lVar4 == 0)) goto LAB_0309f148;
      iVar1 = *(int *)(lVar4 + 0x18);
      FUN_01ba9478();
      uVar3 = uStack0000000000000018;
      if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      pcVar8 = (char *)thunk_FUN_01a59484();
      if (((int)uVar3 < iVar1) && (*pcVar8 != '\0')) {
        return uVar9;
      }
    }
  }
  return 0;
}


