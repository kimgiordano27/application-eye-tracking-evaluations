/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 03155a38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 180
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03156034) */
/* WARNING: Removing unreachable block (ram,0x03156164) */
/* WARNING: Removing unreachable block (ram,0x03155e50) */
/* WARNING: Removing unreachable block (ram,0x0315616c) */
/* WARNING: Removing unreachable block (ram,0x0315614c) */

void OVRPlugin__GetSystemHeadsetType(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong in_x9;
  ulong uVar9;
  ulong uVar10;
  undefined **in_x10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined1 unaff_w29;
  float fVar14;
  undefined8 unaff_d9;
  ulong unaff_d10;
  long *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000028;
  
code_r0x03155a38:
  if (in_x9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)in_x10[0x7b]) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03155a80;
      }
      in_x9 = in_x9 - 1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)in_x10[0x7b],0);
LAB_03155a80:
  lVar4 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  plVar12 = *(long **)(lVar4 + 0x18);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar7 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d800c8) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03155af0;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)PTR_DAT_03d800c8,0);
LAB_03155af0:
  plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
  uVar9 = unaff_d10;
  uStack0000000000000010 = unaff_d9;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03155b64;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ae9f78(plVar12,*(long *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155b64:
    uVar10 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    if ((uVar10 & 1) == 0) break;
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d800d0) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03155bc8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)PTR_DAT_03d800d0,0);
LAB_03155bc8:
    uVar5 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x68);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar7 = FUN_01f25880(uVar13,uVar6,*unaff_x20);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar7 = FUN_01ed712c(lVar7,*unaff_x28);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar1 = *(undefined4 *)(lVar4 + 0x10);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(lVar7 + 0x68) = uVar5;
    *(undefined1 *)(lVar7 + 0x70) = unaff_w29;
    *(undefined4 *)(lVar7 + 100) = uVar1;
    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x68),uVar5);
    *(undefined8 *)(lVar7 + 0x50) = uVar13;
    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x50),uVar13);
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
    fVar14 = (float)((ulong)uStack0000000000000010 >> 0x20);
    FUN_039282dc(uStack0000000000000010,fVar14,uVar9,lVar7,0);
    uVar9 = (ulong)(uint)((float)uVar9 + *(float *)(unaff_x19 + 0x84));
    uStack0000000000000010 =
         CONCAT44(fVar14 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                  (float)uStack0000000000000010 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
  } while( true );
  if (plVar12 != (long *)0x0) {
    lVar4 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03155d34;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ae9f78(plVar12,*(long *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03155d34:
    (*(code *)*puVar3)(plVar12,puVar3[1]);
  }
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_d10 = (ulong)(uint)((float)unaff_d10 + *(float *)(unaff_x19 + 0x78));
  lVar4 = *in_stack_00000008;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03155a18;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000008,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155a18:
  uVar9 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  if ((uVar9 & 1) == 0) goto LAB_03155dd4;
  in_x10 = &PTR_DAT_03d80000;
  param_1 = *in_stack_00000008;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  goto code_r0x03155a38;
LAB_03155dd4:
  if (in_stack_00000008 != (long *)0x0) {
    lVar4 = *in_stack_00000008;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03155e38;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ae9f78(in_stack_00000008,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03155e38:
    (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar12 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar12 != (long *)0x0)) {
    lVar4 = *plVar12;
    uVar13 = *(undefined8 *)
              Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d803c8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03155ec4;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)PTR_DAT_03d803c8,0);
LAB_03155ec4:
    puVar2 = PTR_DAT_03d803d0;
    plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
    do {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03155f3c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ae9f78(plVar12,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155f3c:
      uVar9 = (*(code *)*puVar3)(plVar12,puVar3[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_03156028;
        lVar4 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 == 0) goto LAB_03156000;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_03155fe8;
      }
      lVar4 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto OVRPlugin__get_eyeTrackedFoveatedRenderingSupported;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar2,0);
OVRPlugin__get_eyeTrackedFoveatedRenderingSupported:
      lVar4 = (*(code *)*puVar3)(plVar12,puVar3[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar13 = FUN_02edd6e8(uVar13,*(undefined8 *)(lVar4 + 0x18),0);
    } while( true );
  }
  goto LAB_0315615c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_03155fe8:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0315601c;
    }
  }
LAB_03156000:
  puVar3 = (undefined8 *)
           FUN_01ae9f78(plVar12,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                        ,0);
LAB_0315601c:
  (*(code *)*puVar3)(plVar12,puVar3[1]);
LAB_03156028:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar12 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0314e200(*(long *)(unaff_x19 + 0x30),0);
    uVar6 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d803b8,(long)&stack0x00000028 + 4);
    uVar13 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80408,uVar6,uVar13,0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x558))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x560));
      return;
    }
  }
LAB_0315615c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


