/*
FUNCTION_NAME: Unity.Netcode.UserNetworkVariableSerialization.ReadDeltaDelegate<Vector3>$$EndInvoke
ENTRY_POINT: 05fb0610
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


void Unity_Netcode_UserNetworkVariableSerialization_ReadDeltaDelegate<Vector3>__EndInvoke(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  size_t sVar8;
  long lVar9;
  long unaff_x21;
  void *__dest;
  long *unaff_x22;
  long lVar10;
  undefined8 *puVar11;
  void *unaff_x24;
  undefined8 *puVar12;
  long unaff_x25;
  uint uVar13;
  uint unaff_w27;
  undefined8 *unaff_x28;
  size_t __n;
  long unaff_x29;
  
  do {
    uVar13 = *(uint *)(unaff_x19 + 3);
    if (uVar13 <= unaff_w27) {
LAB_05fb0834:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar10 = *unaff_x19;
    sVar8 = *(size_t *)(unaff_x29 + -0x60);
    memcpy(unaff_x24,(void *)((long)unaff_x19 + (ulong)*(uint *)(lVar10 + 0x104) * unaff_x25 + 0x20)
           ,sVar8);
    if (uVar13 <= (uint)unaff_x21) goto LAB_05fb0834;
    memcpy((void *)((long)unaff_x19 + (ulong)*(uint *)(lVar10 + 0x104) * unaff_x21 + 0x20),unaff_x24
           ,sVar8);
    lVar9 = *(long *)(unaff_x29 + -0x38);
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03d8f26c();
    }
    unaff_x19 = *(long **)(unaff_x29 + -0x70);
    sVar8 = *(size_t *)(unaff_x29 + -0x48);
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x50);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03d8f26c();
    }
    if (*(uint *)(unaff_x19 + 3) <= (uint)unaff_x21) goto LAB_05fb0834;
    FUN_03d2d260(lVar10,(long)unaff_x19 + (ulong)*(uint *)(*unaff_x19 + 0x104) * unaff_x21 + 0x20,
                 unaff_x24);
    iVar3 = *(int *)(unaff_x29 + -0x40);
    if (*(int *)(unaff_x29 + -0x74) < iVar3) {
LAB_05fb06e4:
      uVar13 = *(uint *)(unaff_x22 + 3);
      lVar10 = *(long *)(unaff_x29 + -0x88);
      __n = *(size_t *)(unaff_x29 + -0x60);
      sVar8 = *(size_t *)(unaff_x29 + -0x48);
      memcpy(unaff_x28,*(void **)(unaff_x29 + -0x58),sVar8);
      if (unaff_w27 < uVar13) {
        memcpy((void *)((long)unaff_x22 + unaff_x25 * (ulong)*(uint *)(*unaff_x22 + 0x104) + 0x20),
               unaff_x28,sVar8);
        lVar4 = *(long *)(lVar9 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03d8f26c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x40);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03d8f26c();
        }
        if (unaff_w27 < *(uint *)(unaff_x22 + 3)) {
          FUN_03d2d260(lVar4,(long)unaff_x22 +
                             unaff_x25 * (ulong)*(uint *)(*unaff_x22 + 0x104) + 0x20,unaff_x28);
          __dest = *(void **)(unaff_x29 + -0x50);
          memcpy(__dest,*(void **)(unaff_x29 + -0x80),__n);
          if (unaff_w27 < *(uint *)(unaff_x19 + 3)) {
            memcpy((void *)((long)unaff_x19 +
                           unaff_x25 * (ulong)*(uint *)(*unaff_x19 + 0x104) + 0x20),__dest,__n);
            lVar9 = *(long *)(lVar9 + 0x20);
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
              if (*(long *)(lVar10 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
      }
      goto LAB_05fb0834;
    }
    uVar13 = iVar3 * 2;
    if ((int)uVar13 < *(int *)(unaff_x29 + -100)) {
      uVar2 = *(uint *)(unaff_x22 + 3);
      uVar1 = uVar13 + *(int *)(unaff_x29 + -0x78);
      if (uVar2 <= uVar1 - 1) goto LAB_05fb0834;
      lVar10 = *unaff_x22;
      memcpy(unaff_x28,
             (void *)((long)unaff_x22 +
                     (ulong)*(uint *)(lVar10 + 0x104) * (long)(int)(uVar1 - 1) + 0x20),sVar8);
      if (uVar2 <= uVar1) goto LAB_05fb0834;
      memcpy(*(void **)(unaff_x29 + -0x30),
             (void *)((long)unaff_x22 + (ulong)*(uint *)(lVar10 + 0x104) * (long)(int)uVar1 + 0x20),
             sVar8);
      if (*(long *)(unaff_x29 + -0x28) == 0) goto LAB_05fb0838;
      lVar9 = *(long *)(unaff_x29 + -0x38);
      lVar10 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03d8f26c();
      }
      lVar10 = **(long **)(lVar10 + 0xc0);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03d8f26c(lVar10);
      }
      lVar4 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03d8f26c();
      }
      puVar12 = unaff_x28;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x28)) {
        puVar12 = (undefined8 *)*unaff_x28;
      }
      lVar4 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03d8f26c();
      }
      puVar11 = *(undefined8 **)(unaff_x29 + -0x30);
      plVar5 = *(long **)(unaff_x29 + -0x28);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x28)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      lVar4 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar10) {
            lVar10 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_05fb03fc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar10 = FUN_03d8f370(plVar5,lVar10,0);
      plVar5 = *(long **)(unaff_x29 + -0x28);
LAB_05fb03fc:
      *(undefined8 **)(unaff_x29 + -0x20) = puVar12;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
      lVar10 = *(long *)(lVar10 + 8);
      (**(code **)(lVar10 + 0x10))
                (*(undefined8 *)(lVar10 + 8),lVar10,plVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
      uVar13 = uVar13 | *(uint *)(unaff_x29 + -0xc) >> 0x1f;
    }
    memcpy(unaff_x28,*(void **)(unaff_x29 + -0x58),sVar8);
    uVar1 = *(uint *)(unaff_x22 + 3);
    *(uint *)(unaff_x29 + -0x40) = uVar13;
    unaff_w27 = *(int *)(unaff_x29 + -0x3c) + uVar13;
    if (uVar1 <= unaff_w27) goto LAB_05fb0834;
    unaff_x25 = (long)(int)unaff_w27;
    memcpy(*(void **)(unaff_x29 + -0x30),
           (void *)((long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * unaff_x25 + 0x20),sVar8
          );
    if (*(long *)(unaff_x29 + -0x28) == 0) {
LAB_05fb0838:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03d8f26c();
    }
    lVar10 = **(long **)(lVar10 + 0xc0);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03d8f26c(lVar10);
    }
    lVar4 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    puVar12 = unaff_x28;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x28)) {
      puVar12 = (undefined8 *)*unaff_x28;
    }
    lVar9 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03d8f26c();
    }
    puVar11 = *(undefined8 **)(unaff_x29 + -0x30);
    plVar5 = *(long **)(unaff_x29 + -0x28);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x40) + 0x28)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    lVar9 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar10) {
          lVar10 = lVar9 + (long)*piVar7 * 0x10 + 0x138;
          goto Unity_Netcode_UserNetworkVariableSerialization_ReadDeltaDelegate<Vector3>__Invoke;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar10 = FUN_03d8f370(plVar5,lVar10,0);
    plVar5 = *(long **)(unaff_x29 + -0x28);
Unity_Netcode_UserNetworkVariableSerialization_ReadDeltaDelegate<Vector3>__Invoke:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar12;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
    lVar10 = *(long *)(lVar10 + 8);
    (**(code **)(lVar10 + 0x10))
              (*(undefined8 *)(lVar10 + 8),lVar10,plVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (-1 < *(int *)(unaff_x29 + -0xc)) {
      lVar9 = *(long *)(unaff_x29 + -0x38);
      unaff_w27 = *(int *)(unaff_x29 + -0x3c) + iVar3;
      unaff_x25 = (long)(int)unaff_w27;
      goto LAB_05fb06e4;
    }
    uVar13 = *(uint *)(unaff_x22 + 3);
    if (uVar13 <= unaff_w27) goto LAB_05fb0834;
    lVar10 = *unaff_x22;
    memcpy(unaff_x28,(void *)((long)unaff_x22 + (ulong)*(uint *)(lVar10 + 0x104) * unaff_x25 + 0x20)
           ,sVar8);
    unaff_x24 = *(void **)(unaff_x29 + -0x50);
    uVar1 = *(int *)(unaff_x29 + -0x3c) + iVar3;
    if (uVar13 <= uVar1) goto LAB_05fb0834;
    unaff_x21 = (long)(int)uVar1;
    memcpy((void *)((long)unaff_x22 + (ulong)*(uint *)(lVar10 + 0x104) * unaff_x21 + 0x20),unaff_x28
           ,sVar8);
    lVar10 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03d8f26c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03d8f26c();
    }
    if (*(uint *)(unaff_x22 + 3) <= uVar1) goto LAB_05fb0834;
    FUN_03d2d260(lVar10,(long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * unaff_x21 + 0x20,
                 unaff_x28);
  } while( true );
}


