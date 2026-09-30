/*
FUNCTION_NAME: FUN_032302cc
ENTRY_POINT: 032302cc
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_032302cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_06d9fd78;
  if ((bRam0000000007238007 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e52cd8);
    thunk_FUN_0159f088(PTR_DAT_06dc2390);
    thunk_FUN_0159f088(PTR_DAT_06d968b0);
    thunk_FUN_0159f088(PTR_DAT_06e01990);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    thunk_FUN_0159f088(PTR_DAT_06e38e70);
    thunk_FUN_0159f088(PTR_DAT_06e2ab50);
    thunk_FUN_0159f088(PTR_DAT_06dd1780);
    bRam0000000007238007 = 1;
  }
  plVar9 = (long *)(param_1 + 0x48);
  lVar10 = *plVar9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar6 = FUN_051d94d4(lVar10,0,0);
  if ((uVar6 & 1) != 0) {
    lVar10 = FUN_051e516c(param_1,0);
    puVar4 = PTR_DAT_06e2ab50;
    puVar3 = PTR_DAT_06e01990;
    puVar2 = PTR_DAT_06dd1780;
    if (lVar10 == 0) goto LAB_03230600;
    uVar7 = FUN_051e0500(lVar10,0);
    uVar7 = FUN_02526be4(*(undefined8 *)puVar2,uVar7,*(undefined8 *)puVar4,0);
    lVar10 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
    if (lVar10 == 0) goto LAB_03230600;
    FUN_051dfd8c(lVar10,uVar7,0);
    uVar7 = FUN_051df7a8(lVar10,0);
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    thunk_FUN_01656ef8(plVar9,uVar7);
    lVar10 = *(long *)(param_1 + 0x48);
    uVar7 = FUN_051e5130(param_1,0);
    if (lVar10 == 0) goto LAB_03230600;
    FUN_04f1b7a8(lVar10,uVar7,0,0);
    lVar10 = *plVar9;
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    if (lVar10 == 0) goto LAB_03230600;
    puVar8 = *(undefined4 **)(*(long *)PTR_DAT_06e50440 + 0xb8);
    FUN_04f1ab38(*puVar8,puVar8[1],puVar8[2],lVar10,0);
    lVar10 = *plVar9;
    if (DAT_0722a13f == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e3d060);
      DAT_0722a13f = '\x01';
    }
    if (lVar10 == 0) goto LAB_03230600;
    puVar8 = *(undefined4 **)(*(long *)PTR_DAT_06e3d060 + 0xb8);
    FUN_04f1af7c(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar10,0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar6 = FUN_051d2ac0(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    FUN_0322fea0(param_1,*(undefined8 *)(param_1 + 0x60));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_0386f860(*(long *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xb8),param_1,
                 *(undefined8 *)PTR_DAT_06dc2390);
    if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_0386f860(*(long *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 200),param_1,
                   *(undefined8 *)PTR_DAT_06d968b0);
      OVRPlugin__EraseSpaces(param_1);
      if (*(long *)(param_1 + 0x168) != 0) {
        iVar5 = FUN_048600e0(*(long *)(param_1 + 0x168),0);
        if (iVar5 < 1) {
          if (*(long *)(param_1 + 0x170) == 0) goto LAB_03230600;
          iVar5 = FUN_048600e0(*(long *)(param_1 + 0x170),0);
          if (iVar5 < 1) {
            if (*(long *)(param_1 + 0x178) == 0) goto LAB_03230600;
            iVar5 = FUN_048600e0(*(long *)(param_1 + 0x178),0);
            if (iVar5 < 1) {
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03230600;
              iVar5 = FUN_048600e0(*(long *)(param_1 + 0x180),0);
              if (iVar5 < 1) {
                return;
              }
            }
          }
        }
        puVar1 = PTR_DAT_06e38e70;
        if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_04866ea4(*(undefined8 *)puVar1,param_1,0);
        return;
      }
    }
  }
LAB_03230600:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


