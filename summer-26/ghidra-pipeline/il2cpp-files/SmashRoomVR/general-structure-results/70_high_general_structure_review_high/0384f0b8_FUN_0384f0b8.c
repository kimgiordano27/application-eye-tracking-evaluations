/*
FUNCTION_NAME: FUN_0384f0b8
ENTRY_POINT: 0384f0b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


float FUN_0384f0b8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  
  if ((DAT_03ff85e8 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da7240);
    thunk_FUN_01ad9084(PTR_DAT_03da7218);
    thunk_FUN_01ad9084(PTR_DAT_03da7220);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da6778);
    DAT_03ff85e8 = 1;
  }
  local_68._8_8_ = 0;
  local_58 = 0;
  local_68._0_8_ = 0;
  auVar13 = ZEXT816(0);
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar9 = *(int *)(*(long *)(param_1 + 0x58) + 0x18);
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    puVar2 = PTR_DAT_03da7240;
    fVar12 = **(float **)
               (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8)
    ;
    if (iVar9 == 0) {
      return fVar12;
    }
    lVar5 = *(long *)PTR_DAT_03da7240;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_03da7220;
    puVar3 = PTR_DAT_03da6778;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    auVar13._8_8_ = local_68._8_8_;
    auVar13._0_8_ = local_68._0_8_;
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 0x50)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar6 = *(long *)(param_1 + 0x58);
      auVar13 = local_68;
      if (lVar6 != 0) {
        uVar10 = *(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x50) * 8 + 0x20);
        iVar9 = 0;
        do {
          if (*(int *)(lVar6 + 0x18) <= iVar9) {
            return fVar12;
          }
          plVar7 = (long *)FUN_02b59714(lVar6,iVar9,*(undefined8 *)puVar4);
          if (plVar7 == (long *)0x0) {
LAB_0384f208:
            plVar7 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
            if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_0384f208;
            if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
              plVar7 = (long *)0x0;
            }
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar8 = FUN_0391f968(plVar7,0,0);
          if ((uVar8 & 1) != 0) {
            auVar13 = local_68;
            if (plVar7 == (long *)0x0) break;
            if (*(char *)((long)plVar7 + 0x25) != '\0') {
              auVar13 = FUN_03803cf4(plVar7,0);
              local_68 = auVar13;
              uVar8 = FUN_03b398dc(local_68,uVar10,&local_58,0);
              if ((uVar8 & 1) != 0) {
                fVar11 = (float)UnityEngine_Touch__get_position
                                          (local_58 & 0xffffffff,local_58._4_4_,param_1);
                fVar12 = fVar12 + fVar11;
              }
            }
          }
          lVar6 = *(long *)(param_1 + 0x58);
          iVar9 = iVar9 + 1;
          auVar13 = local_68;
        } while (lVar6 != 0);
      }
    }
  }
  local_68 = auVar13;
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


