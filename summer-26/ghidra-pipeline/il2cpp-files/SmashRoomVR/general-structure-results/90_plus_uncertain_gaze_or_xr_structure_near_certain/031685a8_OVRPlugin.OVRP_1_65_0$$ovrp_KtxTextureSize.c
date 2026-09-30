/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize
ENTRY_POINT: 031685a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int in_w9;
  int *piVar5;
  long unaff_x19;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if (in_w9 == 3) {
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_03922f24(uVar6,0,0);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((uVar1 & 1) == 0) {
    if ((lVar3 == 0) || (*(long *)(lVar3 + 200) == 0)) goto LAB_03168830;
    uVar10 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f800000;
    if (*(char *)(*(long *)(lVar3 + 200) + 0xb0) == '\0') goto LAB_03168608;
  }
  else {
LAB_03168608:
    uVar13 = *(undefined4 *)(unaff_x19 + 0x54);
    uVar12 = *(undefined4 *)(unaff_x19 + 0x58);
    uVar11 = *(undefined4 *)(unaff_x19 + 0x5c);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x60);
  }
  plVar7 = *(long **)(unaff_x19 + 0x70);
  if (plVar7 == (long *)0x0) {
    if (lVar3 == 0) goto LAB_03168830;
    in_stack_00000060 = *(undefined8 *)(lVar3 + 0x168);
    in_stack_00000048 = *(undefined8 *)(lVar3 + 0x150);
    in_stack_00000040 = *(undefined8 *)(lVar3 + 0x148);
    in_stack_00000058 = *(undefined8 *)(lVar3 + 0x160);
    uVar6 = *(undefined8 *)(lVar3 + 0x158);
    in_stack_00000050 = uVar6;
    if (*(int *)(*(long *)PTR_DAT_03d80700 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03164e98(&stack0x00000040);
  }
  else {
    if (lVar3 == 0) goto LAB_03168830;
    in_stack_00000060 = *(undefined8 *)(lVar3 + 0x168);
    in_stack_00000048 = *(undefined8 *)(lVar3 + 0x150);
    in_stack_00000040 = *(undefined8 *)(lVar3 + 0x148);
    in_stack_00000058 = *(undefined8 *)(lVar3 + 0x160);
    uVar6 = *(undefined8 *)(lVar3 + 0x158);
                    /* catch() { ... } // from try @ 03168650 with catch @ 03168628
                       catch() { ... } // from try @ 03168680 with catch @ 03168628
                       catch() { ... } // from try @ 031686bc with catch @ 03168628 */
    in_stack_00000050 = uVar6;
    if (*(int *)(*(long *)PTR_DAT_03d80700 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03164e98(&stack0x00000040);
    lVar3 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d80838) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031686ec;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)PTR_DAT_03d80838,0);
LAB_031686ec:
    uVar9 = (*(code *)*puVar2)(uVar9,uVar6,param_4,plVar7,puVar2[1]);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_03165dd4(&stack0x00000020);
    FUN_03168834(uVar9,uVar6,param_4);
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x50) = uVar13;
      *(undefined4 *)(lVar3 + 0x54) = uVar12;
      *(undefined4 *)(lVar3 + 0x58) = uVar11;
      *(undefined4 *)(lVar3 + 0x5c) = uVar10;
      plVar7 = *(long **)(unaff_x19 + 0x48);
      lVar3 = *(long *)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        lVar4 = *plVar7;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_13348) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_031687cc;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_13348,0);
LAB_031687cc:
        uVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      }
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x78) = uVar8;
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_030d0278(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x68),0,0);
          FUN_03168ea4(uVar13,uVar12,uVar11,uVar10);
          return;
        }
      }
    }
  }
LAB_03168830:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


