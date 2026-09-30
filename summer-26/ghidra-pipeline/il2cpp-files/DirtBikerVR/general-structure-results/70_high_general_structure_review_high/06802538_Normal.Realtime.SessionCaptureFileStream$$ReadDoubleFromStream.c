/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$ReadDoubleFromStream
ENTRY_POINT: 06802538
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Normal_Realtime_SessionCaptureFileStream__ReadDoubleFromStream(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar3 = FUN_067ee6ac();
  if (lVar3 != 0) {
    _in_stack_00000020 = FUN_058b7208(lVar3,0,*(undefined8 *)PTR_DAT_084ad990);
    uVar4 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 7;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
      thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fcef68(unaff_x19 + 2,&stack0x00000020);
    }
    else {
      uVar5 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
      puVar2 = PTR_DAT_084adaf8;
      iVar1 = *(int *)(*unaff_x22 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar1 == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


