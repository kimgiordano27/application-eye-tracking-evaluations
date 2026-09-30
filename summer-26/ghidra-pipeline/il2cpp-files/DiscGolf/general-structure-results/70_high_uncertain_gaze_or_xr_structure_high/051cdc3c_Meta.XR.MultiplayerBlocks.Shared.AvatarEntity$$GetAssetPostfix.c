/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity$$GetAssetPostfix
ENTRY_POINT: 051cdc3c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_AvatarEntity__GetAssetPostfix(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if ((in_x9 & 1) == 0) {
    FUN_02dcfd18();
  }
  FUN_051cd664();
  if ((int)unaff_w23 <= (int)unaff_w19) {
Meta_XR_MultiplayerBlocks_Shared_AvatarEntity__OnSkeletonLoaded:
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_051cd664();
    return unaff_w19;
  }
  do {
    do {
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
LAB_051cde28:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x18;
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
      in_stack_00000080 = uVar4;
      in_stack_00000088 = uVar5;
      in_stack_00000090 = uVar3;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    do {
      unaff_w23 = unaff_w23 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w23) goto LAB_051cde28;
      lVar2 = unaff_x20 + (long)(int)unaff_w23 * 0x18;
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      in_stack_00000090 = in_stack_00000050;
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      in_stack_00000060 = uVar4;
      in_stack_00000068 = uVar5;
      in_stack_00000070 = uVar3;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    if ((int)unaff_w23 <= (int)unaff_w19)
    goto Meta_XR_MultiplayerBlocks_Shared_AvatarEntity__OnSkeletonLoaded;
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_051cd664();
  } while( true );
}


