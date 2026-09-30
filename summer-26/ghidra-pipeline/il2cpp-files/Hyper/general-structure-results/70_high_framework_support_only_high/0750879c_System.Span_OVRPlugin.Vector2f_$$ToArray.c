/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 0750879c
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Vector2f>__ToArray(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  
  thunk_FUN_049ee3d8();
  lVar7 = *unaff_x22;
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34(lVar3);
  }
  lVar3 = thunk_FUN_04983e64(lVar7,lVar3);
  if ((lVar3 != 0) && (0 < *(int *)(unaff_x20 + 0x18))) {
    uVar9 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar9) {
LAB_075088d0:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar8 = *(long **)(lVar3 + uVar9 * 8 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_075088cc;
      lVar10 = *unaff_x22;
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34(lVar7);
      }
                    /* try { // try from 07508828 to 07608b4f has its CatchHandler @ 07508828
                       catch() { ... } // from try @ 07508828 with catch @ 07508828
                       catch() { ... } // from try @ 07508c54 with catch @ 07508828
                       catch() { ... } // from try @ 07508ca0 with catch @ 07508828
                       catch() { ... } // from try @ 07508cf8 with catch @ 07508828 */
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar7) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07508870;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(plVar8,lVar7,0);
LAB_07508870:
      uVar11 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (lVar10 == 0) goto LAB_075088cc;
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_075088d0;
      iVar1 = *(int *)(unaff_x20 + 0x18);
      lVar7 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(lVar10 + lVar7 + 0x20) = uVar11;
    } while ((int)uVar9 < iVar1);
    if (unaff_x21 == 0) {
LAB_075088cc:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
  return;
}


