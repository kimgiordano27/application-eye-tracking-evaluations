/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<FrameTimeSample>
ENTRY_POINT: 02385db8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0238621c) */
/* WARNING: Removing unreachable block (ram,0x023862b4) */

void System_Array__InternalArray__ICollection_Add<FrameTimeSample>
               (undefined8 param_1,long param_2,long param_3,long param_4,byte param_5,long param_6)

{
  void *pvVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *__dest;
  long lVar10;
  ulong __n;
  undefined8 *puVar11;
  long *plVar12;
  long unaff_x28;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x28 + 0x28);
  *(undefined8 *)(unaff_x29 + -0x50) = param_1;
  *(undefined8 *)(unaff_x29 + -0x48) = param_1;
  lVar10 = *(long *)(param_6 + 0x38);
  if (lVar10 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar10 = *(long *)(param_6 + 0x38);
    if (lVar10 == 0) {
      FUN_01ecafa0(param_6);
      lVar10 = *(long *)(param_6 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(&stack0x00000000 + -uVar8);
  puVar11 = (undefined8 *)((long)__dest - uVar8);
  pvVar1 = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(__dest,pvVar1,__n);
  if (param_2 != 0) {
    puVar6 = *(undefined8 **)(lVar10 + 0x10);
    uVar3 = *puVar6;
    puVar5 = __dest;
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      puVar5 = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = puVar5;
    (*(code *)puVar6[2])(uVar3,puVar6,param_2,unaff_x29 + -0x40,unaff_x29 + -0x38);
    if (*(char *)(unaff_x29 + -0x38) != '\0') {
      if ((param_5 & 1) != 0) {
        lVar10 = *(long *)(param_6 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x50);
        if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x48);
        }
        memcpy(__dest,pvVar1,__n);
        if (param_3 == 0) goto LAB_023862ac;
        puVar11 = *(undefined8 **)(lVar10 + 0x68);
        uVar3 = *puVar11;
        if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
          __dest = (undefined8 *)*__dest;
        }
        *(undefined8 **)(unaff_x29 + -0x40) = __dest;
        (*(code *)puVar11[2])(uVar3,puVar11,param_3,unaff_x29 + -0x40,unaff_x29 + -0x38);
        if (*(char *)(unaff_x29 + -0x38) == '\0') {
          thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
          uVar3 = thunk_FUN_01f117cc();
          uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Rigidbody2D>__);
          FUN_0356adc8(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar3,param_6);
        }
      }
LAB_0238627c:
      if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    *(long *)(unaff_x29 + -0x58) = unaff_x28;
    lVar10 = *(long *)(param_6 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0x50);
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x48);
    }
    memcpy(__dest,pvVar1,__n);
    puVar5 = *(undefined8 **)(lVar10 + 0x18);
    uVar3 = *puVar5;
    puVar6 = __dest;
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      puVar6 = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = puVar6;
    (*(code *)puVar5[2])(uVar3,puVar5,param_2,unaff_x29 + -0x40,unaff_x29 + -0x38);
    lVar10 = *(long *)(param_6 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0x50);
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x48);
    }
    memcpy(puVar11,pvVar1,__n);
    if (param_4 != 0) {
      puVar6 = *(undefined8 **)(lVar10 + 0x28);
      uVar3 = *puVar6;
      if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      *(undefined8 **)(unaff_x29 + -0x40) = puVar11;
      (*(code *)puVar6[2])(uVar3,puVar6,param_4,unaff_x29 + -0x40,unaff_x29 + -0x38);
      plVar12 = *(long **)(unaff_x29 + -0x38);
      if (plVar12 != (long *)0x0) {
        lVar10 = *(long *)(*(long *)(param_6 + 0x38) + 0x30);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar7 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar10) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02386058;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar12,lVar10,0);
LAB_02386058:
        plVar12 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_023860c8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_023860c8:
          uVar8 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if ((uVar8 & 1) == 0) goto LAB_023861a0;
          lVar10 = *(long *)(*(long *)(param_6 + 0x38) + 0x40);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44(lVar10);
          }
          lVar7 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar10) {
                lVar10 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
                goto LAB_0238613c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          lVar10 = FUN_01ecb238(plVar12,lVar10,0);
LAB_0238613c:
          *(undefined8 **)(unaff_x29 + -0x40) = __dest;
          lVar10 = *(long *)(lVar10 + 8);
          (**(code **)(lVar10 + 0x10))
                    (*(undefined8 *)(lVar10 + 8),lVar10,plVar12,unaff_x29 + -0x40,__dest);
          puVar11 = __dest;
          if (-1 < *(int *)(*(long *)(*(long *)(param_6 + 0x38) + 8) + 0x28)) {
            puVar11 = (undefined8 *)*__dest;
          }
          puVar6 = *(undefined8 **)(*(long *)(param_6 + 0x38) + 0x58);
          uVar3 = *puVar6;
          *(byte *)(unaff_x29 + -0xc) = param_5 & 1;
          *(undefined8 **)(unaff_x29 + -0x38) = puVar11;
          *(long *)(unaff_x29 + -0x30) = param_2;
          *(long *)(unaff_x29 + -0x28) = param_3;
          *(long *)(unaff_x29 + -0x20) = param_4;
          *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
          (*(code *)puVar6[2])(uVar3,puVar6,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
        } while( true );
      }
    }
  }
  goto LAB_023862ac;
LAB_023861a0:
  unaff_x28 = *(long *)(unaff_x29 + -0x58);
  if (plVar12 != (long *)0x0) {
    lVar10 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02386204;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar12,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02386204:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
  lVar10 = *(long *)(param_6 + 0x38);
  pvVar1 = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(__dest,pvVar1,__n);
  if (param_3 != 0) {
    puVar11 = *(undefined8 **)(lVar10 + 0x60);
    uVar3 = *puVar11;
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = __dest;
    (*(code *)puVar11[2])(uVar3,puVar11,param_3,unaff_x29 + -0x40,__dest);
    goto LAB_0238627c;
  }
LAB_023862ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


