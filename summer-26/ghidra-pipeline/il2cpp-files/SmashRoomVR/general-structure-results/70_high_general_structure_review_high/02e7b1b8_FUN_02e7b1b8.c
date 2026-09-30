/*
FUNCTION_NAME: FUN_02e7b1b8
ENTRY_POINT: 02e7b1b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_02e7b1b8(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  float fVar12;
  uint local_44;
  
  if ((DAT_03ff04f9 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(StringLiteral_5888);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_5889);
    DAT_03ff04f9 = 1;
  }
  puVar1 = StringLiteral_5888;
  if ((param_2 == 0) || (*(char *)(param_1 + 0x25) != '\0')) {
    return;
  }
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_5888) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_02e7b284;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_5888,2);
LAB_02e7b284:
    iVar2 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    plVar11 = *(long **)(param_1 + 0x18);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      lVar7 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_02e7b2ec;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar11,lVar7,3);
LAB_02e7b2ec:
      iVar3 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      fVar12 = (float)iVar2 * DAT_00b55290;
      if (DAT_03fed2d9 == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed2d9 = '\x01';
      }
      fVar12 = fVar12 * (float)iVar3;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = 0x80000000;
      if ((float)(int)fVar12 != INFINITY) {
        uVar4 = (int)fVar12;
      }
      if ((int)uVar4 < 0x65) {
        uVar4 = 100;
      }
      if (param_2 < uVar4) {
        uVar6 = FUN_01b47fd0(*(undefined8 *)
                              Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                            );
        *(undefined8 *)(param_1 + 0x40) = uVar6;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x40),uVar6);
        return;
      }
      uVar4 = FUN_02e7b488(param_2,*(undefined4 *)(param_1 + 0x20));
      local_44 = uVar4;
      uVar6 = thunk_FUN_01afa70c(*(undefined8 *)
                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                 ,&local_44);
      uVar6 = FUN_02ede300(*(undefined8 *)StringLiteral_5889,uVar6,0);
      FUN_02e7aa28(3,0,uVar6);
      plVar11 = *(long **)(param_1 + 0x18);
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        lVar7 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
              goto LAB_02e7b45c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar11,lVar7,0xc);
LAB_02e7b45c:
        (*(code *)*puVar5)(plVar11,uVar4,puVar5[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


