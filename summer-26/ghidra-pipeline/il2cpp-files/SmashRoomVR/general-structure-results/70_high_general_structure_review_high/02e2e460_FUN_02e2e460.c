/*
FUNCTION_NAME: FUN_02e2e460
ENTRY_POINT: 02e2e460
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_02e2e460(undefined1 param_1 [16],ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  
  if ((DAT_03ff01d4 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4733);
    thunk_FUN_01ad9084(StringLiteral_4709);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03ff01d4 = 1;
  }
  iVar1 = *(int *)(param_4 + 0x10);
  plVar6 = *(long **)(param_4 + 0x20);
  if (iVar1 == 2) {
    fVar11 = *(float *)(param_4 + 0x34);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    fVar8 = (float)FUN_03925dbc(0);
    fVar11 = fVar11 + fVar8;
    *(float *)(param_4 + 0x34) = fVar11;
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_02e2e704;
    if ((*(char *)(*(long *)(param_4 + 0x28) + 0xb1) != '\0') ||
       (param_2 = (ulong)(uint)*(float *)(param_4 + 0x30), fVar11 <= *(float *)(param_4 + 0x30)))
    goto System_Runtime_Remoting_ConfigHandler__OnStartElement;
    if (plVar6 == (long *)0x0) goto LAB_02e2e704;
    (**(code **)(*plVar6 + 0x4d8))(plVar6,*(undefined8 *)(*plVar6 + 0x4e0));
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (plVar6 != (long *)0x0) {
        lVar7 = plVar6[0x35];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(lVar7,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        lVar7 = plVar6[0x5f];
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(lVar7,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        *(long *)(param_4 + 0x18) = plVar6[0x74];
        thunk_FUN_01b4f09c((long *)(param_4 + 0x18));
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
      goto LAB_02e2e704;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_4 + 0x34) = 0;
System_Runtime_Remoting_ConfigHandler__OnStartElement:
    if ((plVar6 == (long *)0x0) || (plVar6[0x4c] == 0)) goto LAB_02e2e704;
    uVar4 = FUN_025bc7b8(plVar6[0x4c],*(undefined8 *)(param_4 + 0x28),
                         *(undefined8 *)StringLiteral_4733);
    if ((uVar4 & 1) != 0) {
      if ((plVar6[0x35] == 0) || (lVar7 = FUN_0391c27c(plVar6[0x35],0), lVar7 == 0))
      goto LAB_02e2e704;
      uVar9 = FUN_03928d34(lVar7,0);
      if (plVar6[0x5f] == 0) goto LAB_02e2e704;
      uVar10 = FUN_0395c4f4(plVar6[0x5f],0);
      lVar7 = plVar6[0x60];
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_039583f0(uVar9,param_2,param_3,uVar10,lVar7,0xffffffff,1,0);
      if (0 < (int)uVar3) {
        uVar4 = 0;
        do {
          lVar7 = plVar6[0x60];
          if (lVar7 == 0) goto LAB_02e2e704;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          if (*(long *)(param_4 + 0x28) == 0) goto LAB_02e2e704;
          uVar5 = FUN_02de58fc(*(long *)(param_4 + 0x28),*(undefined8 *)(lVar7 + uVar4 * 8 + 0x20),0
                              );
          if ((uVar5 & 1) != 0) {
            *(long *)(param_4 + 0x18) = plVar6[0x74];
            thunk_FUN_01b4f09c((long *)(param_4 + 0x18));
            *(undefined4 *)(param_4 + 0x10) = 2;
            return 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
      }
    }
  }
  FUN_02e1d058(plVar6,*(undefined8 *)(param_4 + 0x28),0);
  if (plVar6[0x4c] != 0) {
    FUN_025bdac0(plVar6[0x4c],*(undefined8 *)(param_4 + 0x28),*(undefined8 *)StringLiteral_4709);
    return 0;
  }
LAB_02e2e704:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


