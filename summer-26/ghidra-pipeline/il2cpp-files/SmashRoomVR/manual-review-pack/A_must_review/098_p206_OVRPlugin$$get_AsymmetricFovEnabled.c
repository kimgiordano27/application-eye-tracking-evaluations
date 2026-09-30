/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 03157114
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_10;validity_or_gating_hits_18;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x031575a0) */
/* WARNING: Removing unreachable block (ram,0x03157758) */

void OVRPlugin__get_AsymmetricFovEnabled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  undefined8 uVar12;
  long *unaff_x23;
  long *plVar13;
  
  uVar12 = **(undefined8 **)(param_1 + 0xb8);
  uVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d803a0);
  FUN_028b7004(uVar3,uVar12,*(undefined8 *)PTR_DAT_03d80478,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
  *puVar4 = uVar3;
  thunk_FUN_01b4f09c(puVar4,uVar3);
  plVar5 = (long *)FUN_01ebc520();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar7 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d803c0) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_031571c8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)PTR_DAT_03d803c0,0);
LAB_031571c8:
  plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
LAB_031571f8:
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar7 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03157254;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ae9f78(plVar5,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0
                       );
LAB_03157254:
  uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
  if ((uVar10 & 1) != 0) {
    lVar7 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d803d8) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_031572bc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)PTR_DAT_03d803d8,0);
LAB_031572bc:
    lVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar13 = *(long **)(lVar7 + 0x18);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d800c8) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0315732c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)PTR_DAT_03d800c8,0);
LAB_0315732c:
    plVar13 = (long *)(*(code *)*puVar4)(plVar13,puVar4[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03157394;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ae9f78(plVar13,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157394:
      uVar10 = (*(code *)*puVar4)(plVar13,puVar4[1]);
      if ((uVar10 & 1) == 0) goto LAB_03157534;
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d800d0) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_031573f8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)PTR_DAT_03d800d0,0);
LAB_031573f8:
      uVar3 = (*(code *)*puVar4)(plVar13,puVar4[1]);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar8 = FUN_01f25754(uVar12,*(undefined8 *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = FUN_01ed712c(lVar8,*(undefined8 *)PTR_DAT_03d80468);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03154f64(lVar6,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar7 + 0x10),uVar3);
      lVar8 = FUN_0391fab4(lVar8,0);
      uVar3 = FUN_0391c27c();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178(uVar3,uVar3);
      }
      FUN_039294c8(lVar8,uVar3,0);
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed258 = '\x01';
      }
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                   *(undefined4 *)(lVar6 + 0x14),lVar8,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(puVar1);
        DAT_03fed256 = '\x01';
      }
      puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_03929060(*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar8,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed257 = '\x01';
      }
      puVar9 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      FUN_039282dc(*puVar9,puVar9[1],puVar9[2],lVar8,0);
    } while( true );
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 == 0) goto LAB_0315767c;
  piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_03157664;
LAB_03157534:
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03157590;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ae9f78(plVar13,*(long *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03157590:
    (*(code *)*puVar4)(plVar13,puVar4[1]);
  }
  goto LAB_031571f8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03157664:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03157698;
    }
  }
LAB_0315767c:
  puVar4 = (undefined8 *)
           FUN_01ae9f78(plVar5,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_03157698:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


