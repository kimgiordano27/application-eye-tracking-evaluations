/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Color>
ENTRY_POINT: 0236235c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Color>(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x25;
  long *unaff_x26;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  int in_stack_00000078;
  undefined1 uStack000000000000007c;
  long in_stack_00000288;
  
  puVar4 = (undefined8 *)FUN_01ecb238();
  uVar9 = (*(code *)*puVar4)();
  uVar2 = (**(code **)**(undefined8 **)(unaff_x19 + 0x38))();
  if (uVar2 < 0x201) {
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x18);
    _uStack0000000000000010 = *(undefined8 *)(unaff_x20 + 0x10);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_03bf27e0(&stack0x00000010,0);
    if (uVar2 == uVar3) {
      in_stack_00000028 = 0;
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      FUN_03bf283c(uVar9,&stack0x00000028,0x444c5441,uVar2 + 0x1c,*(undefined4 *)(unaff_x22 + 0xe0),
                   0);
      in_stack_00000048 = in_stack_00000030;
      in_stack_00000040 = in_stack_00000028;
      in_stack_00000050 = in_stack_00000038;
      in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x18);
      _uStack0000000000000010 = *(undefined8 *)(unaff_x22 + 0x10);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uStack000000000000007c = 0;
      in_stack_00000078 = *(int *)(unaff_x20 + 0x14) - *(int *)(unaff_x22 + 0x14);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
      uStack0000000000000074 = uStack0000000000000010;
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18))();
      FUN_04037e20(&stack0x0000007c,uVar9,uVar2,0);
      puVar1 = Method_System_Collections_Comparer_GetObjectData__;
      lVar5 = *(long *)Method_System_Collections_Comparer_GetObjectData__;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        FUN_03bb7730(**(long **)(lVar5 + 0xb8),&stack0x00000060,0);
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000288) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar9 = FUN_01f08890(uVar9,4);
    puVar1 = Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar2);
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
    uVar6 = thunk_FUN_01f113fc(uVar6,&stack0x00000028);
    FUN_01bc50c0(uVar9);
    FUN_01bc56ec(uVar9,uVar6);
    FUN_01bc5408(uVar9,0,uVar6);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar7 = (long *)FUN_03579868(uVar6,0);
    FUN_01bc50c0();
    uVar6 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    FUN_01bc50c0(uVar9);
    FUN_01bc56ec(uVar9,uVar6);
    FUN_01bc5408(uVar9,1,uVar6);
    FUN_01bc50c0(uVar9);
    FUN_01bc56ec(uVar9);
    FUN_01bc5408(uVar9,2);
    FUN_01bc50c0();
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x18);
    _uStack0000000000000010 = *(undefined8 *)(unaff_x20 + 0x10);
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCodeOfString__);
    FUN_01bc4c70();
    in_stack_00000008._4_4_ = FUN_03bf27e0(&stack0x00000010,0);
    uVar6 = thunk_FUN_01efb3a4(puVar1);
    uVar6 = thunk_FUN_01f113fc(uVar6,(long)&stack0x00000008 + 4);
    FUN_01bc50c0(uVar9);
    FUN_01bc56ec(uVar9,uVar6);
    FUN_01bc5408(uVar9,3,uVar6);
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    uVar9 = FUN_0340f378(uVar6,uVar9,0);
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar7 = (long *)FUN_03579868(uVar9,0);
    FUN_01bc50c0();
    uVar9 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,0x200);
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar6 = thunk_FUN_01f113fc(uVar6,&stack0x00000028);
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponent<InteractableUnityEventWrapper>__
                              );
    uVar9 = FUN_0340f2f0(uVar8,uVar9,uVar6,0);
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar6 = thunk_FUN_01f117cc();
  uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
  FUN_034efd98(uVar6,uVar9,uVar8,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6);
}


