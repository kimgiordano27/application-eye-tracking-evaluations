/*
FUNCTION_NAME: OVR.OpenVR.CVRRenderModels$$FreeTexture
ENTRY_POINT: 04f22f60
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

void OVR_OpenVR_CVRRenderModels__FreeTexture(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long *plVar13;
  
  if ((*(long *)(unaff_x19 + 0x58) != 0) &&
     (plVar13 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0x10), plVar13 != (long *)0x0)) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_04f22fc4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02b7654c(plVar13,*(long *)
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
    plVar13 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
    do {
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto OVR_OpenVR_CVRRenderModels__GetComponentButtonMask;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar2,0);
OVR_OpenVR_CVRRenderModels__GetComponentButtonMask:
      uVar11 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar13 == (long *)0x0) goto LAB_04f231d0;
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_04f231a8;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_04f23190;
      }
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04f230c4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar6,0);
LAB_04f230c4:
      lVar9 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *unaff_x20;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_04f23130;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c();
LAB_04f23130:
      (*(code *)*puVar8)();
      if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_045a735c(0,0,0,0,*(long *)(unaff_x19 + 0x78),lVar9,*(undefined8 *)puVar5);
    } while( true );
  }
  goto LAB_04f23284;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_04f23190:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_04f231c4;
    }
  }
LAB_04f231a8:
  puVar8 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar1,0);
LAB_04f231c4:
  (*(code *)*puVar8)(plVar13,puVar8[1]);
LAB_04f231d0:
  uVar7 = FUN_05c91f88();
  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_04dbdb8c(lVar9,0);
  *(undefined4 *)(lVar9 + 0x10) = uVar7;
  *(long **)(lVar9 + 0x18) = unaff_x20;
  thunk_FUN_02bb0e9c();
  *(long *)(unaff_x19 + 0x80) = lVar9;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x80),lVar9);
  lVar9 = *(long *)(unaff_x19 + 0x70);
  if (lVar9 != 0) {
    uVar7 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
    ;
    *(undefined4 *)(unaff_x19 + 0x90) = uVar7;
    FUN_04e833f4();
    return;
  }
LAB_04f23284:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


