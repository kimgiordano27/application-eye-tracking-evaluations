/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartDiscoveringColocationSessions
ENTRY_POINT: 04abdac0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04abdc00) */

void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartDiscoveringColocationSessions
               (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000298;
  
  do {
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_2) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04abdb08;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(unaff_x21,param_2,0);
LAB_04abdb08:
    (*(code *)*puVar1)(&stack0x000002a0,unaff_x21,puVar1[1]);
    memcpy(&stack0x00000018,&stack0x000002a0,0x280);
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    memcpy(&stack0x000002a0,&stack0x00000018,0x280);
    FUN_04abd618();
    if (in_stack_00000298 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *in_stack_00000298;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04abda74;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000298,*unaff_x22,0);
LAB_04abda74:
    uVar3 = (*(code *)*puVar1)(in_stack_00000298,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000298 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000298;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_04abdbb8;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000298 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    param_2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    unaff_x21 = in_stack_00000298;
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02b76218(param_2);
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_04abdbd4;
    }
  }
LAB_04abdbb8:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000298,*(long *)PTR_DAT_06312f78,0);
LAB_04abdbd4:
  (*(code *)*puVar1)(in_stack_00000298,puVar1[1]);
  return;
}


