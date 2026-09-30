/*
FUNCTION_NAME: FUN_061b8e64
ENTRY_POINT: 061b8e64
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_061b8e64(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0739e496 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb3300);
    FUN_02fe925c(PTR_DAT_06fd0638);
    DAT_0739e496 = 1;
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  }
  switch(param_2) {
  case 1:
switchD_061b8edc_caseD_1:
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x108) = iVar2;
    *(undefined4 *)(param_1 + 0x104) = 2;
    if (0x7ffffffd < iVar2) {
LAB_061b914c:
      uVar3 = FUN_02fe94f8();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,*(undefined8 *)PTR_DAT_06fd0638);
    }
    iVar2 = iVar2 + 2;
    break;
  case 2:
  case 3:
  case 0x13:
  case 0x14:
switchD_061b8edc_caseD_2:
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x108) = iVar2;
    *(undefined4 *)(param_1 + 0x104) = 4;
    if (0x7ffffffb < iVar2) goto LAB_061b914c;
    iVar2 = iVar2 + 4;
    break;
  case 4:
  case 5:
  case 8:
  case 0x12:
switchD_061b8edc_caseD_4:
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x108) = iVar2;
    *(undefined4 *)(param_1 + 0x104) = 8;
    if (0x7ffffff7 < iVar2) goto LAB_061b914c;
    iVar2 = iVar2 + 8;
    break;
  case 6:
  case 7:
switchD_061b8edc_caseD_6:
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x104) = 1;
    *(int *)(param_1 + 0x108) = iVar2;
    if (iVar2 == 0x7fffffff) goto LAB_061b914c;
    iVar2 = iVar2 + 1;
    break;
  case 9:
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x108) = iVar2;
    *(undefined4 *)(param_1 + 0x104) = 0x10;
    if (0x7fffffef < iVar2) goto LAB_061b914c;
    iVar2 = iVar2 + 0x10;
    break;
  case 10:
  case 0xb:
switchD_061b8edc_caseD_a:
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x20);
    iVar1 = FUN_061b6918(param_1);
LAB_061b9098:
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x104) = iVar1;
    if (SCARRY4(iVar2,iVar1)) goto LAB_061b914c;
    goto LAB_061b90a8;
  case 0xc:
  case 0xf:
  case 0x17:
  case 0x1b:
switchD_061b8edc_caseD_c:
    iVar1 = FUN_061b6918(param_1);
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x104) = iVar1;
    *(int *)(param_1 + 0x108) = iVar2;
    if (SCARRY4(iVar2,iVar1)) goto LAB_061b914c;
LAB_061b90a8:
    iVar2 = iVar2 + iVar1;
    break;
  case 0xd:
  case 0x10:
  case 0x16:
    iVar2 = FUN_061b6918(param_1);
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x104) = iVar2;
    *(int *)(param_1 + 0x108) = iVar1;
    if (SCARRY4(iVar1,iVar2)) goto LAB_061b914c;
    *(int *)(param_1 + 0x20) = iVar1 + iVar2;
    if (((param_4 & 1) != 0) && (*(char *)(param_1 + 0x139) != '\0')) {
      if (*(int *)(param_1 + 0x28) <= iVar1 + iVar2 + -1) {
        FUN_061b65d8(param_1,0xffffffff);
      }
      uVar3 = FUN_061aeebc(param_1,param_2);
      if (*(int *)(*(long *)PTR_DAT_06fb3300 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06fb3300);
      }
      System_Net_FtpWebRequest__FinishRequestStage(uVar3,0,1,0);
      *(undefined8 *)(param_1 + 0x118) = uVar3;
      thunk_FUN_03048534(param_1 + 0x118,uVar3);
    }
    goto LAB_061b90b0;
  case 0xe:
  case 0x11:
  case 0x18:
    uVar3 = FUN_061b77e0(param_1,0x11,param_3 & 1,param_4 & 1);
    return uVar3;
  case 0x15:
  case 0x19:
  case 0x1a:
switchD_061b8edc_caseD_15:
    uVar3 = FUN_061b5c7c(param_1);
    uVar4 = thunk_FUN_03037804(PTR_DAT_06fd0638);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar3,uVar4);
  default:
    switch(param_2) {
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
      FUN_061b5c44(param_1,2,param_2);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x20);
      iVar1 = FUN_061b9184(param_1,param_2);
      goto LAB_061b9098;
    default:
      goto switchD_061b8edc_caseD_15;
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x8b:
      goto switchD_061b8edc_caseD_4;
    case 0x84:
    case 0x85:
      goto switchD_061b8edc_caseD_c;
    case 0x86:
    case 0x88:
      goto switchD_061b8edc_caseD_6;
    case 0x87:
      goto switchD_061b8edc_caseD_a;
    case 0x89:
      goto switchD_061b8edc_caseD_1;
    case 0x8a:
      goto switchD_061b8edc_caseD_2;
    case 0x8c:
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x20);
      System_Xml_XmlReader__Dispose(param_1);
      goto LAB_061b90b0;
    }
  }
  *(int *)(param_1 + 0x20) = iVar2;
LAB_061b90b0:
  if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x20) + -1) {
    FUN_061b65d8(param_1,0xffffffff);
  }
  return 3;
}


