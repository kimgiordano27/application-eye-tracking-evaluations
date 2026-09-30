/*
FUNCTION_NAME: Unity.Properties.IndexedCollectionPropertyBagEnumerable<StyleBackgroundPosition>$$GetEnumerator
ENTRY_POINT: 051567a4
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Properties_IndexedCollectionPropertyBagEnumerable<StyleBackgroundPosition>__GetEnumerator
               (undefined8 param_1,long param_2,void *param_3,undefined8 param_4,long param_5)

{
  void *__dest;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long in_x9;
  code *pcVar10;
  ulong uVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  int iVar16;
  ulong uVar17;
  size_t __n;
  uint uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  lVar8 = *(long *)(param_5 + 0x20);
  *(void **)(unaff_x29 + -0x28) = param_3;
  lVar15 = *(long *)(lVar8 + 0xc0);
  lVar8 = *(long *)(lVar15 + 0x98);
  uVar17 = (ulong)*(uint *)(lVar8 + 0xfc);
  uVar11 = uVar17 + 0xf & 0x1fffffff0;
  puVar19 = (undefined8 *)(in_x9 - uVar11);
  *(ulong *)(unaff_x29 + -0x38) = (long)puVar19 - uVar11;
  iVar16 = *(int *)(lVar8 + 0x28);
  *(void **)(unaff_x29 + -0x48) = param_3;
  if (-1 < iVar16) {
    param_3 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(puVar19,param_3,uVar17);
  puVar7 = *(undefined8 **)(lVar15 + 0xb0);
  uVar3 = *puVar7;
  puVar9 = puVar19;
  if (-1 < iVar16) {
    puVar9 = (undefined8 *)*puVar19;
  }
  pcVar10 = (code *)puVar7[2];
  *(undefined8 **)(unaff_x29 + -0x30) = puVar19;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
  puVar4 = (uint *)(*pcVar10)(uVar3,puVar7,param_2,unaff_x29 + -0x18,unaff_x29 + -0x1c);
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x28);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x60) = unaff_x23;
    *(long *)(unaff_x29 + -0x58) = unaff_x22;
    uVar1 = *(uint *)(unaff_x29 + -0x1c);
    uVar14 = *(uint *)(lVar8 + 0x18);
    *(ulong *)(unaff_x29 + -0x40) = uVar17;
    iVar16 = 0;
    if (uVar14 != 0) {
      iVar16 = (int)uVar1 / (int)uVar14;
    }
    uVar18 = uVar1 - iVar16 * uVar14;
    if (uVar14 <= uVar18) goto LAB_05156c78;
    plVar21 = *(long **)(param_2 + 0x18);
    *(ulong *)(unaff_x29 + -0x68) = (ulong)uVar18;
    uVar14 = *(int *)(lVar8 + (long)(int)uVar18 * 4 + 0x20) - 1;
    if ((int)uVar14 < 0) {
LAB_05156a44:
      uVar14 = *(uint *)(param_2 + 0x28);
      if ((int)uVar14 < 0) {
        uVar11 = *(ulong *)(unaff_x29 + -0x40);
        if (plVar21 != (long *)0x0) {
          uVar14 = *(uint *)(param_2 + 0x24);
          uVar18 = (uint)*(undefined8 *)(unaff_x29 + -0x68);
          if (uVar14 != *(uint *)(plVar21 + 3)) {
            *(uint *)(param_2 + 0x24) = uVar14 + 1;
Unity_Properties_IndexedCollectionPropertyBagEnumerable<StyleFont>___ctor:
            if (uVar14 < *(uint *)(plVar21 + 3)) {
              lVar8 = (long)(int)uVar14;
              FUN_03962e94((long)plVar21 + (ulong)*(uint *)(*plVar21 + 0x104) * lVar8 + 0x20,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x90) + 0x80)
                           ,uVar1);
              lVar15 = *(long *)(unaff_x21 + 0x20);
              __dest = *(void **)(unaff_x29 + -0x30);
              pvVar5 = *(void **)(unaff_x29 + -0x28);
              if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x98) + 0x28)) {
                pvVar5 = (void *)(unaff_x29 + -0x28);
              }
              puVar4 = memcpy(__dest,pvVar5,uVar11);
              if (*(uint *)(plVar21 + 3) <= uVar14) goto LAB_05156c78;
              puVar4 = (uint *)FUN_03f133ac((long)plVar21 +
                                            (ulong)*(uint *)(*plVar21 + 0x104) * lVar8 + 0x20,
                                            *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x90) +
                                                     0x80) + 0x40,__dest,uVar11 & 0xffffffff);
              lVar15 = *(long *)(param_2 + 0x10);
              if (lVar15 == 0) goto LAB_05156ce0;
              if ((*(uint *)(lVar15 + 0x18) <= uVar18) || (*(uint *)(plVar21 + 3) <= uVar14))
              goto LAB_05156c78;
              puVar4 = (uint *)FUN_03962e94((long)plVar21 +
                                            (ulong)*(uint *)(*plVar21 + 0x104) * lVar8 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20
                                                                                   ) + 0xc0) + 0x90)
                                                     + 0x80) + 0x20,
                                            *(int *)(lVar15 + (long)(int)uVar18 * 4 + 0x20) + -1);
              lVar15 = *(long *)(param_2 + 0x10);
              if (lVar15 == 0) goto LAB_05156ce0;
              puVar13 = *(uint **)(unaff_x29 + -0x60);
              lVar8 = *(long *)(unaff_x29 + -0x58);
              if (uVar18 < *(uint *)(lVar15 + 0x18)) {
                puVar4 = (uint *)0x1;
                *(uint *)(lVar15 + (long)(int)uVar18 * 4 + 0x20) = uVar14 + 1;
                *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
                *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
LAB_05156c44:
                *puVar13 = uVar14;
                if (*(long *)(lVar8 + 0x28) == *(long *)(unaff_x29 + -8)) {
                  return;
                }
                goto LAB_05156d00;
              }
              lVar8 = *(long *)(lVar8 + 0x28);
            }
            else {
LAB_05156c78:
              lVar8 = *(long *)(*(long *)(unaff_x29 + -0x58) + 0x28);
            }
            if (lVar8 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f13634();
            }
            goto LAB_05156d00;
          }
          puVar4 = (uint *)(*(code *)**(undefined8 **)
                                       (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x1a8))
                                     (param_2);
          if (*(long *)(param_2 + 0x10) != 0) {
            uVar14 = *(uint *)(param_2 + 0x24);
            plVar21 = *(long **)(param_2 + 0x18);
            iVar16 = *(int *)(*(long *)(param_2 + 0x10) + 0x18);
            *(uint *)(param_2 + 0x24) = uVar14 + 1;
            if (plVar21 != (long *)0x0) {
              iVar2 = 0;
              if (iVar16 != 0) {
                iVar2 = (int)uVar1 / iVar16;
              }
              uVar18 = uVar1 - iVar2 * iVar16;
              goto Unity_Properties_IndexedCollectionPropertyBagEnumerable<StyleFont>___ctor;
            }
          }
        }
      }
      else {
        uVar11 = *(ulong *)(unaff_x29 + -0x40);
        if (plVar21 != (long *)0x0) {
          uVar18 = (uint)*(undefined8 *)(unaff_x29 + -0x68);
          if (uVar14 < *(uint *)(plVar21 + 3)) {
            puVar4 = (uint *)thunk_FUN_03f70400((long)plVar21 +
                                                (ulong)*(uint *)(*plVar21 + 0x104) * (ulong)uVar14 +
                                                0x20,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  unaff_x21 + 0x20) + 0xc0) + 0x90) + 0x80) + 0x20);
            *(uint *)(param_2 + 0x28) = *puVar4;
            goto Unity_Properties_IndexedCollectionPropertyBagEnumerable<StyleFont>___ctor;
          }
          goto LAB_05156c78;
        }
      }
    }
    else if (plVar21 != (long *)0x0) {
      iVar16 = 0;
      *(long *)(unaff_x29 + -0x50) = param_2;
      do {
        if (*(uint *)(plVar21 + 3) <= uVar14) goto LAB_05156c78;
        uVar11 = (ulong)uVar14;
        puVar4 = (uint *)thunk_FUN_03f70400((long)plVar21 +
                                            *(uint *)(*plVar21 + 0x104) * uVar11 + 0x20,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0
                                                                 ) + 0x90) + 0x80));
        if (*puVar4 == uVar1) {
          if (*(uint *)(plVar21 + 3) <= uVar14) goto LAB_05156c78;
          plVar20 = *(long **)(param_2 + 0x30);
          pvVar5 = (void *)thunk_FUN_03f70400((long)plVar21 +
                                              *(uint *)(*plVar21 + 0x104) * uVar11 + 0x20,
                                              *(long *)(*(long *)(*(long *)(*(long *)(unaff_x21 +
                                                                                     0x20) + 0xc0) +
                                                                 0x90) + 0x80) + 0x40);
          __n = *(size_t *)(unaff_x29 + -0x40);
          memcpy(*(void **)(unaff_x29 + -0x30),pvVar5,__n);
          lVar8 = *(long *)(unaff_x21 + 0x20);
          pvVar5 = *(void **)(unaff_x29 + -0x48);
          if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x98) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -0x28);
          }
          puVar4 = memcpy(*(void **)(unaff_x29 + -0x38),pvVar5,__n);
          if (plVar20 == (long *)0x0) goto LAB_05156ce0;
          lVar15 = *(long *)(lVar8 + 0xc0);
          lVar8 = *(long *)(lVar15 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03f4b260(lVar8);
            lVar15 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          }
          puVar19 = *(undefined8 **)(unaff_x29 + -0x38);
          puVar9 = *(undefined8 **)(unaff_x29 + -0x30);
          if (-1 < *(int *)(*(long *)(lVar15 + 0x98) + 0x28)) {
            puVar9 = (undefined8 *)*puVar9;
            puVar19 = (undefined8 *)*puVar19;
          }
          lVar15 = *plVar20;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                lVar8 = lVar15 + (long)*piVar12 * 0x10 + 0x138;
                goto LAB_051569d0;
              }
              uVar17 = uVar17 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar17 != 0);
          }
          lVar8 = FUN_03f4b594(plVar20,lVar8,0);
LAB_051569d0:
          *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
          *(undefined8 **)(unaff_x29 + -0x10) = puVar19;
          lVar8 = *(long *)(lVar8 + 8);
          puVar4 = (uint *)(**(code **)(lVar8 + 0x10))
                                     (*(undefined8 *)(lVar8 + 8),lVar8,plVar20,unaff_x29 + -0x18,
                                      unaff_x29 + -0x1c);
          param_2 = *(long *)(unaff_x29 + -0x50);
          if (*(char *)(unaff_x29 + -0x1c) != '\0') {
            puVar13 = *(uint **)(unaff_x29 + -0x60);
            lVar8 = *(long *)(unaff_x29 + -0x58);
            puVar4 = (uint *)0x0;
            goto LAB_05156c44;
          }
        }
        if ((int)*(uint *)(plVar21 + 3) <= iVar16) {
          thunk_FUN_03f786f8(PTR_DAT_09111b70);
          uVar3 = thunk_FUN_03f4e68c();
          uVar6 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
          puVar4 = (uint *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                     (uVar3,uVar6,0);
          if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f134f0(uVar3);
          }
          goto LAB_05156d00;
        }
        if (*(uint *)(plVar21 + 3) <= uVar14) goto LAB_05156c78;
        iVar16 = iVar16 + 1;
        puVar4 = (uint *)thunk_FUN_03f70400((long)plVar21 +
                                            *(uint *)(*plVar21 + 0x104) * uVar11 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20
                                                                                   ) + 0xc0) + 0x90)
                                                     + 0x80) + 0x20);
        uVar14 = *puVar4;
      } while (-1 < (int)uVar14);
      goto LAB_05156a44;
    }
LAB_05156ce0:
    lVar8 = *(long *)(*(long *)(unaff_x29 + -0x58) + 0x28);
  }
  if (lVar8 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
LAB_05156d00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


