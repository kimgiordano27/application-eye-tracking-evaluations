/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_69
ENTRY_POINT: 0366877c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_3
*/


void Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_69
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4,
               undefined8 param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((DAT_03ff73b6 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9a808);
    thunk_FUN_01ad9084(PTR_DAT_03d9a970);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9b528);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_9__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__);
    DAT_03ff73b6 = 1;
  }
  fVar10 = (float)FUN_03627684(param_2,param_3,0);
  if ((fVar10 < 1.4013e-45) || (param_4 < 1.4013e-45)) {
    if (param_6 != 0) {
      FUN_03633618(param_6,0);
      uVar5 = FUN_0362f0b0(param_6,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar7 = FUN_0391f968(uVar5,0,0);
      if ((uVar7 & 1) != 0) {
        lVar2 = FUN_0362f0b0(param_6,0);
        if (lVar2 == 0) goto LAB_03668a70;
        FUN_03904d9c(lVar2,0);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
  }
  else {
    lVar2 = FUN_01b47fd0(*(undefined8 *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_9__
                         ,4);
    lVar3 = FUN_01b47fd0(*(undefined8 *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__,4)
    ;
    lVar4 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d9a808,1);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 != 0) {
        *(float *)(lVar2 + 0x20) = -(fVar10 * 0.5);
        *(float *)(lVar2 + 0x24) = -(param_4 * 0.5);
        if (uVar1 != 1) {
          *(float *)(lVar2 + 0x28) = fVar10 * 0.5;
          *(float *)(lVar2 + 0x2c) = -(param_4 * 0.5);
          if (2 < uVar1) {
            *(float *)(lVar2 + 0x30) = -(fVar10 * 0.5);
            *(float *)(lVar2 + 0x34) = param_4 * 0.5;
            if (uVar1 != 3) {
              *(float *)(lVar2 + 0x38) = fVar10 * 0.5;
              *(float *)(lVar2 + 0x3c) = param_4 * 0.5;
              uVar5 = FUN_01b47fd0(*(undefined8 *)
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                                   ,6);
              FUN_02f80f34(uVar5,*(undefined8 *)PTR_DAT_03d9b528,0);
              uVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
              FUN_0361c47c(uVar6,uVar5,0);
              if (lVar4 != 0) {
                if (*(int *)(lVar4 + 0x18) == 0) goto LAB_03668a6c;
                *(undefined8 *)(lVar4 + 0x20) = uVar6;
                thunk_FUN_01b4f09c((undefined8 *)(lVar4 + 0x20),uVar6);
                if (lVar3 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (0 < (long)((ulong)uVar1 << 0x20)) {
                    uVar7 = 0;
                    puVar8 = (undefined4 *)(lVar2 + 0x24);
                    puVar9 = (undefined4 *)(lVar3 + 0x28);
                    do {
                      if ((*(uint *)(lVar2 + 0x18) <= uVar7) || (uVar1 <= uVar7)) goto LAB_03668a6c;
                      uVar11 = puVar8[-1];
                      uVar12 = *puVar8;
                      uVar7 = uVar7 + 1;
                      puVar9[-1] = 0;
                      puVar8 = puVar8 + 2;
                      puVar9[-2] = uVar12;
                      *puVar9 = uVar11;
                      puVar9 = puVar9 + 3;
                    } while ((long)uVar7 < (long)(int)uVar1);
                  }
                  if (param_6 != 0) {
                    FUN_03635d08(param_6,lVar3,lVar4,0);
                    lVar2 = FUN_0362f0b0(param_6,0);
                    if (lVar2 != 0) {
                      UnityEngine_UIElements_UIR_GradientRemap___ctor(&stack0x00000008,lVar2,0);
                      param_1[2] = in_stack_00000018;
                      param_1[1] = in_stack_00000010;
                      *param_1 = in_stack_00000008;
                      return;
                    }
                  }
                }
              }
              goto LAB_03668a70;
            }
          }
        }
      }
LAB_03668a6c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  }
LAB_03668a70:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


