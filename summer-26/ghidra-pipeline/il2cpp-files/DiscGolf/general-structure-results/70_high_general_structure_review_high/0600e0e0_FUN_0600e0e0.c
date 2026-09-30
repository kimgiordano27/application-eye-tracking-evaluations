/*
FUNCTION_NAME: FUN_0600e0e0
ENTRY_POINT: 0600e0e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_5;telemetry_or_network_hits_11
*/


void FUN_0600e0e0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_06dc4a5b & 1) == 0) {
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_AdjustCastHitEndPoint_00000D04_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_ComputeFallBackLine_00000D05_PostfixBurstDelegate>__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_List<NetworkObject>>_get_Keys__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<ulong,_Dictionary<Type,_int>>_TryGetValue__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000367_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D02_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_GetClosestPointOnLine_00000D03_PostfixBurstDelegate>__
                );
    FUN_02d965b8(Method_System_IO_BufferedStream_Write__);
    FUN_02d965b8(Method_System_IO_BufferedStream_EnsureCanRead__);
    FUN_02d965b8(Method_System_IO_BufferedStream_WriteAsync__);
    FUN_02d965b8(Method_System_IO_BufferedStream_EnsureCanSeek__);
    FUN_02d965b8(Method_System_IO_BufferedStream_EnsureCanWrite__);
    FUN_02d965b8(Method_System_IO_BufferedStream_set_Position__);
    DAT_06dc4a5b = 1;
  }
  puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Dictionary<Type,_int>>_TryGetValue__;
  lVar10 = *(long *)(param_1 + 8);
  local_40 = 0;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_40 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_0600e3b8;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar8 = *(long **)(*(long *)(lVar10 + 0x10) + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar8;
    uVar9 = *(undefined8 *)(lVar10 + 0x18);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000367_PostfixBurstDelegate>__
           ) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0600e268;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02dd004c(plVar8,*(long *)
                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000367_PostfixBurstDelegate>__
                          ,1);
LAB_0600e268:
    lVar5 = (*(code *)*puVar4)(plVar8,uVar9,puVar4[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_38 = FUN_0481d028(lVar5,*(undefined8 *)Method_System_IO_BufferedStream_set_Position__);
    uVar6 = FUN_047e6248(&local_38,*(undefined8 *)Method_System_IO_BufferedStream_WriteAsync__);
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_38;
      LeanTween__value(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031fdf48(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_ComputeFallBackLine_00000D05_PostfixBurstDelegate>__
                  );
      return;
    }
  }
  lVar5 = FUN_047e6288(&local_38,*(undefined8 *)Method_System_IO_BufferedStream_Write__);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar8 = *(long **)(*(long *)(lVar10 + 0x10) + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar10 = *plVar8;
  uVar9 = *(undefined8 *)(lVar5 + 0x20);
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000367_PostfixBurstDelegate>__
         ) {
        puVar4 = (undefined8 *)(lVar10 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_0600e378;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02dd004c(plVar8,*(long *)
                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000367_PostfixBurstDelegate>__
                        ,2);
LAB_0600e378:
  lVar10 = (*(code *)*puVar4)(plVar8,uVar9,puVar4[1]);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  local_40 = FUN_0481d028(lVar10,*(undefined8 *)Method_System_IO_BufferedStream_EnsureCanWrite__);
  uVar6 = FUN_047e6248(&local_40,*(undefined8 *)Method_System_IO_BufferedStream_EnsureCanSeek__);
  if ((uVar6 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0xc) = local_40;
    LeanTween__value(param_1 + 0xc,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_031fdf48(param_1 + 2,&local_40,param_1,
                 *(undefined8 *)
                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveVisualController_AdjustCastHitEndPoint_00000D04_PostfixBurstDelegate>__
                );
    return;
  }
LAB_0600e3b8:
  lVar10 = FUN_047e6288(&local_40,*(undefined8 *)Method_System_IO_BufferedStream_EnsureCanRead__);
  puVar3 = Method_System_Collections_Generic_Dictionary<ulong,_List<NetworkObject>>_get_Keys__;
  if (lVar10 != 0) {
    lVar5 = *(long *)puVar2;
    uVar9 = *(undefined8 *)(lVar10 + 0x20);
    iVar1 = *(int *)(lVar5 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_02df485c(lVar5);
    }
    FUN_040b19d8(param_1 + 2,uVar9,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


