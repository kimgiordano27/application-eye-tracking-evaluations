/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 074614ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  
  if ((bRam0000000009845883 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09222f00);
    FUN_03d2d2b0(PTR_DAT_091f9220);
    bRam0000000009845883 = 1;
  }
  puVar1 = PTR_DAT_09222f00;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09222f00) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_0746158c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(param_2,*(long *)PTR_DAT_09222f00,4);
LAB_0746158c:
    lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        bVar2 = true;
      }
      else {
        bVar2 = *(long *)(lVar4 + 0x18) == 0;
      }
      lVar5 = *param_2;
      lVar4 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_07461610;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(param_2,lVar4,4);
LAB_07461610:
      lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if (bVar2) {
        if (*(int *)(*(long *)PTR_DAT_091f9220 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_08a5bcd8(0);
      }
      else {
        lVar6 = *param_2;
        lVar5 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_0746169c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(param_2,lVar5,3);
LAB_0746169c:
        (*(code *)*puVar3)(param_2,puVar3[1]);
      }
      in_stack_00000028 = uStack0000000000000008;
      in_stack_00000020 = in_stack_00000000;
      uStack0000000000000034 = uStack0000000000000010._4_4_;
      in_stack_00000038 = uStack0000000000000010._8_4_;
      uStack000000000000002c = uStack000000000000000c;
      in_stack_00000030 = uStack0000000000000010;
      if (lVar4 != 0) {
        FUN_07468330(lVar4,&stack0x00000020);
        *(undefined8 *)((long)param_1 + 0x14) = uStack0000000000000014;
        *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
        param_1[1] = _uStack0000000000000008;
        *param_1 = in_stack_00000000;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


