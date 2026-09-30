/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<LocomotionEvent>
ENTRY_POINT: 02416134
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x024164fc) */
/* WARNING: Removing unreachable block (ram,0x0241656c) */

undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<LocomotionEvent>
          (long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 *__src;
  undefined1 *__dest;
  undefined1 *__s;
  long unaff_x29;
  undefined1 auStack_40 [64];
  
  *(undefined8 *)(unaff_x29 + -0x30) = param_2;
  lVar9 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar9 + 0x28);
  lVar7 = *(long *)(param_3 + 0x38);
  if (lVar7 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    lVar7 = *(long *)(param_3 + 0x38);
    if (lVar7 == 0) {
      FUN_01ecafa0(param_3);
      lVar7 = *(long *)(param_3 + 0x38);
    }
  }
  uVar6 = *(uint *)(*(long *)(lVar7 + 0x20) + 0xfc);
  uVar14 = (ulong)uVar6;
  if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
    uVar6 = *(uint *)(lVar7 + 0xfc);
  }
  uVar10 = uVar14 + 0xf & 0x1fffffff0;
  __src = auStack_40 + -((ulong)(uVar6 + 0x10) + 0xf & 0x1fffffff0) + -uVar10;
  __dest = __src + -uVar10;
  __s = __dest + -uVar10;
  memset(__s,0,uVar14);
  if (param_1 != (long *)0x0) {
    lVar7 = **(long **)(param_3 + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *param_1;
    *(long *)(unaff_x29 + -0x20) = lVar9;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0241626c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(param_1,lVar7,0);
LAB_0241626c:
    plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    uVar5 = 0;
    iVar1 = 0;
    do {
      iVar13 = iVar1;
      *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        do {
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_024162e4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_024162e4:
          uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar10 & 1) == 0) {
            uVar5 = *(undefined8 *)(unaff_x29 + -0x18);
            if (plVar4 == (long *)0x0) goto LAB_024164f0;
            lVar9 = *plVar4;
            uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar14 == 0) goto LAB_024164c8;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_024164b0;
          }
          lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar7 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar9) {
                lVar9 = lVar7 + (long)*piVar11 * 0x10 + 0x138;
                goto LAB_02416358;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          lVar9 = FUN_01ecb238(plVar4,lVar9,0);
LAB_02416358:
          *(undefined1 **)(unaff_x29 + -0x10) = __src;
          lVar9 = *(long *)(lVar9 + 8);
          (**(code **)(lVar9 + 0x10))
                    (*(undefined8 *)(lVar9 + 8),lVar9,plVar4,unaff_x29 + -0x10,__src);
          memcpy(__s,__src,uVar14);
          memcpy(__dest,__s,uVar14);
          uVar10 = FUN_01f089f8(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20),__dest);
        } while ((uVar10 & 1) == 0);
        lVar7 = *(long *)(param_3 + 0x38);
        lVar9 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44();
          lVar7 = *(long *)(param_3 + 0x38);
        }
        FUN_01f09244(lVar9,*(undefined8 *)(lVar7 + 0x28),
                     auStack_40 + -((ulong)(uVar6 + 0x10) + 0xf & 0x1fffffff0),__s,0,
                     unaff_x29 + -0x10);
        uVar12 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar10 = FUN_0340eec4(uVar12,0);
      } while ((uVar10 & 1) != 0);
      uVar5 = uVar12;
      iVar1 = 1;
      if (iVar13 != 0) {
        *(int *)(unaff_x29 + -0x34) = iVar13;
        if (iVar13 == 1) {
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
          *(undefined8 *)(unaff_x29 + -0x40) = uVar5;
          FUN_03416d98(uVar5,0);
          lVar9 = *(long *)(unaff_x29 + -0x40);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03418748(lVar9,*(undefined8 *)(unaff_x29 + -0x18),0);
        }
        else {
          lVar9 = *(long *)(unaff_x29 + -0x28);
        }
        iVar1 = *(int *)(unaff_x29 + -0x34);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(unaff_x29 + -0x28) = lVar9;
        FUN_03418748(lVar9,*(undefined8 *)(unaff_x29 + -0x30),0);
        uVar5 = *(undefined8 *)(unaff_x29 + -0x18);
        FUN_03418748(*(undefined8 *)(unaff_x29 + -0x28),uVar12,0);
        iVar1 = iVar1 + 1;
      }
    } while( true );
  }
LAB_02416568:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar11 = piVar11 + 4;
    if (uVar14 == 0) break;
LAB_024164b0:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
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
  if (iVar13 == 0) {
    uVar5 = 0;
  }
  else if (iVar13 != 1) {
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


