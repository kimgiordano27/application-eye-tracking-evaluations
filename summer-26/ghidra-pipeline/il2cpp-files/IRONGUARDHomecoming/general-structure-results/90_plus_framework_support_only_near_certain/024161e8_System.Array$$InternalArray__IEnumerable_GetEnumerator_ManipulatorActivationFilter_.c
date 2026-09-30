/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ManipulatorActivationFilter>
ENTRY_POINT: 024161e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x024164fc) */
/* WARNING: Removing unreachable block (ram,0x0241656c) */

undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<ManipulatorActivationFilter>(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  int iVar11;
  long unaff_x22;
  size_t unaff_x24;
  void *unaff_x26;
  void *unaff_x27;
  void *__s;
  long unaff_x29;
  
  __s = (void *)(param_1 - in_x9);
  memset(__s,0,unaff_x24);
  if (unaff_x19 != (long *)0x0) {
    lVar6 = **(long **)(unaff_x22 + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *unaff_x19;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0241626c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0241626c:
    plVar4 = (long *)(*(code *)*puVar3)();
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    uVar5 = 0;
    iVar1 = 0;
    do {
      iVar11 = iVar1;
      *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        do {
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_024162e4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_024162e4:
          uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(unaff_x29 + -0x18);
            if (plVar4 == (long *)0x0) goto LAB_024164f0;
            lVar6 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 == 0) goto LAB_024164c8;
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_024164b0;
          }
          lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ecaf44(lVar6);
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
                goto LAB_02416358;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          lVar6 = FUN_01ecb238(plVar4,lVar6,0);
LAB_02416358:
          *(void **)(unaff_x29 + -0x10) = unaff_x26;
          lVar6 = *(long *)(lVar6 + 8);
          (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar4,unaff_x29 + -0x10);
          memcpy(__s,unaff_x26,unaff_x24);
          memcpy(unaff_x27,__s,unaff_x24);
          uVar8 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x20));
        } while ((uVar8 & 1) == 0);
        lVar7 = *(long *)(unaff_x22 + 0x38);
        lVar6 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44();
          lVar7 = *(long *)(unaff_x22 + 0x38);
        }
        FUN_01f09244(lVar6,*(undefined8 *)(lVar7 + 0x28));
        uVar10 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar8 = FUN_0340eec4(uVar10,0);
      } while ((uVar8 & 1) != 0);
      uVar5 = uVar10;
      iVar1 = 1;
      if (iVar11 != 0) {
        *(int *)(unaff_x29 + -0x34) = iVar11;
        if (iVar11 == 1) {
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
          *(undefined8 *)(unaff_x29 + -0x40) = uVar5;
          FUN_03416d98(uVar5,0);
          lVar6 = *(long *)(unaff_x29 + -0x40);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03418748(lVar6,*(undefined8 *)(unaff_x29 + -0x18),0);
        }
        else {
          lVar6 = *(long *)(unaff_x29 + -0x28);
        }
        iVar1 = *(int *)(unaff_x29 + -0x34);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(unaff_x29 + -0x28) = lVar6;
        FUN_03418748(lVar6,*(undefined8 *)(unaff_x29 + -0x30),0);
        uVar5 = *(undefined8 *)(unaff_x29 + -0x18);
        FUN_03418748(*(undefined8 *)(unaff_x29 + -0x28),uVar10,0);
        iVar1 = iVar1 + 1;
      }
    } while( true );
  }
LAB_02416568:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_024164b0:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_024164e4;
    }
  }
LAB_024164c8:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_024164e4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_024164f0:
  if (iVar11 == 0) {
    uVar5 = 0;
  }
  else if (iVar11 != 1) {
    plVar4 = *(long **)(unaff_x29 + -0x28);
    if (plVar4 == (long *)0x0) goto LAB_02416568;
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


