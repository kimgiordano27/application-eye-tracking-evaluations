/*
FUNCTION_NAME: UnityEngine.Transform$$LookAt
ENTRY_POINT: 03f7e634
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f7e838) */
/* WARNING: Removing unreachable block (ram,0x03f7e784) */

void UnityEngine_Transform__LookAt(undefined8 param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar8;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  int iVar9;
  long *in_stack_00000030;
  
  if (param_2 != 1) {
    if (unaff_x22 != (long *)0x0) {
      lVar8 = *unaff_x22;
      uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x03f7e764;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
code_r0x03f7e764:
      (*(code *)*puVar2)();
    }
    plVar4 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
    if (param_2 != 1) {
      FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14(param_1);
    }
    plVar5 = (long *)__cxa_begin_catch();
    lVar8 = *plVar5;
    __cxa_end_catch();
    FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar8);
    }
code_r0x03f7e69c:
    if (*(int *)(*plVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f2cc(unaff_x19,0);
    return;
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar8 = *plVar4;
  __cxa_end_catch();
  iVar9 = 0;
  do {
    if (unaff_x22 != (long *)0x0) {
      lVar6 = *unaff_x22;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f7e594;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(unaff_x22,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f7e594:
      (*(code *)*puVar2)(unaff_x22,puVar2[1]);
    }
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar8);
    }
    if ((iVar9 != 7) && (iVar9 != 0)) {
      FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
      return;
    }
    if (*(int *)(*(long *)
                  Method_System_Dynamic_Utils_CollectionExtensions_RemoveFirst<ParameterInfo>__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_03f83d08(unaff_x21,0);
    uVar3 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_045816f8,unaff_x20,uVar3,0);
    unaff_x19 = FUN_03405678(unaff_x19,uVar3,0);
    uVar1 = FUN_02c7a3f0(&stack0x00000020,*unaff_x26);
    unaff_x20 = in_stack_00000030;
    if ((uVar1 & 1) == 0) {
      FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
      plVar4 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
      goto code_r0x03f7e69c;
    }
    unaff_x21 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3509);
    FUN_02ee7c10(unaff_x21,*(undefined8 *)PTR_DAT_045816d8);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04581698) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f7e388;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x20,*(long *)PTR_DAT_04581698,0);
LAB_03f7e388:
    plVar4 = (long *)(*(code *)*puVar2)(unaff_x20,puVar2[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar4;
    uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f7e3e8;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x24,0);
LAB_03f7e3e8:
    unaff_x22 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *unaff_x22;
      uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f7e448;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x25,0);
LAB_03f7e448:
      uVar1 = (*(code *)*puVar2)(unaff_x22,puVar2[1]);
      if ((uVar1 & 1) == 0) goto LAB_03f7e534;
      lVar8 = *unaff_x22;
      uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f7e4a4;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x27,0);
LAB_03f7e4a4:
      plVar4 = (long *)(*(code *)*puVar2)(unaff_x22,puVar2[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar4;
      uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_03f7e508;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x28,1);
LAB_03f7e508:
      uVar1 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    } while ((uVar1 & 1) != 0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02ee8df4(unaff_x21,plVar4,*(undefined8 *)StringLiteral_3506);
LAB_03f7e534:
    lVar8 = 0;
    iVar9 = 7;
  } while( true );
}


