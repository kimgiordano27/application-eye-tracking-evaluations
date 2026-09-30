/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Image$$Setup
ENTRY_POINT: 06d94ee4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Image__Setup
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8f900);
    FUN_03c8f898(PTR_DAT_08e7a2d0);
    FUN_03c8f898(PTR_DAT_08e7a2c8);
    FUN_03c8f898(PTR_DAT_08e69a78);
    FUN_03c8f898(PTR_DAT_08e8f910);
    FUN_03c8f898(PTR_DAT_08e8f8f8);
    FUN_03c8f898(PTR_DAT_08e697c8);
    FUN_03c8f898(PTR_DAT_08e8f908);
    FUN_03c8f898(PTR_DAT_08e8f8f0);
    FUN_03c8f898(PTR_DAT_08e697c0);
    FUN_03c8f898(PTR_DAT_08e73ce0);
    FUN_03c8f898(PTR_DAT_08e8f918);
    FUN_03c8f898(PTR_DAT_08e8f920);
    FUN_03c8f898(PTR_DAT_08e8f928);
    *(undefined1 *)(unaff_x23 + 0xa76) = 1;
  }
  uVar2 = thunk_FUN_03cf5234(*unaff_x28);
  FUN_07145224(uVar2,0);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(param_2 + 0x10),uVar2);
  uVar2 = thunk_FUN_03cf5234(*unaff_x28);
  FUN_07145224(uVar2,0);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(param_2 + 0x18),uVar2);
  uVar2 = thunk_FUN_03cf5234(*unaff_x26);
  FUN_052124c0(uVar2,*unaff_x24);
  *(undefined8 *)(param_2 + 0x38) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(param_2 + 0x38),uVar2);
  uVar2 = thunk_FUN_03cf5234(*unaff_x29);
  FUN_07bb2454(uVar2,0);
  *(undefined8 *)(param_2 + 0x40) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(param_2 + 0x40),uVar2);
  uVar2 = thunk_FUN_03cf5234(*unaff_x27);
  FUN_05088418(uVar2,*unaff_x25);
  *(undefined8 *)(param_2 + 0x50) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(param_2 + 0x50),uVar2);
  uVar2 = thunk_FUN_03cf5234(*unaff_x27);
  FUN_05088418(uVar2,*unaff_x25);
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(param_2 + 0x58),uVar2);
  FUN_07145224(param_2,0);
  uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8f918);
  FUN_07b6f144(uVar2,param_3,0);
  *(undefined8 *)(param_2 + 0x68) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(param_2 + 0x68),uVar2);
  if (unaff_x21 == 0) {
    unaff_x21 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e7a2c8);
    FUN_06a4d5c4(unaff_x21,*(undefined8 *)PTR_DAT_08e7a2d0);
  }
  *(long *)(param_2 + 0x20) = unaff_x21;
  thunk_FUN_03d233cc((long *)(param_2 + 0x20),unaff_x21);
  lVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e697c0);
  FUN_052124c0(lVar3,*(undefined8 *)PTR_DAT_08e697c8);
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_08e69a78;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = param_4;
        thunk_FUN_03d233cc(puVar4,param_4);
      }
      else {
        FUN_05212cf4(lVar3,param_4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                    );
      }
      *(long *)(param_2 + 0x60) = lVar3;
      thunk_FUN_03d233cc((long *)(param_2 + 0x60),lVar3);
      if ((*(long *)(param_2 + 0x68) != 0) &&
         (lVar3 = FUN_07b72b68(*(long *)(param_2 + 0x68),0), lVar3 != 0)) {
        uVar5 = FUN_06f73aa8(lVar3,*(undefined8 *)PTR_DAT_08e8f928,0);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = FUN_06f73aa8(lVar3,*(undefined8 *)PTR_DAT_08e8f920,0), (uVar5 & 1) == 0)) {
          uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e8f930);
          uVar2 = FUN_06f683f8(uVar2,lVar3,0);
          thunk_FUN_03ce5214(PTR_DAT_08e76350);
          uVar6 = thunk_FUN_03cf5234();
          FUN_07064ba8(uVar6,uVar2,0);
          uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e8f940);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar6,uVar2);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


