/*
FUNCTION_NAME: FUN_0381de14
ENTRY_POINT: 0381de14
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_0381de14(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_03ff8418 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da5fc8);
    DAT_03ff8418 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar4 = *(long *)(param_2 + 0x30);
  if (*(char *)(param_1 + 0x2d) == '\0') {
    uVar3 = FUN_0391c27c(param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar2 = FUN_03922f24(lVar4,uVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_0381dfb0;
    if (lVar4 == 0) goto LAB_0381e018;
LAB_0381defc:
    uVar5 = (ulong)*(uint *)(param_2 + 0x14);
    uVar6 = (ulong)*(uint *)(param_2 + 0x18);
    uVar2 = FUN_0392a520(*(undefined4 *)(param_2 + 0x10),lVar4,0);
    if (*(char *)(param_1 + 0x2e) != '\0') {
      fVar10 = *(float *)(param_1 + 0x30);
      fVar7 = (float)uVar2;
      fVar8 = (float)uVar5;
      fVar9 = (float)uVar6;
      fVar11 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
      if (fVar10 * fVar10 < fVar11) {
        if (DAT_03fed71c == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed71c = '\x01';
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar11 = SQRT(fVar11);
        uVar2 = (ulong)(uint)((fVar7 / fVar11) * fVar10);
        uVar5 = (ulong)(uint)((fVar8 / fVar11) * fVar10);
        uVar6 = (ulong)(uint)((fVar9 / fVar11) * fVar10);
      }
    }
    lVar4 = *(long *)(param_1 + 0x48);
  }
  else {
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_0391c27c(param_1,0);
      if (lVar4 == 0) goto LAB_0381e018;
      uVar2 = FUN_0392a890(lVar4,uVar3,0);
      if ((uVar2 & 1) != 0) goto LAB_0381defc;
    }
LAB_0381dfb0:
    if (*(char *)(param_1 + 0x2c) == '\0') {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x48);
    uVar2 = (ulong)*(uint *)(param_1 + 0x58);
    uVar5 = (ulong)*(uint *)(param_1 + 0x5c);
    uVar6 = (ulong)*(uint *)(param_1 + 0x60);
  }
  FUN_035a0b10(uVar2,uVar5,uVar6,0);
  if (lVar4 != 0) {
    FUN_021ef618(lVar4,*(undefined8 *)PTR_DAT_03da5fc8);
    return;
  }
LAB_0381e018:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


