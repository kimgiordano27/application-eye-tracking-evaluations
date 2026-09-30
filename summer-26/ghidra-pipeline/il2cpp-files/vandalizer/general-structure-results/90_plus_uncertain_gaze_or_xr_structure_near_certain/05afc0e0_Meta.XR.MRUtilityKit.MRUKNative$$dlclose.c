/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNative$$dlclose
ENTRY_POINT: 05afc0e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05afc24c) */

undefined4 Meta_XR_MRUtilityKit_MRUKNative__dlclose(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  undefined4 uVar7;
  long unaff_x21;
  long unaff_x22;
  long lVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar2 = PTR_DAT_0759c3d8;
  lVar3 = *(long *)PTR_DAT_0759c3d8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *(long *)puVar2;
  }
  lVar5 = *(long *)(unaff_x22 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  uVar6 = *(uint *)(unaff_x20 + 0x18);
  lVar3 = **(long **)(lVar3 + 0xb8);
  do {
    if ((int)(uVar1 - 1) <= (int)uVar6) {
      uVar7 = 0;
      goto LAB_05afc214;
    }
    uVar6 = uVar6 + 1;
    *(uint *)(unaff_x20 + 0x18) = uVar6;
    if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar4 = lVar5 + (long)(int)uVar6 * 0x10;
    lVar8 = *(long *)(lVar4 + 0x20);
  } while ((lVar8 == 0) || (lVar3 == lVar8));
  lVar5 = *(long *)(lVar4 + 0x28);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  lVar4 = thunk_FUN_0322f04c(lVar8,lVar3);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2730(lVar8,lVar3);
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = thunk_FUN_0322f04c(lVar5,lVar3);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar5,lVar3);
    }
  }
  FUN_045e0668(&stack0x00000008,lVar4,lVar8,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000010;
  *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000008;
  thunk_FUN_0329bf60(unaff_x20 + 0x20,0);
  uVar7 = 1;
LAB_05afc214:
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_032004d4();
  }
  return uVar7;
}


