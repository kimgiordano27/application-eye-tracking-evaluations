/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 03155d20
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 243
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;foveation_rendering;structure_combo;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;strong_foveation_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03156034) */
/* WARNING: Removing unreachable block (ram,0x03155e50) */
/* WARNING: Removing unreachable block (ram,0x0315616c) */
/* WARNING: Removing unreachable block (ram,0x03156164) */

void OVRPlugin__GetTrackingCalibratedOrigin(long *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar11;
  long *unaff_x22;
  long unaff_x25;
  undefined8 uVar12;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined1 unaff_w29;
  float fVar13;
  float fVar14;
  undefined8 unaff_d9;
  float unaff_s10;
  long *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000028;
  
code_r0x03155d20:
  puVar4 = (undefined8 *)FUN_01ae9f78(param_1,param_2,param_3);
  param_1 = unaff_x22;
LAB_03155d34:
  (*(code *)*puVar4)(param_1,puVar4[1]);
LAB_03155d40:
  if (unaff_x25 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(unaff_x25);
  }
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_s10 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
  lVar6 = *in_stack_00000008;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03155a18;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000008,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155a18:
  uVar9 = (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
  if ((uVar9 & 1) != 0) {
    lVar6 = *in_stack_00000008;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d803d8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03155a80;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)PTR_DAT_03d803d8,0);
LAB_03155a80:
    lVar6 = (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar11 = *(long **)(lVar6 + 0x18);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d800c8) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03155af0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)PTR_DAT_03d800c8,0);
LAB_03155af0:
    param_1 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
    uStack0000000000000010 = unaff_d9;
    fVar14 = unaff_s10;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar7 = *param_1;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03155b64;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ae9f78(param_1,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155b64:
      uVar9 = (*(code *)*puVar4)(param_1,puVar4[1]);
      if ((uVar9 & 1) == 0) goto LAB_03155cd8;
      lVar7 = *param_1;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d800d0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03155bc8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(param_1,*(long *)PTR_DAT_03d800d0,0);
LAB_03155bc8:
      uVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01f25880(uVar12,uVar5,*unaff_x20);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar7 = FUN_01ed712c(lVar7,*unaff_x28);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x10);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x28);
      *(undefined8 *)(lVar7 + 0x68) = uVar3;
      *(undefined1 *)(lVar7 + 0x70) = unaff_w29;
      *(undefined4 *)(lVar7 + 100) = uVar1;
      thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x68),uVar3);
      *(undefined8 *)(lVar7 + 0x50) = uVar12;
      thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x50),uVar12);
      lVar7 = FUN_0391c27c(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_039293f4(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                   *(undefined4 *)(unaff_x19 + 0x90),lVar7,0);
      if (*(char *)(unaff_x27 + 0x256) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x27 + 0x256) = unaff_w29;
      }
      puVar8 = *(undefined4 **)(*unaff_x21 + 0xb8);
      FUN_03929060(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar7,0);
      fVar13 = (float)((ulong)uStack0000000000000010 >> 0x20);
      FUN_039282dc(uStack0000000000000010,fVar13,fVar14,lVar7,0);
      fVar14 = fVar14 + *(float *)(unaff_x19 + 0x84);
      uStack0000000000000010 =
           CONCAT44(fVar13 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                    (float)uStack0000000000000010 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
    } while( true );
  }
  if (in_stack_00000008 == (long *)0x0) goto LAB_03155e44;
  lVar6 = *in_stack_00000008;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 == 0) goto LAB_03155e1c;
  piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
  goto LAB_03155e04;
LAB_03155cd8:
  unaff_x25 = 0;
  if (param_1 != (long *)0x0) goto code_r0x03155ce0;
  goto LAB_03155d40;
code_r0x03155ce0:
  lVar6 = *param_1;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  param_2 = *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
  if (uVar9 == 0) goto LAB_03155d18;
  piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
  while (*(long *)(piVar10 + -2) != param_2) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) goto LAB_03155d18;
  }
  puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
  goto LAB_03155d34;
LAB_03155d18:
  param_3 = 0;
  unaff_x22 = param_1;
  goto code_r0x03155d20;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03155e04:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03155e38;
    }
  }
LAB_03155e1c:
  puVar4 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000008,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03155e38:
  (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
LAB_03155e44:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar11 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar11 != (long *)0x0)) {
    lVar6 = *plVar11;
    uVar12 = *(undefined8 *)
              Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d803c8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03155ec4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)PTR_DAT_03d803c8,0);
LAB_03155ec4:
    puVar2 = PTR_DAT_03d803d0;
    plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03155f3c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ae9f78(plVar11,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155f3c:
      uVar9 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_03156028;
        lVar6 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 == 0) goto LAB_03156000;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_03155fe8;
      }
      lVar6 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto OVRPlugin__get_eyeTrackedFoveatedRenderingSupported;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,0);
OVRPlugin__get_eyeTrackedFoveatedRenderingSupported:
      lVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar12 = FUN_02edd6e8(uVar12,*(undefined8 *)(lVar6 + 0x18),0);
    } while( true );
  }
  goto LAB_0315615c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03155fe8:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0315601c;
    }
  }
LAB_03156000:
  puVar4 = (undefined8 *)
           FUN_01ae9f78(plVar11,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                        ,0);
LAB_0315601c:
  (*(code *)*puVar4)(plVar11,puVar4[1]);
LAB_03156028:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar11 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0314e200(*(long *)(unaff_x19 + 0x30),0);
    uVar5 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d803b8,(long)&stack0x00000028 + 4);
    uVar12 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80408,uVar5,uVar12,0);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x558))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x560));
      return;
    }
  }
LAB_0315615c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


