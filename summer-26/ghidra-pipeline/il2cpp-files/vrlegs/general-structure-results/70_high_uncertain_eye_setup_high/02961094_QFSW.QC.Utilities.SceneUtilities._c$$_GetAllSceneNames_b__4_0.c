/*
FUNCTION_NAME: QFSW.QC.Utilities.SceneUtilities.<>c$$<GetAllSceneNames>b__4_0
ENTRY_POINT: 02961094
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029611fc) */

void QFSW_QC_Utilities_SceneUtilities_<>c__<GetAllSceneNames>b__4_0
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  char cStack000000000000001c;
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
FUN_029610c8:
      plVar3 = (long *)(*(code *)*puVar2)();
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_03cdcac0 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03cdcac0
           )) {
          uVar4 = FUN_02ecdd94();
          uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
          cStack000000000000001c = '\0';
          FUN_027e0bd8(uVar6,&stack0x0000001c,0);
          if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_01b5f01c(*(long *)(unaff_x19 + 0x20),uVar4,*(undefined8 *)PTR_DAT_03d06150);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0367a6ec(*(undefined8 *)PTR_DAT_03d06158,0);
          if (cStack000000000000001c != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
          }
          lVar5 = *(long *)(unaff_x19 + 0x10);
          uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd7348);
          FUN_026b4574();
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02ecdce8(lVar5,uVar4,*(undefined8 *)(unaff_x19 + 0x10),0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_01a472ec();
      goto FUN_029610c8;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


