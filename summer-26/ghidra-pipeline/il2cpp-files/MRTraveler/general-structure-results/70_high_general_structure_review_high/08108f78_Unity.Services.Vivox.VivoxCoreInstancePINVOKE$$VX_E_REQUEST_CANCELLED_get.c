/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_REQUEST_CANCELLED_get
ENTRY_POINT: 08108f78
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELLED_get(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long lStack0000000000000030;
  
  lStack0000000000000030 = 0;
  lVar3 = thunk_FUN_03cf5234();
  FUN_052124c0(lVar3,*unaff_x21);
  while( true ) {
    lVar4 = *unaff_x26;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar4 = *unaff_x26;
    }
    if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) break;
    uVar5 = FUN_05886b60();
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (lVar3 == 0) break;
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_071245a8(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    lVar4 = *unaff_x26;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar4 = *unaff_x26;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 == 0) break;
    FUN_05213710(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_08f01d70);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    lStack0000000000000030 = in_stack_00000018;
    while (uVar5 = FUN_049dc4d0(&stack0x00000020,*unaff_x29), lVar4 = lStack0000000000000030,
          (uVar5 & 1) != 0) {
      uVar5 = FUN_081092d8(lStack0000000000000030);
      if ((uVar5 & 1) != 0) {
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar9 = *unaff_x27;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          plVar6 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          *plVar6 = lVar4;
          thunk_FUN_03d233cc(plVar6,lVar4);
        }
        else {
          FUN_05212cf4(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
    }
    FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
    FUN_05213710(&stack0x00000008,lVar3,*(undefined8 *)PTR_DAT_08f01d70);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    lStack0000000000000030 = in_stack_00000018;
    while (uVar5 = FUN_049dc4d0(&stack0x00000020,*unaff_x29), lVar4 = lStack0000000000000030,
          (uVar5 & 1) != 0) {
      lVar8 = *unaff_x26;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar8 = *unaff_x26;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar8 = FUN_05886b14(lVar8,*unaff_x19);
      uVar7 = thunk_FUN_03cf5234(*unaff_x25);
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                (uVar7,0,*unaff_x28,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_085da298(lVar4,uVar7,0);
      FUN_0810937c(lVar4);
      if (lVar8 == unaff_x20) {
        FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
        return;
      }
    }
    FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
    FUN_0717142c(in_stack_00000000._4_4_,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


