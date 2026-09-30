/*
FUNCTION_NAME: OVRPlugin$$DiscoverSpaces
ENTRY_POINT: 03230344
PROGRAM: vrfs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__DiscoverSpaces(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long lVar9;
  long *unaff_x23;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06dd1780);
  *(undefined1 *)(unaff_x20 + 7) = 1;
  plVar8 = (long *)(unaff_x19 + 0x48);
  lVar9 = *plVar8;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar5 = FUN_051d94d4(lVar9,0,0);
  if ((uVar5 & 1) != 0) {
    lVar9 = FUN_051e516c();
    puVar3 = PTR_DAT_06e2ab50;
    puVar2 = PTR_DAT_06e01990;
    puVar1 = PTR_DAT_06dd1780;
    if (lVar9 == 0) goto LAB_03230600;
    uVar6 = FUN_051e0500(lVar9,0);
    uVar6 = FUN_02526be4(*(undefined8 *)puVar1,uVar6,*(undefined8 *)puVar3,0);
    lVar9 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_03230600;
    FUN_051dfd8c(lVar9,uVar6,0);
    uVar6 = FUN_051df7a8(lVar9,0);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
    thunk_FUN_01656ef8(plVar8,uVar6);
    lVar9 = *(long *)(unaff_x19 + 0x48);
    uVar6 = FUN_051e5130();
    if (lVar9 == 0) goto LAB_03230600;
    FUN_04f1b7a8(lVar9,uVar6,0,0);
    lVar9 = *plVar8;
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    if (lVar9 == 0) goto LAB_03230600;
    puVar7 = *(undefined4 **)(*(long *)PTR_DAT_06e50440 + 0xb8);
    FUN_04f1ab38(*puVar7,puVar7[1],puVar7[2],lVar9,0);
    lVar9 = *plVar8;
    if (DAT_0722a13f == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e3d060);
      DAT_0722a13f = '\x01';
    }
    if (lVar9 == 0) goto LAB_03230600;
    puVar7 = *(undefined4 **)(*(long *)PTR_DAT_06e3d060 + 0xb8);
    FUN_04f1af7c(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar9,0);
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar5 = FUN_051d2ac0(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    FUN_0322fea0();
  }
  if (*(long *)(unaff_x19 + 0xc0) != 0) {
    FUN_0386f860(*(long *)(unaff_x19 + 0xc0),*(undefined8 *)(unaff_x19 + 0xb8));
    if (*(long *)(unaff_x19 + 0xd0) != 0) {
      FUN_0386f860(*(long *)(unaff_x19 + 0xd0),*(undefined8 *)(unaff_x19 + 200));
      OVRPlugin__EraseSpaces();
      if (*(long *)(unaff_x19 + 0x168) != 0) {
        iVar4 = FUN_048600e0(*(long *)(unaff_x19 + 0x168),0);
        if (iVar4 < 1) {
          if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_03230600;
          iVar4 = FUN_048600e0(*(long *)(unaff_x19 + 0x170),0);
          if (iVar4 < 1) {
            if (*(long *)(unaff_x19 + 0x178) == 0) goto LAB_03230600;
            iVar4 = FUN_048600e0(*(long *)(unaff_x19 + 0x178),0);
            if (iVar4 < 1) {
              if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03230600;
              iVar4 = FUN_048600e0(*(long *)(unaff_x19 + 0x180),0);
              if (iVar4 < 1) {
                return;
              }
            }
          }
        }
        puVar1 = PTR_DAT_06e38e70;
        if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_04866ea4(*(undefined8 *)puVar1);
        return;
      }
    }
  }
LAB_03230600:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


