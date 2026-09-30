/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Hook$$get_Valid
ENTRY_POINT: 06d95058
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Manager_Hook__get_Valid(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  
  uVar2 = thunk_FUN_03cf5234(*unaff_x27);
  FUN_05088418(uVar2,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x58),uVar2);
  FUN_07145224();
  uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8f918);
  FUN_07b6f144();
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x68),uVar2);
  if (unaff_x21 == 0) {
    unaff_x21 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e7a2c8);
    FUN_06a4d5c4(unaff_x21,*(undefined8 *)PTR_DAT_08e7a2d0);
  }
  *(long *)(unaff_x19 + 0x20) = unaff_x21;
  thunk_FUN_03d233cc((long *)(unaff_x19 + 0x20),unaff_x21);
  lVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e697c0);
  FUN_052124c0(lVar3,*(undefined8 *)PTR_DAT_08e697c8);
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(lVar3);
      }
      *(long *)(unaff_x19 + 0x60) = lVar3;
      thunk_FUN_03d233cc((long *)(unaff_x19 + 0x60),lVar3);
      if ((*(long *)(unaff_x19 + 0x68) != 0) &&
         (lVar3 = FUN_07b72b68(*(long *)(unaff_x19 + 0x68),0), lVar3 != 0)) {
        uVar4 = FUN_06f73aa8(lVar3,*(undefined8 *)PTR_DAT_08e8f928,0);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = FUN_06f73aa8(lVar3,*(undefined8 *)PTR_DAT_08e8f920,0), (uVar4 & 1) == 0)) {
          uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e8f930);
          uVar2 = FUN_06f683f8(uVar2,lVar3,0);
          thunk_FUN_03ce5214(PTR_DAT_08e76350);
          uVar5 = thunk_FUN_03cf5234();
          FUN_07064ba8(uVar5,uVar2,0);
          uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e8f940);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar5,uVar2);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


