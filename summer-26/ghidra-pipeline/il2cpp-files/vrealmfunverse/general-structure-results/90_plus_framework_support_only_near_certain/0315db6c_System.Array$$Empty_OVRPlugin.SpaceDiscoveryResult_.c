/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0315db6c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_SpaceDiscoveryResult>(undefined1 *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_000000f8;
  long in_stack_00000118;
  
  do {
    FUN_05ebf8b0(param_1,0);
    if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc(unaff_x20);
    }
    if (((unaff_w21 != 7) && (unaff_w21 != 0)) ||
       (uVar2 = FUN_04741d10(&stack0x000000b0,
                             *(undefined8 *)(*(long *)(in_stack_00000118 + 0x38) + 0x68)),
       plVar1 = in_stack_000000f8, (uVar2 & 1) == 0)) {
      FUN_04742164(in_stack_00000018,*(undefined8 *)(*(long *)(*in_stack_00000020 + 0x38) + 0x70));
      if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc();
      }
      FUN_04aeaf58(in_stack_00000068,*(undefined8 *)(*(long *)(*in_stack_00000070 + 0x38) + 0x80));
      if (in_stack_00000060 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc(in_stack_00000060);
      }
      return;
    }
    FUN_05ebf474(&stack0x00000078,*(undefined8 *)(unaff_x19 + 0x10),in_stack_000000f8,0);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_0315db44;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar1,*unaff_x22,1);
LAB_0315db44:
    (*(code *)*puVar3)(plVar1,puVar3[1]);
    FUN_05ea48a0();
    unaff_x20 = 0;
    unaff_w21 = 7;
    param_1 = &stack0x00000078;
  } while( true );
}


