/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.Enumerator<object,-ConduitParameterValue>$$System.Collections.IDictionaryEnumerator.get_Entry
ENTRY_POINT: 02be6ef4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02be7404) */

void System_Collections_Generic_Dictionary_Enumerator<object,_ConduitParameterValue>__System_Collections_IDictionaryEnumerator_get_Entry
               (undefined8 *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  long *plVar14;
  void *unaff_x25;
  size_t __n;
  undefined8 unaff_x27;
  undefined8 uVar15;
  size_t __n_00;
  long *unaff_x28;
  long unaff_x29;
  
  pcVar1 = (code *)*param_1;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x27;
  uVar4 = (*pcVar1)();
  (**(code **)**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0))
            (*(undefined8 *)(unaff_x29 + -0x28),uVar4);
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (unaff_x28 == (long *)0x0) {
LAB_02be73f4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = thunk_FUN_01ecaf38();
  uVar15 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  uVar15 = FUN_03579868(uVar15,0);
  uVar6 = FUN_03582560(uVar5,uVar15,0);
  lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar6 & 1) == 0) {
    lVar11 = *(long *)(lVar11 + 0x88);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar13 = *unaff_x28;
    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02be717c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
LAB_02be717c:
    plVar14 = (long *)(*(code *)*puVar12)();
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar14;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
            puVar12 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02be71e4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,0);
LAB_02be71e4:
      uVar6 = (*(code *)*puVar12)(plVar14,puVar12[1]);
      if ((uVar6 & 1) == 0) goto LAB_02be7328;
      lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar13 = *plVar14;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar11) {
            lVar11 = lVar13 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_02be725c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar11 = FUN_01ecb238(plVar14,lVar11,0);
LAB_02be725c:
      *(void **)(unaff_x29 + -0x18) = unaff_x24;
      lVar11 = *(long *)(lVar11 + 8);
      (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar14,unaff_x29 + -0x18);
      memcpy(unaff_x25,unaff_x24,unaff_x23);
      puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0);
      uVar5 = *puVar12;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
      (*(code *)puVar12[2])(uVar5);
      puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
      uVar5 = *puVar12;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
      (*(code *)puVar12[2])(uVar5);
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar12 = unaff_x21;
      if (-1 < *(int *)(*(long *)(lVar11 + 0x70) + 0x28)) {
        puVar12 = (undefined8 *)*unaff_x21;
      }
      puVar10 = unaff_x22;
      if (-1 < *(int *)(*(long *)(lVar11 + 0x78) + 0x28)) {
        puVar10 = (undefined8 *)*unaff_x22;
      }
      puVar9 = *(undefined8 **)(lVar11 + 0x80);
      uVar5 = *puVar9;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar12;
      *(undefined8 **)(unaff_x29 + -0x10) = puVar10;
      (*(code *)puVar9[2])(uVar5);
    } while( true );
  }
  lVar11 = *(long *)(lVar11 + 0x30);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
  }
  __n = *(size_t *)(unaff_x29 + -0x20);
  __n_00 = *(size_t *)(unaff_x29 + -0x38);
  if ((*(byte *)(*unaff_x28 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
     (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11))
  {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  uVar2 = *(uint *)(unaff_x28 + 4);
  if (0 < (int)uVar2) {
    plVar14 = (long *)unaff_x28[3];
    if (plVar14 == (long *)0x0) goto LAB_02be73f4;
    uVar6 = 0;
    do {
      if (*(uint *)(plVar14 + 3) <= uVar6) goto LAB_02be73c8;
      piVar7 = (int *)thunk_FUN_01ee7388((long)plVar14 + uVar6 * *(uint *)(*plVar14 + 0x104) + 0x20,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                    0x68) + 0x80));
      if (-1 < *piVar7) {
        if (*(uint *)(plVar14 + 3) <= uVar6) {
LAB_02be73c8:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        pvVar8 = (void *)thunk_FUN_01ee7388((long)plVar14 +
                                            uVar6 * *(uint *)(*plVar14 + 0x104) + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20
                                                                                   ) + 0xc0) + 0x68)
                                                     + 0x80) + 0x40);
        memcpy(unaff_x21,pvVar8,__n);
        if (*(uint *)(plVar14 + 3) <= uVar6) goto LAB_02be73c8;
        pvVar8 = (void *)thunk_FUN_01ee7388((long)plVar14 +
                                            uVar6 * *(uint *)(*plVar14 + 0x104) + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20
                                                                                   ) + 0xc0) + 0x68)
                                                     + 0x80) + 0x60);
        memcpy(unaff_x22,pvVar8,__n_00);
        lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        puVar12 = unaff_x21;
        if (-1 < *(int *)(*(long *)(lVar11 + 0x70) + 0x28)) {
          puVar12 = (undefined8 *)*unaff_x21;
        }
        puVar10 = *(undefined8 **)(lVar11 + 0x80);
        uVar5 = *puVar10;
        puVar9 = unaff_x22;
        if (-1 < *(int *)(*(long *)(lVar11 + 0x78) + 0x28)) {
          puVar9 = (undefined8 *)*unaff_x22;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar12;
        *(undefined8 **)(unaff_x29 + -0x10) = puVar9;
        (*(code *)puVar10[2])(uVar5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  goto LAB_02be7394;
LAB_02be7328:
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar12 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02be7384;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar14,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02be7384:
    (*(code *)*puVar12)(plVar14,puVar12[1]);
  }
LAB_02be7394:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


