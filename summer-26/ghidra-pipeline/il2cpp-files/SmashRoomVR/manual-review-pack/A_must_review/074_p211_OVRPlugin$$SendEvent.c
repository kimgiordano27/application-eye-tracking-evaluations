/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 03157618
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;telemetry_or_network_hits_3;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03157830) */
/* WARNING: Removing unreachable block (ram,0x03157738) */

void OVRPlugin__SendEvent(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w25;
  undefined8 uVar9;
  long lVar10;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
  if (unaff_w25 == 1) {
    plVar4 = (long *)__cxa_begin_catch(param_1);
    lVar10 = *plVar4;
    __cxa_end_catch();
code_r0x03157538:
    if (unaff_x23 != (long *)0x0) {
      lVar6 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03157590;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ae9f78(unaff_x23,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03157590:
      (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    }
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab0160(lVar10);
    }
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar10 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
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
      lVar10 = *in_stack_00000008;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d803d8) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_031572bc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)PTR_DAT_03d803d8,0);
LAB_031572bc:
      lVar10 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar4 = *(long **)(lVar10 + 0x18);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d800c8) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0315732c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)PTR_DAT_03d800c8,0);
LAB_0315732c:
      unaff_x23 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar6 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03157394;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ae9f78(unaff_x23,
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__,0)
        ;
LAB_03157394:
        uVar7 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
        if ((uVar7 & 1) == 0) goto LAB_03157534;
        lVar6 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d800d0) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_031573f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x23,*(long *)PTR_DAT_03d800d0,0);
LAB_031573f8:
        uVar1 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar6 = FUN_01f25754(uVar9,*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar2 = FUN_01ed712c(lVar6,*(undefined8 *)PTR_DAT_03d80468);
        if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_03154f64(lVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                     *(undefined4 *)(lVar10 + 0x10),uVar1);
        lVar6 = FUN_0391fab4(lVar6,0);
        uVar1 = FUN_0391c27c();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178(uVar1,uVar1);
        }
        FUN_039294c8(lVar6,uVar1,0);
        if (*(char *)(unaff_x27 + 600) == '\0') {
          thunk_FUN_01ad9084();
          *(undefined1 *)(unaff_x27 + 600) = unaff_w19;
        }
        lVar2 = *(long *)(*unaff_x21 + 0xb8);
        FUN_039293f4(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                     *(undefined4 *)(lVar2 + 0x14),lVar6,0);
        if (*(char *)(unaff_x29 + 0x256) == '\0') {
          thunk_FUN_01ad9084();
          *(undefined1 *)(unaff_x29 + 0x256) = unaff_w19;
        }
        puVar5 = *(undefined4 **)(*unaff_x22 + 0xb8);
        FUN_03929060(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar6,0);
        if (*(char *)(unaff_x28 + 599) == '\0') {
          thunk_FUN_01ad9084();
          *(undefined1 *)(unaff_x28 + 599) = unaff_w19;
        }
        puVar5 = *(undefined4 **)(*unaff_x21 + 0xb8);
        FUN_039282dc(*puVar5,puVar5[1],puVar5[2],lVar6,0);
      } while( true );
    }
    lVar10 = 0;
    goto code_r0x03157640;
  }
  if (unaff_x23 != (long *)0x0) {
    lVar10 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x03157728;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
code_r0x03157728:
    (*(code *)*puVar3)();
  }
  if (unaff_w25 != 1) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar10 = *in_stack_00000008;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x03157818;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ae9f78(in_stack_00000008,
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
code_r0x03157818:
      (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bbda54(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar10 = *plVar4;
  __cxa_end_catch();
code_r0x03157640:
  if (in_stack_00000008 != (long *)0x0) {
    lVar6 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03157698;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ae9f78(in_stack_00000008,
                          *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03157698:
    (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(lVar10);
  }
  return;
LAB_03157534:
  lVar10 = 0;
  goto code_r0x03157538;
}


