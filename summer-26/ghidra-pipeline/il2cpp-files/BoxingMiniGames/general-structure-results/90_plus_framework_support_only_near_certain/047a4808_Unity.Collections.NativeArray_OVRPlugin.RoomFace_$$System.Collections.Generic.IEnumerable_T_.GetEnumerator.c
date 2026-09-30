/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 047a4808
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_RoomFace>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  lVar3 = FUN_0367c9fc();
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  uVar1 = unaff_w19 + (unaff_w24 >> 1);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_047a414c();
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_047a414c();
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_047a414c();
  if (unaff_x20 == 0) {
LAB_047a4ae8:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (uVar1 < *(uint *)(unaff_x20 + 0x18)) {
    uVar6 = unaff_w23 - 1;
    lVar3 = unaff_x20 + (long)(int)uVar1 * 0x18;
    uVar9 = *(undefined8 *)(lVar3 + 0x28);
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    FUN_047a42cc();
    if ((int)uVar6 <= (int)unaff_w19) {
LAB_047a4a6c:
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a42cc();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_047a4ae8;
      lVar3 = unaff_x20 + (long)(int)unaff_w19 * 0x18;
      uVar10 = *(undefined8 *)(lVar3 + 0x28);
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      in_stack_00000060 = uVar7;
      in_stack_00000068 = uVar9;
      in_stack_00000070 = uVar4;
      in_stack_00000080 = uVar8;
      in_stack_00000088 = uVar10;
      in_stack_00000090 = uVar5;
      iVar2 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar2) {
        do {
          uVar6 = uVar6 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto LAB_047a4ae4;
          lVar3 = unaff_x20 + (long)(int)uVar6 * 0x18;
          uVar10 = *(undefined8 *)(lVar3 + 0x28);
          uVar8 = *(undefined8 *)(lVar3 + 0x20);
          uVar5 = *(undefined8 *)(lVar3 + 0x30);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          in_stack_00000060 = uVar8;
          in_stack_00000068 = uVar10;
          in_stack_00000070 = uVar5;
          in_stack_00000080 = uVar7;
          in_stack_00000088 = uVar9;
          in_stack_00000090 = uVar4;
          iVar2 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar2 < 0);
        if ((int)uVar6 <= (int)unaff_w19) goto LAB_047a4a6c;
        lVar3 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_047a42cc();
      }
    }
  }
LAB_047a4ae4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


