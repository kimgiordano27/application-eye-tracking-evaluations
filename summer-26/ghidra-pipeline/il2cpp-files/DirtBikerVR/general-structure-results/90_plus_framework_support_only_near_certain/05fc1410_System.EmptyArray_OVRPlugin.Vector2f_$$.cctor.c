/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector2f>$$.cctor
ENTRY_POINT: 05fc1410
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector2f>___cctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long in_x11;
  int unaff_w20;
  ulong unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  ulong unaff_x25;
  ulong uVar10;
  uint uVar11;
  long unaff_x27;
  int *piVar12;
  ulong unaff_x29;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  do {
    do {
      uVar10 = unaff_x25;
      uVar1 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 4);
      unaff_x29 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
        *in_stack_00000008 = 0;
        return 0;
      }
      lVar4 = *(long *)(in_x11 + 0x18);
      if (lVar4 == 0) goto LAB_05fc14f8;
      if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_05fc14fc;
      unaff_x27 = lVar4 + 0x20;
      piVar12 = (int *)(unaff_x27 + unaff_x29 * (unaff_x21 & 0xffffffff));
      unaff_x25 = unaff_x29;
    } while (*piVar12 != unaff_w20);
    plVar8 = *(long **)(in_x11 + 0x30);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)FUN_04036464(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18))
      ;
      if (plVar8 == (long *)0x0) goto LAB_05fc14f8;
      uVar6 = (**(code **)(*plVar8 + 0x1b8))
                        (plVar8,*(undefined8 *)
                                 (unaff_x27 + unaff_x29 * (unaff_x21 & 0xffffffff) + 8));
    }
    else {
      lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
      uVar9 = *(undefined8 *)(unaff_x27 + unaff_x29 * (unaff_x21 & 0xffffffff) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090(lVar4);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05fc13f4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(plVar8,lVar4,0);
LAB_05fc13f4:
      uVar6 = (*(code *)*puVar3)(plVar8,uVar9);
    }
    in_x11 = in_stack_00000018;
  } while ((uVar6 & 1) == 0);
  uVar11 = (uint)uVar10;
  if ((int)uVar11 < 0) {
    lVar4 = *(long *)(in_stack_00000018 + 0x10);
    if (lVar4 == 0) goto LAB_05fc14f8;
    if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000000) goto LAB_05fc14fc;
    *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) = *(int *)(unaff_x27 + unaff_x29 * 0x18 + 4) + 1;
  }
  else {
    lVar4 = *(long *)(in_stack_00000018 + 0x18);
    if (lVar4 == 0) {
LAB_05fc14f8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar11) {
LAB_05fc14fc:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    *(undefined4 *)(lVar4 + (uVar10 & 0xffffffff) * 0x18 + 0x24) =
         *(undefined4 *)(unaff_x27 + unaff_x29 * 0x18 + 4);
  }
  lVar4 = unaff_x27 + unaff_x29 * 0x18;
  *in_stack_00000008 = *(undefined4 *)(lVar4 + 0x10);
  uVar2 = *(undefined4 *)(in_stack_00000018 + 0x24);
  *piVar12 = -1;
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 4) = uVar2;
  *(uint *)(in_stack_00000018 + 0x24) = uVar1;
  *(ulong *)(in_stack_00000018 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000018 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(in_stack_00000018 + 0x28) + 1);
  return 1;
}


