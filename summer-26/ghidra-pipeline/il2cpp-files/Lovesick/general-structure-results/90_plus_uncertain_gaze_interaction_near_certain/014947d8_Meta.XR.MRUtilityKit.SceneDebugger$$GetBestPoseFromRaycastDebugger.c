/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetBestPoseFromRaycastDebugger
ENTRY_POINT: 014947d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetBestPoseFromRaycastDebugger(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_00d6225c(), lVar4 == 0)) goto LAB_01494a88;
  uVar8 = *(uint *)(unaff_x20 + 3);
  if (uVar8 != 0) {
    unaff_x20[4] = unaff_x21;
    lVar4 = *(long *)(unaff_x19 + 0x28);
    if (lVar4 != 0) {
      lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar5 == 0) goto LAB_01494a88;
      uVar8 = *(uint *)(unaff_x20 + 3);
    }
    puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    if (1 < uVar8) {
      unaff_x20[5] = lVar4;
      uStack000000000000001c = FUN_0174f9c4(&stack0x00000028,0);
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0)) {
LAB_01494a88:
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      if (2 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[6] = lVar4;
        uStack0000000000000018 = FUN_0174f6d8(&stack0x00000028,0);
        lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000018);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
        goto LAB_01494a88;
        if (3 < *(uint *)(unaff_x20 + 3)) {
          unaff_x20[7] = lVar4;
          uStack0000000000000014 = FUN_0174f388(&stack0x00000028,0);
          lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000010 + 4);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
          goto LAB_01494a88;
          if (4 < *(uint *)(unaff_x20 + 3)) {
            unaff_x20[8] = lVar4;
            uStack0000000000000010 = FUN_0174f4d4(&stack0x00000028,0);
            lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000010);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
            goto LAB_01494a88;
            if (5 < *(uint *)(unaff_x20 + 3)) {
              unaff_x20[9] = lVar4;
              uStack000000000000000c = FUN_0174f650(&stack0x00000028,0);
              lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
              goto LAB_01494a88;
              if (6 < *(uint *)(unaff_x20 + 3)) {
                unaff_x20[10] = lVar4;
                uStack0000000000000008 = FUN_0174f8bc(&stack0x00000028,0);
                lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000008);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0
                   )) goto LAB_01494a88;
                puVar1 = 
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__
                ;
                if (7 < *(uint *)(unaff_x20 + 3)) {
                  unaff_x20[0xb] = lVar4;
                  puVar3 = StringLiteral_4835;
                  puVar2 = StringLiteral_720;
                  uVar6 = FUN_01600be4(*(undefined8 *)puVar1);
                  uVar7 = FUN_015f5b28(*(undefined8 *)puVar3,uVar6,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar2);
                  }
                  FUN_014ded68(uVar7,0);
                  uVar6 = FUN_016d402c(uVar6,2,0);
                  *(undefined8 *)(unaff_x19 + 0x30) = uVar6;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


