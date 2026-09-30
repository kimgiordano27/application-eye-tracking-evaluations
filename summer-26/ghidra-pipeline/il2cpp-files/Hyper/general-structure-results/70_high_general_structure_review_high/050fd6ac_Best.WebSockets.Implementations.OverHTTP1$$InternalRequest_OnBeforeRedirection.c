/*
FUNCTION_NAME: Best.WebSockets.Implementations.OverHTTP1$$InternalRequest_OnBeforeRedirection
ENTRY_POINT: 050fd6ac
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Best_WebSockets_Implementations_OverHTTP1__InternalRequest_OnBeforeRedirection(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  int unaff_w21;
  
  FUN_050c5a40();
  *(int *)(unaff_x19 + 0x18) = unaff_w21;
  if (unaff_w21 < 6) {
    if (1 < unaff_w21 - 1U) {
      if (unaff_w21 != 4) {
LAB_050fd808:
        uVar1 = FUN_08d770a4(&stack0x0000000c,0);
        uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac30de8);
        uVar1 = FUN_08bcc3c0(uVar3,uVar1,0);
        thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
        uVar3 = thunk_FUN_04983f60();
        uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac30df0);
        FUN_08cbd67c(uVar3,uVar1,uVar4,0);
        uVar1 = thunk_FUN_049ae08c(PTR_DAT_0ac30de0);
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar3,uVar1);
      }
      uVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac209a8);
      FUN_051147ec();
      goto LAB_050fd790;
    }
  }
  else {
    if (unaff_w21 == 8) {
      uVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac20750);
      FUN_050e1e10();
      goto LAB_050fd790;
    }
    if (unaff_w21 == 7) {
      lVar2 = FUN_050fd880();
      if (lVar2 == 0) {
        thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
        uVar1 = thunk_FUN_04983f60();
        uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac30dd8);
        uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac09af0);
        FUN_08cbd67c(uVar1,uVar3,uVar4,0);
        uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac30de0);
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar1,uVar3);
      }
      uVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac20760);
      FUN_050d2080(uVar1,lVar2,0);
      goto LAB_050fd790;
    }
    if (unaff_w21 != 6) goto LAB_050fd808;
  }
  uVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac30168);
  FUN_050df4c0();
LAB_050fd790:
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x10),uVar1);
  return;
}


