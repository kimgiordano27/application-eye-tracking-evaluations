/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Decimal>
ENTRY_POINT: 02385980
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02385cd4) */

undefined8
System_Array__InternalArray__ICollection_Add<Decimal>
          (long *param_1,undefined8 param_2,byte param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x29;
  
  lVar1 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar1 + 0x28);
  plVar10 = *(long **)(param_4 + 0x38);
  if (plVar10 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar10 = *(long **)(param_4 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar10 = *(long **)(param_4 + 0x38);
    }
  }
  puVar8 = (undefined8 *)
           (&stack0x00000000 + -((ulong)*(uint *)(plVar10[9] + 0xfc) + 0xf & 0x1fffffff0));
  if ((*(byte *)(*plVar10 + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar3 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 8))();
  lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x10))();
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar11 = *param_1;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto FUN_02385ab0;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
FUN_02385ab0:
  plVar10 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02385b20;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_02385b20:
    uVar12 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if ((uVar12 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar11 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar4) {
          lVar4 = lVar11 + (long)*piVar13 * 0x10 + 0x138;
          goto LAB_02385b94;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    lVar4 = FUN_01ecb238(plVar10,lVar4,0);
LAB_02385b94:
    *(undefined8 **)(unaff_x29 + -0x38) = puVar8;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar10,unaff_x29 + -0x38,puVar8);
    puVar6 = puVar8;
    if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x48) + 0x28)) {
      puVar6 = (undefined8 *)*puVar8;
    }
    puVar9 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x58);
    uVar7 = *puVar9;
    *(byte *)(unaff_x29 + -0xc) = param_3 & 1;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar6;
    *(undefined8 *)(unaff_x29 + -0x30) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x20) = param_2;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
    (*(code *)puVar9[2])(uVar7,puVar9,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
  } while( true );
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02385c54;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02385c54:
    (*(code *)*puVar8)(plVar10,puVar8[1]);
  }
  lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x60))(uVar5);
  if (*(long *)(lVar1 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


