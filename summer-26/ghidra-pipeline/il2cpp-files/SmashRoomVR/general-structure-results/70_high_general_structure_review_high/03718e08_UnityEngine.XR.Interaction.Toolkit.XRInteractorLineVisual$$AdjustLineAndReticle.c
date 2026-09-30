/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual$$AdjustLineAndReticle
ENTRY_POINT: 03718e08
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AdjustLineAndReticle(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  int iVar14;
  long unaff_x20;
  long *plVar15;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x9e8));
  thunk_FUN_01ad9084(PTR_DAT_03d9e6b0);
  thunk_FUN_01ad9084(PTR_DAT_03d9e868);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  *(undefined1 *)(unaff_x20 + 0x7d9) = 1;
  uVar7 = FUN_03717ba4();
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03922f24(uVar7,0,0);
  if ((uVar8 & 1) == 0) {
    lVar9 = FUN_037182f8();
    puVar2 = StringLiteral_3656;
    plVar15 = *(long **)(unaff_x19 + 0x10);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar12 = *plVar15;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_3656) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03718edc;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)StringLiteral_3656,0);
LAB_03718edc:
    lVar12 = (*(code *)*puVar10)(plVar15,puVar10[1]);
    if (lVar9 == lVar12) {
      uVar7 = FUN_03717dcc();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03922f24(uVar7,0,0);
      puVar5 = PTR_DAT_03d9e9e8;
      puVar4 = PTR_DAT_03d9e868;
      puVar3 = PTR_DAT_03d9e6b0;
      puVar1 = StringLiteral_2815;
      if ((uVar8 & 1) == 0) {
        iVar14 = 1;
        do {
          iVar6 = FUN_03717f60();
          if (iVar6 <= iVar14) {
            return 1;
          }
          if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          plVar15 = (long *)FUN_02b59714(*(long *)(unaff_x19 + 0x28),iVar14 + -1,
                                         *(undefined8 *)puVar5);
          if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          plVar11 = (long *)FUN_02b59714(*(long *)(unaff_x19 + 0x30),iVar14 + -1,
                                         *(undefined8 *)puVar3);
          if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar9 = FUN_02b59714(*(long *)(unaff_x19 + 0x30),iVar14,*(undefined8 *)puVar3);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar12 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_03718ff4;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar1,4);
LAB_03718ff4:
          lVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar8 = FUN_02ccb284(lVar12,plVar15,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar12 = *plVar15;
          uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_03719064;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)puVar2,0);
LAB_03719064:
          lVar12 = (*(code *)*puVar10)(plVar15,puVar10[1]);
          iVar14 = iVar14 + 1;
        } while (lVar12 == lVar9);
      }
    }
  }
  return 0;
}


