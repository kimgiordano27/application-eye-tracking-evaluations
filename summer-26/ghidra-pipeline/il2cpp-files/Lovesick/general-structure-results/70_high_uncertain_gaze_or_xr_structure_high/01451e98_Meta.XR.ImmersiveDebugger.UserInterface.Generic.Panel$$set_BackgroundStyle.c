/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$set_BackgroundStyle
ENTRY_POINT: 01451e98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__set_BackgroundStyle(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x1b0));
  thunk_FUN_00d48444(StringLiteral_1006);
  thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033ef670);
  thunk_FUN_00d48444(PTR_DAT_033f6548);
  thunk_FUN_00d48444(PTR_DAT_033f62d0);
  *(undefined1 *)(unaff_x21 + 0xa76) = 1;
  lVar1 = thunk_FUN_00d62348(*unaff_x22);
  if ((lVar1 != 0) && (FUN_017b46ec(lVar1,0), unaff_x23 != 0)) {
    *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(unaff_x23 + 0x18);
    if (unaff_x19 != 0) {
      *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(unaff_x19 + 0x18);
      uVar6 = FUN_02688390(&stack0x00000010,0);
      uVar7 = FUN_026883a0(&stack0x00000010,0);
      FUN_00ac4f98(uVar6,uVar7,0);
      fVar2 = (float)FUN_02688390(&stack0x00000010,0);
      fVar3 = (float)FUN_026884c4(&stack0x00000010,0);
      uVar6 = FUN_026883a0(&stack0x00000010,0);
      FUN_00ac4f98(fVar2 + fVar3,uVar6,0);
      uVar6 = FUN_02688390(&stack0x00000010,0);
      fVar2 = (float)FUN_026883a0(&stack0x00000010,0);
      fVar3 = (float)FUN_026884d4(&stack0x00000010,0);
      FUN_00ac4f98(uVar6,fVar2 + fVar3,0);
      fVar2 = (float)FUN_02688390(&stack0x00000010,0);
      fVar3 = (float)FUN_026884c4(&stack0x00000010,0);
      fVar4 = (float)FUN_026883a0(&stack0x00000010,0);
      fVar5 = (float)FUN_026884d4(&stack0x00000010,0);
      FUN_00ac4f98(fVar2 + fVar3,fVar4 + fVar5,0);
      uVar6 = FUN_02688390();
      uVar7 = FUN_026883a0();
      if (unaff_x20 != 0) {
        FUN_00bbed00(uVar6,uVar7);
        fVar2 = (float)FUN_02688390();
        fVar3 = (float)FUN_026884c4();
        uVar6 = FUN_026883a0();
        FUN_00bbed00(fVar2 + fVar3,uVar6);
        uVar6 = FUN_02688390();
        fVar2 = (float)FUN_026883a0();
        fVar3 = (float)FUN_026884d4();
        FUN_00bbed00(uVar6,fVar2 + fVar3);
        fVar2 = (float)FUN_02688390();
        fVar3 = (float)FUN_026884c4();
        fVar4 = (float)FUN_026883a0();
        fVar5 = (float)FUN_026884d4();
        FUN_00bbed00(fVar2 + fVar3,fVar4 + fVar5);
        FUN_00ac20f0();
        FUN_00ac20f0();
        FUN_00ac20f0();
        FUN_00ac20f0();
        FUN_00ac20f0();
        FUN_00ac20f0();
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


