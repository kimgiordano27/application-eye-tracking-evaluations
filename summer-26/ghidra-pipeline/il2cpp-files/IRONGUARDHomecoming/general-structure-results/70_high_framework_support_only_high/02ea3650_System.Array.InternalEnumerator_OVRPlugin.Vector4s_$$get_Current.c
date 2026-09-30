/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 02ea3650
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea38f4) */

undefined8 System_Array_InternalEnumerator<OVRPlugin_Vector4s>__get_Current(void)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  undefined8 uVar7;
  char in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar3 = thunk_FUN_01f117cc();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_01ecaf44();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x28);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  (*pcVar6)(uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_01ecaf44();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x30);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
  in_stack_00000008 = uVar3;
  (**(code **)(lVar5 + 0x10))(uVar7,lVar5,lVar2,&stack0x00000008,uVar3);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
      lVar4 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar3 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    (**(code **)(lVar5 + 0x10))(uVar3,lVar5,lVar2,0,&stack0x00000008);
    uVar3 = in_stack_00000008;
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
      lVar5 = lVar4;
      if ((uVar1 & 1) == 0) {
        lVar5 = FUN_01ecaf44();
        lVar4 = *(long *)(unaff_x20 + 0x20);
        uVar1 = *(ushort *)(lVar4 + 0x135);
      }
      uVar7 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x48);
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      in_stack_00000008 = uVar3;
      (**(code **)(lVar5 + 0x10))(uVar7,lVar5,lVar2,&stack0x00000008,&stack0x00000004);
      if (in_stack_00000000 != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
      }
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


