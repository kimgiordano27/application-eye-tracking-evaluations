/*
FUNCTION_NAME: FUN_05bcd988
ENTRY_POINT: 05bcd988
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_9;validity_or_gating_hits_19;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05bcd988(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_06b81fd8 & 1) == 0) {
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
    FUN_02d6084c(PTR_DAT_067609b8);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
    FUN_02d6084c(PTR_DAT_0676a610);
    FUN_02d6084c(PTR_DAT_0675eb80);
    FUN_02d6084c(System_Linq_Expressions_Interpreter_BranchLabel_TypeInfo);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_GetEnumerator__
                );
    DAT_06b81fd8 = 1;
  }
  puVar1 = PTR_DAT_067609b8;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar12 = *(long *)(param_1 + 8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_GetEnumerator__
                              );
    FUN_0504920c(lVar4,0);
    plVar9 = (long *)(param_1 + 10);
    *plVar9 = lVar4;
    thunk_FUN_02dd37b4(plVar9,lVar4);
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(*(long *)(param_1 + 10) + 0x20) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_02dd37b4();
    puVar2 = System_Linq_Expressions_Interpreter_BranchLabel_TypeInfo;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined4 *)(lVar12 + 0x20) = 1;
    lVar4 = *plVar9;
    uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_057149cc(uVar5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    puVar10 = (undefined8 *)(lVar4 + 0x28);
    *puVar10 = uVar5;
    thunk_FUN_02dd37b4(puVar10,uVar5);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *(long *)(*plVar9 + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_05714c8c(lVar4,0);
    if (*(long *)(lVar12 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar11 = *(long **)(*(long *)(lVar12 + 0x30) + 0x28);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *plVar11;
    lVar12 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05bcdb48;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_02d9a5d4(plVar11,*(long *)
                                    Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__
                           ,0);
LAB_05bcdb48:
    uVar5 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    puVar10 = (undefined8 *)(lVar12 + 0x10);
    *puVar10 = uVar5;
    thunk_FUN_02dd37b4(puVar10);
    lVar4 = *plVar9;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(lVar4 + 0x10) == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_067646e8);
      uVar5 = thunk_FUN_02d9d534();
      uVar6 = thunk_FUN_02dc61f4(
                                Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__
                                );
      FUN_050096cc(uVar5,uVar6,0);
      if (*plVar9 != 0) {
        FUN_05bcce08(*plVar9,uVar5);
        uVar6 = thunk_FUN_02dc61f4(
                                  Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar5,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar12 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar3 = FUN_047caab4(lVar12,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__
                        );
    uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb80);
    FUN_03a37aec(uVar5,uVar3,*(undefined8 *)PTR_DAT_0676a610);
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x18),uVar5);
    lVar4 = *plVar9;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_05bc9bcc(&local_58,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    FUN_05bc9c0c(&local_58);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = FUN_05bccd24();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    local_38 = FUN_0507b03c(lVar4,0);
    uVar7 = FUN_04f2cc60(&local_38,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_02dd37b4(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e7a50(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
      return;
    }
  }
  FUN_04f2cd2c(&local_38,0);
  if (*(long *)(param_1 + 10) != 0) {
    FUN_05bcce84();
    *param_1 = -2;
    param_1[10] = 0;
    param_1[0xb] = 0;
    thunk_FUN_02dd37b4(param_1 + 10,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_04f2db0c(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


