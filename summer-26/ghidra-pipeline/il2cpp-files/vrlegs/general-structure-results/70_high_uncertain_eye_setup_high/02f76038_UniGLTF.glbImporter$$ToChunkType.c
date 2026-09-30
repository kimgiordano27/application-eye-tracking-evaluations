/*
FUNCTION_NAME: UniGLTF.glbImporter$$ToChunkType
ENTRY_POINT: 02f76038
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f760dc) */

long UniGLTF_glbImporter__ToChunkType(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  char cStack000000000000000c;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar1 = FUN_02f6a37c(param_1);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0xa2) = 1;
    uVar8 = FUN_02f79d4c(0);
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d25100);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar8,uVar6);
  }
  if (lVar1 != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar8,&stack0x0000000c,0);
    if (*(char *)(unaff_x19 + 0xa1) != '\0') {
      uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d24f10);
      lVar3 = thunk_FUN_01a89d6c(lVar1,uVar8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar1,uVar8);
      }
      lVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d24f10);
      uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d24f10);
      plVar4 = (long *)thunk_FUN_01a89d6c(lVar1,uVar8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar1,uVar8);
      }
      lVar1 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02f7619c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar4,lVar3,0);
LAB_02f7619c:
      (*(code *)*puVar5)(plVar4,3,puVar5[1]);
      if (*(long *)(unaff_x19 + 0xa8) != 0) {
        FUN_026779dc(*(long *)(unaff_x19 + 0xa8),0);
      }
      thunk_FUN_01a6ca08(PTR_DAT_03d24c20);
      uVar8 = thunk_FUN_01a89e68();
      FUN_02f79548(uVar8,0);
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d25100);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,uVar6);
    }
    *(long *)(unaff_x19 + 0xd0) = lVar1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(unaff_x19 + 0xd0),lVar1);
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
    }
  }
  return lVar1;
}


