/*
FUNCTION_NAME: thunk_FUN_02e506b8
ENTRY_POINT: 02e509ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void thunk_FUN_02e506b8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff0323 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                      );
    thunk_FUN_01ad9084(StringLiteral_5099);
    thunk_FUN_01ad9084(StringLiteral_5107);
    thunk_FUN_01ad9084(StringLiteral_5108);
    thunk_FUN_01ad9084(StringLiteral_5109);
    thunk_FUN_01ad9084(StringLiteral_2839);
    thunk_FUN_01ad9084(StringLiteral_5110);
    thunk_FUN_01ad9084(StringLiteral_5111);
    thunk_FUN_01ad9084(StringLiteral_5112);
    thunk_FUN_01ad9084(StringLiteral_2861);
    thunk_FUN_01ad9084(StringLiteral_5113);
    DAT_03ff0323 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar8,0);
  puVar1 = 
  Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
  ;
  if ((uVar2 & 1) == 0) {
    FUN_02e7ad14(*(undefined8 *)StringLiteral_5099,0);
    return;
  }
  plVar3 = (long *)thunk_FUN_01afaadc(*(undefined8 *)
                                       Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                                     );
  FUN_02eeeb74(plVar3,0);
  plVar4 = (long *)thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02eeeb74(plVar4,0);
  if ((plVar3 != (long *)0x0) &&
     (FUN_02ef0524(plVar3,*(undefined8 *)StringLiteral_5107,0), plVar4 != (long *)0x0)) {
    FUN_02ef0524(plVar4,*(undefined8 *)StringLiteral_5108,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar5 = FUN_02e4dd64();
      puVar1 = StringLiteral_5110;
      uVar2 = FUN_02ee6388(lVar5,*(undefined8 *)StringLiteral_5110,0);
      lVar9 = 0;
      if ((uVar2 & 1) == 0) {
        lVar9 = lVar5;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar6 = FUN_02e4dd64(*(long *)(param_1 + 0x30));
        uVar2 = FUN_02ee6388(lVar6,*(undefined8 *)puVar1,0);
        lVar5 = 0;
        if ((uVar2 & 1) == 0) {
          lVar5 = lVar6;
        }
        uVar2 = FUN_02ee6cf0(lVar9,0);
        uVar7 = FUN_02ee6cf0(lVar5,0);
        if (((uVar2 & 1) == 0) || ((uVar7 & 1) == 0)) {
          FUN_02ef0524(plVar3,*(undefined8 *)StringLiteral_5113,0);
          FUN_02ef10d4(plVar4,0,*(undefined8 *)StringLiteral_5111,0);
          if ((uVar2 & 1) == 0) {
            if (lVar9 == 0) goto LAB_02e509e8;
            uVar8 = FUN_02eea5ec(lVar9,0);
            uVar8 = FUN_02ee6c30(*(undefined8 *)StringLiteral_5112,uVar8,
                                 *(undefined8 *)StringLiteral_2839,0);
            FUN_02ef0524(plVar3,uVar8,0);
          }
          if ((uVar7 & 1) == 0) {
            if (lVar5 == 0) goto LAB_02e509e8;
            uVar8 = FUN_02eea5ec(lVar5,0);
            uVar8 = FUN_02ee6c30(*(undefined8 *)StringLiteral_5109,uVar8,
                                 *(undefined8 *)StringLiteral_2839,0);
            FUN_02ef0524(plVar3,uVar8,0);
          }
          FUN_02ef0524(plVar3,*(undefined8 *)StringLiteral_2861,0);
        }
        lVar9 = *(long *)(param_1 + 0x20);
        uVar8 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        if (lVar9 != 0) {
          puVar10 = (undefined8 *)(lVar9 + 0x28);
          *puVar10 = uVar8;
          thunk_FUN_01b4f09c(puVar10,uVar8);
          lVar9 = *(long *)(param_1 + 0x20);
          uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          if (lVar9 != 0) {
            puVar10 = (undefined8 *)(lVar9 + 0x30);
            *puVar10 = uVar8;
            thunk_FUN_01b4f09c(puVar10,uVar8);
            return;
          }
        }
      }
    }
  }
LAB_02e509e8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


