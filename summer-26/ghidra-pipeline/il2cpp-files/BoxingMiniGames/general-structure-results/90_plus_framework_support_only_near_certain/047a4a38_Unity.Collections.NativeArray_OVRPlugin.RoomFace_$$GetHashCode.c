/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$GetHashCode
ENTRY_POINT: 047a4a38
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_RoomFace>__GetHashCode(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  do {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    FUN_047a42cc();
    do {
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_047a4ae4;
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar2 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w25;
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
      in_stack_00000080 = uVar4;
      in_stack_00000088 = uVar5;
      in_stack_00000090 = uVar3;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    do {
      unaff_w24 = unaff_w24 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) {
LAB_047a4ae4:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar2 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      in_stack_00000090 = in_stack_00000050;
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      in_stack_00000060 = uVar4;
      in_stack_00000068 = uVar5;
      in_stack_00000070 = uVar3;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    if ((int)unaff_w24 <= (int)unaff_w19) {
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a42cc();
      return unaff_w19;
    }
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    param_1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_0367c9fc();
    }
  } while( true );
}


