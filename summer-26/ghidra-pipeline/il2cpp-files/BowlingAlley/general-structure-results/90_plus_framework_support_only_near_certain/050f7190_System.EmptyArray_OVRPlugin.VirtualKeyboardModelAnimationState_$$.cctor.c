/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 050f7190
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_EmptyArray<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor
          (long param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  uint uVar8;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar9;
  uint uVar10;
  ulong unaff_x25;
  ulong uVar11;
  ulong unaff_x26;
  long unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
code_r0x050f7190:
  uVar10 = (uint)unaff_x25;
  uVar8 = (uint)unaff_x20;
  uVar3 = (**(code **)(param_1 + 0x1b8))(param_2,param_3);
  uVar11 = unaff_x25;
  unaff_x25 = unaff_x26;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_050f72c8;
        if ((uint)in_stack_00000008 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x25 * 0x50 + 0x24) + 1;
          goto LAB_050f727c;
        }
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_050f72c8;
        if (uVar8 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (ulong)uVar8 * 0x50 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x25 * 0x50 + 0x24);
LAB_050f727c:
          lVar6 = unaff_x27 + unaff_x25 * 0x50;
          uVar9 = *(undefined8 *)(lVar6 + 0x50);
          uVar13 = *(undefined8 *)(lVar6 + 0x68);
          uVar12 = *(undefined8 *)(lVar6 + 0x60);
          uVar15 = *(undefined8 *)(lVar6 + 0x38);
          uVar14 = *(undefined8 *)(lVar6 + 0x30);
          uVar17 = *(undefined8 *)(lVar6 + 0x48);
          uVar16 = *(undefined8 *)(lVar6 + 0x40);
          in_stack_00000010[5] = *(undefined8 *)(lVar6 + 0x58);
          in_stack_00000010[4] = uVar9;
          in_stack_00000010[7] = uVar13;
          in_stack_00000010[6] = uVar12;
          in_stack_00000010[1] = uVar15;
          *in_stack_00000010 = uVar14;
          in_stack_00000010[3] = uVar17;
          in_stack_00000010[2] = uVar16;
          *unaff_x28 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined4 *)(lVar6 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar10;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_050f72cc:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    do {
      uVar10 = *(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x24);
      unaff_x25 = (ulong)uVar10;
      unaff_x20 = uVar11 & 0xffffffff;
      uVar8 = (uint)uVar11;
      if ((int)uVar10 < 0) {
        in_stack_00000010[5] = 0;
        in_stack_00000010[4] = 0;
        in_stack_00000010[7] = 0;
        in_stack_00000010[6] = 0;
        in_stack_00000010[1] = 0;
        *in_stack_00000010 = 0;
        in_stack_00000010[3] = 0;
        in_stack_00000010[2] = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_050f72c8;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar10) goto LAB_050f72cc;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 0x20);
      uVar11 = unaff_x25;
    } while (*unaff_x28 != unaff_w29);
    plVar4 = *(long **)(unaff_x19 + 0x30);
    if (plVar4 == (long *)0x0) break;
    if (plVar4 == (long *)0x0) goto LAB_050f72c8;
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
    uVar9 = *(undefined8 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_032934b8(lVar6);
    }
    lVar5 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_050f71b4;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(plVar4,lVar6,0);
LAB_050f71b4:
    uVar3 = (*(code *)*puVar2)(plVar4,uVar9);
  } while( true );
  param_2 = (long *)FUN_03893a98(*(undefined8 *)
                                  (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x18));
  if (param_2 == (long *)0x0) {
LAB_050f72c8:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  param_1 = *param_2;
  param_3 = *(undefined8 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28);
  unaff_x26 = unaff_x25;
  goto code_r0x050f7190;
}


