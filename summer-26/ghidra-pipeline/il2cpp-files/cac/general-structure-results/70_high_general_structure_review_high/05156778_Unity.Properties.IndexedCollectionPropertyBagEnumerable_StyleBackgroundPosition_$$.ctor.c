/*
FUNCTION_NAME: Unity.Properties.IndexedCollectionPropertyBagEnumerable<StyleBackgroundPosition>$$.ctor
ENTRY_POINT: 05156778
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


void Unity_Properties_IndexedCollectionPropertyBagEnumerable<StyleBackgroundPosition>___ctor
               (long param_1,undefined8 ****param_2,uint *param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  void *__src;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  long alStack_70 [2];
  uint *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  long *plStack_38;
  undefined8 *puStack_30;
  undefined8 ***pppuStack_28;
  uint uStack_1c;
  undefined8 *puStack_18;
  long *plStack_10;
  long lStack_8;
  
  lVar13 = tpidr_el0;
  lStack_8 = *(long *)(lVar13 + 0x28);
  lVar12 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  lVar8 = *(long *)(lVar12 + 0x98);
  uVar16 = (ulong)*(uint *)(lVar8 + 0xfc);
  uVar9 = uVar16 + 0xf & 0x1fffffff0;
  puVar14 = (undefined8 *)((long)alStack_70 - uVar9);
  plStack_38 = (long *)((long)puVar14 - uVar9);
  iVar15 = *(int *)(lVar8 + 0x28);
  ppppuVar1 = param_2;
  if (-1 < iVar15) {
    ppppuVar1 = &pppuStack_28;
  }
  pppuStack_48 = param_2;
  pppuStack_28 = param_2;
  memcpy(puVar14,ppppuVar1,uVar16);
  puVar7 = *(undefined8 **)(lVar12 + 0xb0);
  puStack_18 = puVar14;
  if (-1 < iVar15) {
    puStack_18 = (undefined8 *)*puVar14;
  }
  puStack_30 = puVar14;
  puVar4 = (uint *)(*(code *)puVar7[2])(*puVar7,puVar7,param_1,&puStack_18,&uStack_1c);
  uVar3 = uStack_1c;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    lVar13 = *(long *)(lVar13 + 0x28);
  }
  else {
    uVar11 = *(uint *)(lVar8 + 0x18);
    iVar15 = 0;
    if (uVar11 != 0) {
      iVar15 = (int)uStack_1c / (int)uVar11;
    }
    uVar18 = uStack_1c - iVar15 * uVar11;
    uVar9 = (ulong)uVar18;
    puStack_60 = param_3;
    lStack_58 = lVar13;
    uStack_40 = uVar16;
    if (uVar11 <= uVar18) goto LAB_05156c78;
    plVar20 = *(long **)(param_1 + 0x18);
    uVar11 = *(int *)(lVar8 + (long)(int)uVar18 * 4 + 0x20) - 1;
    alStack_70[1] = uVar9;
    if ((int)uVar11 < 0) {
LAB_05156a44:
      uVar9 = uStack_40;
      uVar11 = *(uint *)(param_1 + 0x28);
      uVar18 = (uint)alStack_70[1];
      if ((int)uVar11 < 0) {
        if (plVar20 != (long *)0x0) {
          uVar11 = *(uint *)(param_1 + 0x24);
          if (uVar11 != *(uint *)(plVar20 + 3)) {
            *(uint *)(param_1 + 0x24) = uVar11 + 1;
Unity_Properties_IndexedCollectionPropertyBagEnumerable<StyleFont>___ctor:
            if (uVar11 < *(uint *)(plVar20 + 3)) {
              lVar13 = (long)(int)uVar11;
              FUN_03962e94((long)plVar20 + (ulong)*(uint *)(*plVar20 + 0x104) * lVar13 + 0x20,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x90) + 0x80),
                           uVar3);
              puVar14 = puStack_30;
              lVar8 = *(long *)(param_4 + 0x20);
              ppppuVar1 = (undefined8 ****)pppuStack_28;
              if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x98) + 0x28)) {
                ppppuVar1 = &pppuStack_28;
              }
              puVar4 = memcpy(puStack_30,ppppuVar1,uVar9);
              if (*(uint *)(plVar20 + 3) <= uVar11) goto LAB_05156c78;
              puVar4 = (uint *)FUN_03f133ac((long)plVar20 +
                                            (ulong)*(uint *)(*plVar20 + 0x104) * lVar13 + 0x20,
                                            *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x90) +
                                                     0x80) + 0x40,puVar14,uVar9 & 0xffffffff);
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) goto LAB_05156ce0;
              if ((*(uint *)(lVar8 + 0x18) <= uVar18) || (*(uint *)(plVar20 + 3) <= uVar11))
              goto LAB_05156c78;
              puVar4 = (uint *)FUN_03962e94((long)plVar20 +
                                            (ulong)*(uint *)(*plVar20 + 0x104) * lVar13 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20)
                                                                         + 0xc0) + 0x90) + 0x80) +
                                            0x20,*(int *)(lVar8 + (long)(int)uVar18 * 4 + 0x20) + -1
                                           );
              lVar13 = *(long *)(param_1 + 0x10);
              if (lVar13 == 0) goto LAB_05156ce0;
              if (uVar18 < *(uint *)(lVar13 + 0x18)) {
                puVar4 = (uint *)0x1;
                *(uint *)(lVar13 + (long)(int)uVar18 * 4 + 0x20) = uVar11 + 1;
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
LAB_05156c44:
                *puStack_60 = uVar11;
                if (*(long *)(lStack_58 + 0x28) == lStack_8) {
                  return;
                }
                goto LAB_05156d00;
              }
              lVar13 = *(long *)(lStack_58 + 0x28);
            }
            else {
LAB_05156c78:
              lVar13 = *(long *)(lStack_58 + 0x28);
            }
            if (lVar13 == lStack_8) {
                    /* WARNING: Subroutine does not return */
              FUN_03f13634();
            }
            goto LAB_05156d00;
          }
          puVar4 = (uint *)(*(code *)**(undefined8 **)
                                       (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1a8))
                                     (param_1);
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar11 = *(uint *)(param_1 + 0x24);
            plVar20 = *(long **)(param_1 + 0x18);
            iVar15 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
            *(uint *)(param_1 + 0x24) = uVar11 + 1;
            if (plVar20 != (long *)0x0) {
              iVar2 = 0;
              if (iVar15 != 0) {
                iVar2 = (int)uVar3 / iVar15;
              }
              uVar18 = uVar3 - iVar2 * iVar15;
              goto Unity_Properties_IndexedCollectionPropertyBagEnumerable<StyleFont>___ctor;
            }
          }
        }
      }
      else if (plVar20 != (long *)0x0) {
        if (uVar11 < *(uint *)(plVar20 + 3)) {
          puVar4 = (uint *)thunk_FUN_03f70400((long)plVar20 +
                                              (ulong)*(uint *)(*plVar20 + 0x104) * (ulong)uVar11 +
                                              0x20,*(long *)(*(long *)(*(long *)(*(long *)(param_4 +
                                                                                          0x20) +
                                                                                0xc0) + 0x90) + 0x80
                                                            ) + 0x20);
          *(uint *)(param_1 + 0x28) = *puVar4;
          goto Unity_Properties_IndexedCollectionPropertyBagEnumerable<StyleFont>___ctor;
        }
        goto LAB_05156c78;
      }
    }
    else if (plVar20 != (long *)0x0) {
      iVar15 = 0;
      lStack_50 = param_1;
      do {
        if (*(uint *)(plVar20 + 3) <= uVar11) goto LAB_05156c78;
        uVar9 = (ulong)uVar11;
        puVar4 = (uint *)thunk_FUN_03f70400((long)plVar20 +
                                            *(uint *)(*plVar20 + 0x104) * uVar9 + 0x20,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0)
                                                       + 0x90) + 0x80));
        if (*puVar4 == uVar3) {
          if (*(uint *)(plVar20 + 3) <= uVar11) goto LAB_05156c78;
          plVar19 = *(long **)(param_1 + 0x30);
          __src = (void *)thunk_FUN_03f70400((long)plVar20 +
                                             *(uint *)(*plVar20 + 0x104) * uVar9 + 0x20,
                                             *(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20)
                                                                          + 0xc0) + 0x90) + 0x80) +
                                             0x40);
          uVar16 = uStack_40;
          memcpy(puStack_30,__src,uStack_40);
          lVar13 = *(long *)(param_4 + 0x20);
          ppppuVar1 = (undefined8 ****)pppuStack_48;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x98) + 0x28)) {
            ppppuVar1 = &pppuStack_28;
          }
          puVar4 = memcpy(plStack_38,ppppuVar1,uVar16);
          if (plVar19 == (long *)0x0) goto LAB_05156ce0;
          lVar8 = *(long *)(lVar13 + 0xc0);
          lVar13 = *(long *)(lVar8 + 0x20);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03f4b260(lVar13);
            lVar8 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
          }
          puVar14 = puStack_30;
          plVar17 = plStack_38;
          if (-1 < *(int *)(*(long *)(lVar8 + 0x98) + 0x28)) {
            puVar14 = (undefined8 *)*puStack_30;
            plVar17 = (long *)*plStack_38;
          }
          lVar8 = *plVar19;
          uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar16 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar13) {
                lVar13 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
                goto LAB_051569d0;
              }
              uVar16 = uVar16 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar16 != 0);
          }
          lVar13 = FUN_03f4b594(plVar19,lVar13,0);
