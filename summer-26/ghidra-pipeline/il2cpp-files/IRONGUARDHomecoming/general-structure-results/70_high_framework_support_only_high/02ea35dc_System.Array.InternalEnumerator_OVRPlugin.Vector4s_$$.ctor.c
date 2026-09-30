/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 02ea35dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea38f4) */

undefined8 System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  undefined8 uVar8;
  char in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar3 = FUN_01ecaf44();
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  iVar2 = (*pcVar7)();
  if (iVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar6 = *(long *)(unaff_x20 + 0x20);
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    uVar4 = thunk_FUN_01f117cc();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar5 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    (*pcVar7)(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar5 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    in_stack_00000008 = uVar4;
    (**(code **)(lVar6 + 0x10))(uVar8,lVar6,lVar3,&stack0x00000008,uVar4);
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_01ecaf44();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
  }
  uVar4 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
  (**(code **)(lVar6 + 0x10))(uVar4,lVar6,lVar3,0,&stack0x00000008);
  uVar4 = in_stack_00000008;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar5 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
    in_stack_00000008 = uVar4;
    (**(code **)(lVar6 + 0x10))(uVar8,lVar6,lVar3,&stack0x00000008,&stack0x00000004);
    if (in_stack_00000000 != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


