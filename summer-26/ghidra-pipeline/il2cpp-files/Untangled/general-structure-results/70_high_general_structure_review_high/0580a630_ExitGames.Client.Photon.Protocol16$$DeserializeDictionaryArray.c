/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeDictionaryArray
ENTRY_POINT: 0580a630
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint ExitGames_Client_Photon_Protocol16__DeserializeDictionaryArray
               (long param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long lStack_38;
  
  if ((bRam00000000071c5f4f & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d36fa0);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(PTR_DAT_06d5dbc0);
    bRam00000000071c5f4f = 1;
  }
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  lVar6 = FUN_05649850(0);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 6) {
      lVar6 = FUN_05649850(0);
      if (lVar6 == 0) goto LAB_0580a800;
      if (*(int *)(lVar6 + 0x18) != 4) {
        lVar6 = *(long *)(param_1 + 0x120);
        if (lVar6 == 0) goto LAB_0580a800;
        uVar5 = (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),param_2,param_3,param_4,
                           *(undefined8 *)(lVar6 + 0x28));
        goto LAB_0580a7e4;
      }
    }
    puVar3 = PTR_DAT_06d5dbc0;
    puVar2 = PTR_DAT_06d36fa0;
    puVar1 = PTR_DAT_06d01eb0;
    uStack_80 = *param_3;
    uStack_4c = *(undefined8 *)(param_3 + 0xe);
    uStack_74 = (undefined4)*(undefined8 *)(param_3 + 4);
    uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
    uStack_7c = (undefined4)*(undefined8 *)(param_3 + 2);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
    uStack_64 = (undefined4)*(undefined8 *)(param_3 + 8);
    uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
    uStack_6c = (undefined4)*(undefined8 *)(param_3 + 6);
    uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
    uStack_54 = (undefined4)*(undefined8 *)(param_3 + 0xc);
    uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
    uStack_5c = (undefined4)*(undefined8 *)(param_3 + 10);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
    lStack_38 = 0;
    thunk_FUN_02f411dc(&lStack_38,0);
    lStack_38 = *(long *)(param_1 + 0x120);
    thunk_FUN_02f411dc(&lStack_38);
    lVar6 = lStack_38;
    uVar7 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar7 = FUN_056109c0(uVar7,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar2);
    }
    uVar4 = thunk_FUN_02f337c0(uVar7,0);
    if (lVar6 != 0) {
      uVar5 = (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),param_2,&uStack_80,uVar4,
                         *(undefined8 *)(lVar6 + 0x28));
      *param_3 = uStack_80;
      *(ulong *)(param_3 + 4) = CONCAT44(uStack_70,uStack_74);
      *(ulong *)(param_3 + 2) = CONCAT44(uStack_78,uStack_7c);
      *(ulong *)(param_3 + 8) = CONCAT44(uStack_60,uStack_64);
      *(ulong *)(param_3 + 6) = CONCAT44(uStack_68,uStack_6c);
      *(ulong *)(param_3 + 0xc) = CONCAT44(uStack_50,uStack_54);
      *(ulong *)(param_3 + 10) = CONCAT44(uStack_58,uStack_5c);
      *(undefined8 *)(param_3 + 0xe) = uStack_4c;
LAB_0580a7e4:
      return uVar5 & 1;
    }
  }
LAB_0580a800:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


