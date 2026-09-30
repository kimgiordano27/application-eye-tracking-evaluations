/*
FUNCTION_NAME: OVR.OpenVR.CVRRenderModels$$FreeRenderModel
ENTRY_POINT: 04f22f20
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 152
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f23288) */

void OVR_OpenVR_CVRRenderModels__FreeRenderModel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar14;
  long unaff_x22;
  
  FUN_02b3c81c(UnityEngine_UIElements_DefaultTreeViewController<object>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x8ca) = 1;
  FUN_04e83350();
  plVar8 = (long *)thunk_FUN_02b79644(*unaff_x21);
  FUN_037550f8(plVar8,*unaff_x20);
  if ((*(long *)(unaff_x19 + 0x58) != 0) &&
     (plVar14 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0x10), plVar14 != (long *)0x0)) {
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TypeInfo) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04f22fc4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_02b7654c(plVar14,*(long *)
                                   System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TypeInfo
                          ,0);
LAB_04f22fc4:
    puVar6 = System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TypeInfo;
    puVar5 = 
    System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_TypeInfo
    ;
    puVar4 = 
    System_Collections_Generic_Dictionary<ValueTuple<Type,_string>,_ICustomMarshaler>_TypeInfo;
    puVar3 = 
    System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_TypeInfo;
    puVar2 = PTR_DAT_06312f90;
    puVar1 = PTR_DAT_06312f78;
    plVar14 = (long *)(*(code *)*puVar9)(plVar14,puVar9[1]);
    do {
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto OVR_OpenVR_CVRRenderModels__GetComponentButtonMask;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(plVar14,*(long *)puVar2,0);
OVR_OpenVR_CVRRenderModels__GetComponentButtonMask:
      uVar12 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar14 == (long *)0x0) goto LAB_04f231d0;
        lVar10 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_04f231a8;
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_04f23190;
      }
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04f230c4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(plVar14,*(long *)puVar6,0);
LAB_04f230c4:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *plVar8;
      uVar7 = *(undefined4 *)(lVar10 + 0x14);
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_04f23130;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)puVar3,2);
LAB_04f23130:
      (*(code *)*puVar9)(plVar8,uVar7,puVar9[1]);
      if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_045a735c(0,0,0,0,*(long *)(unaff_x19 + 0x78),lVar10,*(undefined8 *)puVar5);
    } while( true );
  }
  goto LAB_04f23284;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_04f23190:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04f231c4;
    }
  }
LAB_04f231a8:
  puVar9 = (undefined8 *)FUN_02b7654c(plVar14,*(long *)puVar1,0);
LAB_04f231c4:
  (*(code *)*puVar9)(plVar14,puVar9[1]);
LAB_04f231d0:
  uVar7 = FUN_05c91f88();
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_04dbdb8c(lVar10,0);
  *(undefined4 *)(lVar10 + 0x10) = uVar7;
  *(long *)(lVar10 + 0x18) = (long)plVar8;
  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x18),plVar8);
  *(long *)(unaff_x19 + 0x80) = lVar10;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x80),lVar10);
  lVar10 = *(long *)(unaff_x19 + 0x70);
  if (lVar10 != 0) {
    uVar7 = (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
    *(undefined4 *)(unaff_x19 + 0x90) = uVar7;
    FUN_04e833f4();
    return;
  }
LAB_04f23284:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


