/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 03155cbc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 180
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03156034) */
/* WARNING: Removing unreachable block (ram,0x03156164) */
/* WARNING: Removing unreachable block (ram,0x03155e50) */
/* WARNING: Removing unreachable block (ram,0x0315616c) */
/* WARNING: Removing unreachable block (ram,0x0315614c) */

void OVRPlugin__SetTrackingOriginType(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar11;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined1 unaff_w29;
  float unaff_s8;
  undefined8 unaff_d9;
  float unaff_s10;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000028;
  
code_r0x03155cbc:
  unaff_s8 = unaff_s8 + *(float *)(unaff_x19 + 0x84);
  in_stack_00000010 =
       CONCAT44((float)((ulong)in_stack_00000010 >> 0x20) +
                (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                (float)in_stack_00000010 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
  uStack0000000000000018 = 0;
  do {
    lVar6 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03155b64;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ae9f78(unaff_x22,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155b64:
    uVar8 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    if ((uVar8 & 1) != 0) break;
    if (unaff_x22 != (long *)0x0) {
      lVar6 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03155d34;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ae9f78(unaff_x22,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03155d34:
      (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    }
    unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                        (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
    uVar11 = 0;
    unaff_s8 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
    lVar6 = *in_stack_00000008;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03155a18;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ae9f78(in_stack_00000008,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155a18:
    uVar8 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (in_stack_00000008 == (long *)0x0) goto LAB_03155e44;
      lVar6 = *in_stack_00000008;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_03155e1c;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_03155e04;
    }
    lVar6 = *in_stack_00000008;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d803d8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03155a80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)PTR_DAT_03d803d8,0);
LAB_03155a80:
    unaff_x23 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar10 = *(long **)(unaff_x23 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d800c8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03155af0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03d800c8,0);
LAB_03155af0:
    unaff_x22 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    in_stack_00000010 = unaff_d9;
    uStack0000000000000018 = uVar11;
    unaff_s10 = unaff_s8;
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  } while( true );
  lVar6 = *unaff_x22;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d800d0) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03155bc8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x22,*(long *)PTR_DAT_03d800d0,0);
LAB_03155bc8:
  uVar4 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar6 = FUN_01f25880(uVar11,uVar5,*unaff_x20);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = FUN_01ed712c(lVar6,*unaff_x28);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar1 = *(undefined4 *)(unaff_x23 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(lVar6 + 0x68) = uVar4;
  *(undefined1 *)(lVar6 + 0x70) = unaff_w29;
  *(undefined4 *)(lVar6 + 100) = uVar1;
  thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x68),uVar4);
  *(undefined8 *)(lVar6 + 0x50) = uVar11;
  thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x50),uVar11);
  lVar6 = FUN_0391c27c(lVar6,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_039293f4(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
               *(undefined4 *)(unaff_x19 + 0x90),lVar6,0);
  if (*(char *)(unaff_x27 + 0x256) == '\0') {
    thunk_FUN_01ad9084();
    *(undefined1 *)(unaff_x27 + 0x256) = unaff_w29;
  }
  puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
  FUN_03929060(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar6,0);
  FUN_039282dc(in_stack_00000010,(int)((ulong)in_stack_00000010 >> 0x20),unaff_s8,lVar6,0);
  goto code_r0x03155cbc;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03155e04:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03155e38;
    }
  }
LAB_03155e1c:
  puVar3 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000008,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03155e38:
  (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
LAB_03155e44:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar10 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar10 != (long *)0x0)) {
    lVar6 = *plVar10;
    uVar11 = *(undefined8 *)
              Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d803c8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03155ec4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03d803c8,0);
LAB_03155ec4:
    puVar2 = PTR_DAT_03d803d0;
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03155f3c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ae9f78(plVar10,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155f3c:
      uVar8 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_03156028;
        lVar6 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_03156000;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_03155fe8;
      }
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto OVRPlugin__get_eyeTrackedFoveatedRenderingSupported;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar2,0);
OVRPlugin__get_eyeTrackedFoveatedRenderingSupported:
      lVar6 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar11 = FUN_02edd6e8(uVar11,*(undefined8 *)(lVar6 + 0x18),0);
    } while( true );
  }
  goto LAB_0315615c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03155fe8:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0315601c;
    }
  }
LAB_03156000:
  puVar3 = (undefined8 *)
           FUN_01ae9f78(plVar10,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                        ,0);
LAB_0315601c:
  (*(code *)*puVar3)(plVar10,puVar3[1]);
LAB_03156028:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar10 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0314e200(*(long *)(unaff_x19 + 0x30),0);
    uVar5 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d803b8,(long)&stack0x00000028 + 4);
    uVar11 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80408,uVar5,uVar11,0);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x560));
      return;
    }
  }
LAB_0315615c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


