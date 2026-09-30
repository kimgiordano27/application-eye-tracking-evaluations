/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$MoveNext
ENTRY_POINT: 04abe49c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  int *unaff_x21;
  void *unaff_x22;
  int unaff_w23;
  code *pcVar5;
  
  do {
    piVar4 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_04abe4d8;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04abe4d8:
      pcVar5 = (code *)*puVar3;
      memcpy(&stack0x00000780,&stack0x00000280,0x280);
      memcpy(&stack0x00000500,&stack0x00000000,0x280);
      uVar1 = (*pcVar5)();
      if (((uVar1 & 1) != 0) || (unaff_w23 = unaff_w23 + 1, *unaff_x21 <= unaff_w23)) {
        return uVar1 & 1;
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_04abd04c(&stack0x00000280);
      memcpy(&stack0x00000000,unaff_x22,0x280);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02b76218();
      }
      param_3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xe0);
      if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_02b76218(param_3);
      }
      param_1 = *unaff_x20;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


