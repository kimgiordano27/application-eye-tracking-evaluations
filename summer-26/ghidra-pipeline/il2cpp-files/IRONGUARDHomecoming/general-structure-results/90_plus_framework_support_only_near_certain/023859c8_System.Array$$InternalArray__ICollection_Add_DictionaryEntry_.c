/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<DictionaryEntry>
ENTRY_POINT: 023859c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02385cd4) */

undefined8 System_Array__InternalArray__ICollection_Add<DictionaryEntry>(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x22;
  undefined8 unaff_x23;
  byte unaff_w25;
  long unaff_x26;
  long unaff_x29;
  
  FUN_01ecafa0();
  puVar8 = (undefined8 *)
           (&stack0x00000000 +
           -((ulong)*(uint *)((*(long **)(unaff_x19 + 0x38))[9] + 0xfc) + 0xf & 0x1fffffff0));
  if ((*(byte *)(**(long **)(unaff_x19 + 0x38) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar2 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar10 = *unaff_x22;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto FUN_02385ab0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
FUN_02385ab0:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02385b20;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_02385b20:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar11 & 1) == 0) break;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar3) {
          lVar3 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
          goto LAB_02385b94;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar3 = FUN_01ecb238(plVar6,lVar3,0);
LAB_02385b94:
    *(undefined8 **)(unaff_x29 + -0x38) = puVar8;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar6,unaff_x29 + -0x38,puVar8);
    puVar5 = puVar8;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x48) + 0x28)) {
      puVar5 = (undefined8 *)*puVar8;
    }
    puVar9 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x58);
    uVar7 = *puVar9;
    *(byte *)(unaff_x29 + -0xc) = unaff_w25 & 1;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar5;
    *(undefined8 *)(unaff_x29 + -0x30) = uVar4;
    *(undefined8 *)(unaff_x29 + -0x28) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
    (*(code *)puVar9[2])(uVar7,puVar9,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02385c54;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02385c54:
    (*(code *)*puVar8)(plVar6,puVar8[1]);
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x60))(uVar4);
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


