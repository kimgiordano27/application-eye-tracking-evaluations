/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeDictionaryArray
ENTRY_POINT: 0342872c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeDictionaryArray(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x21;
  long lVar10;
  undefined8 *unaff_x22;
  long *unaff_x25;
  
  uVar4 = FUN_0332aed4();
  lVar5 = thunk_FUN_01c496e0(*unaff_x22);
  FUN_02d4f8ec(lVar5,(ulong)uVar4,*unaff_x21);
  *(long *)(unaff_x19 + 0x10) = lVar5;
  puVar3 = Method_System_Collections_Generic_List<GameObject>_get_Capacity__;
  puVar2 = Method_System_Collections_Generic_List<GOAPDriver_DemoHelicopter>_Remove__;
  if (0 < (int)uVar4) {
    lVar10 = 0;
    do {
      FUN_0332aed8(lVar10,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x25);
      }
      uVar6 = FUN_033f4708();
      uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
      FUN_0342658c(uVar7,uVar6);
      if (lVar5 == 0) {
LAB_03428870:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_03428870;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_02d5004c(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      if ((ulong)uVar4 - 1 == lVar10) break;
      lVar5 = *(long *)(unaff_x19 + 0x10);
      lVar10 = lVar10 + 1;
    } while( true );
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar6 = FUN_033f478c();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
  return;
}


