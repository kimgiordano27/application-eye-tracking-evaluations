/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_SESSION_TEXT_DENIED_get
ENTRY_POINT: 08109180
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_SESSION_TEXT_DENIED_get
               (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  while( true ) {
    FUN_049dc4cc(param_1,param_2);
    FUN_0717142c(in_stack_00000000._4_4_,0);
    lVar3 = *unaff_x26;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar3 = *unaff_x26;
    }
    if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) break;
    uVar4 = FUN_05886b60();
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (unaff_x21 == 0) break;
    iVar1 = *(int *)(unaff_x21 + 0x18);
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_071245a8(*(undefined8 *)(unaff_x21 + 0x10),0,iVar1,0);
    }
    lVar3 = *unaff_x26;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar3 = *unaff_x26;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) break;
    FUN_05213710(&stack0x00000008,lVar3,*(undefined8 *)PTR_DAT_08f01d70);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar4 = FUN_049dc4d0(&stack0x00000020,*unaff_x29), lVar3 = in_stack_00000030,
          (uVar4 & 1) != 0) {
      uVar4 = FUN_081092d8(in_stack_00000030);
      if ((uVar4 & 1) != 0) {
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
          plVar5 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *plVar5 = lVar3;
          thunk_FUN_03d233cc(plVar5,lVar3);
        }
        else {
          FUN_05212cf4();
        }
      }
    }
    FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
    FUN_05213710(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar4 = FUN_049dc4d0(&stack0x00000020,*unaff_x29), lVar3 = in_stack_00000030,
          (uVar4 & 1) != 0) {
      lVar7 = *unaff_x26;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *unaff_x26;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = FUN_05886b14(lVar7,*unaff_x19);
      uVar6 = thunk_FUN_03cf5234(*unaff_x25);
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                (uVar6,0,*unaff_x28,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_085da298(lVar3,uVar6,0);
      FUN_0810937c(lVar3);
      if (lVar7 == unaff_x20) {
        FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
        return;
      }
    }
    param_1 = &stack0x00000020;
    param_2 = *(undefined8 *)PTR_DAT_08f01d50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


