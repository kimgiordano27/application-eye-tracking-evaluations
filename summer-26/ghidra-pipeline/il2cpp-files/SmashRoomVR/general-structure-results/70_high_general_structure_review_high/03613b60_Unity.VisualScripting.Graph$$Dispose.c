/*
FUNCTION_NAME: Unity.VisualScripting.Graph$$Dispose
ENTRY_POINT: 03613b60
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unity_VisualScripting_Graph__Dispose(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((DAT_03ff718e & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d99fa8);
    DAT_03ff718e = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar7 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  uVar16 = *puVar7;
  uVar15 = puVar7[1];
  uVar14 = puVar7[2];
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  puVar6 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  if (lVar9 != 0) {
    puVar7 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    lVar8 = *(long *)(lVar9 + 0x10);
    uVar13 = *puVar7;
    uVar12 = puVar7[1];
    uVar11 = puVar7[2];
    uVar10 = puVar7[3];
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        uVar4 = DAT_00b92018;
        uVar3 = _UNK_00b57398;
        uVar2 = _DAT_00b57390;
        lVar8 = lVar8 + (long)(int)uVar1 * 0x34;
        *(undefined4 *)(lVar8 + 0x20) = uVar16;
        *(undefined4 *)(lVar8 + 0x24) = uVar15;
        *(undefined4 *)(lVar8 + 0x28) = uVar14;
        *(undefined4 *)(lVar8 + 0x44) = uVar13;
        *(undefined4 *)(lVar8 + 0x48) = uVar12;
        *(undefined8 *)(lVar8 + 0x34) = uVar3;
        *(undefined8 *)(lVar8 + 0x2c) = uVar2;
        *(undefined8 *)(lVar8 + 0x3c) = uVar4;
        *(undefined4 *)(lVar8 + 0x4c) = uVar11;
        *(undefined4 *)(lVar8 + 0x50) = uVar10;
        lVar9 = *(long *)(param_1 + 0x20);
      }
      else {
        FUN_02aefbf4(lVar9);
        lVar9 = *(long *)(param_1 + 0x20);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
      }
      if (lVar9 != 0) {
        puVar7 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
        lVar8 = *(long *)(lVar9 + 0x10);
        uVar10 = *puVar7;
        uVar16 = puVar7[1];
        uVar15 = puVar7[2];
        uVar14 = puVar7[3];
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            uVar5 = _UNK_00b56748;
            uVar4 = _DAT_00b56740;
            uVar3 = _UNK_00b56588;
            uVar2 = _DAT_00b56580;
            lVar8 = lVar8 + (long)(int)uVar1 * 0x34;
            *(undefined4 *)(lVar8 + 0x40) = 0xc0000000;
            *(undefined4 *)(lVar8 + 0x44) = uVar10;
            *(undefined4 *)(lVar8 + 0x48) = uVar16;
            *(undefined8 *)(lVar8 + 0x28) = uVar3;
            *(undefined8 *)(lVar8 + 0x20) = uVar2;
            *(undefined8 *)(lVar8 + 0x38) = uVar5;
            *(undefined8 *)(lVar8 + 0x30) = uVar4;
            *(undefined4 *)(lVar8 + 0x4c) = uVar15;
            *(undefined4 *)(lVar8 + 0x50) = uVar14;
          }
          else {
            FUN_02aefbf4(lVar9);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


