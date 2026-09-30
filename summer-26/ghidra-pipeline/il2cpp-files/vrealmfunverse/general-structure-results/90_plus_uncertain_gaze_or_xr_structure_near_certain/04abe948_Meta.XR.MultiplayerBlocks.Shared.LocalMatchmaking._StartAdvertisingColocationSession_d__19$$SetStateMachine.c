/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$SetStateMachine
ENTRY_POINT: 04abe948
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04abeb38) */

void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__SetStateMachine
               (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  undefined1 auVar9 [16];
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  long *in_stack_00000018;
  
  puVar1 = PTR_DAT_06312f90;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = param_1;
  if (param_2 != (long *)0x0) {
    iVar8 = 0;
    do {
      lVar3 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04abe9ac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(param_2,*(long *)puVar1,0);
LAB_04abe9ac:
      uVar6 = (*(code *)*puVar2)(param_2,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        if (in_stack_00000018 == (long *)0x0) {
          return;
        }
        lVar3 = *in_stack_00000018;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 == 0) goto LAB_04abeae8;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_04abead0;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218(lVar3);
      }
      lVar4 = *in_stack_00000018;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04abea40;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000018,lVar3,0);
LAB_04abea40:
      auVar9 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
      if (iVar8 == 0) {
        *(undefined1 (*) [16])(unaff_x20 + 8) = auVar9;
        thunk_FUN_02bb0e9c(unaff_x20 + 8,0);
      }
      else {
        lVar3 = *(long *)(unaff_x20 + 0x18);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar3 + 0x18) <= iVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        pauVar5 = (undefined1 (*) [16])(lVar3 + (long)(int)(iVar8 - 1U) * 0x10 + 0x20);
        *pauVar5 = auVar9;
        thunk_FUN_02bb0e9c(pauVar5,0);
      }
      iVar8 = iVar8 + 1;
      param_2 = in_stack_00000018;
    } while (in_stack_00000018 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04abead0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04abeb04;
    }
  }
LAB_04abeae8:
  puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*(long *)PTR_DAT_06312f78,0);
LAB_04abeb04:
  (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  return;
}


