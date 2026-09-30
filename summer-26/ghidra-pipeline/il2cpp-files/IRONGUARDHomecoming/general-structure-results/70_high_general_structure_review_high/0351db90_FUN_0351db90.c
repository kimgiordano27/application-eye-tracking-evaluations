/*
FUNCTION_NAME: FUN_0351db90
ENTRY_POINT: 0351db90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4 FUN_0351db90(long param_1,int param_2,int param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined4 local_38;
  undefined4 local_34;
  undefined *puVar8;
  
  if ((DAT_04833031 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_107__);
    DAT_04833031 = 1;
  }
  if (param_2 < 0) {
    if ((param_4 & 1) == 0) {
      return 0xffffffff;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__);
    puVar8 = 
    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__;
  }
  else {
    if (param_3 == 0) {
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == (long *)0x0) goto LAB_0351dd5c;
      param_3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    }
    lVar10 = *(long *)(param_1 + 0x20);
    if (lVar10 == 0) {
LAB_0351dd5c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = (uint)*(undefined8 *)(lVar10 + 0x18);
    if (0 < (int)uVar11) {
      uVar12 = 0;
      do {
        if (uVar11 <= uVar12) goto LAB_0351dd60;
        lVar13 = (long)(int)uVar12;
        lVar14 = *(long *)(lVar10 + lVar13 * 8 + 0x20);
        if (lVar14 == 0) goto LAB_0351dd5c;
        if (param_3 == *(int *)(lVar14 + 0x10)) {
          if (param_2 < *(int *)(lVar14 + 0x24)) goto LAB_0351dcfc;
          if (param_2 <= *(int *)(lVar14 + 0x28)) goto LAB_0351dd54;
          if ((**(char **)(*(long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_107__ +
                          0xb8) != '\0') || (uVar2 = uVar12 - 1, (int)uVar2 < 0)) goto LAB_0351dcfc;
          iVar15 = param_2 - *(int *)(lVar14 + 0x28);
          goto LAB_0351dd24;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar11);
    }
    if ((param_4 & 1) == 0) {
      return 0xffffffff;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Mathematics_math_select_shuffle_component__);
    puVar8 = Method_Unity_Mathematics_math_select_shuffle_component__;
  }
  uVar7 = thunk_FUN_01efb3a4(puVar8);
  FUN_034f3578(uVar5,uVar6,uVar7,0);
  uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_44__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
LAB_0351dd24:
  if (uVar11 <= uVar2) {
LAB_0351dd60:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  uVar12 = uVar12 - 1;
  lVar16 = *(long *)(lVar10 + (ulong)uVar12 * 8 + 0x20);
  if (lVar16 == 0) goto LAB_0351dd5c;
  iVar1 = *(int *)(lVar16 + 0x28);
  iVar3 = iVar15 - iVar1;
  if (iVar3 == 0 || iVar15 < iVar1) {
LAB_0351dd54:
    return *(undefined4 *)(lVar14 + 0x20);
  }
  iVar15 = iVar3;
  if ((int)uVar12 < 1) {
LAB_0351dcfc:
    if ((param_4 & 1) == 0) {
      return 0xffffffff;
    }
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    FUN_01bc4c70();
    uVar5 = FUN_03532fe0(0);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    FUN_01bc50c0(uVar6);
    lVar10 = FUN_01bc5c58(uVar6,lVar13);
    FUN_01bc50c0();
    puVar8 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_34 = *(undefined4 *)(lVar10 + 0x24);
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar6 = thunk_FUN_01f113fc(uVar6,&local_34);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    FUN_01bc50c0(uVar7);
    lVar10 = FUN_01bc5c58(uVar7,lVar13);
    FUN_01bc50c0();
    local_38 = *(undefined4 *)(lVar10 + 0x28);
    uVar7 = thunk_FUN_01efb3a4(puVar8);
    uVar7 = thunk_FUN_01f113fc(uVar7,&local_38);
    uVar9 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar5 = FUN_0340f474(uVar5,uVar9,uVar6,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__);
    FUN_034f3578(uVar6,uVar7,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_44__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar5);
  }
  goto LAB_0351dd24;
}


