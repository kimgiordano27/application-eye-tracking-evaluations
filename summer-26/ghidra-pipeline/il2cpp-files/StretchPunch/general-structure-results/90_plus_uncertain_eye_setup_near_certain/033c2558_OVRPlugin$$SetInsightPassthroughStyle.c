/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 033c2558
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__SetInsightPassthroughStyle(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long lVar10;
  undefined8 unaff_x29;
  int iStack0000000000000000;
  int iStack0000000000000004;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x8f8));
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  *(undefined1 *)(unaff_x25 + 0x997) = 1;
                    /* try { // try from 033c2574 to 034c2583 has its CatchHandler @ 033c2598 */
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
                    /* try { // try from 033c2584 to 034c258f has its CatchHandler @ 033c22e4 */
                    /* try { // try from 033c2590 to 034c2597 has its CatchHandler @ 033c2598 */
  uVar2 = FUN_033ab18c();
  if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 033c2510 with catch @ 033c2598
                       catch() { ... } // from try @ 033c2574 with catch @ 033c2598
                       catch() { ... } // from try @ 033c2590 with catch @ 033c2598 */
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar2 = FUN_033aa3b4();
    if ((uVar2 & 1) != 0) {
      return 2;
    }
  }
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar2 = FUN_033ab18c();
  if ((uVar2 & 1) == 0) {
LAB_033c260c:
    if (unaff_x21 == 0) {
LAB_033c2950:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(int *)(unaff_x21 + 0x18) < 1) {
      _iStack0000000000000000 = 0;
    }
    else {
      _iStack0000000000000000 = 0;
      uVar2 = 0;
      do {
        if (unaff_x22 == 0) {
          lVar3 = *unaff_x27;
LAB_033c268c:
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar4 = FUN_033ab18c();
          if ((uVar4 & 1) == 0) {
            if (unaff_x26 == 0) goto LAB_033c2950;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar2) goto thunk_FUN_01d7db78;
            if (unaff_x20 == 0) goto LAB_033c2950;
LAB_033c2700:
            uVar8 = *(uint *)(unaff_x26 + 0x20 + uVar2 * 4);
            if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto thunk_FUN_01d7db78;
            plVar5 = *(long **)(unaff_x20 + (long)(int)uVar8 * 8 + 0x20);
            if (plVar5 == (long *)0x0) goto LAB_033c2950;
            uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          }
          else {
            if (unaff_x26 == 0) goto LAB_033c2950;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar2) goto thunk_FUN_01d7db78;
            if (unaff_x20 == 0) goto LAB_033c2950;
            uVar6 = unaff_x23;
            if (*(int *)(unaff_x26 + 0x20 + uVar2 * 4) < *(int *)(unaff_x20 + 0x18) + -1) {
              if (*(uint *)(unaff_x26 + 0x18) <= uVar2) goto thunk_FUN_01d7db78;
              goto LAB_033c2700;
            }
          }
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar4 = FUN_033ab18c();
          if ((uVar4 & 1) == 0) {
            if (unaff_x24 == 0) goto LAB_033c2950;
            if (*(uint *)(unaff_x24 + 0x18) <= uVar2) goto thunk_FUN_01d7db78;
            if (unaff_x19 == 0) goto LAB_033c2950;
LAB_033c27a8:
            uVar8 = *(uint *)(unaff_x24 + 0x20 + uVar2 * 4);
            if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto thunk_FUN_01d7db78;
            plVar5 = *(long **)(unaff_x19 + (long)(int)uVar8 * 8 + 0x20);
            if (plVar5 == (long *)0x0) goto LAB_033c2950;
            uVar7 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          }
          else {
            if (unaff_x24 == 0) goto LAB_033c2950;
            if (*(uint *)(unaff_x24 + 0x18) <= uVar2) goto thunk_FUN_01d7db78;
            if (unaff_x19 == 0) goto LAB_033c2950;
            uVar7 = unaff_x29;
            if (*(int *)(unaff_x24 + 0x20 + uVar2 * 4) < *(int *)(unaff_x19 + 0x18) + -1) {
              if (*(uint *)(unaff_x24 + 0x18) <= uVar2) goto thunk_FUN_01d7db78;
              goto LAB_033c27a8;
            }
          }
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar4 = FUN_033aa3b4(uVar6,uVar7,0);
          if ((uVar4 & 1) == 0) {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar2) {
thunk_FUN_01d7db78:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            uVar9 = *(undefined8 *)(unaff_x21 + 0x20 + uVar2 * 8);
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar4 = FUN_033c2168(uVar6,uVar7,uVar9);
            iVar1 = (int)uVar4;
            unaff_x27 = (long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            if (iVar1 == 1) {
              _iStack0000000000000000 = CONCAT44(1,iStack0000000000000000);
            }
            else if (iVar1 == 2) {
              _iStack0000000000000000 = CONCAT44(iStack0000000000000004,1);
            }
            else if (iVar1 == 0) {
              return uVar4;
            }
          }
        }
        else {
          if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto thunk_FUN_01d7db78;
          lVar3 = *unaff_x27;
          lVar10 = *(long *)(unaff_x22 + 0x20 + uVar2 * 8);
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar3 = *unaff_x27;
          }
          unaff_x27 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
          if (lVar10 != *(long *)(*(long *)(lVar3 + 0xb8) + 0x18)) goto LAB_033c268c;
        }
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)*(int *)(unaff_x21 + 0x18));
    }
    if (iStack0000000000000000 != iStack0000000000000004) {
      uVar8 = 1;
      if ((_iStack0000000000000000 & 0x100000000) == 0) {
        uVar8 = 2;
      }
      return (ulong)uVar8;
    }
    if (unaff_x22 != 0 && (_iStack0000000000000000 & 0x100000000) == 0) {
      if ((unaff_x20 == 0) || (unaff_x19 == 0)) goto LAB_033c2950;
      if (*(int *)(unaff_x19 + 0x18) < *(int *)(unaff_x20 + 0x18)) goto LAB_033c2918;
      if (*(int *)(unaff_x20 + 0x18) < *(int *)(unaff_x19 + 0x18)) {
        return 2;
      }
    }
    uVar2 = 0;
  }
  else {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar2 = FUN_033aa3b4();
    if ((uVar2 & 1) == 0) goto LAB_033c260c;
LAB_033c2918:
    uVar2 = 1;
  }
  return uVar2;
}


