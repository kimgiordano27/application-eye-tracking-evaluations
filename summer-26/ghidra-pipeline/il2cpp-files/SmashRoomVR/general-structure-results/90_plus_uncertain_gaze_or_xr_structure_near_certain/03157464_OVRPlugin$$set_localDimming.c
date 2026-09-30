/*
FUNCTION_NAME: OVRPlugin$$set_localDimming
ENTRY_POINT: 03157464
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03157758) */
/* WARNING: Removing unreachable block (ram,0x031575a0) */

void OVRPlugin__set_localDimming(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar8;
  long *unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x03157464:
  FUN_03154f64(param_1,param_2,*(undefined4 *)(unaff_x24 + 0x10),unaff_x25);
  lVar2 = FUN_0391fab4(unaff_x26,0);
  uVar3 = FUN_0391c27c();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178(uVar3,uVar3);
  }
  FUN_039294c8(lVar2,uVar3,0);
  if (*(char *)(unaff_x27 + 600) == '\0') {
    thunk_FUN_01ad9084();
    *(undefined1 *)(unaff_x27 + 600) = unaff_w19;
  }
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  FUN_039293f4(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
               *(undefined4 *)(lVar4 + 0x14),lVar2,0);
  if (*(char *)(unaff_x29 + 0x256) == '\0') {
    thunk_FUN_01ad9084();
    *(undefined1 *)(unaff_x29 + 0x256) = unaff_w19;
  }
  puVar5 = *(undefined4 **)(*unaff_x22 + 0xb8);
  FUN_03929060(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar2,0);
  if (*(char *)(unaff_x28 + 599) == '\0') {
    thunk_FUN_01ad9084();
    *(undefined1 *)(unaff_x28 + 599) = unaff_w19;
  }
  puVar5 = *(undefined4 **)(*unaff_x21 + 0xb8);
  FUN_039282dc(*puVar5,puVar5[1],puVar5[2],lVar2,0);
  do {
    lVar2 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03157394;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ae9f78(unaff_x23,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157394:
    uVar6 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    if ((uVar6 & 1) != 0) break;
    if (unaff_x23 != (long *)0x0) {
      lVar2 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03157590;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ae9f78(unaff_x23,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03157590:
      (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    }
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03157254;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ae9f78(in_stack_00000008,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157254:
    uVar6 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000008 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000008;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 == 0) goto LAB_0315767c;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_03157664;
    }
    lVar2 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d803d8) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_031572bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)PTR_DAT_03d803d8,0);
LAB_031572bc:
    unaff_x24 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar8 = *(long **)(unaff_x24 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d800c8) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0315732c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d800c8,0);
LAB_0315732c:
    unaff_x23 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  } while( true );
  lVar2 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d800d0) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_031573f8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)PTR_DAT_03d800d0,0);
LAB_031573f8:
  unaff_x25 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  unaff_x26 = FUN_01f25754(uVar3,*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  param_1 = FUN_01ed712c(unaff_x26,*(undefined8 *)PTR_DAT_03d80468);
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  param_2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28);
  goto code_r0x03157464;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_03157664:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
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


