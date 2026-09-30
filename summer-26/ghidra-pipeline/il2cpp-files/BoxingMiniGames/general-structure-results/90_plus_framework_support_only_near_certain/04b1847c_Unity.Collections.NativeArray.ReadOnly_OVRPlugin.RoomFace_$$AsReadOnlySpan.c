/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.RoomFace>$$AsReadOnlySpan
ENTRY_POINT: 04b1847c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04b18714) */

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_RoomFace>__AsReadOnlySpan(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  if ((*(byte *)(unaff_x22 + 0xa7) & 1) == 0) {
    FUN_03642964(PTR_DAT_079f5050);
    FUN_03642964(PTR_DAT_07a00bd0);
    *(undefined1 *)(unaff_x22 + 0xa7) = 1;
  }
  puVar2 = PTR_DAT_07a00bd0;
  puVar1 = PTR_DAT_079f5050;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar6 = thunk_FUN_0367fe20();
    uVar9 = thunk_FUN_036aa1c8(PTR_DAT_07a00bd8);
    FUN_05d7e1a0(uVar6,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar6);
  }
  if (param_1[0x6b] != 0) {
    FUN_0459fb44(&stack0x00000008,param_1[0x6b],
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8));
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000018 = &stack0x00000048;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000010 = &stack0x00000020;
    while (uVar3 = FUN_05897b28(&stack0x00000020,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x110)),
          (uVar3 & 1) != 0) {
      if ((*(ushort *)
            (*(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1)
          == 0) {
        FUN_0367c9fc();
      }
      lVar4 = thunk_FUN_0367fe20();
      FUN_0408fe2c(lVar4,*(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xc0));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      *(long *)(lVar4 + 0x18) = (long)param_1;
      thunk_FUN_036b7ad0((long *)(lVar4 + 0x18),param_1);
      puVar8 = (undefined8 *)(lVar4 + 0x10);
      *puVar8 = in_stack_00000030;
      thunk_FUN_036b7ad0(puVar8);
      plVar5 = (long *)FUN_03b1c798(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xd8))
      ;
      uVar9 = *puVar8;
      uVar6 = (**(code **)(*param_1 + 0xa28))(param_1,*(undefined8 *)(*param_1 + 0xa30));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      (**(code **)(*plVar5 + 0x1b8))(plVar5,uVar9,uVar6,*(undefined8 *)(*plVar5 + 0x1c0));
      (**(code **)(*param_1 + 0xaf8))(param_1,*puVar8,*(undefined8 *)(*param_1 + 0xb00));
      uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
      FUN_05d84434(uVar6,lVar4,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x108),0)
      ;
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04b18674;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_0367cd30();
LAB_04b18674:
      (*(code *)*puVar8)();
    }
    FUN_05897b24(&stack0x00000020,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x118));
  }
  return;
}


