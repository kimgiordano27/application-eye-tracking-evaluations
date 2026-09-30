/*
FUNCTION_NAME: FUN_0766727c
ENTRY_POINT: 0766727c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_0766727c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 *param_8,
                 undefined8 param_9)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  ulong local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  if ((DAT_08270f8f & 1) == 0) {
    FUN_0373b518(Unity_Netcode_NetworkUpdateLoop_NetworkPostScriptLateUpdate_<>c_TypeInfo);
    FUN_0373b518(OVRInput_OVRControllerBase_VirtualButtonMap_TypeInfo);
    FUN_0373b518(
                System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d86580);
    DAT_08270f8f = 1;
  }
  puVar4 = OVRInput_OVRControllerBase_VirtualButtonMap_TypeInfo;
  puVar3 = System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_TypeInfo;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_a8 = *param_8;
  local_98 = *(ulong *)((long)param_8 + 0x3c);
  local_b0 = 0;
  local_a0 = CONCAT44(*(undefined4 *)(param_8 + 10),*(undefined4 *)(param_8 + 7));
  local_90 = 0xffffffff;
  if ((param_6 != 0) && (0 < *(int *)(param_6 + 0x18))) {
    iVar11 = 0;
    uVar12 = (uint)local_98;
    do {
      FUN_04b6bdf4(local_f8,param_6,iVar11,*(undefined8 *)puVar4);
      switch(local_f8[0] & 0xffffffff) {
      case 0:
        FUN_04b6bdf4(local_f8,param_6,iVar11,*(undefined8 *)puVar4);
        lVar6 = CONCAT44(uStack_e4,local_e8);
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          if (lVar6 == 0) goto LAB_076675cc;
          lVar6 = FUN_076676e0(lVar6);
        }
        lVar10 = *(long *)puVar3;
        lVar2 = *(long *)PTR_DAT_07d86580;
        if (lVar6 != 0) {
          lVar2 = lVar6;
        }
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar10);
        }
        uVar5 = FUN_07667040(0,lVar2,param_9);
        local_90 = CONCAT44(local_90._4_4_,uVar5);
        uVar5 = FUN_07144ed0(param_2,param_3,param_4,param_5,0);
        local_a0 = CONCAT44(uVar5,(undefined4)local_a0);
        local_98 = CONCAT44(local_98._4_4_,uVar12) | 4;
        uVar12 = uVar12 | 4;
      default:
        goto switchD_0766739c_caseD_1;
      case 2:
      case 0x1d:
        uVar12 = uVar12 | 0x10;
        break;
      case 4:
        local_98 = CONCAT44(700,(undefined4)local_98);
        goto switchD_0766739c_caseD_1;
      case 6:
        FUN_04b6bdf4(local_f8,param_6,iVar11,*(undefined8 *)puVar4);
        if (CONCAT44(uStack_e4,local_e8) == 0) {
LAB_076675cc:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_07667678();
        uVar5 = FUN_07144ed0(0);
        local_a0 = CONCAT44(uVar5,(undefined4)local_a0);
        goto switchD_0766739c_caseD_1;
      case 10:
        uVar12 = uVar12 | 2;
        break;
      case 0xe:
        FUN_04b6bdf4(local_f8,param_6,iVar11,*(undefined8 *)puVar4);
        lVar6 = CONCAT44(uStack_e4,local_e8);
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          if (lVar6 == 0) goto LAB_076675cc;
          lVar6 = FUN_076676e0(lVar6);
        }
        lVar10 = *(long *)puVar3;
        lVar2 = *(long *)PTR_DAT_07d86580;
        if (lVar6 != 0) {
          lVar2 = lVar6;
        }
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar10);
        }
        uVar5 = FUN_07667040(0xe,lVar2,param_9);
        local_90 = CONCAT44(local_90._4_4_,uVar5);
        goto switchD_0766739c_caseD_1;
      case 0xf:
      case 0x16:
        uVar12 = uVar12 | 8;
        break;
      case 0x10:
        uVar12 = uVar12 | 0x200;
        break;
      case 0x13:
      case 0x1e:
        FUN_031a5e18(param_6);
        uVar7 = thunk_FUN_037a15ac(OVRInput_OVRControllerBase_VirtualButtonMap_TypeInfo);
        thunk_FUN_04b6bdf4(local_f8,param_6,iVar11,uVar7);
        uVar8 = thunk_FUN_037a15ac(
                                  Unity_XR_PXR_PICOAnchorSubsystem_AnchorProvider_<>c__DisplayClass12_0_TypeInfo
                                  );
        local_f8[1] = 0xffffffffffffffff;
        local_e8 = (undefined4)local_f8[0];
        local_f8[0] = uVar8;
        uVar7 = FUN_06278b80(local_f8,0);
        uVar9 = thunk_FUN_037a15ac(Unity_XR_PXR_PXR_Plugin_MixedReality_<>c_TypeInfo);
        uVar7 = System_Convert__ToInt32(uVar9,uVar7,0);
        thunk_FUN_037a15ac(PTR_DAT_07d8e248);
        uVar9 = thunk_FUN_037788cc();
        FUN_06242c7c(uVar9,uVar7,0);
        uVar7 = thunk_FUN_037a15ac(System_Net_Http_Headers_Parser_DateTime_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar9,uVar7);
      case 0x14:
        uVar12 = uVar12 | 0x40;
        break;
      case 0x15:
        FUN_04b6bdf4(local_f8,param_6,iVar11,*(undefined8 *)puVar4);
        if (CONCAT44(uStack_e4,local_e8) == 0) goto LAB_076675cc;
        fVar13 = (float)FUN_07667744();
        iVar1 = -0x80000000;
        if (fVar13 * 0.015625 != INFINITY) {
          iVar1 = (int)(fVar13 * 0.015625);
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar1);
        goto switchD_0766739c_caseD_1;
      case 0x1a:
        uVar12 = uVar12 | 0x100;
        break;
      case 0x1b:
        uVar12 = uVar12 | 0x80;
        break;
      case 0x1c:
        uVar12 = uVar12 | 4;
      }
      local_98 = CONCAT44(local_98._4_4_,uVar12);
switchD_0766739c_caseD_1:
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_6 + 0x18));
  }
  param_1[4] = local_90;
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = local_98;
  param_1[2] = local_a0;
  return;
}


