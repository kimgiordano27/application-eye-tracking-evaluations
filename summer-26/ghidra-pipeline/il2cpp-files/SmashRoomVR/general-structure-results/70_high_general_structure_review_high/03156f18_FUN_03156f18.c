/*
FUNCTION_NAME: FUN_03156f18
ENTRY_POINT: 03156f18
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x031575a0) */
/* WARNING: Removing unreachable block (ram,0x03157758) */

void FUN_03156f18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  
  puVar1 = PTR_DAT_03d80460;
  if ((DAT_03ff2011 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80390);
    thunk_FUN_01ad9084(PTR_DAT_03d80398);
    thunk_FUN_01ad9084(PTR_DAT_03d803a0);
    thunk_FUN_01ad9084(PTR_DAT_03d803a8);
    thunk_FUN_01ad9084(PTR_DAT_03d80468);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d803c0);
    thunk_FUN_01ad9084(PTR_DAT_03d800c8);
    thunk_FUN_01ad9084(PTR_DAT_03d803d8);
    thunk_FUN_01ad9084(PTR_DAT_03d800d0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d80470);
    thunk_FUN_01ad9084(PTR_DAT_03d80478);
    thunk_FUN_01ad9084(PTR_DAT_03d80460);
    thunk_FUN_01ad9084(PTR_DAT_03d803f8);
    thunk_FUN_01ad9084(PTR_DAT_03d80400);
    DAT_03ff2011 = 1;
  }
  uVar3 = FUN_0315783c(param_1);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar7);
    lVar7 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_03d80390;
  lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar7);
      lVar7 = *(long *)puVar1;
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    lVar11 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d803a8);
    FUN_028b1f60(lVar11,uVar12,*(undefined8 *)PTR_DAT_03d80470,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar11;
    thunk_FUN_01b4f09c(plVar4,lVar11);
  }
  uVar3 = FUN_01eb52d4(uVar3,lVar11,*(undefined8 *)puVar2);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar7);
    lVar7 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_03d80398;
  lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar7);
      lVar7 = *(long *)puVar1;
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    lVar11 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d803a0);
    FUN_028b7004(lVar11,uVar12,*(undefined8 *)PTR_DAT_03d80478,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar4 = lVar11;
    thunk_FUN_01b4f09c(plVar4,lVar11);
  }
  plVar4 = (long *)FUN_01ebc520(uVar3,lVar11,*(undefined8 *)puVar2);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d803c0) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_031571c8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)PTR_DAT_03d803c0,0);
LAB_031571c8:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
LAB_031571f8:
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03157254;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ae9f78(plVar4,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0
                       );
LAB_03157254:
  uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((uVar9 & 1) != 0) {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d803d8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_031572bc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)PTR_DAT_03d803d8,0);
LAB_031572bc:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar13 = *(long **)(lVar7 + 0x18);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar11 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d800c8) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0315732c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)PTR_DAT_03d800c8,0);
LAB_0315732c:
    plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar11 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03157394;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ae9f78(plVar13,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157394:
      uVar9 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      if ((uVar9 & 1) == 0) goto LAB_03157534;
      lVar11 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03d800d0) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_031573f8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)PTR_DAT_03d800d0,0);
LAB_031573f8:
      uVar3 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar11 = FUN_01f25754(uVar12,*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = FUN_01ed712c(lVar11,*(undefined8 *)PTR_DAT_03d80468);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03154f64(lVar6,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
                   *(undefined4 *)(lVar7 + 0x10),uVar3);
      lVar11 = FUN_0391fab4(lVar11,0);
      uVar3 = FUN_0391c27c(param_1,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178(uVar3,uVar3);
      }
      FUN_039294c8(lVar11,uVar3,0);
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed258 = '\x01';
      }
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                   *(undefined4 *)(lVar6 + 0x14),lVar11,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(puVar1);
        DAT_03fed256 = '\x01';
      }
      puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_03929060(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar11,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed257 = '\x01';
      }
      puVar8 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      FUN_039282dc(*puVar8,puVar8[1],puVar8[2],lVar11,0);
    } while( true );
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 == 0) goto LAB_0315767c;
  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_03157664;
LAB_03157534:
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03157590;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ae9f78(plVar13,*(long *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03157590:
    (*(code *)*puVar5)(plVar13,puVar5[1]);
  }
  goto LAB_031571f8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03157664:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03157698;
    }
  }
LAB_0315767c:
  puVar5 = (undefined8 *)
           FUN_01ae9f78(plVar4,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_03157698:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


