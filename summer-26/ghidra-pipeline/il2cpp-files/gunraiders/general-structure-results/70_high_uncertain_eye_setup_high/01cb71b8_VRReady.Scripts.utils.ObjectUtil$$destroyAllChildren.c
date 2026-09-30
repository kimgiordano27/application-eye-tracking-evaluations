/*
FUNCTION_NAME: VRReady.Scripts.utils.ObjectUtil$$destroyAllChildren
ENTRY_POINT: 01cb71b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined4
VRReady_Scripts_utils_ObjectUtil__destroyAllChildren
          (long *param_1,long *param_2,byte param_3,locale *param_4,uint param_5,uint *param_6,
          undefined1 *param_7,long *param_8)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  basic_string bVar4;
  long lVar5;
  ulong *puVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined4 uVar10;
  wchar_t wVar11;
  int iVar12;
  long *plVar13;
  void *pvVar14;
  long *plVar15;
  wchar_t *pwVar16;
  int *piVar17;
  ulong uVar18;
  byte *pbVar19;
  uint *puVar20;
  byte bVar21;
  int *piVar22;
  int *piVar23;
  ulong uVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  ulong uVar29;
  ulong uVar30;
  void *pvVar31;
  void *pvVar32;
  long lVar33;
  uint uVar34;
  int *piVar35;
  int *piVar36;
  ulong uVar37;
  long *in_stack_00000060;
  long *in_stack_00000068;
  wchar_t *in_stack_00000070;
  ulong *puStack_268;
  code *pcStack_258;
  uint *puStack_248;
  uint *puStack_238;
  int iStack_22c;
  undefined8 uStack_228;
  ulong uStack_220;
  void *pvStack_218;
  ulong uStack_210;
  ulong uStack_208;
  int *piStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  int *piStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  int *piStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  byte *pbStack_1b8;
  wchar_t wStack_1b0;
  wchar_t wStack_1ac;
  pattern apStack_1a8 [3];
  char cStack_1a5;
  uint auStack_1a0 [100];
  long alStack_10 [2];
  
  lVar5 = tpidr_el0;
  alStack_10[0] = *(long *)(lVar5 + 0x28);
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  pbStack_1b8 = (byte *)0x0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  piStack_1d0 = (int *)0x0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  piStack_1e8 = (int *)0x0;
  uStack_210 = 0;
  uStack_208 = 0;
  piStack_200 = (int *)0x0;
  uStack_228 = 0;
  uStack_220 = 0;
  pvStack_218 = (void *)0x0;
  std::__ndk1::__money_get<wchar_t>::__gather_info
            ((bool)(param_3 & 1),param_4,apStack_1a8,&wStack_1ac,&wStack_1b0,
             (basic_string *)&uStack_1c8,(basic_string *)&uStack_1e0,(basic_string *)&uStack_1f8,
             (basic_string *)&uStack_210,&iStack_22c);
  piVar22 = (int *)((ulong)&uStack_1e0 | 4);
  piVar23 = (int *)((ulong)&uStack_210 | 4);
  puStack_268 = (ulong *)0x0;
  puStack_248 = auStack_1a0;
  puStack_238 = (uint *)alStack_10;
  uVar37 = 0;
  puVar28 = auStack_1a0;
  pcStack_258 = (code *)StringLiteral_16881;
  *in_stack_00000068 = *in_stack_00000060;
LAB_01cb72e0:
  plVar13 = (long *)*param_1;
  if (plVar13 == (long *)0x0) {
LAB_01cb7328:
    bVar7 = true;
    if (param_2 == (long *)0x0) goto LAB_01cb7364;
LAB_01cb7330:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar12 = *(int *)param_2[3];
    }
    if (iVar12 == -1) goto LAB_01cb7364;
    if (!bVar7) goto LAB_01cb80a0;
  }
  else {
    if ((int *)plVar13[3] == (int *)plVar13[4]) {
      iVar12 = (**(code **)(*plVar13 + 0x48))();
    }
    else {
      iVar12 = *(int *)plVar13[3];
    }
    if (iVar12 == -1) {
      *param_1 = 0;
      goto LAB_01cb7328;
    }
    bVar7 = *param_1 == 0;
    if (param_2 != (long *)0x0) goto LAB_01cb7330;
LAB_01cb7364:
    param_2 = (long *)0x0;
    if (bVar7) goto LAB_01cb80a0;
  }
  puVar6 = puStack_268;
  switch(apStack_1a8[uVar37]) {
  case (pattern)0x0:
    if (uVar37 != 3) goto LAB_01cb7834;
    goto LAB_01cb80a0;
  case (pattern)0x1:
    if (uVar37 != 3) {
      plVar13 = (long *)*param_1;
      if ((undefined4 *)plVar13[3] == (undefined4 *)plVar13[4]) {
        uVar10 = (**(code **)(*plVar13 + 0x48))();
      }
      else {
        uVar10 = *(undefined4 *)plVar13[3];
      }
      uVar18 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar10);
      if ((uVar18 & 1) != 0) {
        plVar13 = (long *)*param_1;
        pwVar16 = (wchar_t *)plVar13[3];
        if (pwVar16 == (wchar_t *)plVar13[4]) {
          wVar11 = (**(code **)(*plVar13 + 0x50))();
        }
        else {
          plVar13[3] = (long)(pwVar16 + 1);
          wVar11 = *pwVar16;
        }
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)&uStack_228,wVar11);
LAB_01cb7834:
        do {
          plVar13 = (long *)*param_1;
          if (plVar13 == (long *)0x0) {
LAB_01cb787c:
            bVar7 = true;
            if (param_2 == (long *)0x0) goto LAB_01cb78b8;
LAB_01cb7884:
            if ((int *)param_2[3] == (int *)param_2[4]) {
              iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            else {
              iVar12 = *(int *)param_2[3];
            }
            if (iVar12 == -1) goto LAB_01cb78b8;
            if (!bVar7) goto switchD_01cb7390_default;
          }
          else {
            if ((int *)plVar13[3] == (int *)plVar13[4]) {
              iVar12 = (**(code **)(*plVar13 + 0x48))();
            }
            else {
              iVar12 = *(int *)plVar13[3];
            }
            if (iVar12 == -1) {
              *param_1 = 0;
              goto LAB_01cb787c;
            }
            bVar7 = *param_1 == 0;
            if (param_2 != (long *)0x0) goto LAB_01cb7884;
LAB_01cb78b8:
            param_2 = (long *)0x0;
            if (bVar7) goto switchD_01cb7390_default;
          }
          plVar13 = (long *)*param_1;
          if ((undefined4 *)plVar13[3] == (undefined4 *)plVar13[4]) {
            uVar10 = (**(code **)(*plVar13 + 0x48))();
          }
          else {
            uVar10 = *(undefined4 *)plVar13[3];
          }
          uVar18 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar10);
          if ((uVar18 & 1) == 0) goto switchD_01cb7390_default;
          plVar13 = (long *)*param_1;
          pwVar16 = (wchar_t *)plVar13[3];
          if (pwVar16 == (wchar_t *)plVar13[4]) {
            wVar11 = (**(code **)(*plVar13 + 0x50))();
          }
          else {
            plVar13[3] = (long)(pwVar16 + 1);
            wVar11 = *pwVar16;
          }
          std::__ndk1::
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     *)&uStack_228,wVar11);
        } while( true );
      }
      goto LAB_01cb81e0;
    }
    goto LAB_01cb80a0;
  case (pattern)0x2:
    if ((uVar37 < 2) || (puStack_268 != (ulong *)0x0)) {
      bVar7 = (uStack_1e0 & 1) == 0;
      piVar17 = piVar22;
      if (!bVar7) {
        piVar17 = piStack_1d0;
      }
      piVar35 = piVar17;
      if (uVar37 != 0) goto LAB_01cb7740;
LAB_01cb77b4:
      bVar21 = (byte)uStack_1e0._0_1_ & 1;
      uVar18 = uStack_1e0 & 0xff;
      piVar36 = piVar17;
    }
    else {
      if (((uint)(uVar37 == 2 && cStack_1a5 != '\0') | param_5 >> 9 & 1) != 1) {
        puStack_268 = (ulong *)0x0;
        puVar6 = puStack_268;
        break;
      }
      bVar7 = (uStack_1e0 & 1) == 0;
      piVar35 = piVar22;
      if (!bVar7) {
        piVar35 = piStack_1d0;
      }
LAB_01cb7740:
      bVar21 = (byte)uStack_1e0._0_1_ & 1;
      uVar18 = uStack_1e0 & 0xff;
      piVar17 = piVar35;
      if (1 < (byte)apStack_1a8[(int)uVar37 - 1]) goto LAB_01cb77b4;
      uVar24 = uVar18 >> 1;
      if (!bVar7) {
        uVar24 = uStack_1d8;
      }
      if (uVar24 != 0) {
        do {
          uVar18 = (**(code **)(*param_8 + 0x18))(param_8,1,*piVar35);
          if ((uVar18 & 1) == 0) {
            uVar18 = uStack_1e0 & 0xff;
            bVar21 = (byte)uStack_1e0._0_1_ & 1;
            break;
          }
          uVar18 = uStack_1e0 & 0xff;
          piVar35 = piVar35 + 1;
          bVar21 = (byte)uStack_1e0._0_1_ & 1;
          uVar24 = (ulong)((byte)uStack_1e0._0_1_ >> 1);
          piVar17 = piVar22;
          if ((uStack_1e0 & 1) != 0) {
            uVar24 = uStack_1d8;
            piVar17 = piStack_1d0;
          }
        } while (piVar35 != piVar17 + uVar24);
      }
      piVar17 = piVar22;
      if (bVar21 != 0) {
        piVar17 = piStack_1d0;
      }
      uVar24 = (long)piVar35 - (long)piVar17;
      uVar30 = (long)uVar24 >> 2;
      piVar36 = piVar17;
      if ((uStack_228 & 1) == 0) {
        uVar29 = uStack_228 >> 1 & 0x7f;
        if (uVar30 <= uVar29) {
          pvVar14 = (void *)((long)&uStack_228 + uVar29 * 4 + 4);
          pvVar32 = (void *)((ulong)&uStack_228 | 4);
VRReady_Scripts_OVR_OVRManagerHelper__set_keepCenterControllerToEye:
          pvVar31 = (void *)((long)pvVar14 + uVar30 * -4);
          piVar36 = piVar35;
          if (pvVar31 != (void *)((long)pvVar32 + uVar29 * 4)) {
            uVar30 = uVar24;
            if ((long)uVar24 < 0) {
              uVar30 = 0xffffffffffffffff;
            }
            if (0 < (long)uVar30) {
              uVar30 = 1;
            }
            uVar1 = (long)piVar17 - (long)piVar35;
            if ((long)piVar17 - (long)piVar35 <= (long)uVar24) {
              uVar1 = uVar24;
            }
            lVar33 = 0;
            do {
              piVar36 = piVar17;
              if (*(int *)((long)pvVar31 + lVar33) != *(int *)((long)piVar17 + lVar33)) break;
              lVar33 = lVar33 + 4;
              piVar36 = piVar35;
            } while ((long)pvVar32 + ((uVar29 + uVar30 * (uVar1 >> 2)) * 4 - (long)pvVar14) !=
                     lVar33);
          }
        }
      }
      else if (uVar30 <= uStack_220) {
        pvVar14 = (void *)((long)pvStack_218 + uStack_220 * 4);
        uVar29 = uStack_220;
        pvVar32 = pvStack_218;
        goto VRReady_Scripts_OVR_OVRManagerHelper__set_keepCenterControllerToEye;
      }
    }
    uVar18 = uVar18 >> 1;
    if (bVar21 != 0) {
      uVar18 = uStack_1d8;
    }
    for (piVar17 = piVar17 + uVar18; piVar36 != piVar17; piVar17 = piVar17 + uVar18) {
      plVar13 = (long *)*param_1;
      if (plVar13 == (long *)0x0) {
LAB_01cb7b50:
        bVar7 = true;
        if (param_2 == (long *)0x0) goto LAB_01cb7b8c;
LAB_01cb7b58:
        if ((int *)param_2[3] == (int *)param_2[4]) {
          iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          iVar12 = *(int *)param_2[3];
        }
        if (iVar12 == -1) goto LAB_01cb7b8c;
        if (!bVar7) break;
      }
      else {
        if ((int *)plVar13[3] == (int *)plVar13[4]) {
          iVar12 = (**(code **)(*plVar13 + 0x48))();
        }
        else {
          iVar12 = *(int *)plVar13[3];
        }
        if (iVar12 == -1) {
          *param_1 = 0;
          goto LAB_01cb7b50;
        }
        bVar7 = *param_1 == 0;
        if (param_2 != (long *)0x0) goto LAB_01cb7b58;
LAB_01cb7b8c:
        param_2 = (long *)0x0;
        if (bVar7) break;
      }
      plVar13 = (long *)*param_1;
      if ((int *)plVar13[3] == (int *)plVar13[4]) {
        iVar12 = (**(code **)(*plVar13 + 0x48))();
      }
      else {
        iVar12 = *(int *)plVar13[3];
      }
      if (iVar12 != *piVar36) break;
      plVar13 = (long *)*param_1;
      if (plVar13[3] == plVar13[4]) {
        (**(code **)(*plVar13 + 0x50))();
      }
      else {
        plVar13[3] = plVar13[3] + 4;
      }
      piVar36 = piVar36 + 1;
      uVar18 = uStack_1e0 >> 1 & 0x7f;
      piVar17 = piVar22;
      if ((uStack_1e0 & 1) != 0) {
        uVar18 = uStack_1d8;
        piVar17 = piStack_1d0;
      }
    }
    if ((param_5 >> 9 & 1) == 0) break;
    uVar18 = uStack_1e0 >> 1 & 0x7f;
    piVar17 = piVar22;
    if ((uStack_1e0 & 1) != 0) {
      uVar18 = uStack_1d8;
      piVar17 = piStack_1d0;
    }
    if (piVar36 != piVar17 + uVar18) goto LAB_01cb81e0;
    break;
  case (pattern)0x3:
    uVar24 = uStack_1f8 & 0xff;
    bVar21 = (byte)uStack_1f8._0_1_ & 1;
    uVar18 = (ulong)((byte)uStack_1f8._0_1_ >> 1);
    if ((uStack_1f8 & 1) != 0) {
      uVar18 = uStack_1f0;
    }
    uVar30 = (ulong)((byte)uStack_210._0_1_ >> 1);
    if ((uStack_210 & 1) != 0) {
      uVar30 = uStack_208;
    }
    if (uVar18 + uVar30 != 0) {
      if (uVar18 == 0) {
        plVar13 = (long *)*param_1;
        if ((int *)plVar13[3] == (int *)plVar13[4]) {
          iVar12 = (**(code **)(*plVar13 + 0x48))();
        }
        else {
          iVar12 = *(int *)plVar13[3];
        }
        piVar17 = piVar23;
        if (((byte)uStack_210._0_1_ & 1) != 0) {
          piVar17 = piStack_200;
        }
        if (iVar12 == *piVar17) {
          plVar13 = (long *)*param_1;
          if (plVar13[3] == plVar13[4]) {
            (**(code **)(*plVar13 + 0x50))();
            bVar4 = uStack_210._0_1_;
          }
          else {
            plVar13[3] = plVar13[3] + 4;
            bVar4 = uStack_210._0_1_;
          }
          *param_7 = 1;
          uVar18 = (ulong)((byte)bVar4 >> 1);
          if (((byte)bVar4 & 1) != 0) {
            uVar18 = uStack_208;
          }
LAB_01cb8050:
          puVar6 = &uStack_210;
          if (uVar18 < 2) {
            puVar6 = puStack_268;
          }
        }
      }
      else {
        plVar13 = (long *)*param_1;
        piVar17 = (int *)plVar13[3];
        if (uVar30 == 0) {
          if (piVar17 == (int *)plVar13[4]) {
            iVar12 = (**(code **)(*plVar13 + 0x48))();
            uVar24 = uStack_1f8 & 0xff;
            bVar21 = (byte)uStack_1f8._0_1_ & 1;
          }
          else {
            iVar12 = *piVar17;
          }
          piVar17 = (int *)((ulong)&uStack_1f8 | 4);
          if (bVar21 != 0) {
            piVar17 = piStack_1e8;
          }
          if (iVar12 != *piVar17) {
            *param_7 = 1;
            break;
          }
          plVar13 = (long *)*param_1;
          if (plVar13[3] == plVar13[4]) {
            (**(code **)(*plVar13 + 0x50))();
            goto LAB_01cb8070;
          }
          plVar13[3] = plVar13[3] + 4;
        }
        else {
          if (piVar17 == (int *)plVar13[4]) {
            iVar12 = (**(code **)(*plVar13 + 0x48))();
            uVar24 = uStack_1f8 & 0xff;
            bVar21 = (byte)uStack_1f8._0_1_ & 1;
          }
          else {
            iVar12 = *piVar17;
          }
          plVar13 = (long *)*param_1;
          piVar17 = (int *)((ulong)&uStack_1f8 | 4);
          if (bVar21 != 0) {
            piVar17 = piStack_1e8;
          }
          piVar35 = (int *)plVar13[3];
          if (iVar12 != *piVar17) {
            if (piVar35 == (int *)plVar13[4]) {
              iVar12 = (**(code **)(*plVar13 + 0x48))(plVar13);
            }
            else {
              iVar12 = *piVar35;
            }
            piVar17 = piVar23;
            if ((uStack_210 & 1) != 0) {
              piVar17 = piStack_200;
            }
            if (iVar12 == *piVar17) {
              plVar13 = (long *)*param_1;
              if (plVar13[3] == plVar13[4]) {
                (**(code **)(*plVar13 + 0x50))();
              }
              else {
                plVar13[3] = plVar13[3] + 4;
              }
              *param_7 = 1;
              uVar18 = (ulong)((byte)uStack_210._0_1_ >> 1);
              if (((byte)uStack_210._0_1_ & 1) != 0) {
                uVar18 = uStack_208;
              }
              goto LAB_01cb8050;
            }
            goto LAB_01cb81e0;
          }
          if (piVar35 == (int *)plVar13[4]) {
            (**(code **)(*plVar13 + 0x50))(plVar13);
LAB_01cb8070:
            uVar24 = uStack_1f8 & 0xff;
            bVar21 = (byte)uStack_1f8._0_1_ & 1;
          }
          else {
            plVar13[3] = (long)(piVar35 + 1);
          }
        }
        uVar18 = uVar24 >> 1;
        if (bVar21 != 0) {
          uVar18 = uStack_1f0;
        }
        puVar6 = &uStack_1f8;
        if (uVar18 < 2) {
          puVar6 = puStack_268;
        }
      }
    }
    break;
  case (pattern)0x4:
    uVar34 = 0;
    puVar26 = puVar28;
LAB_01cb73b8:
    plVar13 = (long *)*param_1;
    if (plVar13 == (long *)0x0) {
LAB_01cb7400:
      bVar7 = true;
      if (param_2 == (long *)0x0) goto LAB_01cb743c;
LAB_01cb7408:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar12 = *(int *)param_2[3];
      }
      if (iVar12 == -1) goto LAB_01cb743c;
      if (!bVar7) goto LAB_01cb76c0;
    }
    else {
      if ((int *)plVar13[3] == (int *)plVar13[4]) {
        iVar12 = (**(code **)(*plVar13 + 0x48))();
      }
      else {
        iVar12 = *(int *)plVar13[3];
      }
      if (iVar12 == -1) {
        *param_1 = 0;
        goto LAB_01cb7400;
      }
      bVar7 = *param_1 == 0;
      if (param_2 != (long *)0x0) goto LAB_01cb7408;
LAB_01cb743c:
      param_2 = (long *)0x0;
      if (bVar7) goto LAB_01cb76c0;
    }
    plVar13 = (long *)*param_1;
    if ((wchar_t *)plVar13[3] == (wchar_t *)plVar13[4]) {
      wVar11 = (**(code **)(*plVar13 + 0x48))();
    }
    else {
      wVar11 = *(wchar_t *)plVar13[3];
    }
    uVar18 = (**(code **)(*param_8 + 0x18))(param_8,0x40,wVar11);
    if ((uVar18 & 1) == 0) {
      uVar18 = uStack_1c8 >> 1 & 0x7f;
      if ((uStack_1c8 & 1) != 0) {
        uVar18 = uStack_1c0;
      }
      if (((wVar11 == wStack_1b0) && (uVar34 != 0)) && (uVar18 != 0)) {
        if (puVar26 != puStack_238) {
LAB_01cb75c8:
          puVar28 = puVar26 + 1;
          *puVar26 = uVar34;
          uVar34 = 0;
          goto LAB_01cb75d0;
        }
        uVar18 = (long)puStack_238 - (long)puStack_248;
        sVar3 = 4;
        if (uVar18 != 0) {
          sVar3 = uVar18 * 2;
        }
        if (0x7ffffffffffffffe < uVar18) {
          sVar3 = 0xffffffffffffffff;
        }
        if (pcStack_258 == (code *)StringLiteral_16881) {
          puStack_248 = malloc(sVar3);
        }
        else {
          puStack_248 = realloc(puStack_248,sVar3);
        }
        if (puStack_248 != (uint *)0x0) {
          puStack_238 = (uint *)((long)puStack_248 + (sVar3 & 0xfffffffffffffffc));
          puVar26 = (uint *)((long)puStack_248 + uVar18);
          pcStack_258 = (code *)StringLiteral_16882;
          goto LAB_01cb75c8;
        }
LAB_01cb83e0:
        std::__throw_bad_alloc();
LAB_01cb83e4:
        std::__throw_bad_alloc();
        goto LAB_01cb83e8;
      }
      goto LAB_01cb76c0;
    }
    pwVar16 = (wchar_t *)*in_stack_00000068;
    if (pwVar16 == in_stack_00000070) {
      uVar18 = (long)in_stack_00000070 - *in_stack_00000060;
      sVar3 = 4;
      if (uVar18 != 0) {
        sVar3 = uVar18 * 2;
      }
      if (0x7ffffffffffffffe < uVar18) {
        sVar3 = 0xffffffffffffffff;
      }
      if ((undefined *)in_stack_00000060[1] == StringLiteral_16881) {
        pvVar14 = malloc(sVar3);
      }
      else {
        pvVar14 = realloc((void *)*in_stack_00000060,sVar3);
      }
      if (pvVar14 == (void *)0x0) {
        std::__throw_bad_alloc();
        goto LAB_01cb83e0;
      }
      *in_stack_00000060 = (long)pvVar14;
      in_stack_00000060[1] = (long)StringLiteral_16882;
      pwVar16 = (wchar_t *)((long)pvVar14 + uVar18);
      *in_stack_00000068 = (long)pwVar16;
      in_stack_00000070 = (wchar_t *)(*in_stack_00000060 + (sVar3 & 0xfffffffffffffffc));
    }
    *in_stack_00000068 = (long)(pwVar16 + 1);
    *pwVar16 = wVar11;
    uVar34 = uVar34 + 1;
    puVar28 = puVar26;
LAB_01cb75d0:
    plVar13 = (long *)*param_1;
    puVar26 = puVar28;
    if (plVar13[3] == plVar13[4]) {
      (**(code **)(*plVar13 + 0x50))();
    }
    else {
      plVar13[3] = plVar13[3] + 4;
    }
    goto LAB_01cb73b8;
  }
switchD_01cb7390_default:
  puStack_268 = puVar6;
  uVar37 = uVar37 + 1;
  if (uVar37 == 4) goto LAB_01cb80a0;
  goto LAB_01cb72e0;
LAB_01cb76c0:
  puVar28 = puVar26;
  if ((puStack_248 != puVar26) && (uVar34 != 0)) {
    if (puVar26 == puStack_238) {
      uVar18 = (long)puStack_238 - (long)puStack_248;
      sVar3 = 4;
      if (uVar18 != 0) {
        sVar3 = uVar18 * 2;
      }
      if (0x7ffffffffffffffe < uVar18) {
        sVar3 = 0xffffffffffffffff;
      }
      if (pcStack_258 == (code *)StringLiteral_16881) {
        puStack_248 = malloc(sVar3);
      }
      else {
        puStack_248 = realloc(puStack_248,sVar3);
      }
      if (puStack_248 == (uint *)0x0) {
LAB_01cb83e8:
        std::__throw_bad_alloc();
        goto LAB_01cb83ec;
      }
      puStack_238 = (uint *)((long)puStack_248 + (sVar3 & 0xfffffffffffffffc));
      puVar26 = (uint *)((long)puStack_248 + uVar18);
      pcStack_258 = (code *)StringLiteral_16882;
    }
    puVar28 = puVar26 + 1;
    *puVar26 = uVar34;
  }
  if (iStack_22c < 1) {
LAB_01cb72c0:
    if (*in_stack_00000068 == *in_stack_00000060) goto LAB_01cb81e0;
    goto switchD_01cb7390_default;
  }
  plVar13 = (long *)*param_1;
  if (plVar13 != (long *)0x0) {
    if ((int *)plVar13[3] == (int *)plVar13[4]) {
      iVar12 = (**(code **)(*plVar13 + 0x48))();
    }
    else {
      iVar12 = *(int *)plVar13[3];
    }
    if (iVar12 != -1) {
      uVar8 = *param_1 == 0;
      goto joined_r0x01cb7cb0;
    }
    *param_1 = 0;
  }
  uVar8 = true;
joined_r0x01cb7cb0:
  if (param_2 == (long *)0x0) {
    if ((bool)uVar8) goto LAB_01cb81e0;
    plVar13 = (long *)0x0;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar12 = *(int *)param_2[3];
    }
    plVar13 = (long *)0x0;
    if (iVar12 != -1) {
      plVar13 = param_2;
    }
    if ((bool)uVar8 == (iVar12 == -1)) goto LAB_01cb81e0;
  }
  plVar15 = (long *)*param_1;
  if ((wchar_t *)plVar15[3] == (wchar_t *)plVar15[4]) {
    wVar11 = (**(code **)(*plVar15 + 0x48))();
  }
  else {
    wVar11 = *(wchar_t *)plVar15[3];
  }
  if (wVar11 == wStack_1ac) {
    plVar15 = (long *)*param_1;
    param_2 = plVar13;
    if (plVar15[3] == plVar15[4]) {
      (**(code **)(*plVar15 + 0x50))();
    }
    else {
      plVar15[3] = plVar15[3] + 4;
    }
joined_r0x01cb7d4c:
    plVar13 = param_2;
    if (0 < iStack_22c) {
      do {
        plVar15 = (long *)*param_1;
        if (plVar15 == (long *)0x0) {
LAB_01cb7db4:
          bVar9 = true;
          bVar7 = true;
          if (plVar13 == (long *)0x0) goto LAB_01cb7da4;
LAB_01cb7dbc:
          if ((int *)plVar13[3] == (int *)plVar13[4]) {
            iVar12 = (**(code **)(*plVar13 + 0x48))(plVar13);
          }
          else {
            iVar12 = *(int *)plVar13[3];
          }
          param_2 = (long *)0x0;
          if (iVar12 != -1) {
            param_2 = plVar13;
          }
          if (bVar9 == (iVar12 == -1)) goto LAB_01cb81e0;
        }
        else {
          if ((int *)plVar15[3] == (int *)plVar15[4]) {
            iVar12 = (**(code **)(*plVar15 + 0x48))();
          }
          else {
            iVar12 = *(int *)plVar15[3];
          }
          if (iVar12 == -1) {
            *param_1 = 0;
            goto LAB_01cb7db4;
          }
          bVar9 = *param_1 == 0;
          bVar7 = bVar9;
          if (plVar13 != (long *)0x0) goto LAB_01cb7dbc;
LAB_01cb7da4:
          if (bVar7) goto LAB_01cb81e0;
          param_2 = (long *)0x0;
        }
        plVar13 = (long *)*param_1;
        if ((undefined4 *)plVar13[3] == (undefined4 *)plVar13[4]) {
          uVar10 = (**(code **)(*plVar13 + 0x48))();
        }
        else {
          uVar10 = *(undefined4 *)plVar13[3];
        }
        uVar18 = (**(code **)(*param_8 + 0x18))(param_8,0x40,uVar10);
        if ((uVar18 & 1) == 0) goto LAB_01cb81e0;
        pwVar16 = (wchar_t *)*in_stack_00000068;
        if (pwVar16 == in_stack_00000070) {
          uVar18 = (long)in_stack_00000070 - *in_stack_00000060;
          sVar3 = 4;
          if (uVar18 != 0) {
            sVar3 = uVar18 * 2;
          }
          if (0x7ffffffffffffffe < uVar18) {
            sVar3 = 0xffffffffffffffff;
          }
          if ((undefined *)in_stack_00000060[1] == StringLiteral_16881) {
            pvVar14 = malloc(sVar3);
          }
          else {
            pvVar14 = realloc((void *)*in_stack_00000060,sVar3);
          }
          if (pvVar14 == (void *)0x0) goto LAB_01cb83e4;
          *in_stack_00000060 = (long)pvVar14;
          in_stack_00000060[1] = (long)StringLiteral_16882;
          pwVar16 = (wchar_t *)((long)pvVar14 + uVar18);
          *in_stack_00000068 = (long)pwVar16;
          in_stack_00000070 = (wchar_t *)(*in_stack_00000060 + (sVar3 & 0xfffffffffffffffc));
        }
        plVar13 = (long *)*param_1;
        if ((wchar_t *)plVar13[3] == (wchar_t *)plVar13[4]) {
          wVar11 = (**(code **)(*plVar13 + 0x48))();
          pwVar16 = (wchar_t *)*in_stack_00000068;
        }
        else {
          wVar11 = *(wchar_t *)plVar13[3];
        }
        *in_stack_00000068 = (long)(pwVar16 + 1);
        *pwVar16 = wVar11;
        iStack_22c = iStack_22c + -1;
        plVar13 = (long *)*param_1;
        if (plVar13[3] == plVar13[4]) goto code_r0x01cb7f10;
        plVar13[3] = plVar13[3] + 4;
        plVar13 = param_2;
        if (iStack_22c < 1) break;
      } while( true );
    }
    goto LAB_01cb72c0;
  }
  goto LAB_01cb81e0;
code_r0x01cb7f10:
  (**(code **)(*plVar13 + 0x50))();
  goto joined_r0x01cb7d4c;
LAB_01cb80a0:
  if (puStack_268 != (ulong *)0x0) {
    uVar37 = 1;
LAB_01cb80bc:
    if (((byte)*puStack_268 & 1) == 0) {
      uVar18 = (ulong)(byte)((byte)*puStack_268 >> 1);
    }
    else {
      uVar18 = puStack_268[1];
    }
    if (uVar18 <= uVar37) goto LAB_01cb82b4;
    plVar13 = (long *)*param_1;
    if (plVar13 == (long *)0x0) {
LAB_01cb8134:
      bVar9 = true;
      bVar7 = true;
      if (param_2 == (long *)0x0) goto LAB_01cb8124;
LAB_01cb813c:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar12 = *(int *)param_2[3];
      }
      plVar13 = (long *)0x0;
      if (iVar12 != -1) {
        plVar13 = param_2;
      }
      if (bVar9 == (iVar12 == -1)) goto LAB_01cb81e0;
    }
    else {
      if ((int *)plVar13[3] == (int *)plVar13[4]) {
        iVar12 = (**(code **)(*plVar13 + 0x48))();
      }
      else {
        iVar12 = *(int *)plVar13[3];
      }
      if (iVar12 == -1) {
        *param_1 = 0;
        goto LAB_01cb8134;
      }
      bVar9 = *param_1 == 0;
      bVar7 = bVar9;
      if (param_2 != (long *)0x0) goto LAB_01cb813c;
LAB_01cb8124:
      if (bVar7) goto LAB_01cb81e0;
      plVar13 = (long *)0x0;
    }
    plVar15 = (long *)*param_1;
    if ((int *)plVar15[3] == (int *)plVar15[4]) {
      iVar12 = (**(code **)(*plVar15 + 0x48))();
    }
    else {
      iVar12 = *(int *)plVar15[3];
    }
    pbVar19 = (byte *)((long)puStack_268 + 4);
    if ((*puStack_268 & 1) != 0) {
      pbVar19 = (byte *)puStack_268[2];
    }
    if (iVar12 != *(int *)(pbVar19 + uVar37 * 4)) goto LAB_01cb81e0;
    plVar15 = (long *)*param_1;
    uVar37 = (ulong)((int)uVar37 + 1);
    param_2 = plVar13;
    if (plVar15[3] == plVar15[4]) {
      (**(code **)(*plVar15 + 0x50))();
    }
    else {
      plVar15[3] = plVar15[3] + 4;
    }
    goto LAB_01cb80bc;
  }
LAB_01cb82b4:
  if (puStack_248 == puVar28) {
    uVar10 = 1;
    goto LAB_01cb81f0;
  }
  uVar37 = (ulong)((byte)uStack_1c8._0_1_ >> 1);
  if ((uStack_1c8 & 1) != 0) {
    uVar37 = uStack_1c0;
  }
  if ((uVar37 != 0) && (4 < (long)puVar28 - (long)puStack_248)) {
    puVar20 = puVar28 + -1;
    puVar26 = puVar20;
    puVar28 = puStack_248;
    if (puStack_248 < puVar20) {
      do {
        puVar25 = puVar28 + 1;
        uVar34 = *puVar28;
        *puVar28 = *puVar26;
        puVar27 = puVar26 + -1;
        *puVar26 = uVar34;
        puVar26 = puVar27;
        puVar28 = puVar25;
      } while (puVar25 < puVar27);
      pbVar2 = (byte *)((ulong)&uStack_1c8 | 1);
      if ((uStack_1c8 & 1) != 0) {
        pbVar2 = pbStack_1b8;
      }
      pbVar19 = pbVar2;
      if (puStack_248 < puVar20) {
        puVar28 = puStack_248;
        uVar37 = (ulong)((byte)uStack_1c8._0_1_ >> 1);
        if ((uStack_1c8 & 1) != 0) {
          uVar37 = uStack_1c0;
        }
        do {
          bVar21 = *pbVar19;
          if (((bVar21 != 0) && (bVar21 != 0xff)) && (*puVar28 != (uint)bVar21)) goto LAB_01cb81e0;
          puVar28 = puVar28 + 1;
          if (1 < (long)(pbVar2 + (uVar37 - (long)pbVar19))) {
            pbVar19 = pbVar19 + 1;
          }
        } while (puVar28 < puVar20);
      }
    }
    else {
      pbVar19 = (byte *)((ulong)&uStack_1c8 | 1);
      if ((uStack_1c8 & 1) != 0) {
        pbVar19 = pbStack_1b8;
      }
    }
    bVar21 = *pbVar19;
    uVar10 = 1;
    puVar28 = puStack_248;
    if ((bVar21 == 0) || (bVar21 == 0xff)) goto LAB_01cb81f0;
    if ((uint)bVar21 <= *puVar20 - 1) {
LAB_01cb81e0:
      uVar10 = 0;
      *param_6 = *param_6 | 4;
      puVar28 = puStack_248;
      goto LAB_01cb81f0;
    }
  }
  uVar10 = 1;
  puVar28 = puStack_248;
LAB_01cb81f0:
  if ((uStack_228 & 1) != 0) {
    operator_delete(pvStack_218);
  }
  if ((uStack_210 & 1) != 0) {
    operator_delete(piStack_200);
  }
  if ((uStack_1f8 & 1) != 0) {
    operator_delete(piStack_1e8);
  }
  if ((uStack_1e0 & 1) != 0) {
    operator_delete(piStack_1d0);
  }
  if ((uStack_1c8 & 1) != 0) {
    operator_delete(pbStack_1b8);
  }
  if (puVar28 != (uint *)0x0) {
    (*pcStack_258)(puVar28);
  }
  if (*(long *)(lVar5 + 0x28) == alStack_10[0]) {
    return uVar10;
  }
LAB_01cb83ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


