/*
FUNCTION_NAME: UnityEngine.AssemblyFullName$$ToString
ENTRY_POINT: 03f701c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f70490) */
/* WARNING: Removing unreachable block (ram,0x03f705bc) */

void UnityEngine_AssemblyFullName__ToString(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  ulong uVar8;
  long unaff_x24;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lStack0000000000000008;
  
  puVar2 = PTR_DAT_04581180;
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  plVar9 = *(long **)(unaff_x24 + 0xe08);
  uVar8 = 0;
  param_1 = param_1 & 0xffffffff;
  lStack0000000000000008 = in_x9;
  do {
    if (param_1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar11 = *(long **)(lStack0000000000000008 + uVar8 * 8 + 0x20);
    uVar10 = *(undefined8 *)PTR_DAT_04581188;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_03579868(uVar10,0);
    uVar10 = FUN_03595430(plVar11,uVar10,0,0);
    plVar3 = (long *)FUN_022e50c4(uVar10,*(undefined8 *)PTR_DAT_04581170);
    if ((plVar11 == (long *)0x0) ||
       ((**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0)),
       plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04581178) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f702c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)PTR_DAT_04581178,0);
LAB_03f702c8:
    plVar11 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03f702dc:
    lVar5 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar9) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f70328;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar11,*plVar9,0);
LAB_03f70328:
    uVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if ((uVar6 & 1) != 0) {
      lVar5 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f70384;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03f70384:
      lVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = FUN_02b6b4d8();
      if ((uVar6 & 1) == 0) {
        FUN_02b6b2e4();
      }
      else {
        uVar10 = FUN_0340f334(*(undefined8 *)PTR_DAT_045811b0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403f2cc(uVar10,0);
      }
      goto LAB_03f702dc;
    }
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f70474;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f70474:
      (*(code *)*puVar4)(plVar11,puVar4[1]);
    }
    param_1 = (ulong)*(uint *)(lStack0000000000000008 + 0x18);
    uVar8 = uVar8 + 1;
    if ((long)(int)*(uint *)(lStack0000000000000008 + 0x18) <= (long)uVar8) {
      return;
    }
  } while( true );
}


