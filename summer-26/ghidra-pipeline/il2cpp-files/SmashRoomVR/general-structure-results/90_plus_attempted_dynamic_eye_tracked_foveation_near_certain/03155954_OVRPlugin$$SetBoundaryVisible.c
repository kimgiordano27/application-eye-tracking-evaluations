/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 03155954
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 185
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03156034) */
/* WARNING: Removing unreachable block (ram,0x0315614c) */
/* WARNING: Removing unreachable block (ram,0x03155e50) */
/* WARNING: Removing unreachable block (ram,0x0315616c) */
/* WARNING: Removing unreachable block (ram,0x03156164) */

void OVRPlugin__SetBoundaryVisible(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long in_x9;
  ulong uVar12;
  ulong uVar13;
  long in_x10;
  int *piVar14;
  long unaff_x19;
  long *plVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 unaff_d9;
  ulong unaff_d10;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000028;
  
  piVar14 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar14 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0315598c;
    }
    in_x9 = in_x9 + -1;
    piVar14 = piVar14 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_01ae9f78();
LAB_0315598c:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_03d803b0;
  puVar3 = Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__2__;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
LAB_031559c0:
  lVar9 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03155a18;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ae9f78(plVar6,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0
                       );
LAB_03155a18:
  uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
  if ((uVar12 & 1) != 0) {
    lVar9 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d803d8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03155a80;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d803d8,0);
LAB_03155a80:
    lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar15 = *(long **)(lVar9 + 0x18);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar10 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d800c8) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03155af0;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)PTR_DAT_03d800c8,0);
LAB_03155af0:
    plVar15 = (long *)(*(code *)*puVar5)(plVar15,puVar5[1]);
    uVar12 = unaff_d10;
    uStack0000000000000010 = unaff_d9;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar10 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03155b64;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ae9f78(plVar15,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155b64:
      uVar13 = (*(code *)*puVar5)(plVar15,puVar5[1]);
      if ((uVar13 & 1) == 0) goto LAB_03155cd8;
      lVar10 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d800d0) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03155bc8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)PTR_DAT_03d800d0,0);
LAB_03155bc8:
      uVar7 = (*(code *)*puVar5)(plVar15,puVar5[1]);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar10 = FUN_01f25880(uVar16,uVar8,*(undefined8 *)puVar3);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar10 = FUN_01ed712c(lVar10,*(undefined8 *)puVar4);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar1 = *(undefined4 *)(lVar9 + 0x10);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x28);
      *(undefined8 *)(lVar10 + 0x68) = uVar7;
      *(undefined1 *)(lVar10 + 0x70) = 1;
      *(undefined4 *)(lVar10 + 100) = uVar1;
      thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x68),uVar7);
      *(undefined8 *)(lVar10 + 0x50) = uVar16;
      thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x50),uVar16);
      lVar10 = FUN_0391c27c(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_039293f4(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                   *(undefined4 *)(unaff_x19 + 0x90),lVar10,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed256 = '\x01';
      }
      puVar11 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      FUN_03929060(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
      fVar17 = (float)((ulong)uStack0000000000000010 >> 0x20);
      FUN_039282dc(uStack0000000000000010,fVar17,uVar12,lVar10,0);
      uVar12 = (ulong)(uint)((float)uVar12 + *(float *)(unaff_x19 + 0x84));
      uStack0000000000000010 =
           CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                    (float)uStack0000000000000010 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
    } while( true );
  }
  if (plVar6 == (long *)0x0) goto LAB_03155e44;
  lVar9 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 == 0) goto LAB_03155e1c;
  piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
  goto LAB_03155e04;
LAB_03155cd8:
  if (plVar15 != (long *)0x0) {
    lVar9 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03155d34;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ae9f78(plVar15,*(long *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03155d34:
    (*(code *)*puVar5)(plVar15,puVar5[1]);
  }
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_d10 = (ulong)(uint)((float)unaff_d10 + *(float *)(unaff_x19 + 0x78));
  goto LAB_031559c0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_03155e04:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03155e38;
    }
  }
LAB_03155e1c:
  puVar5 = (undefined8 *)
           FUN_01ae9f78(plVar6,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_03155e38:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_03155e44:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar6 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar6 != (long *)0x0)) {
    lVar9 = *plVar6;
    uVar16 = *(undefined8 *)
              Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03d803c8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03155ec4;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d803c8,0);
LAB_03155ec4:
    puVar2 = PTR_DAT_03d803d0;
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar9 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03155f3c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ae9f78(plVar6,*(long *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155f3c:
      uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_03156028;
        lVar9 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar12 == 0) goto LAB_03156000;
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03155fe8;
      }
      lVar9 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto OVRPlugin__get_eyeTrackedFoveatedRenderingSupported;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)puVar2,0);
OVRPlugin__get_eyeTrackedFoveatedRenderingSupported:
      lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar16 = FUN_02edd6e8(uVar16,*(undefined8 *)(lVar9 + 0x18),0);
    } while( true );
  }
  goto LAB_0315615c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_03155fe8:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0315601c;
    }
  }
LAB_03156000:
  puVar5 = (undefined8 *)
           FUN_01ae9f78(plVar6,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_0315601c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_03156028:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar6 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0314e200(*(long *)(unaff_x19 + 0x30),0);
    uVar8 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d803b8,(long)&stack0x00000028 + 4);
    uVar16 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80408,uVar8,uVar16,0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x558))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x560));
      return;
    }
  }
LAB_0315615c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


