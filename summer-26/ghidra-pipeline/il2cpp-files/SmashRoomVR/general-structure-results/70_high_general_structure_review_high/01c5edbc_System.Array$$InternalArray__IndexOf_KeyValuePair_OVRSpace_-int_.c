/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<KeyValuePair<OVRSpace,-int>>
ENTRY_POINT: 01c5edbc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__IndexOf<KeyValuePair<OVRSpace,_int>>(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x21;
  long *plVar7;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(unaff_x23 + 0xf88);
  puVar5 = *(undefined8 **)(unaff_x20 + 0xf58);
  plVar7 = *(long **)(unaff_x21 + 0xcf8);
  if ((*(byte *)(unaff_x22 + 0x6a2) & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_157);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(StringLiteral_172);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x22 + 0x6a2) = 1;
  }
  uVar1 = FUN_01e8a9f8(param_1,*puVar8);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  thunk_FUN_01b4f09c();
  lVar2 = FUN_01e8a9f8(param_1,*puVar5);
  lVar4 = *plVar7;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar4);
  }
  uVar3 = FUN_03923030(lVar2,0);
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) goto LAB_01c5ef68;
    *(undefined4 *)(lVar2 + 0x48) = 0;
  }
  lVar2 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                Field_<PrivateImplementationDetails>_0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0
                      );
  plVar6 = (long *)(param_1 + 200);
  *plVar6 = lVar2;
  thunk_FUN_01b4f09c(plVar6,lVar2);
  lVar2 = *plVar6;
  if (*(int *)(*plVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar2 = FUN_0391c2b8(param_1,0);
    if (lVar2 != 0) {
      lVar2 = FUN_01ed7044(lVar2,*(undefined8 *)StringLiteral_172);
      *plVar6 = lVar2;
      thunk_FUN_01b4f09c(plVar6,lVar2);
      if (*plVar6 != 0) {
        FUN_0395bd38(DAT_00b5568c,*plVar6,0);
        if (*plVar6 != 0) {
          FUN_0395bc28(0,0xbe800000,0,*plVar6,0);
          if (*plVar6 != 0) {
            FUN_0395bab4(DAT_00b55290,*plVar6,0);
            if (*plVar6 != 0) {
              FUN_0395bb3c(0x3fc00000,*plVar6,0);
              goto LAB_01c5ef50;
            }
          }
        }
      }
    }
LAB_01c5ef68:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
LAB_01c5ef50:
  *(undefined1 *)(param_1 + 0xfc) = 1;
  return;
}


