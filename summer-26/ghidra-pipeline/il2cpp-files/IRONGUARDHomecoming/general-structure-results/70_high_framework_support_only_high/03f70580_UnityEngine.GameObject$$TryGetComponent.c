/*
FUNCTION_NAME: UnityEngine.GameObject$$TryGetComponent
ENTRY_POINT: 03f70580
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_GameObject__TryGetComponent(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  undefined8 uVar6;
  long *unaff_x25;
  long *plVar7;
  long lVar8;
  int iVar9;
  long *unaff_x29;
  long in_stack_00000008;
  
  lVar8 = *param_1;
  __cxa_end_catch();
  iVar9 = 0;
  do {
    if (unaff_x25 != (long *)0x0) {
      lVar3 = *unaff_x25;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03f70474;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(unaff_x25,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f70474:
      (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    }
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar8);
    }
    if ((iVar9 != 6) && (iVar9 != 0)) {
      return;
    }
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x23) {
      return;
    }
    if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar7 = *(long **)(in_stack_00000008 + unaff_x23 * 8 + 0x20);
    uVar6 = *(undefined8 *)PTR_DAT_04581188;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar6 = FUN_03595430(plVar7,uVar6,0,0);
    plVar1 = (long *)FUN_022e50c4(uVar6,*(undefined8 *)PTR_DAT_04581170);
    if ((plVar7 == (long *)0x0) ||
       ((**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
       plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_04581178) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f702c8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar1,*(long *)PTR_DAT_04581178,0);
LAB_03f702c8:
    unaff_x25 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03f702dc:
    lVar8 = *unaff_x25;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f70328;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x24,0);
LAB_03f70328:
    uVar4 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    if ((uVar4 & 1) != 0) {
      lVar8 = *unaff_x25;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x29) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03f70384;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x29,0);
LAB_03f70384:
      lVar8 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_02b6b4d8();
      if ((uVar4 & 1) == 0) {
        FUN_02b6b2e4();
      }
      else {
        uVar6 = FUN_0340f334(*(undefined8 *)PTR_DAT_045811b0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403f2cc(uVar6,0);
      }
      goto LAB_03f702dc;
    }
    lVar8 = 0;
    iVar9 = 6;
  } while( true );
}


