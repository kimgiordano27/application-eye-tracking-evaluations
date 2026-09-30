/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 03155df0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 216
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;gaze_retrieval;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_foveation_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03156034) */
/* WARNING: Removing unreachable block (ram,0x0315616c) */

void OVRPlugin__RecenterTrackingOrigin(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  int unaff_w20;
  long *plVar7;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 in_stack_00000028;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == **(long **)(in_x10 + 0xf90)) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03155e38;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_03155e38:
  (*(code *)*puVar2)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160();
  }
  if ((unaff_w20 != 9) && (unaff_w20 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar7 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar7 != (long *)0x0)) {
    lVar4 = *plVar7;
    uVar8 = *(undefined8 *)
             Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d803c8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03155ec4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)PTR_DAT_03d803c8,0);
LAB_03155ec4:
    puVar1 = PTR_DAT_03d803d0;
    plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03155f3c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ae9f78(plVar7,*(long *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155f3c:
      uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_03156028;
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_03156000;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_03155fe8;
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto OVRPlugin__get_eyeTrackedFoveatedRenderingSupported;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,0);
OVRPlugin__get_eyeTrackedFoveatedRenderingSupported:
      lVar4 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar8 = FUN_02edd6e8(uVar8,*(undefined8 *)(lVar4 + 0x18),0);
    } while( true );
  }
  goto LAB_0315615c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_03155fe8:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0315601c;
    }
  }
LAB_03156000:
  puVar2 = (undefined8 *)
           FUN_01ae9f78(plVar7,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_0315601c:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
LAB_03156028:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar7 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0314e200(*(long *)(unaff_x19 + 0x30),0);
    uVar3 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d803b8,(long)&stack0x00000028 + 4);
    uVar8 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80408,uVar3,uVar8,0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x558))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x560));
      return;
    }
  }
LAB_0315615c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


