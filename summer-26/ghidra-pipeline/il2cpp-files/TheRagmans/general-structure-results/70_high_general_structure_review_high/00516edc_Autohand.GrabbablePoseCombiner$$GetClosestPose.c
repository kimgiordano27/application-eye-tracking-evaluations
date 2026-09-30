/*
FUNCTION_NAME: Autohand.GrabbablePoseCombiner$$GetClosestPose
ENTRY_POINT: 00516edc
PROGRAM: TheRagmans-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Autohand_GrabbablePoseCombiner__GetClosestPose(void)

{
  void *pvVar1;
  void *pvVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  char *pcVar7;
  size_t sVar8;
  uint *unaff_x19;
  undefined8 uVar9;
  uint unaff_w20;
  uint uVar10;
  char *__s;
  long unaff_x21;
  long lVar11;
  int unaff_w22;
  long unaff_x23;
  void *unaff_x24;
  undefined1 unaff_w25;
  void *unaff_x26;
  byte in_stack_00000000;
  size_t in_stack_00000008;
  void *in_stack_00000010;
  byte in_stack_00000018;
  void *in_stack_00000028;
  
  do {
    unaff_w20 = tolower(unaff_w20);
    *(char *)((long)unaff_x26 + unaff_x21) = (char)unaff_w20;
    do {
      if ((unaff_w20 & 0xff) == 0x2d) {
        *(undefined1 *)((long)unaff_x26 + unaff_x21) = unaff_w25;
      }
      if (unaff_x23 == unaff_x21) {
        lVar11 = 0;
        uVar10 = 0;
        pcVar7 = (char *)0x1;
        goto LAB_00516f24;
      }
      unaff_x21 = unaff_x21 + 1;
      unaff_x26 = unaff_x24;
      if ((in_stack_00000000 & 1) != 0) {
        unaff_x26 = in_stack_00000010;
      }
      unaff_w20 = (uint)*(byte *)((long)unaff_x26 + unaff_x21);
      iVar4 = isalpha((uint)*(byte *)((long)unaff_x26 + unaff_x21));
    } while (iVar4 == 0);
  } while( true );
LAB_00516f24:
  do {
    lVar11 = lVar11 + 1;
    __s = pcVar7;
    while ((char *)0x6 < __s) {
      sVar5 = strlen(__s);
      sVar8 = (ulong)(in_stack_00000000 >> 1);
      if ((in_stack_00000000 & 1) != 0) {
        sVar8 = in_stack_00000008;
      }
      if ((sVar5 == sVar8) && (iVar4 = FUN_004e92cc(), iVar4 == 0)) {
        *unaff_x19 = uVar10;
        goto LAB_00516fa0;
      }
      __s = *(char **)(&UNK_015509d8 + lVar11 * 8);
      lVar11 = lVar11 + 1;
      if (lVar11 == 0x25) goto LAB_00516fa0;
    }
    pcVar7 = *(char **)(&UNK_015509d8 + lVar11 * 8);
    uVar10 = (uint)__s;
  } while (lVar11 != 0x24);
LAB_00516fa0:
  bVar3 = in_stack_00000000;
  sVar8 = (ulong)(in_stack_00000000 >> 1);
  pvVar2 = (void *)((ulong)&stack0x00000000 | 1);
  if ((in_stack_00000000 & 1) != 0) {
    sVar8 = in_stack_00000008;
    pvVar2 = in_stack_00000010;
  }
  if (4 < (long)sVar8) {
    pvVar1 = (void *)((long)pvVar2 + sVar8);
    pvVar6 = pvVar2;
    do {
      if ((sVar8 - 4 == 0) || (pvVar6 = memchr(pvVar6,0x75,sVar8 - 4), pvVar6 == (void *)0x0))
      break;
      iVar4 = memcmp(pvVar6,"utf_8",5);
      if (iVar4 == 0) {
        if ((pvVar6 != pvVar1) && ((long)pvVar6 - (long)pvVar2 != -1)) {
          *unaff_x19 = *unaff_x19 | 0x10000000;
        }
        break;
      }
      pvVar6 = (void *)((long)pvVar6 + 1);
      sVar8 = (long)pvVar1 - (long)pvVar6;
    } while (4 < (long)sVar8);
  }
  if ((unaff_w22 == 0) || (*unaff_x19 != 0xffffffff)) {
    uVar9 = 0;
  }
  else {
    pvVar2 = (void *)((ulong)&stack0x00000018 | 1);
    if ((in_stack_00000018 & 1) != 0) {
      pvVar2 = in_stack_00000028;
    }
    uVar9 = FUN_005644c0(pvVar2);
    bVar3 = in_stack_00000000;
  }
  if ((bVar3 & 1) != 0) {
    operator_delete(in_stack_00000010);
  }
  if ((in_stack_00000018 & 1) != 0) {
    operator_delete(in_stack_00000028);
  }
  return uVar9;
}


