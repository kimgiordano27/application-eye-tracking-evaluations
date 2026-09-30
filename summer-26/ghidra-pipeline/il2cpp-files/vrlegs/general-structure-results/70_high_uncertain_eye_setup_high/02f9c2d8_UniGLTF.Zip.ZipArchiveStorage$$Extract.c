/*
FUNCTION_NAME: UniGLTF.Zip.ZipArchiveStorage$$Extract
ENTRY_POINT: 02f9c2d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f9c4e0) */
/* WARNING: Removing unreachable block (ram,0x02f9c458) */

void UniGLTF_Zip_ZipArchiveStorage__Extract(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x21;
  char cStack000000000000000c;
  
  FUN_01ab69ac(PTR_DAT_03cbec50);
  *(undefined1 *)(unaff_x19 + 0xdcd) = 1;
  iVar1 = thunk_FUN_01aa519c(unaff_x21 + 0x118,0,0,0);
  if (iVar1 == 1) {
    thunk_FUN_01a6ca08(PTR_DAT_03cd81b0);
    FUN_01876390();
    uVar4 = FUN_02f9c61c();
  }
  else {
    uVar2 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x21 + 0xa8),*(undefined8 *)PTR_DAT_03cc41b0,0);
    if (((((uVar2 & 1) == 0) &&
         (uVar2 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x21 + 0xa8),
                                     *(undefined8 *)PTR_DAT_03d18ac0,0), (uVar2 & 1) == 0)) &&
        (uVar2 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x21 + 0xa8),
                                    *(undefined8 *)PTR_DAT_03ccf678,0), (uVar2 & 1) == 0)) &&
       ((uVar2 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x21 + 0xa8),
                                    *(undefined8 *)PTR_DAT_03d18ac8,0), (uVar2 & 1) == 0 &&
        (*(long *)(unaff_x21 + 0xa8) != 0)))) {
      if (((*(long *)(unaff_x21 + 0x68) != -1) || (*(char *)(unaff_x21 + 0xe0) != '\0')) ||
         ((*(char *)(unaff_x21 + 0x4a) != '\0' || (*(char *)(unaff_x21 + 0x98) == '\0')))) {
        lVar3 = FUN_02f9b6c0();
        if ((lVar3 != 0) && (*(char *)(unaff_x21 + 0xe0) == '\0')) {
          uVar4 = FUN_025c2a9c(lVar3,0);
          uVar2 = FUN_025bd4ac(uVar4,*(undefined8 *)PTR_DAT_03cbec50,0);
          if ((uVar2 & 1) != 0) {
            thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
            uVar4 = thunk_FUN_01a89e68();
            uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d25b88);
            FUN_0276a4a8(uVar4,uVar6,0);
            goto LAB_02f9c4ac;
          }
        }
        uVar4 = *(undefined8 *)(unaff_x21 + 0x128);
        cStack000000000000000c = '\0';
        FUN_027e0bd8(uVar4,&stack0x0000000c,0);
        if (*(char *)(unaff_x21 + 0x125) != '\0') {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
          uVar4 = thunk_FUN_01a89e68();
          uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d24fd0);
          FUN_0276a4a8(uVar4,uVar6,0);
          uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d25b80);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar4,uVar6);
        }
        lVar3 = *(long *)(unaff_x21 + 0x110);
        if (lVar3 == 0) {
          *(undefined8 *)(unaff_x21 + 0xb0) = *(undefined8 *)(unaff_x21 + 0xa8);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined1 *)(unaff_x21 + 0x11c) = 1;
          lVar3 = UniGLTF_GlbLowLevelParser__FixNameUnique();
        }
        if (cStack000000000000000c != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
        }
        if (lVar3 != 0) {
          FUN_02eb0cb0(lVar3,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_01a6ca08(PTR_DAT_03d1fae0);
      uVar4 = thunk_FUN_01a89e68();
      puVar5 = PTR_DAT_03d25b90;
    }
    else {
      thunk_FUN_01a6ca08(PTR_DAT_03d1fae0);
      uVar4 = thunk_FUN_01a89e68();
      puVar5 = PTR_DAT_03d250d8;
    }
    uVar6 = thunk_FUN_01a6ca08(puVar5);
    FUN_02f7a954(uVar4,uVar6,0);
  }
LAB_02f9c4ac:
  uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d25b80);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar6);
}


