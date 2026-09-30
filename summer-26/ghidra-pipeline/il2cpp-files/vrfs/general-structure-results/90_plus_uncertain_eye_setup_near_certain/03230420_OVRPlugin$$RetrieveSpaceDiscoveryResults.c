/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceDiscoveryResults
ENTRY_POINT: 03230420
PROGRAM: vrfs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__RetrieveSpaceDiscoveryResults(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  long lVar6;
  long *unaff_x23;
  
  if (unaff_x21 != 0) {
    FUN_04f1b7a8();
    lVar6 = *unaff_x20;
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    if (lVar6 != 0) {
      puVar4 = *(undefined4 **)(*(long *)PTR_DAT_06e50440 + 0xb8);
      FUN_04f1ab38(*puVar4,puVar4[1],puVar4[2],lVar6,0);
      lVar6 = *unaff_x20;
      if (DAT_0722a13f == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e3d060);
        DAT_0722a13f = '\x01';
      }
      if (lVar6 != 0) {
        puVar4 = *(undefined4 **)(*(long *)PTR_DAT_06e3d060 + 0xb8);
        FUN_04f1af7c(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar6,0);
        uVar5 = *(undefined8 *)(unaff_x19 + 0x60);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar3 = FUN_051d2ac0(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          FUN_0322fea0();
        }
        if (*(long *)(unaff_x19 + 0xc0) != 0) {
          FUN_0386f860(*(long *)(unaff_x19 + 0xc0),*(undefined8 *)(unaff_x19 + 0xb8));
          if (*(long *)(unaff_x19 + 0xd0) != 0) {
            FUN_0386f860(*(long *)(unaff_x19 + 0xd0),*(undefined8 *)(unaff_x19 + 200));
            OVRPlugin__EraseSpaces();
            if (*(long *)(unaff_x19 + 0x168) != 0) {
              iVar2 = FUN_048600e0(*(long *)(unaff_x19 + 0x168),0);
              if (iVar2 < 1) {
                if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_03230600;
                iVar2 = FUN_048600e0(*(long *)(unaff_x19 + 0x170),0);
                if (iVar2 < 1) {
                  if (*(long *)(unaff_x19 + 0x178) == 0) goto LAB_03230600;
                  iVar2 = FUN_048600e0(*(long *)(unaff_x19 + 0x178),0);
                  if (iVar2 < 1) {
                    if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03230600;
                    iVar2 = FUN_048600e0(*(long *)(unaff_x19 + 0x180),0);
                    if (iVar2 < 1) {
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
      }
    }
  }
LAB_03230600:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