LAB_051569d0:
          lVar13 = *(long *)(lVar13 + 8);
          puStack_18 = puVar14;
          plStack_10 = plVar17;
          puVar4 = (uint *)(**(code **)(lVar13 + 0x10))
                                     (*(undefined8 *)(lVar13 + 8),lVar13,plVar19,&puStack_18,
                                      &uStack_1c);
          param_1 = lStack_50;
          if ((char)uStack_1c != '\0') {
            puVar4 = (uint *)0x0;
            goto LAB_05156c44;
          }
        }
        if ((int)*(uint *)(plVar20 + 3) <= iVar15) {
          thunk_FUN_03f786f8(PTR_DAT_09111b70);
          uVar5 = thunk_FUN_03f4e68c();
          uVar6 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
          puVar4 = (uint *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                     (uVar5,uVar6,0);
          if (*(long *)(lStack_58 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f134f0(uVar5,param_4);
          }
          goto LAB_05156d00;
        }
        if (*(uint *)(plVar20 + 3) <= uVar11) goto LAB_05156c78;
        iVar15 = iVar15 + 1;
        puVar4 = (uint *)thunk_FUN_03f70400((long)plVar20 +
                                            *(uint *)(*plVar20 + 0x104) * uVar9 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20)
                                                                         + 0xc0) + 0x90) + 0x80) +
                                            0x20);
        uVar11 = *puVar4;
      } while (-1 < (int)uVar11);
      goto LAB_05156a44;
    }
LAB_05156ce0:
    lVar13 = *(long *)(lStack_58 + 0x28);
  }
  if (lVar13 == lStack_8) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
LAB_05156d00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


