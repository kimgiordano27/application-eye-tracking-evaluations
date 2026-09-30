/*
FUNCTION_NAME: System.Runtime.CompilerServices.AsyncTaskMethodBuilder<bool>$$Start<ColocationSessionEventHandler.<RequestScenePermissionIfNeeded>d__13>
ENTRY_POINT: 04936310
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>__Start<ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>
               (undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,int param_5,
               long param_6)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if ((bRam000000000983c05b & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091ddc18);
    FUN_03d2d2b0(PTR_DAT_091ddc80);
    FUN_03d2d2b0(PTR_DAT_091ddc88);
    bRam000000000983c05b = 1;
  }
  plVar7 = param_1 + 0xd;
  *plVar7 = 0;
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined4 *)((long)param_1 + 0x4c) = param_4;
  param_1[10] = 0;
  thunk_FUN_03d1023c(plVar7,0);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(int *)((long)param_1 + 0x5c) = param_5;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x20) < param_5) {
      *(int *)(param_2 + 0x20) = param_5;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar3 = PTR_DAT_091ddc18;
    if ((param_6 == 0) || (*(int *)(param_6 + 0x18) < 1)) {
      return;
    }
    if (*(int *)(param_6 + 0x18) != 1) {
      if (*(int *)(*(long *)PTR_DAT_091ddc18 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_049383b8(param_1,param_2,param_6);
      if (DAT_0983c06a == '\0') {
        FUN_03d2d2b0(PTR_DAT_091ddc18);
        DAT_0983c06a = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_049377a4(param_2,*(undefined4 *)(param_1 + 9),0);
      return;
    }
    FUN_048662f8(1,0);
    lVar4 = FUN_05a39464(param_6,0,*(undefined8 *)PTR_DAT_091ddc88);
    *plVar7 = lVar4;
    thunk_FUN_03d1023c(plVar7,lVar4);
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      if (DAT_0983bc65 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091da7f0);
        DAT_0983bc65 = '\x01';
      }
      pbVar5 = (byte *)FUN_05049be8(lVar4,0,*(undefined8 *)PTR_DAT_091da7f0);
      bVar2 = *pbVar5;
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(byte *)(param_1 + 0xb) = ~bVar2 & 1;
      lVar4 = *(long *)(param_2 + 0x18);
      uVar6 = param_1[0xd];
      if (*(int *)(*(long *)PTR_DAT_091ddc18 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 9);
        if (cRam000000000983c06d == '\0') {
          FUN_03d2d2b0(PTR_DAT_091ddc90);
          cRam000000000983c06d = '\x01';
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          FUN_06b636b0(lVar4,uVar6,uVar1,*(undefined8 *)PTR_DAT_091ddc90);
          FUN_04937b84(&stack0x00000008,param_1,param_2);
          param_1[2] = in_stack_00000018;
          param_1[1] = in_stack_00000010;
          *param_1 = in_stack_00000008;
          fVar10 = *(float *)((long)param_1 + 0x14);
          fVar11 = *(float *)(param_2 + 0x44);
          fVar8 = (float)*(undefined8 *)((long)param_1 + 0xc);
          fVar9 = (float)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
          *(ulong *)((long)param_1 + 0xc) =
               CONCAT44(fVar9 + (fVar9 + fVar9) * fVar11 * 0.5,
                        fVar8 + (fVar8 + fVar8) * fVar11 * 0.5);
          *(float *)((long)param_1 + 0x14) = fVar10 + (fVar10 + fVar10) * fVar11 * 0.5;
          in_stack_00000030 = param_1[2];
          in_stack_00000028 = param_1[1];
          in_stack_00000020 = *param_1;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          in_stack_00000068 = 0;
          in_stack_00000060 = 0;
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          FUN_04944594(&stack0x00000040,&stack0x00000020,0);
          param_1[8] = in_stack_00000068;
          param_1[7] = in_stack_00000060;
          param_1[6] = in_stack_00000058;
          param_1[5] = in_stack_00000050;
          param_1[4] = in_stack_00000048;
          param_1[3] = in_stack_00000040;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


