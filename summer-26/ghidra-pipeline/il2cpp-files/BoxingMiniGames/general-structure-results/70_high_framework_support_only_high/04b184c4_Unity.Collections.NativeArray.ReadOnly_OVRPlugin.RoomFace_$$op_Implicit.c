/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.RoomFace>$$op_Implicit
ENTRY_POINT: 04b184c4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04b18714) */

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_RoomFace>__op_Implicit
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x25;
  undefined8 *puVar9;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  puVar1 = PTR_DAT_07a00bd0;
  puVar9 = *(undefined8 **)(unaff_x25 + 0x50);
  FUN_0459fb44(&stack0x00000008,param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xa8));
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000048;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000010 = &stack0x00000020;
  do {
    uVar2 = FUN_05897b28(&stack0x00000020,
                         *(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x110));
    if ((uVar2 & 1) == 0) {
      FUN_05897b24(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x118));
      return;
    }
    if ((*(ushort *)
          (*(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
        0) {
      FUN_0367c9fc();
    }
    lVar3 = thunk_FUN_0367fe20();
    FUN_0408fe2c(lVar3,*(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xc0)
                );
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(long **)(lVar3 + 0x18) = unaff_x20;
    thunk_FUN_036b7ad0();
    puVar7 = (undefined8 *)(lVar3 + 0x10);
    *puVar7 = in_stack_00000030;
    thunk_FUN_036b7ad0(puVar7);
    plVar4 = (long *)FUN_03b1c798(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xd8));
    uVar8 = *puVar7;
    uVar5 = (**(code **)(*unaff_x20 + 0xa28))();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    (**(code **)(*plVar4 + 0x1b8))(plVar4,uVar8,uVar5,*(undefined8 *)(*plVar4 + 0x1c0));
    (**(code **)(*unaff_x20 + 0xaf8))();
    uVar5 = thunk_FUN_0367fe20(*puVar9);
    FUN_05d84434(uVar5,lVar3,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x108),0);
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04b18674;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30();
LAB_04b18674:
    (*(code *)*puVar7)();
  } while( true );
}


