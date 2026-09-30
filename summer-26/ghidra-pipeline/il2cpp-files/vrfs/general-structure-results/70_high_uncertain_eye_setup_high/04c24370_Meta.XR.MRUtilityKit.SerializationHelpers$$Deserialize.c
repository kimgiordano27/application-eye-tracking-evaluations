/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Deserialize
ENTRY_POINT: 04c24370
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers__Deserialize
               (undefined8 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined *puVar7;
  
  if ((int)param_2[1] == -1) {
    thunk_FUN_0159f088(PTR_DAT_06e0ea30);
    uVar5 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar7 = PTR_DAT_06e56258;
  }
  else {
    if ((int)param_2[1] != -2) {
      lVar9 = *param_2;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      iVar3 = FUN_031d2bdc(lVar9,0);
      lVar8 = *(long *)(param_3 + 0x20);
      uVar1 = *(uint *)(param_2 + 1);
      uVar2 = *(ushort *)(lVar8 + 0x132);
      lVar4 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_015c2790(lVar8);
        uVar2 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x132);
        lVar4 = *(long *)(param_3 + 0x20);
      }
      pcVar10 = *(code **)(**(long **)(lVar8 + 0xc0) + 8);
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_015c2790(lVar4);
      }
      (*pcVar10)(&stack0x00000008,lVar9,iVar3 + ~uVar1,**(undefined8 **)(lVar4 + 0xc0));
      param_1[2] = in_stack_00000018;
      param_1[1] = in_stack_00000010;
      *param_1 = in_stack_00000008;
      return;
    }
    thunk_FUN_0159f088(PTR_DAT_06e0ea30);
    uVar5 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar7 = PTR_DAT_06dff068;
  }
  uVar6 = thunk_FUN_0159f088(puVar7);
  FUN_0321bdf8(uVar5,uVar6,0);
  uVar6 = thunk_FUN_0159f088(PTR_DAT_06e58218);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar5,uVar6);
}


