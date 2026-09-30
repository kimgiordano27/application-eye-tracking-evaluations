/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$.ctor
ENTRY_POINT: 026169b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>___ctor(void)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar9;
  undefined8 uVar10;
  
  plVar2 = (long *)thunk_FUN_01dfff04();
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420));
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        );
    }
    plVar3 = (long *)FUN_033a87c8(uVar10,0);
    if (plVar2 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x288))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x290));
      if ((uVar4 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto LAB_02616c7c;
        uVar4 = (**(code **)(*plVar3 + 0x288))(plVar3,plVar2,*(undefined8 *)(*plVar3 + 0x290));
        if ((uVar4 & 1) == 0) {
          FUN_033b3618(0);
        }
      }
      plVar2 = (long *)thunk_FUN_01de26bc();
      if (plVar2 == (long *)0x0) {
        FUN_033b3618();
      }
      plVar3 = *(long **)(unaff_x21 + 0x10);
      if (plVar3 != (long *)0x0) {
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01dde7f8(lVar6);
        }
        lVar7 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02616b1c;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_01dde8fc(plVar3,lVar6,0);
LAB_02616b1c:
        iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            plVar3 = *(long **)(unaff_x21 + 0x10);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01dde7f8(lVar6);
            }
            lVar7 = *plVar3;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_02616ba8;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_01dde8fc(plVar3,lVar6,0);
LAB_02616ba8:
            (*(code *)*puVar5)(plVar3,iVar9,puVar5[1]);
            lVar6 = thunk_FUN_01de23e8(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
              uVar10 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar10,0);
            }
            if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar2[(long)(int)unaff_w19 + 4] = lVar6;
            thunk_FUN_01e10808(plVar2 + (long)(int)unaff_w19 + 4,lVar6);
            iVar9 = iVar9 + 1;
            unaff_w19 = unaff_w19 + 1;
          } while (iVar9 != iVar1);
        }
        return;
      }
    }
  }
LAB_02616c7c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


