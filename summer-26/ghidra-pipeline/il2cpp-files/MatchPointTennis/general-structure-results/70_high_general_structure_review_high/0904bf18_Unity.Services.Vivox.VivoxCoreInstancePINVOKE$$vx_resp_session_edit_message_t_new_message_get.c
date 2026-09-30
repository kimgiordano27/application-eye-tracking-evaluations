/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_edit_message_t_new_message_get
ENTRY_POINT: 0904bf18
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_edit_message_t_new_message_get
               (int *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 in_stack_00000008;
  
  if ((DAT_0a53378b & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fc16f0);
    FUN_04447ba8(PTR_DAT_09f20018);
    FUN_04447ba8(PTR_DAT_09fc16f8);
    FUN_04447ba8(PTR_DAT_09fc1408);
    FUN_04447ba8(PTR_DAT_09f2bc30);
    FUN_04447ba8(PTR_DAT_09fc1700);
    FUN_04447ba8(PTR_DAT_09f2bc38);
    FUN_04447ba8(PTR_DAT_09f2bc40);
    FUN_04447ba8(PTR_DAT_09f2bc48);
    FUN_04447ba8(PTR_DAT_09fc1708);
    FUN_04447ba8(PTR_DAT_09fc1710);
    DAT_0a53378b = 1;
  }
  puVar1 = PTR_DAT_09f20018;
  in_stack_00000008 = 0;
  if (*param_1 == 0) {
    in_stack_00000008 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 0xc);
    uVar2 = FUN_078b446c(*(undefined8 *)(param_1 + 8),0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_044adef4(PTR_DAT_09f251e0);
      uVar5 = thunk_FUN_0448520c();
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc1498);
      uVar3 = thunk_FUN_044adef4(PTR_DAT_09fc1448);
      FUN_0799eb50(uVar5,uVar6,uVar3,0);
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc1718);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar5,uVar6);
    }
    uVar2 = FUN_078b446c(*(undefined8 *)(param_1 + 10),0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_044adef4(PTR_DAT_09f251e0);
      uVar5 = thunk_FUN_0448520c();
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fb9e30);
      uVar3 = thunk_FUN_044adef4(PTR_DAT_09fc1448);
      FUN_0799eb50(uVar5,uVar6,uVar3,0);
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc1718);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar5,uVar6);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 10);
    uVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc1700);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_media_completion
              (uVar3,uVar5,uVar6,0,0,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar10 = *(long **)(lVar9 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar7 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2bc30) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0904c0a0;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2bc30,0);
LAB_0904c0a0:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc16f8);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar7 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09fc1408) {
          lVar7 = lVar7 + (long)(*piVar8 + 0xd) * 0x10 + 0x138;
          goto LAB_0904c120;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    lVar7 = FUN_044822ac(plVar10,*(long *)PTR_DAT_09fc1408,0xd);
LAB_0904c120:
    FUN_05572fe0(uVar5,plVar10,*(undefined8 *)(lVar7 + 8),0);
    lVar9 = FUN_050c28c8(lVar9,*(undefined8 *)PTR_DAT_09fc1710,uVar5,uVar3,
                         *(undefined8 *)PTR_DAT_09fc1708);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000008 = FUN_068a4fb0(lVar9,*(undefined8 *)PTR_DAT_09f2bc48);
    uVar2 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09f2bc40);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = in_stack_00000008;
      thunk_FUN_044bb4b4(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04b5a774(param_1 + 2,&stack0x00000008,param_1,*(undefined8 *)PTR_DAT_09fc16f0);
      return;
    }
  }
  FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09f2bc38);
  *param_1 = -2;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0795995c(param_1 + 2,0);
  return;
}


