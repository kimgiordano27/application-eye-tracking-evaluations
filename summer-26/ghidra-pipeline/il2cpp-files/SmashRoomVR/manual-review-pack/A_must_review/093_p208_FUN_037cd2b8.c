/*
FUNCTION_NAME: FUN_037cd2b8
ENTRY_POINT: 037cd2b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x037cd5bc) */

void FUN_037cd2b8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  
  puVar4 = StringLiteral_2360;
  if ((DAT_03ff810f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da3fd8);
    thunk_FUN_01ad9084(StringLiteral_2360);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03da3fe0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da3fe8);
    thunk_FUN_01ad9084(PTR_DAT_03da3ff0);
    thunk_FUN_01ad9084(PTR_DAT_03da3ff8);
    DAT_03ff810f = 1;
  }
  puVar2 = PTR_DAT_03da3ff8;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar9 = UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable__get_trackRotation
                    (*(undefined8 *)puVar2,0);
  if ((lVar9 == 0) ||
     (FUN_01e975a4(lVar9,param_1,*(undefined8 *)PTR_DAT_03da3fd8),
     puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__, param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  plVar10 = (long *)FUN_037cd7a8(param_1);
  puVar8 = PTR_DAT_03da3ff0;
  puVar7 = PTR_DAT_03da3fe8;
  puVar6 = PTR_DAT_03da3fe0;
  puVar5 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  puVar3 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar9 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_037cd440;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar5,0);
LAB_037cd440:
    uVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 == 0) goto LAB_037cd564;
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_037cd49c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar6,0);
LAB_037cd49c:
    lVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(long **)(lVar9 + 0x18) != (long *)0x0) {
      lVar14 = **(long **)(lVar9 + 0x18);
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
        uVar12 = FUN_02ee6c30(*(undefined8 *)puVar7,*(undefined8 *)(lVar9 + 0x10),
                              *(undefined8 *)puVar8,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f336c(uVar12,0);
        FUN_037ce154(param_1,*(undefined8 *)(lVar9 + 0x10),0);
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_037cd580;
    }
  }
LAB_037cd564:
  puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar4,0);
LAB_037cd580:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


