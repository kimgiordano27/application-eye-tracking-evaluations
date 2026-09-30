/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04b184fc
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

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>___ctor
               (undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  uStack0000000000000018 = param_1;
  do {
    uVar1 = FUN_05897b28(&stack0x00000020,
                         *(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x110));
    if ((uVar1 & 1) == 0) {
      FUN_05897b24(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x118));
      return;
    }
    if ((*(ushort *)
          (*(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
        0) {
      FUN_0367c9fc();
    }
    lVar2 = thunk_FUN_0367fe20();
    FUN_0408fe2c(lVar2,*(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xc0)
                );
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(long **)(lVar2 + 0x18) = unaff_x20;
    thunk_FUN_036b7ad0();
    puVar6 = (undefined8 *)(lVar2 + 0x10);
    *puVar6 = in_stack_00000030;
    thunk_FUN_036b7ad0(puVar6);
    plVar3 = (long *)FUN_03b1c798(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xd8));
    uVar7 = *puVar6;
    uVar4 = (**(code **)(*unaff_x20 + 0xa28))();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    (**(code **)(*plVar3 + 0x1b8))(plVar3,uVar7,uVar4,*(undefined8 *)(*plVar3 + 0x1c0));
    (**(code **)(*unaff_x20 + 0xaf8))();
    uVar4 = thunk_FUN_0367fe20(*unaff_x25);
    FUN_05d84434(uVar4,lVar2,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x108),0);
    lVar2 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04b18674;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30();
LAB_04b18674:
    (*(code *)*puVar6)();
  } while( true );
}


