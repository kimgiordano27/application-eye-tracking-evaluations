/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpaceSharing>d__15$$MoveNext
ENTRY_POINT: 04ab63c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04ab6500) */

void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpaceSharing>d__15__MoveNext
               (ushort *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000018;
  
  do {
    if ((*param_1 & 1) == 0) {
      param_2 = FUN_02b76218();
    }
                    /* try { // try from 04ab63d0 to 04bb63df has its CatchHandler @ 04ab63e0 */
    lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x38);
                    /* catch() { ... } // from try @ 04ab62f0 with catch @ 04ab63e0
                       catch() { ... } // from try @ 04ab6348 with catch @ 04ab63e0
                       catch() { ... } // from try @ 04ab63d0 with catch @ 04ab63e0 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 04ab63e4 to 04bb63e7 has its CatchHandler @ 04ab6404 */
                    /* try { // try from 04ab63e8 to 04bb6407 has its CatchHandler @ 04ab6184 */
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04ab63e4 with catch @ 04ab6404
                        */
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04ab6438;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(unaff_x21,lVar2,0);
LAB_04ab6438:
    (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    FUN_04ab6000();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04ab63a4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x23,0);
LAB_04ab63a4:
    uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_04ab64b4;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_2 = *(long *)(unaff_x19 + 0x20);
    param_1 = (ushort *)(param_2 + 0x135);
    unaff_x21 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04ab64d0;
    }
  }
LAB_04ab64b4:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x22,0);
LAB_04ab64d0:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


