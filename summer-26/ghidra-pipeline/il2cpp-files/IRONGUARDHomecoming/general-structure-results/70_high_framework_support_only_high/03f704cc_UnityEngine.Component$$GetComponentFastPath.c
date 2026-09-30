/*
FUNCTION_NAME: UnityEngine.Component$$GetComponentFastPath
ENTRY_POINT: 03f704cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f70490) */
/* WARNING: Removing unreachable block (ram,0x03f705bc) */

void UnityEngine_Component__GetComponentFastPath(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *plVar8;
  long *unaff_x29;
  long in_stack_00000008;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar3 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
  uVar4 = thunk_FUN_01ef6ec0(uVar3,*(undefined8 *)*puVar2);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&
                       PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                ,0);
  }
  __cxa_end_catch();
  thunk_FUN_01efb3a4(PTR_DAT_045811b8);
  uVar3 = FUN_0340f2f0();
  lVar5 = thunk_FUN_01efb3a4();
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0403f2cc(uVar3,0);
  do {
    do {
      unaff_x23 = unaff_x23 + 1;
      if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x23) {
        return;
      }
      if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar8 = *(long **)(in_stack_00000008 + unaff_x23 * 8 + 0x20);
      uVar3 = *(undefined8 *)PTR_DAT_04581188;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03579868(uVar3,0);
      uVar3 = FUN_03595430(plVar8,uVar3,0,0);
      plVar1 = (long *)FUN_022e50c4(uVar3,*(undefined8 *)PTR_DAT_04581170);
      if ((plVar8 == (long *)0x0) ||
         ((**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0)),
         plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04581178) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f702c8;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar1,*(long *)PTR_DAT_04581178,0);
LAB_03f702c8:
      plVar8 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03f702dc:
      lVar5 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f70328;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x24,0);
LAB_03f70328:
      uVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if ((uVar4 & 1) != 0) {
        lVar5 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x29) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03f70384;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x29,0);
LAB_03f70384:
        lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        if (lVar5 == 0) {
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
          uVar3 = FUN_0340f334(*(undefined8 *)PTR_DAT_045811b0);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar3,0);
        }
        goto LAB_03f702dc;
      }
    } while (plVar8 == (long *)0x0);
    lVar5 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f70474;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03f70474:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
  } while( true );
}


