/*
FUNCTION_NAME: FUN_061edf50
ENTRY_POINT: 061edf50
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_15;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_061edf50(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  long local_68;
  undefined *puVar15;
  
  puVar4 = Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_Quaternion>_TypeInfo;
  puVar15 = Unity_VisualScripting_StaticFunctionInvoker<Object,_Object,_bool>_TypeInfo;
  if ((DAT_076dde76 & 1) == 0) {
    thunk_FUN_032e1da0(System_Threading_Tasks_TaskCompletionSource<string>_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_StaticFunctionInvoker<Rect,_Rect,_bool>_TypeInfo);
    thunk_FUN_032e1da0(
                      Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Vector3,_Vector3>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_Quaternion>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_TypeInfo);
    thunk_FUN_032e1da0(System_Threading_Tasks_Task<bool>_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_StaticFunctionInvoker<Object,_Object,_bool>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Threading_Tasks_TaskCompletionSource<IReadOnlyList<OVRSpatialAnchor>>_TypeInfo
                      );
    thunk_FUN_032e1da0(Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>_TypeInfo);
    DAT_076dde76 = 1;
  }
  local_68 = 0;
  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar15);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(lVar8,*(undefined8 *)puVar4);
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    uVar13 = *(undefined8 *)(lVar16 + 0x28);
    lVar16 = *(long *)(lVar16 + 0x30);
    FUN_061ed934(param_1,0x6e);
    FUN_061ed934(param_1,0x28);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_061ee26c;
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) != 0x29) {
      uVar18 = FUN_061ec89c(param_1,param_2);
      puVar15 = Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Vector3,_Vector3>_TypeInfo;
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar17 = *(long *)
                  Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Vector3,_Vector3>_TypeInfo
        ;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        while (lVar9 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar18;
            thunk_FUN_0333a630();
          }
          else {
            FUN_041e2c78(lVar8,uVar18,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0x10) == 0) break;
          if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) == 0x29) goto LAB_061ee060;
          FUN_061ed934(param_1,0x2c);
          uVar18 = FUN_061ec89c(param_1,param_2);
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar17 = *(long *)puVar15;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        }
      }
      goto LAB_061ee26c;
    }
LAB_061ee060:
    FUN_061ed934(param_1,0x29);
    puVar4 = Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>_TypeInfo;
    puVar15 = Unity_VisualScripting_StaticFunctionInvoker<Rect,_Rect,_bool>_TypeInfo;
    if (lVar16 == 0) goto LAB_061ee26c;
    if (*(int *)(lVar16 + 0x10) != 0) {
LAB_061ee174:
      uVar18 = thunk_FUN_032a56a0(*(undefined8 *)puVar15);
      FUN_061ec120(uVar18,lVar16,uVar13,lVar8);
      return uVar18;
    }
    lVar9 = *(long *)Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>_TypeInfo;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar9 = *(long *)puVar4;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x48);
    if (lVar9 == 0) goto LAB_061ee26c;
    uVar10 = FUN_050fa644(lVar9,uVar13,&local_68,
                          *(undefined8 *)
                           System_Threading_Tasks_TaskCompletionSource<string>_TypeInfo);
    puVar5 = System_Threading_Tasks_Task<bool>_TypeInfo;
    puVar4 = System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_TypeInfo;
    if ((uVar10 & 1) == 0) goto LAB_061ee174;
    if ((lVar8 == 0) || (local_68 == 0)) goto LAB_061ee26c;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if ((int)uVar1 < *(int *)(local_68 + 0x14)) {
LAB_061ee450:
      lVar8 = *(long *)(param_1 + 0x10);
      FUN_02d9d3f0(lVar8);
      uVar18 = *(undefined8 *)(lVar8 + 0x10);
      puVar15 = System_Threading_Tasks_Task<int>_TypeInfo;
LAB_061ee484:
      uVar14 = thunk_FUN_032e1da0(puVar15);
      uVar13 = FUN_0624d6a8(uVar14,uVar13,uVar18,0);
      uVar18 = thunk_FUN_032e1da0(System_Threading_Tasks_Task<VoidTaskResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar13,uVar18);
    }
    if (*(int *)(local_68 + 0x10) == 0xd) {
      if (0 < (int)uVar1) {
        uVar19 = 0;
        do {
          plVar11 = (long *)FUN_041e29a8(lVar8,uVar19,*(undefined8 *)puVar4);
          if (plVar11 == (long *)0x0) goto LAB_061ee26c;
          iVar6 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          plVar12 = plVar11;
          if (iVar6 != 1) {
            plVar12 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar15);
            FUN_061ec1e8(plVar12,7,plVar11);
          }
          FUN_041e29fc(lVar8,uVar19,plVar12,*(undefined8 *)puVar5);
          uVar19 = uVar19 + 1;
        } while (uVar1 != uVar19);
      }
    }
    else {
      if (*(int *)(local_68 + 0x18) < (int)uVar1) goto LAB_061ee450;
      if (*(long *)(local_68 + 0x20) == 0) goto LAB_061ee26c;
      uVar19 = *(uint *)(*(long *)(local_68 + 0x20) + 0x18);
      if ((int)uVar1 <= (int)uVar19) {
        uVar19 = uVar1;
      }
      if (0 < (int)uVar19) {
        uVar10 = 0;
LAB_061ee2b8:
        plVar11 = (long *)FUN_041e29a8(lVar8,uVar10 & 0xffffffff,*(undefined8 *)puVar4);
        if ((local_68 == 0) || (lVar16 = *(long *)(local_68 + 0x20), lVar16 == 0))
        goto LAB_061ee26c;
        if (*(uint *)(lVar16 + 0x18) <= uVar10) {
LAB_061ee44c:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        iVar6 = *(int *)(lVar16 + uVar10 * 4 + 0x20);
        if (iVar6 == 5) goto LAB_061ee418;
        if (plVar11 == (long *)0x0) goto LAB_061ee26c;
        iVar7 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        if (iVar6 == iVar7) goto LAB_061ee418;
        if ((local_68 == 0) || (lVar16 = *(long *)(local_68 + 0x20), lVar16 == 0))
        goto LAB_061ee26c;
        if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_061ee44c;
        plVar12 = plVar11;
        switch(*(undefined4 *)(lVar16 + uVar10 * 4 + 0x20)) {
        case 0:
          plVar12 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar15);
          uVar18 = 9;
          break;
        case 1:
          plVar12 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar15);
          uVar18 = 7;
          break;
        case 2:
          plVar12 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar15);
          uVar18 = 8;
          break;
        case 3:
          lVar16 = *plVar11;
          bVar3 = *(byte *)(*(long *)
                             System_Threading_Tasks_TaskCompletionSource<IReadOnlyList<OVRSpatialAnchor>>_TypeInfo
                           + 0x130);
          if ((bVar3 <= *(byte *)(lVar16 + 0x130)) &&
             (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) ==
              *(long *)
               System_Threading_Tasks_TaskCompletionSource<IReadOnlyList<OVRSpatialAnchor>>_TypeInfo
             )) goto switchD_061ee34c_default;
          bVar3 = *(byte *)(*(long *)puVar15 + 0x130);
          if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
             ((*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar15 ||
              (iVar6 = (**(code **)(lVar16 + 0x188))(plVar11,*(undefined8 *)(lVar16 + 400)),
              iVar6 != 5)))) {
            lVar8 = *(long *)(param_1 + 0x10);
            FUN_02d9d3f0(lVar8);
            uVar18 = *(undefined8 *)(lVar8 + 0x10);
            puVar15 = System_Threading_Tasks_Task<Task>_TypeInfo;
            goto LAB_061ee484;
          }
        default:
          goto switchD_061ee34c_default;
        }
        FUN_061ec1e8(plVar12,uVar18,plVar11);
switchD_061ee34c_default:
        FUN_041e29fc(lVar8,uVar10 & 0xffffffff,plVar12,*(undefined8 *)puVar5);
LAB_061ee418:
        uVar10 = uVar10 + 1;
        if (uVar19 == uVar10) goto LAB_061ee424;
        goto LAB_061ee2b8;
      }
    }
LAB_061ee424:
    if (local_68 != 0) {
      uVar2 = *(undefined4 *)(local_68 + 0x10);
      uVar13 = thunk_FUN_032a56a0(*(undefined8 *)puVar15);
      FUN_061ec080(uVar13,uVar2,lVar8);
      return uVar13;
    }
  }
LAB_061ee26c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


