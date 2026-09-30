/*
FUNCTION_NAME: FUN_0327c838
ENTRY_POINT: 0327c838
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_0327c838(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_03d851d0;
  puVar2 = PTR_DAT_03d84028;
  puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  if ((DAT_03ff568f & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d835f8);
    thunk_FUN_01ad9084(PTR_DAT_03d84028);
    thunk_FUN_01ad9084(Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d851d0);
    thunk_FUN_01ad9084(PTR_DAT_03d851d8);
    thunk_FUN_01ad9084(PTR_DAT_03d851e0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_8__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff568f = 1;
  }
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_0251fb38(uVar4,param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03235894(uVar4,0);
  if (DAT_03fed2d7 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    DAT_03fed2d7 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) != 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed2d7 == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
      DAT_03fed2d7 = '\x01';
    }
    puVar3 = PTR_DAT_03d851e0;
    puVar2 = Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__;
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_02fd7524(uVar4,0,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_0327cabc;
    FUN_03216e88(lVar5,uVar4,0);
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  plVar7 = (long *)(param_1 + 0x80);
  lVar5 = *plVar7;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(lVar5,0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar5 = FUN_01f25510(*(undefined8 *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_8__
                        );
    *plVar7 = lVar5;
    thunk_FUN_01b4f09c(plVar7,lVar5);
  }
  lVar5 = *plVar7;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(lVar5,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar5 = *plVar7;
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d835f8);
  FUN_02518558(uVar4,0,*(undefined8 *)PTR_DAT_03d851d8,0);
  if (lVar5 != 0) {
    FUN_032119ec(lVar5,uVar4,0);
    return;
  }
LAB_0327cabc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


