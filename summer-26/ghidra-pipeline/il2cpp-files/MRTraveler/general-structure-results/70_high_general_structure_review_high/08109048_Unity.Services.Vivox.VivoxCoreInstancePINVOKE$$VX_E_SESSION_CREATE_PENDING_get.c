/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_SESSION_CREATE_PENDING_get
ENTRY_POINT: 08109048
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_SESSION_CREATE_PENDING_get(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
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
  
  do {
    uVar3 = FUN_081092d8(param_1);
    if ((uVar3 & 1) != 0) {
      lVar7 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        plVar4 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        *plVar4 = unaff_x22;
        thunk_FUN_03d233cc(plVar4,unaff_x22);
      }
      else {
        FUN_05212cf4();
      }
    }
    while (uVar3 = FUN_049dc4d0(&stack0x00000020,*unaff_x29), param_1 = in_stack_00000030,
          unaff_x22 = in_stack_00000030, (uVar3 & 1) == 0) {
      FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
      FUN_05213710(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar3 = FUN_049dc4d0(&stack0x00000020,*unaff_x29), lVar7 = in_stack_00000030,
            (uVar3 & 1) != 0) {
        lVar5 = *unaff_x26;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar5 = *unaff_x26;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar5 = FUN_05886b14(lVar5,*unaff_x19);
        uVar6 = thunk_FUN_03cf5234(*unaff_x25);
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  (uVar6,0,*unaff_x28,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_085da298(lVar7,uVar6,0);
        FUN_0810937c(lVar7);
        if (lVar5 == unaff_x20) {
          FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
          return;
        }
      }
      FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
      FUN_0717142c(in_stack_00000000._4_4_,0);
      lVar7 = *unaff_x26;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *unaff_x26;
      }
      if (*(long *)(*(long *)(lVar7 + 0xb8) + 8) == 0) {
LAB_08109268:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar3 = FUN_05886b60();
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (unaff_x21 == 0) goto LAB_08109268;
      iVar1 = *(int *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x21 + 0x18) = 0;
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_071245a8(*(undefined8 *)(unaff_x21 + 0x10),0,iVar1,0);
      }
      lVar7 = *unaff_x26;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *unaff_x26;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_08109268;
      FUN_05213710(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_08f01d70);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
    }
  } while( true );
}


