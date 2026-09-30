/*
FUNCTION_NAME: FUN_03155660
ENTRY_POINT: 03155660
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 202
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_14;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03156034) */
/* WARNING: Removing unreachable block (ram,0x0315614c) */
/* WARNING: Removing unreachable block (ram,0x03155e50) */
/* WARNING: Removing unreachable block (ram,0x0315616c) */
/* WARNING: Removing unreachable block (ram,0x03156164) */

void FUN_03155660(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 local_90;
  undefined4 local_74;
  
  if ((DAT_03ff2007 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80390);
    thunk_FUN_01ad9084(PTR_DAT_03d80398);
    thunk_FUN_01ad9084(PTR_DAT_03d803a0);
    thunk_FUN_01ad9084(PTR_DAT_03d803a8);
    thunk_FUN_01ad9084(PTR_DAT_03d803b0);
    thunk_FUN_01ad9084(PTR_DAT_03d803b8);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d803c0);
    thunk_FUN_01ad9084(PTR_DAT_03d803c8);
    thunk_FUN_01ad9084(PTR_DAT_03d800c8);
    thunk_FUN_01ad9084(PTR_DAT_03d803d0);
    thunk_FUN_01ad9084(PTR_DAT_03d803d8);
    thunk_FUN_01ad9084(PTR_DAT_03d800d0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d803e0);
    thunk_FUN_01ad9084(PTR_DAT_03d803e8);
    thunk_FUN_01ad9084(PTR_DAT_03d803f0);
    thunk_FUN_01ad9084(PTR_DAT_03d803f8);
    thunk_FUN_01ad9084(PTR_DAT_03d80400);
    thunk_FUN_01ad9084(PTR_DAT_03d80408);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ff2007 = 1;
  }
  puVar2 = PTR_DAT_03d803f0;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  uVar18 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  fVar19 = *(float *)(*(undefined8 **)
                       (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  uVar5 = FUN_03156314(param_1);
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar9);
    lVar9 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_03d80390;
  lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar13 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar9);
      lVar9 = *(long *)puVar2;
    }
    uVar14 = **(undefined8 **)(lVar9 + 0xb8);
    lVar13 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d803a8);
    FUN_028b1f60(lVar13,uVar14,*(undefined8 *)PTR_DAT_03d803e0,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar6 = lVar13;
    thunk_FUN_01b4f09c(plVar6,lVar13);
  }
  uVar5 = FUN_01eb52d4(uVar5,lVar13,*(undefined8 *)puVar3);
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar9);
    lVar9 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_03d80398;
  lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if (lVar13 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar9);
      lVar9 = *(long *)puVar2;
    }
    uVar14 = **(undefined8 **)(lVar9 + 0xb8);
    lVar13 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d803a0);
    FUN_028b7004(lVar13,uVar14,*(undefined8 *)PTR_DAT_03d803e8,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar6 = lVar13;
    thunk_FUN_01b4f09c(plVar6,lVar13);
  }
  plVar6 = (long *)FUN_01ebc520(uVar5,lVar13,*(undefined8 *)puVar3);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03d803c0) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0315598c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d803c0,0);
LAB_0315598c:
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar4 = PTR_DAT_03d803b0;
    puVar3 = Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__2__;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_031559c0:
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03155a18;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ae9f78(plVar6,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__
                          ,0);
LAB_03155a18:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) != 0) {
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03d803d8) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03155a80;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d803d8,0);
LAB_03155a80:
      lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar15 = *(long **)(lVar9 + 0x18);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar13 = *plVar15;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03d800c8) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03155af0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)PTR_DAT_03d800c8,0);
LAB_03155af0:
      plVar15 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
      fVar17 = fVar19;
      local_90 = uVar18;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar13 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03155b64;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ae9f78(plVar15,*(long *)
                                       Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0)
        ;
LAB_03155b64:
        uVar11 = (*(code *)*puVar7)(plVar15,puVar7[1]);
        if ((uVar11 & 1) == 0) goto LAB_03155cd8;
        lVar13 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03d800d0) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03155bc8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)PTR_DAT_03d800d0,0);
LAB_03155bc8:
        uVar8 = (*(code *)*puVar7)(plVar15,puVar7[1]);
        uVar5 = *(undefined8 *)(param_1 + 0x60);
        uVar14 = *(undefined8 *)(param_1 + 0x68);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar13 = FUN_01f25880(uVar5,uVar14,*(undefined8 *)puVar3);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar13 = FUN_01ed712c(lVar13,*(undefined8 *)puVar4);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar1 = *(undefined4 *)(lVar9 + 0x10);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(lVar13 + 0x68) = uVar8;
        *(undefined1 *)(lVar13 + 0x70) = 1;
        *(undefined4 *)(lVar13 + 100) = uVar1;
        thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x68),uVar8);
        *(undefined8 *)(lVar13 + 0x50) = uVar5;
        thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x50),uVar5);
        lVar13 = FUN_0391c27c(lVar13,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_039293f4(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                     *(undefined4 *)(param_1 + 0x90),lVar13,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(puVar2);
          DAT_03fed256 = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
        FUN_03929060(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar13,0);
        fVar16 = (float)((ulong)local_90 >> 0x20);
        FUN_039282dc(local_90,fVar16,fVar17,lVar13,0);
        fVar17 = fVar17 + *(float *)(param_1 + 0x84);
        local_90 = CONCAT44(fVar16 + (float)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20),
                            (float)local_90 + (float)*(undefined8 *)(param_1 + 0x7c));
      } while( true );
    }
    if (plVar6 == (long *)0x0) goto LAB_03155e44;
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 == 0) goto LAB_03155e1c;
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    goto LAB_03155e04;
  }
  goto LAB_0315615c;
LAB_03155cd8:
  if (plVar15 != (long *)0x0) {
    lVar9 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03155d34;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ae9f78(plVar15,*(long *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03155d34:
    (*(code *)*puVar7)(plVar15,puVar7[1]);
  }
  uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20),
                    (float)uVar18 + (float)*(undefined8 *)(param_1 + 0x70));
  fVar19 = fVar19 + *(float *)(param_1 + 0x78);
  goto LAB_031559c0;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03155e04:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03155e38;
    }
  }
LAB_03155e1c:
  puVar7 = (undefined8 *)
           FUN_01ae9f78(plVar6,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_03155e38:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03155e44:
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0x40), plVar6 != (long *)0x0)) {
    lVar9 = *plVar6;
    uVar5 = *(undefined8 *)
             Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03d803c8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03155ec4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d803c8,0);
LAB_03155ec4:
    puVar2 = PTR_DAT_03d803d0;
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03155f3c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ae9f78(plVar6,*(long *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03155f3c:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_03156028;
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_03156000;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03155fe8;
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto OVRPlugin__get_eyeTrackedFoveatedRenderingSupported;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)puVar2,0);
OVRPlugin__get_eyeTrackedFoveatedRenderingSupported:
      lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar5 = FUN_02edd6e8(uVar5,*(undefined8 *)(lVar9 + 0x18),0);
    } while( true );
  }
  goto LAB_0315615c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03155fe8:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0315601c;
    }
  }
LAB_03156000:
  puVar7 = (undefined8 *)
           FUN_01ae9f78(plVar6,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_0315601c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03156028:
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar6 = *(long **)(param_1 + 0x98);
    local_74 = FUN_0314e200(*(long *)(param_1 + 0x30),0);
    uVar18 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d803b8,&local_74);
    uVar5 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80408,uVar18,uVar5,0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x558))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x560));
      return;
    }
  }
LAB_0315615c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


