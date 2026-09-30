/*
FUNCTION_NAME: Unity.Netcode.UserNetworkVariableSerialization.ReadDeltaDelegate<Vector3>$$BeginInvoke
ENTRY_POINT: 05fb0554
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


void Unity_Netcode_UserNetworkVariableSerialization_ReadDeltaDelegate<Vector3>__BeginInvoke
               (code *param_1,undefined8 param_2,long param_3,long *param_4,long param_5,
               long param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  size_t sVar7;
  long lVar8;
  int unaff_w21;
  long lVar9;
  long *unaff_x22;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  long unaff_x25;
  undefined8 *unaff_x26;
  uint uVar13;
  uint unaff_w27;
  size_t unaff_x28;
  size_t __n;
  long unaff_x29;
  
  while ((*param_1)(param_2,param_3,param_4,param_5,param_6), *(int *)(unaff_x29 + -0xc) < 0) {
    uVar13 = *(uint *)(unaff_x22 + 3);
    if (uVar13 <= unaff_w27) goto LAB_05fb0834;
    lVar8 = *unaff_x22;
    memcpy(unaff_x26,(void *)((long)unaff_x22 + (ulong)*(uint *)(lVar8 + 0x104) * unaff_x25 + 0x20),
           unaff_x28);
    pvVar11 = *(void **)(unaff_x29 + -0x50);
    uVar1 = *(int *)(unaff_x29 + -0x3c) + unaff_w21;
    if (uVar13 <= uVar1) goto LAB_05fb0834;
    lVar9 = (long)(int)uVar1;
    memcpy((void *)((long)unaff_x22 + (ulong)*(uint *)(lVar8 + 0x104) * lVar9 + 0x20),unaff_x26,
           unaff_x28);
    lVar8 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    if (*(uint *)(unaff_x22 + 3) <= uVar1) goto LAB_05fb0834;
    FUN_03d2d260(lVar8,(long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * lVar9 + 0x20,
                 unaff_x26);
    uVar13 = *(uint *)(unaff_x19 + 3);
    if (uVar13 <= unaff_w27) goto LAB_05fb0834;
    lVar8 = *unaff_x19;
    sVar7 = *(size_t *)(unaff_x29 + -0x60);
    memcpy(pvVar11,(void *)((long)unaff_x19 + (ulong)*(uint *)(lVar8 + 0x104) * unaff_x25 + 0x20),
           sVar7);
    if (uVar13 <= uVar1) goto LAB_05fb0834;
    memcpy((void *)((long)unaff_x19 + (ulong)*(uint *)(lVar8 + 0x104) * lVar9 + 0x20),pvVar11,sVar7)
    ;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    lVar3 = *(long *)(lVar8 + 0x20);
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
    uVar13 = unaff_w21 * 2;
    if ((int)uVar13 < *(int *)(unaff_x29 + -100)) {
      uVar2 = *(uint *)(unaff_x22 + 3);
      uVar1 = uVar13 + *(int *)(unaff_x29 + -0x78);
      if (uVar2 <= uVar1 - 1) goto LAB_05fb0834;
      lVar8 = *unaff_x22;
      memcpy(unaff_x26,
             (void *)((long)unaff_x22 +
                     (ulong)*(uint *)(lVar8 + 0x104) * (long)(int)(uVar1 - 1) + 0x20),unaff_x28);
      if (uVar2 <= uVar1) goto LAB_05fb0834;
      memcpy(*(void **)(unaff_x29 + -0x30),
             (void *)((long)unaff_x22 + (ulong)*(uint *)(lVar8 + 0x104) * (long)(int)uVar1 + 0x20),
             unaff_x28);
      if (*(long *)(unaff_x29 + -0x28) == 0) goto LAB_05fb0838;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      lVar9 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03d8f26c();
      }
      lVar9 = **(long **)(lVar9 + 0xc0);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03d8f26c(lVar9);
      }
      lVar3 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c();
      }
      puVar12 = unaff_x26;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x40) + 0x28)) {
        puVar12 = (undefined8 *)*unaff_x26;
      }
      lVar3 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c();
      }
      puVar10 = *(undefined8 **)(unaff_x29 + -0x30);
      plVar4 = *(long **)(unaff_x29 + -0x28);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x40) + 0x28)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      lVar3 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar9) {
            lVar9 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_05fb03fc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar9 = FUN_03d8f370(plVar4,lVar9,0);
      plVar4 = *(long **)(unaff_x29 + -0x28);
LAB_05fb03fc:
      *(undefined8 **)(unaff_x29 + -0x20) = puVar12;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      lVar9 = *(long *)(lVar9 + 8);
      (**(code **)(lVar9 + 0x10))
                (*(undefined8 *)(lVar9 + 8),lVar9,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
      uVar13 = uVar13 | *(uint *)(unaff_x29 + -0xc) >> 0x1f;
    }
    memcpy(unaff_x26,*(void **)(unaff_x29 + -0x58),unaff_x28);
    uVar1 = *(uint *)(unaff_x22 + 3);
    *(uint *)(unaff_x29 + -0x40) = uVar13;
    unaff_w27 = *(int *)(unaff_x29 + -0x3c) + uVar13;
    if (uVar1 <= unaff_w27) goto LAB_05fb0834;
    unaff_x25 = (long)(int)unaff_w27;
    memcpy(*(void **)(unaff_x29 + -0x30),
           (void *)((long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * unaff_x25 + 0x20),
           unaff_x28);
    if (*(long *)(unaff_x29 + -0x28) == 0) {
LAB_05fb0838:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar9 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03d8f26c();
    }
    lVar9 = **(long **)(lVar9 + 0xc0);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03d8f26c(lVar9);
    }
    lVar3 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    puVar12 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x40) + 0x28)) {
      puVar12 = (undefined8 *)*unaff_x26;
    }
    lVar8 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    puVar10 = *(undefined8 **)(unaff_x29 + -0x30);
    param_4 = *(long **)(unaff_x29 + -0x28);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x40) + 0x28)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    lVar8 = *param_4;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar9) {
          lVar8 = lVar8 + (long)*piVar6 * 0x10 + 0x138;
          goto Unity_Netcode_UserNetworkVariableSerialization_ReadDeltaDelegate<Vector3>__Invoke;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar8 = FUN_03d8f370(param_4,lVar9,0);
    param_4 = *(long **)(unaff_x29 + -0x28);
Unity_Netcode_UserNetworkVariableSerialization_ReadDeltaDelegate<Vector3>__Invoke:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar12;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
    param_3 = *(long *)(lVar8 + 8);
    param_5 = unaff_x29 + -0x20;
    param_6 = unaff_x29 + -0xc;
    param_2 = *(undefined8 *)(param_3 + 8);
    param_1 = *(code **)(param_3 + 0x10);
  }
  lVar8 = *(long *)(unaff_x29 + -0x38);
  unaff_w27 = *(int *)(unaff_x29 + -0x3c) + unaff_w21;
  unaff_x25 = (long)(int)unaff_w27;
LAB_05fb06e4:
  uVar13 = *(uint *)(unaff_x22 + 3);
  lVar9 = *(long *)(unaff_x29 + -0x88);
  __n = *(size_t *)(unaff_x29 + -0x60);
  sVar7 = *(size_t *)(unaff_x29 + -0x48);
  memcpy(unaff_x26,*(void **)(unaff_x29 + -0x58),sVar7);
  if (unaff_w27 < uVar13) {
    memcpy((void *)((long)unaff_x22 + unaff_x25 * (ulong)*(uint *)(*unaff_x22 + 0x104) + 0x20),
           unaff_x26,sVar7);
    lVar3 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    if (unaff_w27 < *(uint *)(unaff_x22 + 3)) {
      FUN_03d2d260(lVar3,(long)unaff_x22 + unaff_x25 * (ulong)*(uint *)(*unaff_x22 + 0x104) + 0x20,
                   unaff_x26);
      pvVar11 = *(void **)(unaff_x29 + -0x50);
      memcpy(pvVar11,*(void **)(unaff_x29 + -0x80),__n);
      if (unaff_w27 < *(uint *)(unaff_x19 + 3)) {
        memcpy((void *)((long)unaff_x19 + unaff_x25 * (ulong)*(uint *)(*unaff_x19 + 0x104) + 0x20),
               pvVar11,__n);
        lVar8 = *(long *)(lVar8 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03d8f26c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x50);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03d8f26c();
        }
        if (unaff_w27 < *(uint *)(unaff_x19 + 3)) {
          FUN_03d2d260(lVar8,(long)unaff_x19 +
                             unaff_x25 * (ulong)*(uint *)(*unaff_x19 + 0x104) + 0x20,
                       *(undefined8 *)(unaff_x29 + -0x50));
          if (*(long *)(lVar9 + 0x28) != *(long *)(unaff_x29 + -8)) {
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


