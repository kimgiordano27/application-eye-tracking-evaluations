/*
FUNCTION_NAME: UnityEngine.Networking.UnityWebRequest$$Abort
ENTRY_POINT: 04198520
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04198394) */
/* WARNING: Removing unreachable block (ram,0x041983c8) */
/* WARNING: Removing unreachable block (ram,0x041983e4) */
/* WARNING: Removing unreachable block (ram,0x04198448) */

void UnityEngine_Networking_UnityWebRequest__Abort(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000058;
  
  plVar6 = (long *)__cxa_begin_catch();
  lVar11 = *plVar6;
  __cxa_end_catch();
  if (unaff_x20 != (long *)0x0) {
    lVar7 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04198248;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_04198248:
    (*(code *)*puVar8)();
  }
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar11);
  }
  uVar5 = FUN_02303f10(*(undefined8 *)(unaff_x19 + 0x3e0),in_stack_00000058,
                       *(undefined8 *)PTR_DAT_0458deb0);
  if ((uVar5 & 1) == 0) {
    lVar11 = *(long *)(unaff_x19 + 0x3d0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0358d1e4(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
    }
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_031ec79c(in_stack_00000058,*(undefined8 *)PTR_DAT_0458def0);
    puVar4 = PTR_DAT_0458ded8;
    puVar3 = PTR_DAT_0458dec0;
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    while (uVar5 = FUN_02cbaf58(&stack0x00000020,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      lVar11 = *(long *)(unaff_x19 + 0x3d0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(lVar11 + 0x10);
      lVar9 = *(long *)puVar4;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = *(uint *)(lVar11 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
        puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        *puVar8 = in_stack_00000030;
        thunk_FUN_01f51358(puVar8);
      }
      else {
        FUN_030f2bb4(lVar11,in_stack_00000030,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_02cbaf54(&stack0x00000020,*(undefined8 *)PTR_DAT_0458deb8);
    FUN_0241b8dc(*(undefined8 *)(unaff_x19 + 0x3e0),in_stack_00000058,
                 *(undefined8 *)PTR_DAT_0458df00);
    FUN_025ecf24(&stack0x00000040,*(undefined8 *)PTR_DAT_0458def8);
    FUN_04199edc();
    FUN_04199f14();
  }
  else {
    FUN_025ecf24(&stack0x00000040,*(undefined8 *)PTR_DAT_0458def8);
  }
  return;
}


