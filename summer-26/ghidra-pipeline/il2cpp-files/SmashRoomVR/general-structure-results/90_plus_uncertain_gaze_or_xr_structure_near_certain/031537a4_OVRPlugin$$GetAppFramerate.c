/*
FUNCTION_NAME: OVRPlugin$$GetAppFramerate
ENTRY_POINT: 031537a4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03153ba4) */

void OVRPlugin__GetAppFramerate(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x21;
  long *unaff_x23;
  undefined8 uVar12;
  long unaff_x24;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80318);
    thunk_FUN_01ad9084(PTR_DAT_03d80320);
    thunk_FUN_01ad9084(PTR_DAT_03d80328);
    thunk_FUN_01ad9084(PTR_DAT_03d80330);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d80338);
    thunk_FUN_01ad9084(PTR_DAT_03d80340);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x24 + 0xff5) = 1;
  }
  puVar2 = PTR_DAT_03d80328;
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_03923840(uVar12);
  plVar4 = (long *)thunk_FUN_01afa9e0(uVar12,*(undefined8 *)puVar2);
  if ((*(long *)(param_2 + 0x58) != 0) &&
     (uVar5 = FUN_025bc7b8(*(long *)(param_2 + 0x58)), plVar4 != (long *)0x0)) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_031538d0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar2,1);
LAB_031538d0:
    (*(code *)*puVar6)(plVar4);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_2 + 0x58) != 0) && (FUN_025bc5c4(), unaff_x21 != (long *)0x0)) {
      lVar9 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d80330) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_03153968;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78();
LAB_03153968:
      plVar7 = (long *)(*(code *)*puVar6)();
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d80338) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_031539d0;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)PTR_DAT_03d80338,0);
LAB_031539d0:
        plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        puVar3 = PTR_DAT_03d80340;
        puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        do {
          lVar9 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03153a40;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,0);
LAB_03153a40:
          uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          if ((uVar5 & 1) == 0) goto LAB_03153b1c;
          lVar9 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03153a9c;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar3,0);
LAB_03153a9c:
          uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          lVar9 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03153af8;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar2,0);
LAB_03153af8:
          uVar8 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          FUN_03153778(param_2,uVar8,uVar12,0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_03153b1c:
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03153b78;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ae9f78(plVar7,*(long *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03153b78:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  return;
}


