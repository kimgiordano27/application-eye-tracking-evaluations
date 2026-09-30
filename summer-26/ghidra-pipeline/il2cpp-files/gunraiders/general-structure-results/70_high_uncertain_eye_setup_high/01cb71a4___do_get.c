/*
FUNCTION_NAME: __do_get
ENTRY_POINT: 01cb71a4
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
/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::locale const&, unsigned int, unsigned
   int&, bool&, std::__ndk1::ctype<wchar_t> const&, std::__ndk1::unique_ptr<wchar_t, void
   (*)(void*)>&, wchar_t*&, wchar_t*) */

undefined4
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get(long *param_1,long *param_2,byte param_3,locale *param_4,uint param_5,uint *param_6,
        undefined1 *param_7,long *param_8,long *param_9,long *param_10,wchar_t *param_11)

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
  ulong *local_2c8;
  code *local_2b8;
  uint *local_2a8;
  uint *local_298;
  int local_28c;
  undefined8 local_288;
  ulong local_280;
  void *local_278;
  ulong local_270;
  ulong local_268;
  int *local_260;
  ulong local_258;
  ulong local_250;
  int *local_248;
  ulong local_240;
  ulong local_238;
  int *local_230;
  ulong local_228;
  ulong local_220;
  byte *local_218;
  wchar_t local_210;
  wchar_t local_20c;
  pattern local_208 [3];
  char local_205;
  uint local_200 [100];
  long local_70 [2];
  
  lVar5 = tpidr_el0;
  local_70[0] = *(long *)(lVar5 + 0x28);
  local_228 = 0;
  local_220 = 0;
  local_218 = (byte *)0x0;
  local_240 = 0;
  local_238 = 0;
  local_230 = (int *)0x0;
  local_258 = 0;
  local_250 = 0;
  local_248 = (int *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_260 = (int *)0x0;
  local_288 = 0;
  local_280 = 0;
  local_278 = (void *)0x0;
  __money_get<wchar_t>::__gather_info
            ((bool)(param_3 & 1),param_4,local_208,&local_20c,&local_210,(basic_string *)&local_228,
             (basic_string *)&local_240,(basic_string *)&local_258,(basic_string *)&local_270,
             &local_28c);
  piVar22 = (int *)((ulong)&local_240 | 4);
  piVar23 = (int *)((ulong)&local_270 | 4);
  local_2c8 = (ulong *)0x0;
  local_2a8 = local_200;
  local_298 = (uint *)local_70;
  uVar37 = 0;
  puVar28 = local_200;
  local_2b8 = (code *)StringLiteral_16881;
  *param_10 = *param_9;
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
  puVar6 = local_2c8;
  switch(local_208[uVar37]) {
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
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)&local_288,wVar11);
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
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     *)&local_288,wVar11);
        } while( true );
      }
      goto LAB_01cb81e0;
    }
    goto LAB_01cb80a0;
  case (pattern)0x2:
    if ((uVar37 < 2) || (local_2c8 != (ulong *)0x0)) {
      bVar7 = (local_240 & 1) == 0;
      piVar17 = piVar22;
      if (!bVar7) {
        piVar17 = local_230;
      }
      piVar35 = piVar17;
      if (uVar37 != 0) goto LAB_01cb7740;
LAB_01cb77b4:
      bVar21 = (byte)local_240._0_1_ & 1;
      uVar18 = local_240 & 0xff;
      piVar36 = piVar17;
    }
    else {
      if (((uint)(uVar37 == 2 && local_205 != '\0') | param_5 >> 9 & 1) != 1) {
        local_2c8 = (ulong *)0x0;
        puVar6 = local_2c8;
        break;
      }
      bVar7 = (local_240 & 1) == 0;
      piVar35 = piVar22;
      if (!bVar7) {
        piVar35 = local_230;
      }
LAB_01cb7740:
      bVar21 = (byte)local_240._0_1_ & 1;
      uVar18 = local_240 & 0xff;
      piVar17 = piVar35;
      if (1 < (byte)local_208[(int)uVar37 - 1]) goto LAB_01cb77b4;
      uVar24 = uVar18 >> 1;
      if (!bVar7) {
        uVar24 = local_238;
      }
      if (uVar24 != 0) {
        do {
          uVar18 = (**(code **)(*param_8 + 0x18))(param_8,1,*piVar35);
          if ((uVar18 & 1) == 0) {
            uVar18 = local_240 & 0xff;
            bVar21 = (byte)local_240._0_1_ & 1;
            break;
          }
          uVar18 = local_240 & 0xff;
          piVar35 = piVar35 + 1;
          bVar21 = (byte)local_240._0_1_ & 1;
          uVar24 = (ulong)((byte)local_240._0_1_ >> 1);
          piVar17 = piVar22;
          if ((local_240 & 1) != 0) {
            uVar24 = local_238;
            piVar17 = local_230;
          }
        } while (piVar35 != piVar17 + uVar24);
      }
      piVar17 = piVar22;
      if (bVar21 != 0) {
        piVar17 = local_230;
      }
      uVar24 = (long)piVar35 - (long)piVar17;
      uVar30 = (long)uVar24 >> 2;
      piVar36 = piVar17;
      if ((local_288 & 1) == 0) {
        uVar29 = local_288 >> 1 & 0x7f;
        if (uVar30 <= uVar29) {
          pvVar14 = (void *)((long)&local_288 + uVar29 * 4 + 4);
          pvVar32 = (void *)((ulong)&local_288 | 4);
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
      else if (uVar30 <= local_280) {
        pvVar14 = (void *)((long)local_278 + local_280 * 4);
        uVar29 = local_280;
        pvVar32 = local_278;
        goto VRReady_Scripts_OVR_OVRManagerHelper__set_keepCenterControllerToEye;
      }
    }
    uVar18 = uVar18 >> 1;
    if (bVar21 != 0) {
      uVar18 = local_238;
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
      uVar18 = local_240 >> 1 & 0x7f;
      piVar17 = piVar22;
      if ((local_240 & 1) != 0) {
        uVar18 = local_238;
        piVar17 = local_230;
      }
    }
    if ((param_5 >> 9 & 1) == 0) break;
    uVar18 = local_240 >> 1 & 0x7f;
    piVar17 = piVar22;
    if ((local_240 & 1) != 0) {
      uVar18 = local_238;
      piVar17 = local_230;
    }
    if (piVar36 != piVar17 + uVar18) goto LAB_01cb81e0;
    break;
  case (pattern)0x3:
    uVar24 = local_258 & 0xff;
    bVar21 = (byte)local_258._0_1_ & 1;
    uVar18 = (ulong)((byte)local_258._0_1_ >> 1);
    if ((local_258 & 1) != 0) {
      uVar18 = local_250;
    }
    uVar30 = (ulong)((byte)local_270._0_1_ >> 1);
    if ((local_270 & 1) != 0) {
      uVar30 = local_268;
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
        if (((byte)local_270._0_1_ & 1) != 0) {
          piVar17 = local_260;
        }
        if (iVar12 == *piVar17) {
          plVar13 = (long *)*param_1;
          if (plVar13[3] == plVar13[4]) {
            (**(code **)(*plVar13 + 0x50))();
            bVar4 = local_270._0_1_;
          }
          else {
            plVar13[3] = plVar13[3] + 4;
            bVar4 = local_270._0_1_;
          }
          *param_7 = 1;
          uVar18 = (ulong)((byte)bVar4 >> 1);
          if (((byte)bVar4 & 1) != 0) {
            uVar18 = local_268;
          }
LAB_01cb8050:
          puVar6 = &local_270;
          if (uVar18 < 2) {
            puVar6 = local_2c8;
          }
        }
      }
      else {
        plVar13 = (long *)*param_1;
        piVar17 = (int *)plVar13[3];
        if (uVar30 == 0) {
          if (piVar17 == (int *)plVar13[4]) {
            iVar12 = (**(code **)(*plVar13 + 0x48))();
            uVar24 = local_258 & 0xff;
            bVar21 = (byte)local_258._0_1_ & 1;
          }
          else {
            iVar12 = *piVar17;
          }
          piVar17 = (int *)((ulong)&local_258 | 4);
          if (bVar21 != 0) {
            piVar17 = local_248;
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
            uVar24 = local_258 & 0xff;
            bVar21 = (byte)local_258._0_1_ & 1;
          }
          else {
            iVar12 = *piVar17;
          }
          plVar13 = (long *)*param_1;
          piVar17 = (int *)((ulong)&local_258 | 4);
          if (bVar21 != 0) {
            piVar17 = local_248;
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
            if ((local_270 & 1) != 0) {
              piVar17 = local_260;
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
              uVar18 = (ulong)((byte)local_270._0_1_ >> 1);
              if (((byte)local_270._0_1_ & 1) != 0) {
                uVar18 = local_268;
              }
              goto LAB_01cb8050;
            }
            goto LAB_01cb81e0;
          }
          if (piVar35 == (int *)plVar13[4]) {
            (**(code **)(*plVar13 + 0x50))(plVar13);
LAB_01cb8070:
            uVar24 = local_258 & 0xff;
            bVar21 = (byte)local_258._0_1_ & 1;
          }
          else {
            plVar13[3] = (long)(piVar35 + 1);
          }
        }
        uVar18 = uVar24 >> 1;
        if (bVar21 != 0) {
          uVar18 = local_250;
        }
        puVar6 = &local_258;
        if (uVar18 < 2) {
          puVar6 = local_2c8;
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
      uVar18 = local_228 >> 1 & 0x7f;
      if ((local_228 & 1) != 0) {
        uVar18 = local_220;
      }
      if (((wVar11 == local_210) && (uVar34 != 0)) && (uVar18 != 0)) {
        if (puVar26 != local_298) {
LAB_01cb75c8:
          puVar28 = puVar26 + 1;
          *puVar26 = uVar34;
          uVar34 = 0;
          goto LAB_01cb75d0;
        }
        uVar18 = (long)local_298 - (long)local_2a8;
        sVar3 = 4;
        if (uVar18 != 0) {
          sVar3 = uVar18 * 2;
        }
        if (0x7ffffffffffffffe < uVar18) {
          sVar3 = 0xffffffffffffffff;
        }
        if (local_2b8 == (code *)StringLiteral_16881) {
          local_2a8 = malloc(sVar3);
        }
        else {
          local_2a8 = realloc(local_2a8,sVar3);
        }
        if (local_2a8 != (uint *)0x0) {
          local_298 = (uint *)((long)local_2a8 + (sVar3 & 0xfffffffffffffffc));
          puVar26 = (uint *)((long)local_2a8 + uVar18);
          local_2b8 = (code *)StringLiteral_16882;
          goto LAB_01cb75c8;
        }
LAB_01cb83e0:
        __throw_bad_alloc();
LAB_01cb83e4:
        __throw_bad_alloc();
        goto LAB_01cb83e8;
      }
      goto LAB_01cb76c0;
    }
    pwVar16 = (wchar_t *)*param_10;
    if (pwVar16 == param_11) {
      uVar18 = (long)param_11 - *param_9;
      sVar3 = 4;
      if (uVar18 != 0) {
        sVar3 = uVar18 * 2;
      }
      if (0x7ffffffffffffffe < uVar18) {
        sVar3 = 0xffffffffffffffff;
      }
      if ((undefined *)param_9[1] == StringLiteral_16881) {
        pvVar14 = malloc(sVar3);
      }
      else {
        pvVar14 = realloc((void *)*param_9,sVar3);
      }
      if (pvVar14 == (void *)0x0) {
        __throw_bad_alloc();
        goto LAB_01cb83e0;
      }
      *param_9 = (long)pvVar14;
      param_9[1] = (long)StringLiteral_16882;
      pwVar16 = (wchar_t *)((long)pvVar14 + uVar18);
      *param_10 = (long)pwVar16;
      param_11 = (wchar_t *)(*param_9 + (sVar3 & 0xfffffffffffffffc));
    }
    *param_10 = (long)(pwVar16 + 1);
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
  local_2c8 = puVar6;
  uVar37 = uVar37 + 1;
  if (uVar37 == 4) goto LAB_01cb80a0;
  goto LAB_01cb72e0;
LAB_01cb76c0:
  puVar28 = puVar26;
  if ((local_2a8 != puVar26) && (uVar34 != 0)) {
    if (puVar26 == local_298) {
      uVar18 = (long)local_298 - (long)local_2a8;
      sVar3 = 4;
      if (uVar18 != 0) {
        sVar3 = uVar18 * 2;
      }
      if (0x7ffffffffffffffe < uVar18) {
        sVar3 = 0xffffffffffffffff;
      }
      if (local_2b8 == (code *)StringLiteral_16881) {
        local_2a8 = malloc(sVar3);
      }
      else {
        local_2a8 = realloc(local_2a8,sVar3);
      }
      if (local_2a8 == (uint *)0x0) {
LAB_01cb83e8:
        __throw_bad_alloc();
        goto LAB_01cb83ec;
      }
      local_298 = (uint *)((long)local_2a8 + (sVar3 & 0xfffffffffffffffc));
      puVar26 = (uint *)((long)local_2a8 + uVar18);
      local_2b8 = (code *)StringLiteral_16882;
    }
    puVar28 = puVar26 + 1;
    *puVar26 = uVar34;
  }
  if (local_28c < 1) {
LAB_01cb72c0:
    if (*param_10 == *param_9) goto LAB_01cb81e0;
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
  if (wVar11 == local_20c) {
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
    if (0 < local_28c) {
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
        pwVar16 = (wchar_t *)*param_10;
        if (pwVar16 == param_11) {
          uVar18 = (long)param_11 - *param_9;
          sVar3 = 4;
          if (uVar18 != 0) {
            sVar3 = uVar18 * 2;
          }
          if (0x7ffffffffffffffe < uVar18) {
            sVar3 = 0xffffffffffffffff;
          }
          if ((undefined *)param_9[1] == StringLiteral_16881) {
            pvVar14 = malloc(sVar3);
          }
          else {
            pvVar14 = realloc((void *)*param_9,sVar3);
          }
          if (pvVar14 == (void *)0x0) goto LAB_01cb83e4;
          *param_9 = (long)pvVar14;
          param_9[1] = (long)StringLiteral_16882;
          pwVar16 = (wchar_t *)((long)pvVar14 + uVar18);
          *param_10 = (long)pwVar16;
          param_11 = (wchar_t *)(*param_9 + (sVar3 & 0xfffffffffffffffc));
        }
        plVar13 = (long *)*param_1;
        if ((wchar_t *)plVar13[3] == (wchar_t *)plVar13[4]) {
          wVar11 = (**(code **)(*plVar13 + 0x48))();
          pwVar16 = (wchar_t *)*param_10;
        }
        else {
          wVar11 = *(wchar_t *)plVar13[3];
        }
        *param_10 = (long)(pwVar16 + 1);
        *pwVar16 = wVar11;
        local_28c = local_28c + -1;
        plVar13 = (long *)*param_1;
        if (plVar13[3] == plVar13[4]) goto code_r0x01cb7f10;
        plVar13[3] = plVar13[3] + 4;
        plVar13 = param_2;
        if (local_28c < 1) break;
      } while( true );
    }
    goto LAB_01cb72c0;
  }
  goto LAB_01cb81e0;
code_r0x01cb7f10:
  (**(code **)(*plVar13 + 0x50))();
  goto joined_r0x01cb7d4c;
LAB_01cb80a0:
  if (local_2c8 != (ulong *)0x0) {
    uVar37 = 1;
LAB_01cb80bc:
    if (((byte)*local_2c8 & 1) == 0) {
      uVar18 = (ulong)(byte)((byte)*local_2c8 >> 1);
    }
    else {
      uVar18 = local_2c8[1];
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
    pbVar19 = (byte *)((long)local_2c8 + 4);
    if ((*local_2c8 & 1) != 0) {
      pbVar19 = (byte *)local_2c8[2];
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
  if (local_2a8 == puVar28) {
    uVar10 = 1;
    goto LAB_01cb81f0;
  }
  uVar37 = (ulong)((byte)local_228._0_1_ >> 1);
  if ((local_228 & 1) != 0) {
    uVar37 = local_220;
  }
  if ((uVar37 != 0) && (4 < (long)puVar28 - (long)local_2a8)) {
    puVar20 = puVar28 + -1;
    puVar26 = puVar20;
    puVar28 = local_2a8;
    if (local_2a8 < puVar20) {
      do {
        puVar25 = puVar28 + 1;
        uVar34 = *puVar28;
        *puVar28 = *puVar26;
        puVar27 = puVar26 + -1;
        *puVar26 = uVar34;
        puVar26 = puVar27;
        puVar28 = puVar25;
      } while (puVar25 < puVar27);
      pbVar2 = (byte *)((ulong)&local_228 | 1);
      if ((local_228 & 1) != 0) {
        pbVar2 = local_218;
      }
      pbVar19 = pbVar2;
      if (local_2a8 < puVar20) {
        puVar28 = local_2a8;
        uVar37 = (ulong)((byte)local_228._0_1_ >> 1);
        if ((local_228 & 1) != 0) {
          uVar37 = local_220;
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
      pbVar19 = (byte *)((ulong)&local_228 | 1);
      if ((local_228 & 1) != 0) {
        pbVar19 = local_218;
      }
    }
    bVar21 = *pbVar19;
    uVar10 = 1;
    puVar28 = local_2a8;
    if ((bVar21 == 0) || (bVar21 == 0xff)) goto LAB_01cb81f0;
    if ((uint)bVar21 <= *puVar20 - 1) {
LAB_01cb81e0:
      uVar10 = 0;
      *param_6 = *param_6 | 4;
      puVar28 = local_2a8;
      goto LAB_01cb81f0;
    }
  }
  uVar10 = 1;
  puVar28 = local_2a8;
LAB_01cb81f0:
  if ((local_288 & 1) != 0) {
    operator_delete(local_278);
  }
  if ((local_270 & 1) != 0) {
    operator_delete(local_260);
  }
  if ((local_258 & 1) != 0) {
    operator_delete(local_248);
  }
  if ((local_240 & 1) != 0) {
    operator_delete(local_230);
  }
  if ((local_228 & 1) != 0) {
    operator_delete(local_218);
  }
  if (puVar28 != (uint *)0x0) {
    (*local_2b8)(puVar28);
  }
  if (*(long *)(lVar5 + 0x28) == local_70[0]) {
    return uVar10;
  }
LAB_01cb83ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


