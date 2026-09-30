/*
FUNCTION_NAME: FUN_07dc6cd4
ENTRY_POINT: 07dc6cd4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_8
*/


void FUN_07dc6cd4(long param_1,void *param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [144];
  undefined8 local_310;
  undefined8 local_308;
  undefined1 auStack_300 [168];
  undefined1 auStack_258 [168];
  undefined1 auStack_1b0 [168];
  undefined1 auStack_108 [168];
  
  puVar2 = System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt16_TypeInfo;
  if ((DAT_0899a025 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08491368);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt16_TypeInfo);
    FUN_03a8a718(Liv_Lck_Telemetry_LckTelemetry_TelemetryPayload_TypeInfo);
    FUN_03a8a718(System_Runtime_Remoting_Lifetime_Lease_RenewalDelegate_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftByte_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt16_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt32_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt64_TypeInfo);
    DAT_0899a025 = 1;
  }
  memset(auStack_258,0,0xa8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar3 = System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt64_TypeInfo;
  if (param_1 != 0) {
    plVar7 = (long *)FUN_07e0beb8(param_1,**(undefined4 **)(*(long *)puVar2 + 0xb8),0);
    lVar8 = *(long *)puVar3;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)thunk_FUN_03ac74bc(lVar8);
      FUN_04f173e0(plVar7,*(undefined8 *)
                           System_Runtime_Remoting_Lifetime_Lease_RenewalDelegate_TypeInfo);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar8 = *(long *)puVar2;
      }
      FUN_07e0c0a8(param_1,**(undefined4 **)(lVar8 + 0xb8),plVar7,0);
      if (plVar7 == (long *)0x0) goto LAB_07dc7014;
    }
    else if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
            (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8
            )) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar7);
    }
    puVar5 = System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt32_TypeInfo;
    puVar4 = System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt16_TypeInfo;
    puVar3 = Liv_Lck_Telemetry_LckTelemetry_TelemetryPayload_TypeInfo;
    puVar2 = PTR_DAT_08491368;
    if ((int)plVar7[3] < 1) {
      bVar9 = 1;
    }
    else {
      iVar11 = 0;
      bVar13 = 1;
      do {
        FUN_04f17978(auStack_108,plVar7,iVar11,*(undefined8 *)puVar4);
        memcpy(auStack_258,auStack_108,0xa8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        bVar6 = UnityEngine_UIElements_UIRAtlasAllocator__Dispose(auStack_258,param_2,0);
        bVar9 = (bVar6 ^ 1) & bVar13;
        if ((((bVar6 ^ 1) & 1) == 0) && ((param_4 & 1) == 0)) {
          FUN_07dc7700(auStack_300,auStack_258);
          uVar12 = *(undefined8 *)puVar5;
          memcpy(auStack_108,auStack_300,0xa8);
          FUN_04f179dc(plVar7,iVar11,auStack_108,uVar12);
          bVar9 = bVar13;
        }
        iVar11 = iVar11 + 1;
        bVar13 = bVar9;
      } while (iVar11 < (int)plVar7[3]);
    }
    local_310 = 0;
    local_308 = 0;
    memcpy(auStack_3a8,param_2,0x98);
    thunk_FUN_03afed3c(auStack_3a0,0);
    local_310 = param_3;
    thunk_FUN_03afed3c(&local_310,param_3);
    local_308 = CONCAT71(local_308._1_7_,bVar9);
    memcpy(auStack_1b0,auStack_3a8,0xa8);
    lVar8 = plVar7[2];
    lVar10 = *(long *)puVar3;
    *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(plVar7 + 3);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0xa8;
        *(uint *)(plVar7 + 3) = uVar1 + 1;
        memcpy((void *)(lVar8 + 0x20),auStack_1b0,0xa8);
        thunk_FUN_03afed3c(lVar8 + 0x28,0);
      }
      else {
        uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
        memcpy(auStack_108,auStack_1b0,0xa8);
        FUN_04f17d08(plVar7,auStack_108,uVar12);
      }
      return;
    }
  }
LAB_07dc7014:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


