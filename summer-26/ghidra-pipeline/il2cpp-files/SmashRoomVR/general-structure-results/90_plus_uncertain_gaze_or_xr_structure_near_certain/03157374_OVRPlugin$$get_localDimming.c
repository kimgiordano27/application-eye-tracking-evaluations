/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 03157374
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

void OVRPlugin__get_localDimming(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong in_x9;
  int *piVar7;
  int *in_x10;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar8;
  long *unaff_x23;
  long unaff_x24;
  undefined8 uVar9;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x03157374:
  if (!(bool)in_ZR) goto LAB_03157360;
LAB_03157378:
  puVar1 = (undefined8 *)FUN_01ae9f78(unaff_x23,param_3,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (unaff_x23 != (long *)0x0) {
        lVar5 = *unaff_x23;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03157590;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_01ae9f78(unaff_x23,
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0
                             );
LAB_03157590:
        (*(code *)*puVar1)(unaff_x23,puVar1[1]);
      }
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar5 = *in_stack_00000008;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03157254;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ae9f78(in_stack_00000008,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157254:
      uVar2 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
      if ((uVar2 & 1) == 0) {
        if (in_stack_00000008 == (long *)0x0) {
          return;
        }
        lVar5 = *in_stack_00000008;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 == 0) goto LAB_0315767c;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        break;
      }
      lVar5 = *in_stack_00000008;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d803d8) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_031572bc;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
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
      lVar5 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d800c8) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0315732c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d800c8,0);
LAB_0315732c:
      unaff_x23 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    else {
      lVar5 = *unaff_x23;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d800d0) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_031573f8;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)PTR_DAT_03d800d0,0);
LAB_031573f8:
      uVar3 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar5 = FUN_01f25754(uVar9,*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = FUN_01ed712c(lVar5,*(undefined8 *)PTR_DAT_03d80468);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03154f64(lVar4,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(unaff_x24 + 0x10),uVar3);
      lVar5 = FUN_0391fab4(lVar5,0);
      uVar3 = FUN_0391c27c();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178(uVar3,uVar3);
      }
      FUN_039294c8(lVar5,uVar3,0);
      if (*(char *)(unaff_x27 + 600) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x27 + 600) = unaff_w19;
      }
      lVar4 = *(long *)(*unaff_x21 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                   *(undefined4 *)(lVar4 + 0x14),lVar5,0);
      if (*(char *)(unaff_x29 + 0x256) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x29 + 0x256) = unaff_w19;
      }
      puVar6 = *(undefined4 **)(*unaff_x22 + 0xb8);
      FUN_03929060(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
      if (*(char *)(unaff_x28 + 599) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x28 + 599) = unaff_w19;
      }
      puVar6 = *(undefined4 **)(*unaff_x21 + 0xb8);
      FUN_039282dc(*puVar6,puVar6[1],puVar6[2],lVar5,0);
    }
    param_1 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_3 = *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (in_x9 == 0) goto LAB_03157378;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03157360:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x03157374;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
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


