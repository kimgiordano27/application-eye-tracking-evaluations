/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 031571e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_15;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031575a0) */
/* WARNING: Removing unreachable block (ram,0x03157758) */

void OVRPlugin__get_EyeTextureArrayEnabled(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *in_stack_00000008;
  
  plVar9 = *(long **)(unaff_x22 + 0xd00);
LAB_031571f8:
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar4 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03157254;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000008,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157254:
  uVar7 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  if ((uVar7 & 1) != 0) {
    lVar4 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d803d8) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031572bc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)PTR_DAT_03d803d8,0);
LAB_031572bc:
    lVar4 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar10 = *(long **)(lVar4 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d800c8) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0315732c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03d800c8,0);
LAB_0315732c:
    plVar10 = (long *)(*(code *)*puVar1)(plVar10,puVar1[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03157394;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ae9f78(plVar10,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157394:
      uVar7 = (*(code *)*puVar1)(plVar10,puVar1[1]);
      if ((uVar7 & 1) == 0) goto LAB_03157534;
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d800d0) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_031573f8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03d800d0,0);
LAB_031573f8:
      uVar2 = (*(code *)*puVar1)(plVar10,puVar1[1]);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar5 = FUN_01f25754(uVar11,*(undefined8 *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar3 = FUN_01ed712c(lVar5,*(undefined8 *)PTR_DAT_03d80468);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03154f64(lVar3,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar4 + 0x10),uVar2);
      lVar5 = FUN_0391fab4(lVar5,0);
      uVar2 = FUN_0391c27c();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178(uVar2,uVar2);
      }
      FUN_039294c8(lVar5,uVar2,0);
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084();
        DAT_03fed258 = '\x01';
      }
      lVar3 = *(long *)(*unaff_x21 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                   *(undefined4 *)(lVar3 + 0x14),lVar5,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(plVar9);
        DAT_03fed256 = '\x01';
      }
      puVar6 = *(undefined4 **)(*plVar9 + 0xb8);
      FUN_03929060(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084();
        DAT_03fed257 = '\x01';
      }
      puVar6 = *(undefined4 **)(*unaff_x21 + 0xb8);
      FUN_039282dc(*puVar6,puVar6[1],puVar6[2],lVar5,0);
    } while( true );
  }
  if (in_stack_00000008 == (long *)0x0) {
    return;
  }
  lVar4 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 == 0) goto LAB_0315767c;
  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
  goto LAB_03157664;
LAB_03157534:
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03157590;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ae9f78(plVar10,*(long *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03157590:
    (*(code *)*puVar1)(plVar10,puVar1[1]);
  }
  goto LAB_031571f8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03157664:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03157698;
    }
  }
LAB_0315767c:
  puVar1 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000008,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03157698:
  (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  return;
}


