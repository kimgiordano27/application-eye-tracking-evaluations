/*
FUNCTION_NAME: FUN_058e6e74
ENTRY_POINT: 058e6e74
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_058e6e74(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_066d340c & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063200c8);
    FUN_02b3c81c(PTR_DAT_0631f0a0);
    FUN_02b3c81c(Method_System_Span<uint>_GetPinnableReference__);
    FUN_02b3c81c(Method_System_Span<uint>_get_Length__);
    FUN_02b3c81c(Method_System_Span<Vector2Int>__ctor__);
    FUN_02b3c81c(Method_System_Span<Vector2Int>_get_Length__);
    FUN_02b3c81c(Method_System_Span<Vector3>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_Queue<EventBase>_Enqueue__);
    FUN_02b3c81c(Method_Oculus_Platform_Request<AvatarEditorResult>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XRDisplaySubsystem>_get_Item__);
    FUN_02b3c81c(Method_System_Span<Vector3>__ctor__);
    FUN_02b3c81c(Method_System_Span<Vector3>_GetPinnableReference__);
    FUN_02b3c81c(Method_System_Span<Vector3>_get_Length__);
    FUN_02b3c81c(Method_System_Span<Vector4>__ctor__);
    FUN_02b3c81c(Method_System_Span<Vector4>_GetPinnableReference__);
    FUN_02b3c81c(Method_System_Span<Vector4>_get_Length__);
    FUN_02b3c81c(Method_System_Span<Vertex>__ctor__);
    DAT_066d340c = 1;
  }
  if (param_2 != 0) {
    uVar12 = *(undefined8 *)(param_2 + 0x50);
    if (*(int *)(*(long *)PTR_DAT_0631f0a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = FUN_0586c144(uVar12,0);
    *(undefined8 *)(param_1 + 0x10) = uVar12;
    thunk_FUN_02bb0e9c();
    uVar12 = FUN_0586c144(*(undefined8 *)(param_2 + 0x58),0);
    *(undefined8 *)(param_1 + 0x18) = uVar12;
    thunk_FUN_02bb0e9c();
    plVar13 = (long *)(param_1 + 0x20);
    *plVar13 = *(long *)(param_2 + 0x48);
    thunk_FUN_02bb0e9c(plVar13);
    if (*plVar13 != 0) {
      uVar11 = FUN_05c958b0(*plVar13,*(undefined8 *)Method_System_Span<Vertex>__ctor__,0);
      plVar13 = (long *)(param_1 + 0x30);
      *plVar13 = *(long *)(param_2 + 0x38);
      *(undefined4 *)(param_1 + 0x28) = uVar11;
      thunk_FUN_02bb0e9c(plVar13);
      puVar10 = Method_System_Span<Vector4>_get_Length__;
      puVar9 = Method_System_Span<Vector4>__ctor__;
      puVar8 = Method_System_Span<Vector3>_get_Length__;
      puVar7 = Method_System_Span<Vector3>__ctor__;
      puVar6 = Method_System_Span<uint>_get_Length__;
      puVar5 = Method_System_Span<uint>_GetPinnableReference__;
      puVar4 = Method_Oculus_Platform_Request<AvatarEditorResult>__ctor__;
      puVar3 = Method_System_Collections_Generic_Queue<EventBase>_Enqueue__;
      puVar2 = Method_System_Collections_Generic_List<XRDisplaySubsystem>_get_Item__;
      puVar1 = PTR_DAT_063200c8;
      if (*plVar13 != 0) {
        uVar11 = FUN_05c958b0(*plVar13,*(undefined8 *)
                                        Method_System_Span<Vector4>_GetPinnableReference__,0);
        *(undefined4 *)(param_1 + 0x38) = uVar11;
        FUN_058e659c(param_1 + 0x40);
        uVar11 = FUN_056d9778(4,0);
        local_70 = 0;
        uStack_68 = 0;
        FUN_03ac0850(&local_70,0x40,uVar11,*(undefined8 *)puVar4);
        uVar12 = *(undefined8 *)puVar6;
        *(undefined8 *)(param_1 + 0x70) = uStack_68;
        *(undefined8 *)(param_1 + 0x68) = local_70;
        uVar12 = thunk_FUN_02b79644(uVar12);
        FUN_037a85b8(uVar12,*(undefined8 *)puVar5);
        *(undefined8 *)(param_1 + 0x78) = uVar12;
        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x78),uVar12);
        uVar11 = FUN_056d9778(4,0);
        local_78 = 0;
        FUN_03aba940(&local_78,0x40,uVar11,*(undefined8 *)puVar7);
        *(undefined8 *)(param_1 + 0x80) = local_78;
        uVar11 = FUN_056d9778(4,0);
        local_80 = 0;
        FUN_03aaf004(&local_80,0x40,uVar11,*(undefined8 *)puVar3);
        uVar12 = *(undefined8 *)puVar2;
        *(undefined8 *)(param_1 + 0x88) = local_80;
        uVar12 = thunk_FUN_02b79644(uVar12);
        FUN_05814874(uVar12,*(undefined8 *)puVar10,0);
        *(undefined8 *)(param_1 + 0xc0) = uVar12;
        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xc0),uVar12);
        uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
        FUN_05814874(uVar12,*(undefined8 *)puVar9,0);
        *(undefined8 *)(param_1 + 200) = uVar12;
        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 200),uVar12);
        uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
        FUN_05814874(uVar12,*(undefined8 *)puVar8,0);
        *(undefined8 *)(param_1 + 0xd0) = uVar12;
        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xd0),uVar12);
        local_90 = 0;
        uStack_88 = 0;
        FUN_03a55b04(&local_90,1,4,1,*(undefined8 *)Method_System_Span<Vector2Int>__ctor__);
        uVar12 = *(undefined8 *)puVar1;
        *(undefined8 *)(param_1 + 0x98) = uStack_88;
        *(undefined8 *)(param_1 + 0x90) = local_90;
        uVar12 = thunk_FUN_02b79644(uVar12);
        FUN_05c95428(uVar12,1,0x360,8,0);
        *(undefined8 *)(param_1 + 0xa0) = uVar12;
        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xa0),uVar12);
        local_a0 = 0;
        uStack_98 = 0;
        FUN_03a56d20(&local_a0,1,4,1,*(undefined8 *)Method_System_Span<Vector2Int>_get_Length__);
        uVar12 = *(undefined8 *)puVar1;
        *(undefined8 *)(param_1 + 0xb0) = uStack_98;
        *(undefined8 *)(param_1 + 0xa8) = local_a0;
        uVar12 = thunk_FUN_02b79644(uVar12);
        FUN_05c95428(uVar12,1,0xa0,8,0);
        *(undefined8 *)(param_1 + 0xb8) = uVar12;
        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xb8),uVar12);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


