/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$get_GlobalMeshMaterial
ENTRY_POINT: 057c87d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x057c89d4) */

void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__get_GlobalMeshMaterial(void)

{
  long lVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  long *plVar4;
  long lVar5;
  char cStack000000000000000c;
  
  FUN_02fe925c(PTR_DAT_06f9d048);
  *(undefined1 *)(unaff_x21 + 0x235) = 1;
  cStack000000000000000c = '\0';
  lVar3 = unaff_x20[5];
  if (lVar3 != 0) {
    cStack000000000000000c = '\0';
    FUN_05b54040(lVar3,&stack0x0000000c,0);
    unaff_x20[9] = 0;
    *(undefined1 *)(unaff_x20 + 8) = 1;
    thunk_FUN_03048534(unaff_x20 + 9,0);
    FUN_057c7f80();
    plVar4 = unaff_x20 + 0xd;
    if (*plVar4 != 0) {
      if (*(int *)(*(long *)PTR_DAT_06f9d040 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar5 = *(long *)PTR_DAT_06f9d038;
      lVar1 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar1 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      plVar2 = (long *)**(long **)(lVar1 + 0xb8);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      (**(code **)(*plVar2 + 0x188))(plVar2,*plVar4,0,*(undefined8 *)(*plVar2 + 400));
    }
    *plVar4 = 0;
    thunk_FUN_03048534(plVar4,0);
    plVar4 = unaff_x20 + 0xe;
    if (*plVar4 != 0) {
      if (*(int *)(*(long *)PTR_DAT_06f9d048 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar5 = *(long *)PTR_DAT_06f9d030;
      lVar1 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar1 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      plVar2 = (long *)**(long **)(lVar1 + 0xb8);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      (**(code **)(*plVar2 + 0x188))(plVar2,*plVar4,0,*(undefined8 *)(*plVar2 + 400));
    }
    *plVar4 = 0;
    thunk_FUN_03048534(plVar4,0);
    if (cStack000000000000000c != '\0') {
      thunk_FUN_0301ce48(lVar3,0);
    }
  }
  (**(code **)(*unaff_x20 + 0x218))();
  return;
}


