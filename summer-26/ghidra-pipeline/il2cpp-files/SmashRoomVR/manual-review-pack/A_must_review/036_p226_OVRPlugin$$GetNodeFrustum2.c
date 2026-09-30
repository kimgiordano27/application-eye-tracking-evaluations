/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 03157034
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_20;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x031575a0) */
/* WARNING: Removing unreachable block (ram,0x03157758) */

void OVRPlugin__GetNodeFrustum2(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x23;
  long *plVar13;
  
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar6);
    lVar6 = *unaff_x23;
  }
  puVar1 = PTR_DAT_03d80390;
  lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
      lVar6 = *unaff_x23;
    }
    uVar11 = **(undefined8 **)(lVar6 + 0xb8);
    lVar10 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d803a8);
    FUN_028b1f60(lVar10,uVar11,*(undefined8 *)PTR_DAT_03d80470,0);
    plVar3 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *plVar3 = lVar10;
    thunk_FUN_01b4f09c(plVar3,lVar10);
  }
  uVar11 = FUN_01eb52d4(param_1,lVar10,*(undefined8 *)puVar1);
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar6);
    lVar6 = *unaff_x23;
  }
  puVar1 = PTR_DAT_03d80398;
  lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (lVar10 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
      lVar6 = *unaff_x23;
    }
    uVar12 = **(undefined8 **)(lVar6 + 0xb8);
    lVar10 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d803a0);
    FUN_028b7004(lVar10,uVar12,*(undefined8 *)PTR_DAT_03d80478,0);
    plVar3 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
    *plVar3 = lVar10;
    thunk_FUN_01b4f09c(plVar3,lVar10);
  }
  plVar3 = (long *)FUN_01ebc520(uVar11,lVar10,*(undefined8 *)puVar1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d803c0) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_031571c8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ae9f78(plVar3,*(long *)PTR_DAT_03d803c0,0);
LAB_031571c8:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
LAB_031571f8:
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03157254;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ae9f78(plVar3,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0
                       );
LAB_03157254:
  uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar8 & 1) != 0) {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d803d8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031572bc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar3,*(long *)PTR_DAT_03d803d8,0);
LAB_031572bc:
    lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar13 = *(long **)(lVar6 + 0x18);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar10 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d800c8) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0315732c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)PTR_DAT_03d800c8,0);
LAB_0315732c:
    plVar13 = (long *)(*(code *)*puVar4)(plVar13,puVar4[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar10 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03157394;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ae9f78(plVar13,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157394:
      uVar8 = (*(code *)*puVar4)(plVar13,puVar4[1]);
      if ((uVar8 & 1) == 0) goto LAB_03157534;
      lVar10 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d800d0) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_031573f8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)PTR_DAT_03d800d0,0);
LAB_031573f8:
      uVar11 = (*(code *)*puVar4)(plVar13,puVar4[1]);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar10 = FUN_01f25754(uVar12,*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar5 = FUN_01ed712c(lVar10,*(undefined8 *)PTR_DAT_03d80468);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03154f64(lVar5,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar6 + 0x10),uVar11);
      lVar10 = FUN_0391fab4(lVar10,0);
      uVar11 = FUN_0391c27c();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178(uVar11,uVar11);
      }
      FUN_039294c8(lVar10,uVar11,0);
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed258 = '\x01';
      }
      lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                   *(undefined4 *)(lVar5 + 0x14),lVar10,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(puVar1);
        DAT_03fed256 = '\x01';
      }
      puVar7 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_03929060(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar10,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed257 = '\x01';
      }
      puVar7 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      FUN_039282dc(*puVar7,puVar7[1],puVar7[2],lVar10,0);
    } while( true );
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 == 0) goto LAB_0315767c;
  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
  goto LAB_03157664;
LAB_03157534:
  if (plVar13 != (long *)0x0) {
    lVar6 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03157590;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ae9f78(plVar13,*(long *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03157590:
    (*(code *)*puVar4)(plVar13,puVar4[1]);
  }
  goto LAB_031571f8;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03157664:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03157698;
    }
  }
LAB_0315767c:
  puVar4 = (undefined8 *)
           FUN_01ae9f78(plVar3,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_03157698:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


