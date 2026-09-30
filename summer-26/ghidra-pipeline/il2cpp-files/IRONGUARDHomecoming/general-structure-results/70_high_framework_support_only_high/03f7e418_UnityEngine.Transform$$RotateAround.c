/*
FUNCTION_NAME: UnityEngine.Transform$$RotateAround
ENTRY_POINT: 03f7e418
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


/* WARNING: Removing unreachable block (ram,0x03f7e5ac) */
/* WARNING: Removing unreachable block (ram,0x03f7e6bc) */
/* WARNING: Removing unreachable block (ram,0x03f7e748) */

void UnityEngine_Transform__RotateAround(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  int *piVar6;
  int *in_x10;
  long in_x11;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *in_stack_00000030;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03f7e448;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238(unaff_x22,param_3,0);
LAB_03f7e448:
        uVar2 = (*(code *)*puVar1)(unaff_x22,puVar1[1]);
        if ((uVar2 & 1) == 0) {
LAB_03f7e534:
          if (unaff_x22 != (long *)0x0) {
            lVar5 = *unaff_x22;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_03f7e594;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar1 = (undefined8 *)
                     FUN_01ecb238(unaff_x22,
                                  *(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_03f7e594:
            (*(code *)*puVar1)(unaff_x22,puVar1[1]);
          }
          if (*(int *)(*(long *)
                        Method_System_Dynamic_Utils_CollectionExtensions_RemoveFirst<ParameterInfo>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = FUN_03f83d08(unaff_x21,0);
          uVar4 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_045816f8,unaff_x20,uVar4,0);
          unaff_x19 = FUN_03405678(unaff_x19,uVar4,0);
          uVar2 = FUN_02c7a3f0(&stack0x00000020,*unaff_x26);
          unaff_x20 = in_stack_00000030;
          if ((uVar2 & 1) == 0) {
            FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c();
            }
            FUN_0403f2cc(unaff_x19,0);
            return;
          }
          unaff_x21 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3509);
          FUN_02ee7c10(unaff_x21,*(undefined8 *)PTR_DAT_045816d8);
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04581698) {
                puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_03f7e388;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar1 = (undefined8 *)FUN_01ecb238(unaff_x20,*(long *)PTR_DAT_04581698,0);
LAB_03f7e388:
          plVar3 = (long *)(*(code *)*puVar1)(unaff_x20,puVar1[1]);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_03f7e3e8;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar1 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x24,0);
LAB_03f7e3e8:
          unaff_x22 = (long *)(*(code *)*puVar1)(plVar3,puVar1[1]);
          if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
        else {
          lVar5 = *unaff_x22;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x27) {
                puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_03f7e4a4;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar1 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x27,0);
LAB_03f7e4a4:
          plVar3 = (long *)(*(code *)*puVar1)(unaff_x22,puVar1[1]);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x28) {
                puVar1 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_03f7e508;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar1 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x28,1);
LAB_03f7e508:
          uVar2 = (*(code *)*puVar1)(plVar3,puVar1[1]);
          if ((uVar2 & 1) == 0) {
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_02ee8df4(unaff_x21,plVar3,*(undefined8 *)StringLiteral_3506);
            goto LAB_03f7e534;
          }
        }
        param_1 = *unaff_x22;
        param_3 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


