/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<BaseCompositeField.FieldDescription<Vector4,-object,-float>>
ENTRY_POINT: 023813c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0238179c) */

void System_Array__InternalArray__ICollection_Add<BaseCompositeField_FieldDescription<Vector4,_object,_float>>
               (void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  size_t unaff_x22;
  code *pcVar9;
  void *unaff_x23;
  undefined8 *puVar10;
  void *__s;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  puVar10 = (undefined8 *)((long)unaff_x23 - in_x9);
  __s = (void *)((long)puVar10 - in_x9);
  memset(__s,0,unaff_x22);
  lVar3 = *(long *)(unaff_x26 + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
        lVar6 = *unaff_x19;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
        pcVar9 = (code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
          lVar6 = *unaff_x19;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
        {
          (*pcVar9)();
          goto LAB_023816b8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
  }
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02381490;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02381490:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023814f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_023814f8:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_023816b8;
      lVar3 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 == 0) goto LAB_0238168c;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar3 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0238156c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar3 = FUN_01ecb238(plVar5,lVar3,0);
LAB_0238156c:
    *(void **)(unaff_x29 + -0x10) = unaff_x23;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar5,unaff_x29 + -0x10);
    memcpy(__s,unaff_x23,unaff_x22);
    memcpy(puVar10,__s,unaff_x22);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(unaff_x20 + 0x38);
    lVar3 = *(long *)(lVar6 + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
      lVar6 = *(long *)(unaff_x20 + 0x38);
    }
    puVar4 = puVar10;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x38) + 0x28)) {
      puVar4 = (undefined8 *)*puVar10;
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar3 = lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138;
          goto LAB_0238162c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_0238162c:
    *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_023816a8;
    }
  }
LAB_0238168c:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar5,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_023816a8:
  (*(code *)*puVar10)(plVar5,puVar10[1]);
LAB_023816b8:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


