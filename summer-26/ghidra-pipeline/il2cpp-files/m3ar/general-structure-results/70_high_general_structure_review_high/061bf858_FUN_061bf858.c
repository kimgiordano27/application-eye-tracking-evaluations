/*
FUNCTION_NAME: FUN_061bf858
ENTRY_POINT: 061bf858
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_061bf858(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 local_8c [2];
  undefined8 uStack_78;
  undefined8 local_70 [2];
  undefined8 uStack_5c;
  
                    /* try { // try from 061bf868 to 062bf883 has its CatchHandler @ 061bf8a0 */
  if ((DAT_09541d1a & 1) == 0) {
                    /* try { // try from 061bf884 to 062bf8b7 has its CatchHandler @ 061bf7f0 */
    FUN_0403162c(PTR_DAT_08f8bda8);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 061bf82c with catch @ 061bf898
                        */
    FUN_0403162c(PTR_DAT_08f8bdb0);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 061bf84c with catch @ 061bf89c
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 061bf868 with catch @ 061bf8a0
                        */
    FUN_0403162c(PTR_DAT_08f8f670);
    FUN_0403162c(PTR_DAT_08f65580);
                    /* try { // try from 061bf8b8 to 062bf8cf has its CatchHandler @ 061bf968 */
    DAT_09541d1a = 1;
  }
  if ((*(long *)(param_5 + 0x2d0) != 0) &&
     (plVar5 = (long *)FUN_0872a1a0(*(long *)(param_5 + 0x2d0),0), puVar1 = PTR_DAT_08f8f670,
     plVar5 != (long *)0x0)) {
                    /* try { // try from 061bf8d0 to 062bf8e3 has its CatchHandler @ 061bf7f0 */
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f8f670) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_061bf92c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f8f670,2);
LAB_061bf92c:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar4 < 0) {
      return;
    }
    lVar8 = *plVar5;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto Unity_Properties_TypeConverter<short,_int>__Invoke;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar7,2);
Unity_Properties_TypeConverter<short,_int>__Invoke:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar4 < 1) {
      lVar8 = *plVar5;
      lVar7 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 6) * 0x10 + 0x138);
            goto LAB_061bf9f0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar7,6);
LAB_061bf9f0:
      iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (iVar4 < 1) {
        uVar16 = *(undefined8 *)(param_5 + 0x2ec);
        if (DAT_09539c0b == '\0') {
          FUN_0403162c(PTR_DAT_08f65578);
          DAT_09539c0b = '\x01';
        }
        fVar11 = (float)uVar16 - (float)**(undefined8 **)(*(long *)PTR_DAT_08f65578 + 0xb8);
        fVar14 = (float)((ulong)uVar16 >> 0x20) -
                 (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65578 + 0xb8) >> 0x20);
        param_2 = DAT_01a2e7f0;
        if (fVar11 * fVar11 + fVar14 * fVar14 < DAT_01a2e7f0) {
          return;
        }
      }
    }
    if (*(long *)(param_5 + 0x2d8) == 0) {
      if ((*(long *)(param_5 + 0x2d0) != 0) &&
         (plVar5 = (long *)FUN_086ef654(*(long *)(param_5 + 0x2d0),0), puVar1 = PTR_DAT_08f8bda8,
         plVar5 != (long *)0x0)) {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f8bda8) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x3a) * 0x10 + 0x138);
              goto LAB_061bfb84;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f8bda8,0x3a);
LAB_061bfb84:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        uVar12 = *(undefined4 *)(param_5 + 0x2ec);
        fVar14 = *(float *)(param_5 + 0x2f0);
        fVar11 = param_3;
        FUN_086f65a8(param_5,0);
        uVar12 = FUN_061bfd80(uVar12,param_5,0,param_7 & 1);
        *(undefined4 *)(param_5 + 0x2ec) = uVar12;
        *(float *)(param_5 + 0x2f0) = fVar14;
        if (*(long *)(param_5 + 0x2d0) != 0) {
          fVar15 = fVar14;
          FUN_086f65a8(*(long *)(param_5 + 0x2d0),0);
          fVar17 = param_4;
          FUN_086f65a8(param_5,0);
          if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (ABS(param_4 - fVar17) <= fVar14) {
            fVar14 = ABS(param_4 - fVar17);
          }
          if (*(long *)(param_5 + 0x2d0) != 0) {
            fVar17 = *(float *)(param_5 + 0x2ec);
            plVar5 = (long *)FUN_086ef654(*(long *)(param_5 + 0x2d0),0);
            if (plVar5 != (long *)0x0) {
              lVar7 = *plVar5;
              fVar14 = -fVar14;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                    puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x3a) * 0x10 + 0x138);
                    goto LAB_061bfc88;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)puVar1,0x3a);
LAB_061bfc88:
              fVar13 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
              bVar2 = false;
              if ((fVar13 == -fVar17) && (bVar2 = false, !NAN(fVar15) && !NAN(fVar14))) {
                bVar2 = fVar15 == fVar14;
              }
              bVar3 = false;
              if ((bVar2) && (bVar3 = false, !NAN(param_3) && !NAN(fVar11))) {
                bVar3 = param_3 == fVar11;
              }
              if (bVar3) {
                return;
              }
              if (*(long *)(param_5 + 0x2d0) != 0) {
                plVar5 = (long *)FUN_086f5f80(*(long *)(param_5 + 0x2d0),0);
                FUN_08715a40(local_8c,-fVar17,fVar14,param_3,0);
                if (plVar5 != (long *)0x0) {
                  lVar7 = *plVar5;
                  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar9 != 0) {
                    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f8bdb0) {
                        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x7b) * 0x10 + 0x138);
                        goto LAB_061bfd3c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f8bdb0,0x7b);
LAB_061bfd3c:
                  local_70[0] = local_8c[0];
                  uStack_5c = uStack_78;
                  (*(code *)*puVar6)(plVar5,local_70,puVar6[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar12 = Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                         (*(long *)(param_5 + 0x2d8),0);
      if (*(long *)(param_5 + 0x2d8) != 0) {
        Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                  (*(long *)(param_5 + 0x2d8),0);
        if ((*(long *)(param_5 + 0x2d8) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_5 + 0x2d8) + 0x328), lVar7 != 0)) {
          FUN_086f574c(lVar7,0);
          uVar12 = FUN_061bfd80(uVar12,param_5,0,param_7 & 1);
          *(undefined4 *)(param_5 + 0x2ec) = uVar12;
          *(float *)(param_5 + 0x2f0) = param_2;
          if (*(long *)(param_5 + 0x2d8) != 0) {
            FUN_087ebfd8(*(long *)(param_5 + 0x2d8),0);
            if (*(long *)(param_5 + 0x2d8) != 0) {
              fVar14 = *(float *)(param_5 + 0x2ec);
              fVar11 = (float)Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                                        (*(long *)(param_5 + 0x2d8),0);
              if (fVar14 <= fVar11) {
                if (*(long *)(param_5 + 0x2d8) == 0) goto LAB_061bfd7c;
                fVar11 = *(float *)(param_5 + 0x2f0);
                Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose
                          (*(long *)(param_5 + 0x2d8),0);
                bVar2 = param_2 < fVar11;
              }
              else {
                bVar2 = true;
              }
              *(bool *)(param_5 + 0x2f4) = bVar2;
              return;
            }
          }
        }
      }
    }
  }
LAB_061bfd7c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


