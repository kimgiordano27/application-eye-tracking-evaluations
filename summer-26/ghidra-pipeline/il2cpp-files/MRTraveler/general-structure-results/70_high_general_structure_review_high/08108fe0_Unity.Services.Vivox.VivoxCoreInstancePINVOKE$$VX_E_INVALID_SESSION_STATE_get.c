/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_INVALID_SESSION_STATE_get
ENTRY_POINT: 08108fe0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_INVALID_SESSION_STATE_get
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
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
  
  do {
    FUN_071245a8(param_1,0,param_3,0);
    do {
      lVar2 = *unaff_x26;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar2 = *unaff_x26;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) {
LAB_08109268:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05213710(&stack0x00000008,lVar2,*(undefined8 *)PTR_DAT_08f01d70);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar3 = FUN_049dc4d0(&stack0x00000020,*unaff_x29), lVar2 = in_stack_00000030,
            (uVar3 & 1) != 0) {
        uVar3 = FUN_081092d8(in_stack_00000030);
        if ((uVar3 & 1) != 0) {
          lVar6 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar4 = lVar2;
            thunk_FUN_03d233cc(plVar4,lVar2);
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
      while (uVar3 = FUN_049dc4d0(&stack0x00000020,*unaff_x29), lVar2 = in_stack_00000030,
            (uVar3 & 1) != 0) {
        lVar6 = *unaff_x26;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar6 = *unaff_x26;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar6 = FUN_05886b14(lVar6,*unaff_x19);
        uVar5 = thunk_FUN_03cf5234(*unaff_x25);
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  (uVar5,0,*unaff_x28,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_085da298(lVar2,uVar5,0);
        FUN_0810937c(lVar2);
        if (lVar6 == unaff_x20) {
          FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
          return;
        }
      }
      FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08f01d50);
      FUN_0717142c(in_stack_00000000._4_4_,0);
      lVar2 = *unaff_x26;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar2 = *unaff_x26;
      }
      if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) goto LAB_08109268;
      uVar3 = FUN_05886b60();
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (unaff_x21 == 0) goto LAB_08109268;
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      param_3 = (ulong)uVar1;
      *(undefined4 *)(unaff_x21 + 0x18) = 0;
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    } while ((int)uVar1 < 1);
    param_1 = *(undefined8 *)(unaff_x21 + 0x10);
  } while( true );
}


