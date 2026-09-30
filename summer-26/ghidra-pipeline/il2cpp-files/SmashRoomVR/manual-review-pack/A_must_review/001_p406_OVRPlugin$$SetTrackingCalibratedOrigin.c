/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 03155d94
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 243
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;foveation_rendering;structure_combo;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;strong_foveation_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03156034) */
/* WARNING: Removing unreachable block (ram,0x03156308) */
/* WARNING: Removing unreachable block (ram,0x0315616c) */
/* WARNING: Removing unreachable block (ram,0x0315613c) */

void OVRPlugin__SetTrackingCalibratedOrigin(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  int iVar11;
  int iVar12;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar13;
  undefined8 uVar14;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined1 unaff_w29;
  float fVar15;
  float fVar16;
  undefined8 unaff_d9;
  float unaff_s10;
  long *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000028;
  
  if (param_2 == 1) {
    plVar5 = (long *)__cxa_begin_catch(param_1);
    lVar13 = *plVar5;
    __cxa_end_catch();
code_r0x03155cdc:
    if (unaff_x22 != (long *)0x0) {
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03155d34;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ae9f78(unaff_x22,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03155d34:
      (*(code *)*puVar4)(unaff_x22,puVar4[1]);
    }
    if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab0160(lVar13);
    }
    unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                        (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
    unaff_s10 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
    lVar13 = *in_stack_00000008;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
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
      lVar13 = *in_stack_00000008;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d803d8) {
            puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03155a80;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)PTR_DAT_03d803d8,0);
LAB_03155a80:
      lVar13 = (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar5 = *(long **)(lVar13 + 0x18);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d800c8) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03155af0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)PTR_DAT_03d800c8,0);
LAB_03155af0:
      unaff_x22 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      uStack0000000000000010 = unaff_d9;
      fVar16 = unaff_s10;
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar8 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03155b64;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ae9f78(unaff_x22,
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0)
        ;
LAB_03155b64:
        uVar9 = (*(code *)*puVar4)(unaff_x22,puVar4[1]);
        if ((uVar9 & 1) == 0) goto LAB_03155cd8;
        lVar8 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d800d0) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03155bc8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x22,*(long *)PTR_DAT_03d800d0,0);
LAB_03155bc8:
        uVar3 = (*(code *)*puVar4)(unaff_x22,puVar4[1]);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x60);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar8 = FUN_01f25880(uVar14,uVar6,*unaff_x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar8 = FUN_01ed712c(lVar8,*unaff_x28);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar1 = *(undefined4 *)(lVar13 + 0x10);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x28);
        *(undefined8 *)(lVar8 + 0x68) = uVar3;
        *(undefined1 *)(lVar8 + 0x70) = unaff_w29;
        *(undefined4 *)(lVar8 + 100) = uVar1;
        thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x68),uVar3);
        *(undefined8 *)(lVar8 + 0x50) = uVar14;
        thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x50),uVar14);
        lVar8 = FUN_0391c27c(lVar8,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_039293f4(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                     *(undefined4 *)(unaff_x19 + 0x90),lVar8,0);
        if (*(char *)(unaff_x27 + 0x256) == '\0') {
          thunk_FUN_01ad9084();
          *(undefined1 *)(unaff_x27 + 0x256) = unaff_w29;
        }
        puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
        FUN_03929060(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar8,0);
        fVar15 = (float)((ulong)uStack0000000000000010 >> 0x20);
        FUN_039282dc(uStack0000000000000010,fVar15,fVar16,lVar8,0);
        fVar16 = fVar16 + *(float *)(unaff_x19 + 0x84);
        uStack0000000000000010 =
             CONCAT44(fVar15 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                      (float)uStack0000000000000010 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
      } while( true );
    }
    lVar13 = 0;
    iVar12 = 9;
    iVar11 = 9;
    goto joined_r0x03155de0;
  }
  if (unaff_x22 != (long *)0x0) {
    lVar13 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
          goto code_r0x0315612c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78();
code_r0x0315612c:
    (*(code *)*puVar4)();
  }
  if (param_2 != 1) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar13 = *in_stack_00000008;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x031562f0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ae9f78(in_stack_00000008,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
code_r0x031562f0:
      (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bbda54(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar13 = *plVar5;
  __cxa_end_catch();
  iVar12 = 0;
  iVar11 = 0;
joined_r0x03155de0:
  if (in_stack_00000008 != (long *)0x0) {
    lVar8 = *in_stack_00000008;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03155e38;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ae9f78(in_stack_00000008,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03155e38:
    (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
    iVar11 = iVar12;
  }
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(lVar13);
  }
  if ((iVar11 != 9) && (iVar11 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar5 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar5 != (long *)0x0)) {
    lVar13 = *plVar5;
    uVar14 = *(undefined8 *)
              Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d803c8) {
          puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03155ec4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)PTR_DAT_03d803c8,0);
LAB_03155ec4:
    puVar2 = PTR_DAT_03d803d0;
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar13 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03155f3c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ae9f78(plVar5,*(long *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155f3c:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_03156028;
        lVar13 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 == 0) goto LAB_03156000;
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_03155fe8;
      }
      lVar13 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto OVRPlugin__get_eyeTrackedFoveatedRenderingSupported;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)puVar2,0);
OVRPlugin__get_eyeTrackedFoveatedRenderingSupported:
      lVar13 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar14 = FUN_02edd6e8(uVar14,*(undefined8 *)(lVar13 + 0x18),0);
    } while( true );
  }
  goto LAB_0315615c;
LAB_03155cd8:
  lVar13 = 0;
  goto code_r0x03155cdc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03155fe8:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0315601c;
    }
  }
LAB_03156000:
  puVar4 = (undefined8 *)
           FUN_01ae9f78(plVar5,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_0315601c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_03156028:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar5 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0314e200(*(long *)(unaff_x19 + 0x30),0);
    uVar6 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d803b8,(long)&stack0x00000028 + 4);
    uVar14 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80408,uVar6,uVar14,0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar14,*(undefined8 *)(*plVar5 + 0x560));
      return;
    }
  }
LAB_0315615c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


