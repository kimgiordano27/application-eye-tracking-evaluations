/*
FUNCTION_NAME: Unity.Netcode.UserNetworkVariableSerialization.ReadDeltaDelegate<Vector3>$$.ctor
ENTRY_POINT: 05fb04a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Netcode_UserNetworkVariableSerialization_ReadDeltaDelegate<Vector3>___ctor(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  size_t sVar7;
  long unaff_x20;
  undefined8 *puVar8;
  int unaff_w21;
  long lVar9;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *puVar10;
  void *pvVar11;
  long unaff_x25;
  undefined8 *unaff_x26;
  uint uVar12;
  uint unaff_w27;
  size_t unaff_x28;
  size_t __n;
  long unaff_x29;
  
  do {
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_03d8f26c();
    }
    puVar10 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x40) + 0x28)) {
      puVar10 = (undefined8 *)*unaff_x26;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    puVar8 = *(undefined8 **)(unaff_x29 + -0x30);
    plVar4 = *(long **)(unaff_x29 + -0x28);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x40) + 0x28)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    lVar3 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == unaff_x23) {
          lVar3 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
          goto Unity_Netcode_UserNetworkVariableSerialization_ReadDeltaDelegate<Vector3>__Invoke;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_03d8f370(plVar4,unaff_x23,0);
    plVar4 = *(long **)(unaff_x29 + -0x28);
Unity_Netcode_UserNetworkVariableSerialization_ReadDeltaDelegate<Vector3>__Invoke:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))
              (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (-1 < *(int *)(unaff_x29 + -0xc)) {
      unaff_x20 = *(long *)(unaff_x29 + -0x38);
      unaff_w27 = *(int *)(unaff_x29 + -0x3c) + unaff_w21;
      unaff_x25 = (long)(int)unaff_w27;
LAB_05fb06e4:
      uVar12 = *(uint *)(unaff_x22 + 3);
      lVar3 = *(long *)(unaff_x29 + -0x88);
      __n = *(size_t *)(unaff_x29 + -0x60);
      sVar7 = *(size_t *)(unaff_x29 + -0x48);
      memcpy(unaff_x26,*(void **)(unaff_x29 + -0x58),sVar7);
      if (unaff_w27 < uVar12) {
        memcpy((void *)((long)unaff_x22 + unaff_x25 * (ulong)*(uint *)(*unaff_x22 + 0x104) + 0x20),
               unaff_x26,sVar7);
        lVar9 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03d8f26c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03d8f26c();
        }
        if (unaff_w27 < *(uint *)(unaff_x22 + 3)) {
          FUN_03d2d260(lVar9,(long)unaff_x22 +
                             unaff_x25 * (ulong)*(uint *)(*unaff_x22 + 0x104) + 0x20,unaff_x26);
          pvVar11 = *(void **)(unaff_x29 + -0x50);
          memcpy(pvVar11,*(void **)(unaff_x29 + -0x80),__n);
          if (unaff_w27 < *(uint *)(unaff_x19 + 3)) {
            memcpy((void *)((long)unaff_x19 +
                           unaff_x25 * (ulong)*(uint *)(*unaff_x19 + 0x104) + 0x20),pvVar11,__n);
            lVar9 = *(long *)(unaff_x20 + 0x20);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03d8f26c();
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03d8f26c();
            }
            if (unaff_w27 < *(uint *)(unaff_x19 + 3)) {
              FUN_03d2d260(lVar9,(long)unaff_x19 +
                                 unaff_x25 * (ulong)*(uint *)(*unaff_x19 + 0x104) + 0x20,
                           *(undefined8 *)(unaff_x29 + -0x50));
              if (*(long *)(lVar3 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
      }
LAB_05fb0834:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar12 = *(uint *)(unaff_x22 + 3);
    if (uVar12 <= unaff_w27) goto LAB_05fb0834;
    lVar3 = *unaff_x22;
    memcpy(unaff_x26,(void *)((long)unaff_x22 + (ulong)*(uint *)(lVar3 + 0x104) * unaff_x25 + 0x20),
           unaff_x28);
    pvVar11 = *(void **)(unaff_x29 + -0x50);
    uVar1 = *(int *)(unaff_x29 + -0x3c) + unaff_w21;
    if (uVar12 <= uVar1) goto LAB_05fb0834;
    lVar9 = (long)(int)uVar1;
    memcpy((void *)((long)unaff_x22 + (ulong)*(uint *)(lVar3 + 0x104) * lVar9 + 0x20),unaff_x26,
           unaff_x28);
    lVar3 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    if (*(uint *)(unaff_x22 + 3) <= uVar1) goto LAB_05fb0834;
    FUN_03d2d260(lVar3,(long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * lVar9 + 0x20,
                 unaff_x26);
    uVar12 = *(uint *)(unaff_x19 + 3);
    if (uVar12 <= unaff_w27) goto LAB_05fb0834;
    lVar3 = *unaff_x19;
    sVar7 = *(size_t *)(unaff_x29 + -0x60);
    memcpy(pvVar11,(void *)((long)unaff_x19 + (ulong)*(uint *)(lVar3 + 0x104) * unaff_x25 + 0x20),
           sVar7);
    if (uVar12 <= uVar1) goto LAB_05fb0834;
    memcpy((void *)((long)unaff_x19 + (ulong)*(uint *)(lVar3 + 0x104) * lVar9 + 0x20),pvVar11,sVar7)
    ;
    unaff_x20 = *(long *)(unaff_x29 + -0x38);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    unaff_x19 = *(long **)(unaff_x29 + -0x70);
    unaff_x28 = *(size_t *)(unaff_x29 + -0x48);
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x50);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    if (*(uint *)(unaff_x19 + 3) <= uVar1) goto LAB_05fb0834;
    FUN_03d2d260(lVar3,(long)unaff_x19 + (ulong)*(uint *)(*unaff_x19 + 0x104) * lVar9 + 0x20,pvVar11
                );
    unaff_w21 = *(int *)(unaff_x29 + -0x40);
    if (*(int *)(unaff_x29 + -0x74) < unaff_w21) goto LAB_05fb06e4;
    uVar12 = unaff_w21 * 2;
    if ((int)uVar12 < *(int *)(unaff_x29 + -100)) {
      uVar2 = *(uint *)(unaff_x22 + 3);
      uVar1 = uVar12 + *(int *)(unaff_x29 + -0x78);
      if (uVar2 <= uVar1 - 1) goto LAB_05fb0834;
      lVar3 = *unaff_x22;
      memcpy(unaff_x26,
             (void *)((long)unaff_x22 +
                     (ulong)*(uint *)(lVar3 + 0x104) * (long)(int)(uVar1 - 1) + 0x20),unaff_x28);
      if (uVar2 <= uVar1) goto LAB_05fb0834;
      memcpy(*(void **)(unaff_x29 + -0x30),
             (void *)((long)unaff_x22 + (ulong)*(uint *)(lVar3 + 0x104) * (long)(int)uVar1 + 0x20),
             unaff_x28);
      if (*(long *)(unaff_x29 + -0x28) == 0) {
LAB_05fb0838:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      unaff_x20 = *(long *)(unaff_x29 + -0x38);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c();
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      lVar9 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03d8f26c();
      }
      puVar10 = unaff_x26;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x40) + 0x28)) {
        puVar10 = (undefined8 *)*unaff_x26;
      }
      lVar9 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03d8f26c();
      }
      puVar8 = *(undefined8 **)(unaff_x29 + -0x30);
      plVar4 = *(long **)(unaff_x29 + -0x28);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x40) + 0x28)) {
        puVar8 = (undefined8 *)*puVar8;
      }
      lVar9 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            lVar3 = lVar9 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_05fb03fc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar3 = FUN_03d8f370(plVar4,lVar3,0);
      plVar4 = *(long **)(unaff_x29 + -0x28);
LAB_05fb03fc:
      *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      lVar3 = *(long *)(lVar3 + 8);
      (**(code **)(lVar3 + 0x10))
                (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
      uVar12 = uVar12 | *(uint *)(unaff_x29 + -0xc) >> 0x1f;
    }
    memcpy(unaff_x26,*(void **)(unaff_x29 + -0x58),unaff_x28);
    uVar1 = *(uint *)(unaff_x22 + 3);
    *(uint *)(unaff_x29 + -0x40) = uVar12;
    unaff_w27 = *(int *)(unaff_x29 + -0x3c) + uVar12;
    if (uVar1 <= unaff_w27) goto LAB_05fb0834;
    unaff_x25 = (long)(int)unaff_w27;
    memcpy(*(void **)(unaff_x29 + -0x30),
           (void *)((long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * unaff_x25 + 0x20),
           unaff_x28);
    if (*(long *)(unaff_x29 + -0x28) == 0) goto LAB_05fb0838;
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    unaff_x23 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(unaff_x23 + 0x135) & 1) == 0) {
      unaff_x23 = FUN_03d8f26c(unaff_x23);
    }
    param_1 = *(long *)(unaff_x20 + 0x20);
  } while( true );
}


