/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04b1860c
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

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  do {
    FUN_05d84434(param_2,unaff_x21,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 0x108),0);
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04b18500;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_04b18500:
    (*(code *)*puVar3)();
    uVar5 = FUN_05897b28(&stack0x00000020,
                         *(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x110));
    if ((uVar5 & 1) == 0) {
      FUN_05897b24(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x118));
      return;
    }
    if ((*(ushort *)
          (*(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xb8) + 0x135) & 1) ==
        0) {
      FUN_0367c9fc();
    }
    unaff_x21 = thunk_FUN_0367fe20();
    FUN_0408fe2c(unaff_x21,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xc0));
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(long **)(unaff_x21 + 0x18) = unaff_x20;
    thunk_FUN_036b7ad0();
    puVar3 = (undefined8 *)(unaff_x21 + 0x10);
    *puVar3 = in_stack_00000030;
    thunk_FUN_036b7ad0(puVar3);
    plVar1 = (long *)FUN_03b1c798(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0xd8));
    uVar7 = *puVar3;
    uVar2 = (**(code **)(*unaff_x20 + 0xa28))();
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    (**(code **)(*plVar1 + 0x1b8))(plVar1,uVar7,uVar2,*(undefined8 *)(*plVar1 + 0x1c0));
    (**(code **)(*unaff_x20 + 0xaf8))();
    param_2 = thunk_FUN_0367fe20(*unaff_x25);
    param_1 = in_stack_00000048;
  } while( true );
}


