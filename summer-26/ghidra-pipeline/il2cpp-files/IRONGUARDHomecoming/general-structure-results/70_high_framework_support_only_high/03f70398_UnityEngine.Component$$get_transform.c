/*
FUNCTION_NAME: UnityEngine.Component$$get_transform
ENTRY_POINT: 03f70398
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f70490) */
/* WARNING: Removing unreachable block (ram,0x03f705bc) */

void UnityEngine_Component__get_transform(void)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *plVar7;
  long *unaff_x29;
  long in_stack_00000008;
  
code_r0x03f70398:
  uVar3 = FUN_02b6b4d8();
  if ((uVar3 & 1) == 0) {
    FUN_02b6b2e4();
  }
  else {
    uVar4 = FUN_0340f334(*(undefined8 *)PTR_DAT_045811b0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f2cc(uVar4,0);
  }
  do {
    lVar5 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03f70328;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x24,0);
LAB_03f70328:
    uVar3 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    if ((uVar3 & 1) != 0) break;
    if (unaff_x25 != (long *)0x0) {
      lVar5 = *unaff_x25;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03f70474;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(unaff_x25,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f70474:
      (*(code *)*puVar2)(unaff_x25,puVar2[1]);
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
    uVar4 = *(undefined8 *)PTR_DAT_04581188;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03579868(uVar4,0);
    uVar4 = FUN_03595430(plVar7,uVar4,0,0);
    plVar1 = (long *)FUN_022e50c4(uVar4,*(undefined8 *)PTR_DAT_04581170);
    if ((plVar7 == (long *)0x0) ||
       ((**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
       plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar1;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04581178) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03f702c8;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar1,*(long *)PTR_DAT_04581178,0);
LAB_03f702c8:
    unaff_x25 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  lVar5 = *unaff_x25;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x29) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03f70384;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x29,0);
LAB_03f70384:
  lVar5 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  goto code_r0x03f70398;
}


