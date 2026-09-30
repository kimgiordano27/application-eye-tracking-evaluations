/*
FUNCTION_NAME: OVRPlugin$$EraseSpaces
ENTRY_POINT: 033d4c0c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__EraseSpaces(void)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 *unaff_x23;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_256);
  FUN_01d7d918(StringLiteral_258);
  FUN_01d7d918(StringLiteral_260);
  FUN_01d7d918(StringLiteral_1157);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  FUN_01d7d918(StringLiteral_9036);
  *(undefined1 *)(unaff_x22 + 0xa3e) = 1;
  lVar8 = thunk_FUN_01de27b8(*unaff_x23);
  FUN_0315cedc(lVar8,*unaff_x21);
  if (unaff_x19 != (long *)0x0) {
    uVar9 = FUN_033ab298();
    puVar6 = StringLiteral_1157;
    puVar5 = StringLiteral_254;
    plVar3 = (long *)
             Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    puVar4 = (undefined8 *)StringLiteral_5633;
    while (Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material =
                (undefined *)plVar3, StringLiteral_5633 = (undefined *)puVar4, (uVar9 & 1) != 0) {
      uVar9 = (**(code **)(*unaff_x19 + 0x8f8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x900));
      if ((uVar9 & 1) == 0) {
        uVar9 = FUN_033ac038(unaff_x19,0);
        if ((uVar9 & 1) == 0) {
          uVar9 = FUN_033ac058(unaff_x19,0);
          if ((uVar9 & 1) == 0) {
            uVar9 = FUN_033ac048(unaff_x19,0);
            if ((uVar9 & 1) != 0) {
              if (lVar8 == 0) goto LAB_033d4f88;
              lVar10 = *(long *)(lVar8 + 0x10);
              lVar11 = *(long *)puVar5;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_033d4f88;
              uVar2 = *(uint *)(lVar8 + 0x18);
              if (*(uint *)(lVar10 + 0x18) <= uVar2) {
                lVar10 = *(long *)(lVar11 + 0x20);
                uVar12 = 4;
                goto LAB_033d4e90;
              }
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 4;
            }
          }
          else {
            if (lVar8 == 0) goto LAB_033d4f88;
            lVar10 = *(long *)(lVar8 + 0x10);
            lVar11 = *(long *)puVar5;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_033d4f88;
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (*(uint *)(lVar10 + 0x18) <= uVar2) {
              lVar10 = *(long *)(lVar11 + 0x20);
              uVar12 = 1;
              goto LAB_033d4e90;
            }
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 1;
          }
        }
        else {
          uVar7 = (**(code **)(*unaff_x19 + 0x428))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x430));
          if (lVar8 == 0) goto LAB_033d4f88;
          lVar10 = *(long *)(lVar8 + 0x10);
          lVar11 = *(long *)puVar5;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_033d4f88;
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = uVar7;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          }
          else {
            FUN_0315d730(lVar8,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            lVar10 = *(long *)(lVar8 + 0x10);
            lVar11 = *(long *)puVar5;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_033d4f88;
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (*(uint *)(lVar10 + 0x18) <= uVar2) {
            lVar10 = *(long *)(lVar11 + 0x20);
            uVar12 = 2;
            goto LAB_033d4e90;
          }
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 2;
        }
      }
      else {
        if (lVar8 == 0) goto LAB_033d4f88;
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar11 = *(long *)puVar5;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_033d4f88;
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 3;
        }
        else {
          lVar10 = *(long *)(lVar11 + 0x20);
          uVar12 = 3;
LAB_033d4e90:
          FUN_0315d730(lVar8,uVar12,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70));
        }
      }
      unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x418))
                                    (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x420));
      if (unaff_x19 == (long *)0x0) goto LAB_033d4f88;
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(unaff_x19);
      }
      uVar9 = FUN_033ab298(unaff_x19,0);
      plVar3 = (long *)
               Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      puVar4 = (undefined8 *)StringLiteral_5633;
    }
    if (lVar8 != 0) {
      FUN_0315f0ec(lVar8,*(undefined8 *)StringLiteral_256);
      uVar12 = *puVar4;
      if (*(int *)(*plVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*plVar3);
      }
      FUN_033a87c8(uVar12,0);
      if (unaff_x20 != 0) {
        FUN_032dfad4();
        return unaff_x19;
      }
    }
  }
LAB_033d4f88:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


