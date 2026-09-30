/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeByteArray
ENTRY_POINT: 0566ee28
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeByteArray(void)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  
  while (unaff_w26 = unaff_w26 + 100, !(bool)in_ZR) {
    FUN_05673594(unaff_w26 * unaff_w27,0);
    uVar1 = *unaff_x19;
    if (unaff_w27 < unaff_w23) {
      unaff_w27 = unaff_w27 + 1;
    }
    thunk_FUN_02e4aa50();
    if ((uVar1 & 1) == 0) {
      FUN_056735f0(0);
      thunk_FUN_02e4aa50();
      uVar3 = thunk_FUN_02e754b4();
      if (uVar3 == uVar1) {
        return;
      }
      FUN_05673640(0);
    }
    unaff_w25 = unaff_w25 + -1;
    in_ZR = unaff_w25 == 0;
  }
  if (unaff_w21 != -1) {
    iVar2 = thunk_FUN_02e6f048(0);
    if ((iVar2 - unaff_w22 < 0) || (unaff_w21 - (iVar2 - unaff_w22) < 1)) {
LAB_0566ef5c:
      if (*(int *)(*(long *)PTR_DAT_06a864a8 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0566f2dc();
      return;
    }
  }
  iVar2 = 0;
  do {
    uVar1 = *unaff_x19;
    thunk_FUN_02e4aa50();
    if ((uVar1 & 1) == 0) {
      FUN_056735f0(0);
      thunk_FUN_02e4aa50();
      uVar3 = thunk_FUN_02e754b4();
      if (uVar3 == uVar1) {
        return;
      }
      FUN_05673640(0);
    }
    uVar1 = iVar2 * -0x33333333 + 0x19999998;
    if ((uVar1 >> 3 | iVar2 * -0x60000000) < 0x6666667) {
      FUN_05672ebc(1,0);
      iVar4 = iVar2 % 10;
LAB_0566ef24:
      if ((unaff_w21 != -1) && (iVar4 == 0)) {
        iVar4 = thunk_FUN_02e6f048(0);
        if ((iVar4 - unaff_w22 < 0) || (unaff_w21 - (iVar4 - unaff_w22) < 1)) goto LAB_0566ef5c;
      }
    }
    else {
      if ((uVar1 >> 1 | iVar2 * -0x80000000) < 0x19999999) {
        FUN_05672ebc(0,0);
        iVar4 = 0;
        goto LAB_0566ef24;
      }
      thunk_FUN_02e6a19c(0);
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


