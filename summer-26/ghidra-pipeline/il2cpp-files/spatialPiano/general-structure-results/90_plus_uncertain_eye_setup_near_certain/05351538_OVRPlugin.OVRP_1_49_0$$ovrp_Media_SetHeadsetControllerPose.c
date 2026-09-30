/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 05351538
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(undefined4 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint in_w8;
  long lVar7;
  long unaff_x19;
  uint unaff_w22;
  undefined8 *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined4 unaff_w26;
  undefined8 unaff_x27;
  undefined8 unaff_d8;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  
  do {
    if (in_w8 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar7 = unaff_x19 + (long)(int)unaff_w22 * (long)unaff_w25;
    uVar1 = *param_1;
    *(undefined8 *)(lVar7 + 0x20) = unaff_x27;
    *(undefined8 *)(lVar7 + 0x28) = unaff_d8;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined4 *)(lVar7 + 0x38) = uVar1;
    *(undefined4 *)(lVar7 + 0x3c) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    while( true ) {
      unaff_w22 = unaff_w22 + 1;
      uVar3 = FUN_04bbf644(&stack0x00000030,*unaff_x23);
      plVar2 = in_stack_00000048;
      unaff_x27 = in_stack_00000040;
      if ((uVar3 & 1) == 0) {
        FUN_04bbf758(&stack0x00000030,
                     *(undefined8 *)
                      UnityEngine_UIElements_UIR_NativePagedList<CopyMeshJobData>_TypeInfo);
        return;
      }
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar4 = thunk_FUN_02f1863c(in_stack_00000048,0);
      lVar7 = *(long *)(unaff_x24 + 0x48);
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_050e4454(lVar7 + 0x20,0);
      uVar3 = FUN_050ed374(uVar4,uVar5,0);
      if ((uVar3 & 1) != 0) break;
      uVar4 = thunk_FUN_02f1863c(plVar2,0);
      lVar7 = *(long *)(unaff_x24 + 0x90);
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_050e4454(lVar7 + 0x20,0);
      uVar3 = FUN_050ed374(uVar4,uVar5,0);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_02f1863c(plVar2,0);
        lVar7 = *(long *)(unaff_x24 + 0x80);
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar5 = FUN_050e4454(lVar7 + 0x20,0);
        uVar3 = FUN_050ed374(uVar4,uVar5,0);
        if ((uVar3 & 1) == 0) {
          thunk_FUN_02f6ef30(PTR_DAT_067c9600);
          uVar4 = thunk_FUN_02f45270();
          uVar5 = thunk_FUN_02f6ef30(System_FormatException_TypeInfo);
          FUN_0510bee0(uVar4,uVar5,0);
          uVar5 = thunk_FUN_02f6ef30(System_Runtime_Serialization_FormatterConverter_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar4,uVar5);
        }
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x24 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar2);
        }
        puVar6 = (undefined8 *)thunk_FUN_02f453b8(plVar2);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar7 = unaff_x19 + (long)(int)unaff_w22 * (long)unaff_w25;
        uVar4 = *puVar6;
        *(undefined8 *)(lVar7 + 0x20) = unaff_x27;
        *(undefined4 *)(lVar7 + 0x28) = unaff_w26;
        *(undefined8 *)(lVar7 + 0x34) = 0;
        *(undefined8 *)(lVar7 + 0x2c) = 0;
        *(undefined4 *)(lVar7 + 0x3c) = 0;
        *(undefined8 *)(lVar7 + 0x40) = uVar4;
      }
      else {
        if (*plVar2 != *(long *)(unaff_x24 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar2);
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar7 = unaff_x19 + (long)(int)unaff_w22 * (long)unaff_w25;
        *(undefined8 *)(lVar7 + 0x20) = unaff_x27;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x38) = 0;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(long **)(lVar7 + 0x30) = plVar2;
      }
    }
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x24 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar2);
    }
    param_1 = (undefined4 *)thunk_FUN_02f453b8(plVar2);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  } while( true );
}


