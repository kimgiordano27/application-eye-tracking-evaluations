/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b18b34
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x26;
  long in_stack_00000008;
  
  uVar2 = FUN_032e1a0c(param_1,*(undefined8 *)StringLiteral_2870,0);
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (in_stack_00000008 != 0) {
    iVar3 = FUN_032e1a0c(in_stack_00000008,*(undefined8 *)StringLiteral_2867,0);
    lVar5 = *(long *)puVar1;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(lVar5);
    }
    uVar8 = FUN_033a87c8(uVar8,0);
    if (in_stack_00000008 != 0) {
      lVar5 = FUN_032df734(in_stack_00000008,*(undefined8 *)StringLiteral_2868,uVar8,0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8(lVar9);
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01de26bc(lVar5,lVar9);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar5,lVar9);
        }
      }
      *(long *)(unaff_x19 + 0x30) = lVar4;
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8(lVar9);
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01de26bc(lVar5,lVar9);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar5,lVar9);
        }
      }
      thunk_FUN_01e10808((long *)(unaff_x19 + 0x30),lVar4);
      if (iVar3 == 0) {
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
        thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x10),0);
      }
      else {
        FUN_02b18514();
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x160);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar8 = FUN_033a87c8(uVar8,0);
        if (in_stack_00000008 == 0) goto LAB_02b18df4;
        lVar5 = FUN_032df734(in_stack_00000008,*(undefined8 *)StringLiteral_2869,uVar8,0);
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01dde7f8(lVar9);
        }
        if (lVar5 == 0) {
          FUN_033b3310(0x10,0);
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar4 = thunk_FUN_01de26bc(lVar5,lVar9);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar5,lVar9);
        }
        if (0 < *(int *)(lVar4 + 0x18)) {
          uVar7 = 0;
          plVar10 = (long *)(lVar4 + 0x20);
          do {
            uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
            if (uVar6 <= uVar7) {
LAB_02b18df0:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            if (*plVar10 == 0) {
              FUN_033b3310(0x11,0);
              uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
            }
            if (uVar6 <= uVar7) goto LAB_02b18df0;
            FUN_02b185f4();
            uVar7 = uVar7 + 1;
            plVar10 = plVar10 + 2;
          } while ((long)uVar7 < (long)*(int *)(lVar4 + 0x18));
        }
      }
      *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar5 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
      if (lVar5 != 0) {
        FUN_029bf94c();
        return;
      }
    }
  }
LAB_02b18df4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


