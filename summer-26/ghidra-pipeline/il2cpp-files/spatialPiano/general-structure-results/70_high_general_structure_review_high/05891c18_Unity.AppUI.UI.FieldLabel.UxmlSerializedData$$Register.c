/*
FUNCTION_NAME: Unity.AppUI.UI.FieldLabel.UxmlSerializedData$$Register
ENTRY_POINT: 05891c18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_AppUI_UI_FieldLabel_UxmlSerializedData__Register(void)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  uint *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  int unaff_w24;
  uint uVar18;
  int unaff_w25;
  long lVar19;
  long unaff_x29;
  undefined1 auStack_a0 [160];
  
  memset(auStack_a0,0,0xa0);
  if (unaff_x21 == 0) {
    lVar19 = 0;
  }
  else {
    iVar12 = thunk_FUN_02f143ec(0);
    lVar19 = unaff_x21 + iVar12;
  }
  if (unaff_w24 < unaff_w25) {
    *(long *)(unaff_x29 + -0x28) = unaff_x23;
    *(uint *)(unaff_x29 + -0x10) = (uint)*(ushort *)(unaff_x29 + 0x60);
    puVar9 = Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__;
    *(int *)(unaff_x29 + -0x2c) = unaff_w24;
    *(int *)(unaff_x29 + -0x14) = unaff_w25;
    iVar12 = unaff_w24;
    do {
      puVar1 = (ushort *)(lVar19 + (long)unaff_w24 * 2);
      uVar11 = *puVar1;
      if (0x7f < uVar11) {
        if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        sVar10 = FUN_050d65ac(unaff_w25 - unaff_w24,0x27,0);
        if (sVar10 < 2) {
          uVar18 = 1;
          iVar12 = 1;
        }
        else {
          iVar12 = 1;
          uVar18 = 1;
          do {
            if (*(ushort *)(lVar19 + (long)(iVar12 + unaff_w24) * 2) < 0x80) break;
            uVar18 = uVar18 + 1;
            iVar12 = (int)(short)uVar18;
          } while ((short)uVar18 < sVar10);
        }
        *(int *)(unaff_x29 + -0xc) = unaff_w24 + -1;
        if ((*(ushort *)(lVar19 + (long)(unaff_w24 + -1 + iVar12) * 2) + 0x2400 >> 10 & 0x3f) < 0x3f
           ) {
LAB_05891e7c:
          if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          unaff_x20 = FUN_0589213c(lVar19,unaff_x20,unaff_w24,uVar18 * 0xc,0x1e0);
          plVar14 = (long *)FUN_04f87cb4(0);
          if (plVar14 == (long *)0x0) goto LAB_058920b4;
          iVar8 = (int)(short)uVar18;
          sVar10 = (**(code **)(*plVar14 + 0x278))
                             (plVar14,puVar1,iVar8,auStack_a0,0xa0,*(undefined8 *)(*plVar14 + 0x280)
                             );
          if (sVar10 != 0) {
            if (0 < sVar10) {
              iVar12 = 0;
              do {
                uVar4 = auStack_a0[iVar12];
                if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_058918a0(uVar4,unaff_x20);
                iVar12 = (int)(short)((short)iVar12 + 1);
              } while (iVar12 < sVar10);
            }
            unaff_w25 = *(int *)(unaff_x29 + -0x14);
            iVar12 = unaff_w24 + iVar8;
            unaff_w24 = *(int *)(unaff_x29 + -0xc) + iVar8;
            goto LAB_05891fc4;
          }
        }
        else if (((uVar18 & 0xffff) != 1) && (unaff_w25 - unaff_w24 != iVar12)) {
          uVar18 = uVar18 + 1;
          goto LAB_05891e7c;
        }
        uVar15 = thunk_FUN_02f6ef30(
                                   Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                   );
        uVar15 = FUN_04f520a0(uVar15,0);
        thunk_FUN_02f6ef30(
                          Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_remove_onGestureStarted__
                          );
        uVar16 = thunk_FUN_02f45270();
        FUN_0588fc54(uVar16,uVar15);
        uVar15 = thunk_FUN_02f6ef30(
                                   Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                                   );
        if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar16,uVar15);
        }
        goto LAB_05892138;
      }
      if (((*(uint *)(unaff_x29 + -0x10) & 0xffff) == 0x25) && (uVar11 == 0x25)) {
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        unaff_x20 = FUN_0589213c(lVar19,unaff_x20,unaff_w24,3,0x78);
        iVar12 = unaff_w24 + 2;
        lVar17 = *(long *)puVar9;
        if (iVar12 < unaff_w25) {
          uVar5 = *(undefined2 *)(lVar19 + (long)iVar12 * 2);
          uVar6 = *(undefined2 *)(lVar19 + (long)(unaff_w24 + 1) * 2);
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_02f6670c(lVar17);
          }
          sVar10 = FUN_058912e4(uVar6,uVar5);
          if (sVar10 == -1) {
            lVar17 = *(long *)puVar9;
            unaff_w25 = *(int *)(unaff_x29 + -0x14);
            goto LAB_05891f50;
          }
          uVar7 = *unaff_x19;
          uVar18 = uVar7 + 1;
          *unaff_x19 = uVar18;
          if (unaff_x20 == 0) {
LAB_058920b4:
            if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else {
            uVar3 = *(uint *)(unaff_x20 + 0x18);
            if (uVar7 < uVar3) {
              uVar2 = uVar7 + 2;
              *unaff_x19 = uVar2;
              *(undefined2 *)(unaff_x20 + (long)(int)uVar7 * 2 + 0x20) = 0x25;
              if (uVar3 <= uVar18) goto LAB_058920cc;
              uVar5 = *(undefined2 *)(lVar19 + (long)(unaff_w24 + 1) * 2);
              *unaff_x19 = uVar7 + 3;
              *(undefined2 *)(unaff_x20 + (long)(int)uVar18 * 2 + 0x20) = uVar5;
              if (uVar3 <= uVar2) goto LAB_058920cc;
              unaff_w25 = *(int *)(unaff_x29 + -0x14);
              *(undefined2 *)(unaff_x20 + (long)(int)uVar2 * 2 + 0x20) =
                   *(undefined2 *)(lVar19 + (long)iVar12 * 2);
              unaff_w24 = iVar12;
              goto LAB_05891fc0;
            }
LAB_058920cc:
            if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
          goto LAB_05892138;
        }
LAB_05891f50:
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar17);
        }
        uVar11 = 0x25;
LAB_05891fb4:
        FUN_058918a0(uVar11,unaff_x20);
LAB_05891fc0:
        iVar12 = unaff_w24 + 1;
      }
      else {
        uVar18 = (uint)uVar11;
        if ((uVar18 == (*(uint *)(unaff_x29 + -0x18) & 0xffff)) ||
           (uVar18 == (*(uint *)(unaff_x29 + -0x1c) & 0xffff))) goto LAB_05891f7c;
        if (uVar18 != (*(uint *)(unaff_x29 + -0x10) & 0xffff)) {
          if ((*(uint *)(unaff_x29 + -0x20) & 1) == 0) {
            if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar13 = FUN_0589226c(uVar18);
            if ((uVar13 & 1) == 0) goto LAB_05891f7c;
            goto LAB_05891fc4;
          }
          if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar13 = FUN_0589234c(uVar11);
          if ((uVar13 & 1) != 0) goto LAB_05891fc4;
LAB_05891f7c:
          if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          unaff_x20 = FUN_0589213c(lVar19,unaff_x20,unaff_w24,3,0x78);
          goto LAB_05891fb4;
        }
      }
LAB_05891fc4:
      unaff_w24 = unaff_w24 + 1;
    } while (unaff_w24 < unaff_w25);
    if ((iVar12 != unaff_w24) && ((iVar12 != *(int *)(unaff_x29 + -0x2c) || (unaff_x20 != 0)))) {
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      unaff_x20 = FUN_0589213c(lVar19,unaff_x20,unaff_w24,0,0);
    }
    unaff_x23 = *(long *)(unaff_x29 + -0x28);
  }
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_x20;
  }
LAB_05892138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


