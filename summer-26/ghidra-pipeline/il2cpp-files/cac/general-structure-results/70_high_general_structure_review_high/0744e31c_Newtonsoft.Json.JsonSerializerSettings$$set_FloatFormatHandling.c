/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatFormatHandling
ENTRY_POINT: 0744e31c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_FloatFormatHandling
               (undefined8 param_1,long param_2,long *param_3,uint param_4,byte *param_5,
               byte *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plStack0000000000000000;
  long *plStack0000000000000008;
  
  plStack0000000000000008 = param_3;
  if ((DAT_0968e045 & 1) == 0) {
    FUN_03f13384(PTR_DAT_091312c8);
    FUN_03f13384(PTR_DAT_09113e70);
    FUN_03f13384(PTR_DAT_091312d0);
    FUN_03f13384(PTR_DAT_0910d718);
    FUN_03f13384(PTR_DAT_091312b8);
    FUN_03f13384(PTR_DAT_0910b690);
    FUN_03f13384(PTR_DAT_09116c80);
    FUN_03f13384(PTR_DAT_09114bf8);
    FUN_03f13384(PTR_DAT_09116c88);
    FUN_03f13384(PTR_DAT_09122c28);
    FUN_03f13384(PTR_DAT_09110d00);
    FUN_03f13384(PTR_DAT_0910fe70);
    DAT_0968e045 = 1;
  }
  if ((param_3 != (long *)0x0) &&
     (plStack0000000000000000 =
           (long *)(**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0)),
     plStack0000000000000000 != (long *)0x0)) {
    uVar6 = (**(code **)(*plStack0000000000000000 + 0x3f8))
                      (plStack0000000000000000,*(undefined8 *)(*plStack0000000000000000 + 0x400));
    plVar12 = param_3;
    plVar8 = plStack0000000000000008;
    if (((uVar6 & 1) != 0) &&
       (uVar6 = (**(code **)(*plStack0000000000000000 + 0x408))
                          (plStack0000000000000000,*(undefined8 *)(*plStack0000000000000000 + 0x410)
                          ), plVar8 = plStack0000000000000008, (uVar6 & 1) == 0)) {
      plStack0000000000000000 =
           (long *)(**(code **)(*plStack0000000000000000 + 0x488))
                             (plStack0000000000000000,
                              *(undefined8 *)(*plStack0000000000000000 + 0x490));
      if ((plStack0000000000000000 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plStack0000000000000000 + 0x818))
                            (plStack0000000000000000,0x3e,
                             *(undefined8 *)(*plStack0000000000000000 + 0x820)), lVar7 == 0))
      goto LAB_0744e91c;
      uVar9 = *(uint *)(lVar7 + 0x18);
      plVar8 = plStack0000000000000008;
      if (0 < (int)uVar9) {
        lVar13 = 0;
        do {
          if (uVar9 <= (uint)lVar13) goto LAB_0744e920;
          plVar12 = *(long **)(lVar7 + 0x20 + lVar13 * 8);
          if (plVar12 == (long *)0x0) goto LAB_0744e91c;
          iVar4 = (**(code **)(*plVar12 + 0x248))(plVar12,*(undefined8 *)(*plVar12 + 0x250));
          iVar5 = (**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
          plVar8 = plVar12;
          if (iVar4 == iVar5) break;
          uVar9 = *(uint *)(lVar7 + 0x18);
          lVar13 = lVar13 + 1;
          plVar12 = param_3;
          plVar8 = plStack0000000000000008;
        } while ((int)lVar13 < (int)uVar9);
      }
    }
    plStack0000000000000008 = plVar8;
    puVar1 = PTR_DAT_0910b550;
    uVar11 = *(undefined8 *)PTR_DAT_091312c8;
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    plVar8 = (long *)FUN_074c4a14(uVar11,0);
    puVar2 = PTR_DAT_091312d0;
    if (plVar8 != (long *)0x0) {
      bVar3 = (**(code **)(*plVar8 + 0x2d8))
                        (plVar8,plStack0000000000000000,*(undefined8 *)(*plVar8 + 0x2e0));
      *param_6 = bVar3 & 1;
      uVar11 = FUN_074c4a14(*(undefined8 *)puVar2,0);
      uVar6 = FUN_073e6bc8(plVar12,uVar11,0);
      if ((uVar6 & 1) == 0) {
        uVar11 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar11 = FUN_074c4a14(uVar11,0);
        bVar3 = FUN_073e6bc8(plStack0000000000000000,uVar11,0);
        *param_5 = bVar3 & 1;
        if ((bVar3 & 1) == 0) {
          if (*param_6 != 0) {
            FUN_0744e928(&stack0x00000008);
          }
          if ((param_4 & 1) == 0) {
            if (param_2 == 0) goto LAB_0744e91c;
          }
          else {
            uVar11 = FUN_074fcefc(0);
            if (param_2 == 0) goto LAB_0744e91c;
            FUN_07331848(param_2,uVar11,0);
          }
          FUN_07331848(param_2,*(undefined8 *)PTR_DAT_091312b8,0);
          if (plStack0000000000000000 != (long *)0x0) {
            uVar11 = (**(code **)(*plStack0000000000000000 + 0x168))
                               (plStack0000000000000000,
                                *(undefined8 *)(*plStack0000000000000000 + 0x170));
            FUN_07331848(param_2,uVar11,0);
            FUN_07331848(param_2,*(undefined8 *)PTR_DAT_0910fe70,0);
            if (plStack0000000000000008 != (long *)0x0) {
              uVar11 = (**(code **)(*plStack0000000000000008 + 0x1b8))
                                 (plStack0000000000000008,
                                  *(undefined8 *)(*plStack0000000000000008 + 0x1c0));
              FUN_07331848(param_2,uVar11,0);
              if (plStack0000000000000008 != (long *)0x0) {
                uVar6 = (**(code **)(*plStack0000000000000008 + 0x358))
                                  (plStack0000000000000008,
                                   *(undefined8 *)(*plStack0000000000000008 + 0x360));
                if ((uVar6 & 1) != 0) {
                  if (plStack0000000000000008 == (long *)0x0) goto LAB_0744e91c;
                  lVar7 = *plStack0000000000000008;
                  bVar3 = *(byte *)(*(long *)PTR_DAT_09113e70 + 0x130);
                  if ((*(byte *)(lVar7 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)PTR_DAT_09113e70)) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f139ac();
                  }
                  plStack0000000000000008 =
                       (long *)(**(code **)(lVar7 + 0x448))
                                         (plStack0000000000000008,*(undefined8 *)(lVar7 + 0x450));
                  if (plStack0000000000000008 == (long *)0x0) goto LAB_0744e91c;
                  lVar7 = (**(code **)(*plStack0000000000000008 + 0x378))
                                    (plStack0000000000000008,
                                     *(undefined8 *)(*plStack0000000000000008 + 0x380));
                  FUN_07331848(param_2,*(undefined8 *)PTR_DAT_09116c88,0);
                  puVar1 = PTR_DAT_09114bf8;
                  if (lVar7 == 0) goto LAB_0744e91c;
                  uVar9 = *(uint *)(lVar7 + 0x18);
                  if (0 < (int)uVar9) {
                    uVar10 = 0;
                    do {
                      if (uVar10 != 0) {
                        FUN_07331848(param_2,*(undefined8 *)puVar1,0);
                        uVar9 = *(uint *)(lVar7 + 0x18);
                      }
                      if (uVar9 <= uVar10) goto LAB_0744e920;
                      plVar12 = *(long **)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
                      if (plVar12 == (long *)0x0) goto LAB_0744e91c;
                      uVar11 = (**(code **)(*plVar12 + 0x1b8))
                                         (plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                      FUN_07331848(param_2,uVar11,0);
                      uVar9 = *(uint *)(lVar7 + 0x18);
                      uVar10 = uVar10 + 1;
                    } while ((int)uVar10 < (int)uVar9);
                  }
                  FUN_07331848(param_2,*(undefined8 *)PTR_DAT_09110d00,0);
                }
                if (plStack0000000000000008 != (long *)0x0) {
                  lVar7 = (**(code **)(*plStack0000000000000008 + 600))
                                    (plStack0000000000000008,
                                     *(undefined8 *)(*plStack0000000000000008 + 0x260));
                  FUN_07331848(param_2,*(undefined8 *)PTR_DAT_09122c28,0);
                  puVar2 = PTR_DAT_0910d718;
                  puVar1 = PTR_DAT_0910b690;
                  if (lVar7 != 0) {
                    uVar9 = *(uint *)(lVar7 + 0x18);
                    if (0 < (int)uVar9) {
                      uVar10 = 0;
                      do {
                        if (uVar10 != 0) {
                          FUN_07331848(param_2,*(undefined8 *)puVar1,0);
                          uVar9 = *(uint *)(lVar7 + 0x18);
                        }
                        if (uVar9 <= uVar10) {
LAB_0744e920:
                    /* WARNING: Subroutine does not return */
                          FUN_03f13634();
                        }
                        plVar8 = (long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
                        plVar12 = (long *)*plVar8;
                        if (((plVar12 == (long *)0x0) ||
                            (plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))
                                                         (plVar12,*(undefined8 *)(*plVar12 + 0x1f0))
                            , plVar12 == (long *)0x0)) ||
                           ((uVar6 = (**(code **)(*plVar12 + 0x3f8))
                                               (plVar12,*(undefined8 *)(*plVar12 + 0x400)),
                            (uVar6 & 1) != 0 &&
                            ((uVar6 = (**(code **)(*plVar12 + 0x408))
                                                (plVar12,*(undefined8 *)(*plVar12 + 0x410)),
                             (uVar6 & 1) == 0 &&
                             (plVar12 = (long *)(**(code **)(*plVar12 + 0x488))
                                                          (plVar12,*(undefined8 *)(*plVar12 + 0x490)
                                                          ), plVar12 == (long *)0x0))))))
                        goto LAB_0744e91c;
                        uVar11 = (**(code **)(*plVar12 + 0x168))
                                           (plVar12,*(undefined8 *)(*plVar12 + 0x170));
                        FUN_07331848(param_2,uVar11,0);
                        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0744e920;
                        plVar12 = (long *)*plVar8;
                        if (plVar12 == (long *)0x0) goto LAB_0744e91c;
                        lVar13 = (**(code **)(*plVar12 + 0x1d8))
                                           (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                        if (lVar13 != 0) {
                          FUN_07331848(param_2,*(undefined8 *)puVar2,0);
                          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0744e920;
                          plVar8 = (long *)*plVar8;
                          if (plVar8 == (long *)0x0) goto LAB_0744e91c;
                          uVar11 = (**(code **)(*plVar8 + 0x1d8))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                          FUN_07331848(param_2,uVar11,0);
                        }
                        uVar9 = *(uint *)(lVar7 + 0x18);
                        uVar10 = uVar10 + 1;
                      } while ((int)uVar10 < (int)uVar9);
                    }
                    FUN_07331848(param_2,*(undefined8 *)PTR_DAT_09116c80,0);
                    return;
                  }
                }
              }
            }
          }
          goto LAB_0744e91c;
        }
      }
      else {
        *param_5 = 1;
      }
      return;
    }
  }
LAB_0744e91c:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


