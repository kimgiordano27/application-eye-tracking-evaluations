/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeObjectArray
ENTRY_POINT: 02e4be4c
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


byte ExitGames_Client_Photon_Protocol16__SerializeObjectArray(long param_1)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long in_stack_00000018;
  undefined8 in_stack_00000030;
  
  do {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar2 = HutongGames_PlayMaker_Actions_GetFsmQuaternion___ctor
                      (*(long *)(param_1 + 0x20),unaff_x20,&stack0x00000018,*unaff_x24);
    if ((uVar2 & 1) != 0) {
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar2 = FUN_021129b8();
      if ((uVar2 & 1) != 0) {
        bVar3 = 1;
        iVar4 = 4;
        goto LAB_02e4be94;
      }
    }
    uVar2 = FUN_04196ae0(&stack0x00000020,*unaff_x23);
    unaff_x20 = in_stack_00000030;
    if ((uVar2 & 1) == 0) {
      bVar3 = 0;
      iVar4 = 5;
LAB_02e4be94:
      FUN_04196adc(&stack0x00000020,*unaff_x21);
      return iVar4 == 4 & bVar3;
    }
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar1 = *unaff_x22;
    }
    param_1 = *(long *)(lVar1 + 0xb8);
  } while( true );
}


