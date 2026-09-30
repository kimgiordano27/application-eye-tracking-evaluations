/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$get_Current
ENTRY_POINT: 02b18aec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 152
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__get_Current(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *unaff_x26;
  long lStack0000000000000008;
  
                    /* try { // try from 02b18aec to 02c18b03 has its CatchHandler @ 02b18b84 */
  *(undefined1 *)(unaff_x21 + 0xdb5) = 1;
  lStack0000000000000008 = 0;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
                    /* try { // try from 02b18b08 to 02c18b0b has its CatchHandler @ 02b18b74 */
  lVar4 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
  if (lVar4 != 0) {
                    /* try { // try from 02b18b18 to 02c18b2f has its CatchHandler @ 02b18b78 */
    FUN_029bfb9c();
                    /* try { // try from 02b18b30 to 02c18b4b has its CatchHandler @ 02b18b7c */
    if (lStack0000000000000008 == 0) {
      return;
    }
    uVar2 = FUN_032e1a0c(lStack0000000000000008,*(undefined8 *)StringLiteral_2870,0);
    puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    if (lStack0000000000000008 != 0) {
      iVar3 = FUN_032e1a0c(lStack0000000000000008,*(undefined8 *)StringLiteral_2867,0);
      lVar4 = lStack0000000000000008;
      lVar6 = *(long *)puVar1;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(lVar6);
      }
      uVar9 = FUN_033a87c8(uVar9,0);
      if (lVar4 != 0) {
        lVar4 = FUN_032df734(lVar4,*(undefined8 *)StringLiteral_2868,uVar9,0);
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01dde7f8(lVar6);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01de26bc(lVar4,lVar6);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(lVar4,lVar6);
          }
        }
        *(long *)(unaff_x19 + 0x30) = lVar5;
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01dde7f8(lVar6);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01de26bc(lVar4,lVar6);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(lVar4,lVar6);
          }
        }
        thunk_FUN_01e10808((long *)(unaff_x19 + 0x30),lVar5);
        if (iVar3 == 0) {
          *(undefined8 *)(unaff_x19 + 0x10) = 0;
          thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x10),0);
        }
        else {
          FUN_02b18514();
          lVar4 = lStack0000000000000008;
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x160);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = FUN_033a87c8(uVar9,0);
          if (lVar4 == 0) goto LAB_02b18df4;
          lVar4 = FUN_032df734(lVar4,*(undefined8 *)StringLiteral_2869,uVar9,0);
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01dde7f8(lVar6);
          }
          if (lVar4 == 0) {
            FUN_033b3310(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          lVar5 = thunk_FUN_01de26bc(lVar4,lVar6);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(lVar4,lVar6);
          }
          if (0 < *(int *)(lVar5 + 0x18)) {
            uVar8 = 0;
            plVar10 = (long *)(lVar5 + 0x20);
            do {
              uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
              if (uVar7 <= uVar8) {
LAB_02b18df0:
                    /* WARNING: Subroutine does not return */
                FUN_01d7db78();
              }
              if (*plVar10 == 0) {
                FUN_033b3310(0x11,0);
                uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
              }
              if (uVar7 <= uVar8) goto LAB_02b18df0;
              FUN_02b185f4();
              uVar8 = uVar8 + 1;
              plVar10 = plVar10 + 2;
            } while ((long)uVar8 < (long)*(int *)(lVar5 + 0x18));
          }
        }
        *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar4 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
        if (lVar4 != 0) {
          FUN_029bf94c();
          return;
        }
      }
    }
  }
LAB_02b18df4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


