/*
FUNCTION_NAME: OVRPlugin$$GetDominantHand
ENTRY_POINT: 0315754c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03157758) */

void OVRPlugin__GetDominantHand(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong in_x9;
  int *piVar8;
  long *in_x10;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar9;
  long *unaff_x23;
  undefined8 uVar10;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x0315754c:
  if (in_x9 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03157590;
      }
      in_x9 = in_x9 - 1;
      piVar8 = piVar8 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x23,*in_x10,0);
LAB_03157590:
  (*(code *)*puVar3)(unaff_x23,puVar3[1]);
LAB_0315759c:
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(unaff_x26);
  }
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
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03157254;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000008,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157254:
  uVar7 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  if ((uVar7 & 1) != 0) {
    lVar4 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d803d8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031572bc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)PTR_DAT_03d803d8,0);
LAB_031572bc:
    lVar4 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar9 = *(long **)(lVar4 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d800c8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0315732c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)PTR_DAT_03d800c8,0);
LAB_0315732c:
    unaff_x23 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar5 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03157394;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ae9f78(unaff_x23,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0);
LAB_03157394:
      uVar7 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      if ((uVar7 & 1) == 0) goto LAB_03157534;
      lVar5 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d800d0) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_031573f8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)PTR_DAT_03d800d0,0);
LAB_031573f8:
      uVar1 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar5 = FUN_01f25754(uVar10,*(undefined8 *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar2 = FUN_01ed712c(lVar5,*(undefined8 *)PTR_DAT_03d80468);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03154f64(lVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar4 + 0x10),uVar1);
      lVar5 = FUN_0391fab4(lVar5,0);
      uVar1 = FUN_0391c27c();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178(uVar1,uVar1);
      }
      FUN_039294c8(lVar5,uVar1,0);
      if (*(char *)(unaff_x27 + 600) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x27 + 600) = unaff_w19;
      }
      lVar2 = *(long *)(*unaff_x21 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                   *(undefined4 *)(lVar2 + 0x14),lVar5,0);
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
  unaff_x26 = 0;
  if (unaff_x23 != (long *)0x0) goto code_r0x0315753c;
  goto LAB_0315759c;
code_r0x0315753c:
  param_1 = *unaff_x23;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  in_x10 = (long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
  goto code_r0x0315754c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03157664:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03157698;
    }
  }
LAB_0315767c:
  puVar3 = (undefined8 *)
           FUN_01ae9f78(in_stack_00000008,
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03157698:
  (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  return;
}


