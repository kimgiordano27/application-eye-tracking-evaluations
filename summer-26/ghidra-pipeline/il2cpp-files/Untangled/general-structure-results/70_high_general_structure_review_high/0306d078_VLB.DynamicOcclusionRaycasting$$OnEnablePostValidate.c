/*
FUNCTION_NAME: VLB.DynamicOcclusionRaycasting$$OnEnablePostValidate
ENTRY_POINT: 0306d078
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 VLB_DynamicOcclusionRaycasting__OnEnablePostValidate(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (4 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21[8] = unaff_x22;
    param_1 = thunk_FUN_02f411dc();
    lVar7 = *(long *)(unaff_x20 + 0x68);
    if ((lVar7 != 0) &&
       (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), param_1 == 0)) {
LAB_0306d43c:
      uVar2 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar2,0);
    }
    if (5 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[9] = lVar7;
      param_1 = thunk_FUN_02f411dc(unaff_x21 + 9,lVar7);
      lVar7 = *(long *)(unaff_x20 + 0x70);
      if ((lVar7 != 0) &&
         (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), param_1 == 0))
      goto LAB_0306d43c;
      if (6 < *(uint *)(unaff_x21 + 3)) {
        unaff_x21[10] = lVar7;
        param_1 = thunk_FUN_02f411dc(unaff_x21 + 10,lVar7);
        lVar7 = *(long *)(unaff_x20 + 0x78);
        if ((lVar7 != 0) &&
           (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), param_1 == 0))
        goto LAB_0306d43c;
        if (7 < *(uint *)(unaff_x21 + 3)) {
          unaff_x21[0xb] = lVar7;
          param_1 = thunk_FUN_02f411dc(unaff_x21 + 0xb,lVar7);
          lVar7 = *(long *)(unaff_x20 + 0x80);
          if ((lVar7 != 0) &&
             (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), param_1 == 0))
          goto LAB_0306d43c;
          if (8 < *(uint *)(unaff_x21 + 3)) {
            unaff_x21[0xc] = lVar7;
            param_1 = thunk_FUN_02f411dc(unaff_x21 + 0xc,lVar7);
            lVar7 = *(long *)(unaff_x20 + 0x28);
            if ((lVar7 != 0) &&
               (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), param_1 == 0
               )) goto LAB_0306d43c;
            if (9 < *(uint *)(unaff_x21 + 3)) {
              unaff_x21[0xd] = lVar7;
              param_1 = thunk_FUN_02f411dc(unaff_x21 + 0xd,lVar7);
              lVar7 = *(long *)(unaff_x20 + 0x30);
              if ((lVar7 != 0) &&
                 (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)),
                 param_1 == 0)) goto LAB_0306d43c;
              if (10 < *(uint *)(unaff_x21 + 3)) {
                unaff_x21[0xe] = lVar7;
                param_1 = thunk_FUN_02f411dc(unaff_x21 + 0xe,lVar7);
                lVar7 = *(long *)(unaff_x20 + 0x38);
                if ((lVar7 != 0) &&
                   (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)),
                   param_1 == 0)) goto LAB_0306d43c;
                if (0xb < *(uint *)(unaff_x21 + 3)) {
                  unaff_x21[0xf] = lVar7;
                  param_1 = thunk_FUN_02f411dc(unaff_x21 + 0xf,lVar7);
                  lVar7 = *(long *)(unaff_x20 + 0x40);
                  if ((lVar7 != 0) &&
                     (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)),
                     param_1 == 0)) goto LAB_0306d43c;
                  if (0xc < *(uint *)(unaff_x21 + 3)) {
                    unaff_x21[0x10] = lVar7;
                    param_1 = thunk_FUN_02f411dc(unaff_x21 + 0x10,lVar7);
                    lVar7 = *(long *)(unaff_x20 + 0x48);
                    if ((lVar7 != 0) &&
                       (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)),
                       param_1 == 0)) goto LAB_0306d43c;
                    if (0xd < *(uint *)(unaff_x21 + 3)) {
                      unaff_x21[0x11] = lVar7;
                      param_1 = thunk_FUN_02f411dc(unaff_x21 + 0x11,lVar7);
                      lVar7 = *(long *)(unaff_x20 + 0x50);
                      if ((lVar7 != 0) &&
                         (param_1 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)),
                         param_1 == 0)) goto LAB_0306d43c;
                      if (0xe < *(uint *)(unaff_x21 + 3)) {
                        unaff_x21[0x12] = lVar7;
                        param_1 = thunk_FUN_02f411dc(unaff_x21 + 0x12,lVar7);
                        uVar4 = (uint)unaff_x21[3];
                        uVar3 = unaff_x21[3] & 0xffffffff;
                        if (1 < (int)uVar4) {
                          lVar7 = 5;
                          do {
                            if (uVar3 <= lVar7 - 4U) goto LAB_0306d438;
                            param_1 = FUN_03073514();
                            if ((param_1 & 1) == 0) {
                              if ((int)lVar7 - 4U < *(uint *)(unaff_x21 + 3)) {
                                if (unaff_x21[lVar7] == 0) {
LAB_0306d448:
                    /* WARNING: Subroutine does not return */
                                  FUN_02f080c0();
                                }
                                uVar2 = FUN_066cd398(unaff_x21[lVar7],0);
                                puVar6 = (undefined8 *)PTR_DAT_06d06cb0;
LAB_0306cf40:
                                uVar2 = FUN_05465414(*(undefined8 *)PTR_DAT_06d06ca0,uVar2,*puVar6,0
                                                    );
                                *unaff_x19 = uVar2;
                                thunk_FUN_02f411dc();
                                return 0;
                              }
                              goto LAB_0306d438;
                            }
                            uVar4 = *(uint *)(unaff_x21 + 3);
                            uVar3 = (ulong)uVar4;
                            lVar5 = lVar7 + -3;
                            lVar7 = lVar7 + 1;
                          } while (lVar5 < (int)uVar4);
                        }
                        puVar1 = PTR_DAT_06d01e20;
                        if (0 < (int)uVar4) {
                          uVar8 = 0;
                          do {
                            if (0 < (int)uVar3) {
                              uVar9 = 0;
                              do {
                                if (uVar8 != uVar9) {
                                  if ((uVar3 <= uVar8) || (uVar3 <= uVar9)) goto LAB_0306d438;
                                  lVar7 = unaff_x21[uVar8 + 4];
                                  lVar5 = unaff_x21[uVar9 + 4];
                                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                    thunk_FUN_02f12b58();
                                  }
                                  param_1 = FUN_066ca6a0(lVar7,lVar5,0);
                                  if ((param_1 & 1) != 0) {
                                    if (*(uint *)(unaff_x21 + 3) <= (uint)uVar8) goto LAB_0306d438;
                                    lVar7 = unaff_x21[uVar8 + 4];
                                    if (lVar7 == 0) goto LAB_0306d448;
                                    uVar2 = FUN_066cd398(lVar7,0);
                                    puVar6 = (undefined8 *)PTR_DAT_06d06ca8;
                                    goto LAB_0306cf40;
                                  }
                                  uVar3 = (ulong)*(uint *)(unaff_x21 + 3);
                                }
                                uVar9 = uVar9 + 1;
                              } while ((long)uVar9 < (long)(int)uVar3);
                            }
                            uVar8 = uVar8 + 1;
                            param_1 = 1;
                          } while ((long)uVar8 < (long)(int)uVar3);
                        }
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0306d438:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8(param_1);
}


