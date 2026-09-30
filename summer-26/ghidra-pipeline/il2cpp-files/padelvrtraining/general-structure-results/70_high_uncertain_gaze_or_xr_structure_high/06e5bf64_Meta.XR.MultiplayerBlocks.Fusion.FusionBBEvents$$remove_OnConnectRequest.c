/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$remove_OnConnectRequest
ENTRY_POINT: 06e5bf64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__remove_OnConnectRequest
               (long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_b0;
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000009840d10 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091add10);
    bRam0000000009840d10 = 1;
  }
  if (*(int *)((long)param_1 + 0xc) != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x20) + 1) goto LAB_06e5bfd0;
  }
  FUN_07199c28(0);
LAB_06e5bfd0:
  if ((int)param_1[6] == 1) {
    lVar3 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c();
      lVar3 = *(long *)(param_2 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    lStack_60 = param_1[4];
    lStack_68 = param_1[3];
    lStack_70 = param_1[2];
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),&lStack_70);
    if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c(*(long *)(param_2 + 0x20));
    }
    lStack_b0 = 0;
    lStack_a8 = 0;
    FUN_07143704(&lStack_b0,uVar4,param_1[5],0);
    plVar5 = &lStack_50;
    lStack_48 = lStack_a8;
    lStack_50 = lStack_b0;
    uVar4 = *(undefined8 *)PTR_DAT_091add10;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c();
      lVar3 = *(long *)(param_2 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    lStack_40 = param_1[4];
    lStack_48 = param_1[3];
    lStack_50 = param_1[2];
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c();
      lVar3 = *(long *)(param_2 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    lVar6 = param_1[5];
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_58 = 0;
    lStack_60 = 0;
    lStack_88 = lStack_48;
    lStack_90 = lStack_50;
    lStack_80 = lStack_40;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    lStack_a8 = lStack_88;
    lStack_b0 = lStack_90;
    lStack_a0 = lStack_80;
    FUN_058124e4(&lStack_70,&lStack_b0,lVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    lStack_a8 = lStack_68;
    lStack_b0 = lStack_70;
    uStack_98 = uStack_58;
    lStack_a0 = lStack_60;
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10);
  }
  thunk_FUN_03d2eb70(uVar4,plVar5);
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


