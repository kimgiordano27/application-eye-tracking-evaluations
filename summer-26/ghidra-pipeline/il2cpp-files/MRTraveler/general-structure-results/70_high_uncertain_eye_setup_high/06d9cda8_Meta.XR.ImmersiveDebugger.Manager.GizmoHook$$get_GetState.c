/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoHook$$get_GetState
ENTRY_POINT: 06d9cda8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_ImmersiveDebugger_Manager_GizmoHook__get_GetState(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar9;
  undefined8 *unaff_x23;
  long lVar10;
  double dVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  thunk_FUN_03d233cc();
  in_stack_00000058 = in_stack_00000008;
  in_stack_00000050 = in_stack_00000000;
  uVar7 = FUN_03c8f984(*unaff_x22,&stack0x00000050);
  FUN_0701f51c(uVar7,*unaff_x23,0);
  puVar5 = PTR_DAT_08e8fce0;
  if (0xd < *(uint *)(unaff_x21 + -0x68)) {
    *(undefined8 *)(unaff_x19 + 0x88) = uVar7;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x88),uVar7);
    in_stack_00000048 = _UNK_018b2618;
    in_stack_00000040 = _DAT_018b2610;
    uVar7 = FUN_03c8f984(*unaff_x22,&stack0x00000040);
    FUN_0701f51c(uVar7,*(undefined8 *)puVar5,0);
    puVar5 = PTR_DAT_08e8fc80;
    if (0xe < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x90) = uVar7;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x90),uVar7);
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      uVar7 = FUN_03c8f984(*unaff_x22,&stack0x00000030);
      FUN_0701f51c(uVar7,*(undefined8 *)puVar5,0);
      puVar5 = PTR_DAT_08e8fca0;
      if (0xf < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x98) = uVar7;
        thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x98),uVar7);
        in_stack_00000028 = in_stack_00000018;
        in_stack_00000020 = in_stack_00000010;
        uVar7 = FUN_03c8f984(*unaff_x22,&stack0x00000020);
        FUN_0701f51c(uVar7,*(undefined8 *)puVar5,0);
        puVar5 = PTR_DAT_08e8fc58;
        if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0xa0) = uVar7;
          thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xa0),uVar7);
          **(long **)(*(long *)puVar5 + 0xb8) = unaff_x19;
          thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar5 + 0xb8));
          if (**(long **)(*(long *)puVar5 + 0xb8) != 0) {
            uVar7 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e8fc50,
                                 *(undefined4 *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18));
            puVar8 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
            *puVar8 = uVar7;
            thunk_FUN_03d233cc(puVar8,uVar7);
            puVar6 = PTR_DAT_08e8fcc0;
            puVar4 = PTR_DAT_08e6baa0;
            puVar3 = PTR_DAT_08e6abb8;
            puVar2 = PTR_DAT_08e6a6b8;
            if (**(long **)(*(long *)puVar5 + 0xb8) != 0) {
              uVar7 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,
                                   *(undefined4 *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18));
              puVar8 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              *puVar8 = uVar7;
              thunk_FUN_03d233cc(puVar8,uVar7);
              uVar7 = FUN_03c8f97c(*(undefined8 *)puVar4,0x20);
              FUN_0701f51c(uVar7,*(undefined8 *)puVar6,0);
              puVar8 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
              *puVar8 = uVar7;
              thunk_FUN_03d233cc(puVar8,uVar7);
              uVar7 = FUN_03c8f97c(*(undefined8 *)puVar3,0x200f);
              puVar8 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
              *puVar8 = uVar7;
              thunk_FUN_03d233cc(puVar8,uVar7);
              uVar7 = DAT_018aeef0;
              uVar9 = 0;
              while( true ) {
                lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                dVar11 = (double)thunk_FUN_03cee0d4((double)(int)uVar9,uVar7,0);
                if (lVar10 == 0) break;
                if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_06d9d060;
                lVar1 = uVar9 * 4;
                uVar9 = uVar9 + 1;
                *(float *)(lVar10 + lVar1 + 0x20) = (float)dVar11;
                if (uVar9 == 0x200f) {
                  return;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
      }
    }
  }
LAB_06d9d060:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


