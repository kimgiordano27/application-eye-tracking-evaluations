/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeByteArray
ENTRY_POINT: 02e4bde0
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


byte ExitGames_Client_Photon_Protocol16__SerializeByteArray(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar3 = PTR_DAT_06e43568;
  puVar2 = PTR_DAT_06e18ce8;
  puVar1 = PTR_DAT_06dfae90;
  FUN_04fb5cf4(param_2,**(undefined8 **)(param_1 + 0x570));
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000030 = in_stack_00000010;
  do {
    do {
      uVar5 = FUN_04196ae0(&stack0x00000020,*(undefined8 *)puVar3);
      uVar4 = in_stack_00000030;
      if ((uVar5 & 1) == 0) {
        bVar7 = 0;
        iVar8 = 5;
        goto LAB_02e4be94;
      }
      lVar6 = *unaff_x22;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar6 = *unaff_x22;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar5 = HutongGames_PlayMaker_Actions_GetFsmQuaternion___ctor
                        (lVar6,uVar4,&stack0x00000018,*(undefined8 *)puVar1);
    } while ((uVar5 & 1) == 0);
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar5 = FUN_021129b8();
  } while ((uVar5 & 1) == 0);
  bVar7 = 1;
  iVar8 = 4;
LAB_02e4be94:
  FUN_04196adc(&stack0x00000020,*(undefined8 *)puVar2);
  return iVar8 == 4 & bVar7;
}


