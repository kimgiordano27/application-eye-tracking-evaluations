/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector4f>
ENTRY_POINT: 02421f0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector4f>(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  int unaff_w21;
  undefined8 in_stack_00000008;
  int in_stack_00000018;
  
  iVar1 = FUN_04056f54();
  if (unaff_w21 < iVar1) {
    FUN_04058508();
    lVar2 = FUN_035b5d8c();
    if (lVar2 == 0) {
      FUN_01bc50c0();
      uVar4 = FUN_040766fc();
      uVar8 = thunk_FUN_01efb3a4(Method_System_Convert_ThrowUInt16OverflowException__);
      uVar7 = thunk_FUN_01efb3a4(Method_System_Convert_ThrowUInt32OverflowException__);
      uVar4 = FUN_0340ebc0(uVar8,uVar4,uVar7,0);
      thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
      uVar8 = thunk_FUN_01f117cc();
      FUN_04073f58(uVar8,uVar4,0);
    }
    else {
      lVar2 = FUN_040576e8();
      uVar3 = FUN_04057694();
      if (uVar3 >> 0x1f == 0) {
        uVar4 = FUN_04058508();
        lVar5 = FUN_035b5e7c(uVar4,0);
        FUN_035b5c7c(&stack0x00000008,lVar5 + lVar2,0);
        uVar4 = FUN_035b5e80(in_stack_00000008,0);
        FUN_0239aa54(uVar4,uVar3 & 0xffffffff,1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
        return;
      }
      FUN_01bc50c0();
      uVar8 = FUN_04057bd0();
    }
  }
  else {
    uVar4 = FUN_035683d0(&stack0x0000001c,0);
    FUN_01bc50c0();
    in_stack_00000018 = FUN_04056f54();
    in_stack_00000018 = in_stack_00000018 + -1;
    uVar8 = FUN_035683d0(&stack0x00000018,0);
    uVar7 = thunk_FUN_01efb3a4(Method_System_Convert_ThrowInt64OverflowException__);
    uVar6 = thunk_FUN_01efb3a4(Method_System_Convert_ThrowSByteOverflowException__);
    uVar4 = FUN_0340eee0(uVar7,uVar4,uVar6,uVar8,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar8,uVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8);
}


