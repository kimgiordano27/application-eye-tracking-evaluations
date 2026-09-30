/*
FUNCTION_NAME: FUN_01d1dfac
ENTRY_POINT: 01d1dfac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_01d1dfac(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  puVar1 = StringLiteral_3966;
                    /* try { // try from 01d1dfdc to 01e1dff7 has its CatchHandler @ 01d1db3c */
  if ((DAT_0377f2e5 & 1) == 0) {
    thunk_FUN_00d48444(OVRVirtualKeyboard_<>c_TypeInfo);
                    /* try { // try from 01d1dff8 to 01e1dffb has its CatchHandler @ 01d1e080 */
    thunk_FUN_00d48444(StringLiteral_3966);
    thunk_FUN_00d48444(System_Net_CloseExState_TypeInfo);
    thunk_FUN_00d48444(FullSerializer_Internal_fsPrimitiveConverter_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10702);
    thunk_FUN_00d48444(UnityEngine_Rendering_ScriptableCullingParameters_TypeInfo);
    thunk_FUN_00d48444(GreenroomComboComponent_TypeInfo);
    DAT_0377f2e5 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar5 == 0) goto LAB_01d1e6a8;
  FUN_02040bc8(lVar5,param_2,0);
  lVar6 = FUN_02041968(lVar5,0);
  if (lVar6 == 0) goto LAB_01d1e6a8;
  cVar3 = FUN_02040dc0(lVar6,0);
  if (cVar3 == -0x60) {
    lVar7 = FUN_02041968();
    if (lVar7 == 0) goto LAB_01d1e6a8;
    uVar4 = FUN_0204114c(lVar7,0);
    *(uint *)(param_1 + 2) = uVar4;
    if (2 < uVar4) {
      thunk_FUN_00d48444(StringLiteral_7308);
      uVar8 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_0162d7e4(uVar8,0);
      goto LAB_01d1e588;
    }
LAB_01d1e0e8:
    uVar8 = FUN_02041200(lVar6,0);
    param_1[3] = uVar8;
    lVar7 = FUN_02041968(lVar6,0);
    puVar2 = OVRVirtualKeyboard_<>c_TypeInfo;
    if (lVar7 == 0) goto LAB_01d1e6a8;
    uVar8 = FUN_02041434(lVar7,0);
    param_1[4] = uVar8;
    uVar9 = FUN_02040db0(lVar7,0);
    if ((uVar9 & 1) == 0) {
      lVar11 = *(long *)puVar2;
      lVar10 = *(long *)(lVar11 + 0x38);
      if (lVar10 == 0) {
        FUN_00d59478(lVar11);
        lVar10 = *(long *)(lVar11 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      uVar8 = **(undefined8 **)(lVar10 + 0xb8);
    }
    else {
      uVar8 = FUN_02040ea8(lVar7,0);
    }
    param_1[5] = uVar8;
    uVar9 = FUN_02040db0(lVar7,0);
    puVar2 = UnityEngine_Rendering_ScriptableCullingParameters_TypeInfo;
    if ((uVar9 & 1) == 0) {
      uVar8 = FUN_02040ea8(lVar6,0);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar7 == 0) {
LAB_01d1e6a8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_02044c20(lVar7,uVar8,0);
      param_1[6] = lVar7;
      lVar7 = FUN_02041968(lVar6,0);
      if (lVar7 == 0) goto LAB_01d1e6a8;
      uVar8 = FUN_02041d50(lVar7,0);
      param_1[7] = uVar8;
      uVar8 = FUN_02041d50(lVar7,0);
      param_1[8] = uVar8;
      uVar9 = FUN_02040db0(lVar7,0);
      if ((uVar9 & 1) == 0) {
        uVar8 = FUN_02040ea8(lVar6,0);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar7 == 0) goto LAB_01d1e6a8;
        FUN_02044c20(lVar7,uVar8,0);
        param_1[9] = lVar7;
        uVar8 = FUN_02040ea8(lVar6,0);
        param_1[1] = uVar8;
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = OVRVirtualKeyboard_<>c_TypeInfo;
        if (lVar7 == 0) goto LAB_01d1e6a8;
        FUN_02040bc8(lVar7,uVar8,0);
        lVar10 = FUN_02041968(lVar7,0);
        if (lVar10 == 0) goto LAB_01d1e6a8;
        uVar8 = FUN_02041434(lVar10,0);
        param_1[10] = uVar8;
        uVar9 = FUN_02040db0(lVar10,0);
        if ((uVar9 & 1) == 0) {
          lVar13 = *(long *)puVar1;
          lVar11 = *(long *)(lVar13 + 0x38);
          if (lVar11 == 0) {
            FUN_00d59478(lVar13);
            lVar11 = *(long *)(lVar13 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
            lVar11 = FUN_00d5941c();
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
          if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
            lVar11 = FUN_00d5941c();
          }
          uVar8 = **(undefined8 **)(lVar11 + 0xb8);
        }
        else {
          uVar8 = FUN_02040ea8(lVar10,0);
        }
        param_1[0xb] = uVar8;
        uVar9 = FUN_02040db0(lVar10,0);
        if ((uVar9 & 1) == 0) {
          uVar8 = FUN_020412d0(lVar7,0);
          param_1[0xc] = uVar8;
          uVar9 = FUN_02040db0(lVar7,0);
          if ((uVar9 & 1) == 0) {
            if (*(int *)(param_1 + 2) < 1) {
              uVar8 = 0;
            }
            else {
              uVar9 = FUN_02040db0(lVar6,0);
              uVar8 = 0;
              if ((uVar9 & 1) != 0) {
                cVar3 = FUN_02040dc0(lVar6,0);
                uVar8 = 0;
                if (cVar3 == -0x5f) {
                  uVar8 = FUN_020412d0(lVar6,0);
                }
              }
            }
            puVar1 = StringLiteral_10702;
            param_1[0xd] = uVar8;
            if (*(int *)(param_1 + 2) < 1) {
              uVar8 = 0;
            }
            else {
              uVar9 = FUN_02040db0(lVar6,0);
              uVar8 = 0;
              if ((uVar9 & 1) != 0) {
                cVar3 = FUN_02040dc0(lVar6,0);
                uVar8 = 0;
                if (cVar3 == -0x5e) {
                  uVar8 = FUN_020412d0(lVar6,0);
                }
              }
            }
            param_1[0xe] = uVar8;
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar7 == 0) goto LAB_01d1e6a8;
            FUN_01320e50(lVar7,*(undefined8 *)FullSerializer_Internal_fsPrimitiveConverter_TypeInfo)
            ;
            param_1[0xf] = lVar7;
            if (((*(int *)(param_1 + 2) < 2) || (uVar9 = FUN_02040db0(lVar6,0), (uVar9 & 1) == 0))
               || (cVar3 = FUN_02040dc0(lVar6,0), cVar3 != -0x5d)) {
LAB_01d1e5a0:
              uVar9 = FUN_02040db0(lVar6,0);
              if ((uVar9 & 1) == 0) {
                lVar6 = FUN_02041968(lVar5,0);
                if (lVar6 == 0) goto LAB_01d1e6a8;
                uVar8 = FUN_02041434(lVar6,0);
                param_1[0x10] = uVar8;
                uVar9 = FUN_02040db0(lVar6,0);
                if ((uVar9 & 1) == 0) {
                  lVar10 = *(long *)OVRVirtualKeyboard_<>c_TypeInfo;
                  lVar7 = *(long *)(lVar10 + 0x38);
                  if (lVar7 == 0) {
                    FUN_00d59478(lVar10);
                    lVar7 = *(long *)(lVar10 + 0x38);
                  }
                  lVar7 = *(long *)(lVar7 + 0x10);
                  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    lVar7 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar7 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    lVar7 = FUN_00d5941c();
                  }
                  uVar8 = **(undefined8 **)(lVar7 + 0xb8);
                }
                else {
                  uVar8 = FUN_02040ea8(lVar6,0);
                }
                param_1[0x11] = uVar8;
                uVar9 = FUN_02040db0(lVar6,0);
                if ((uVar9 & 1) == 0) {
                  uVar8 = FUN_020412d0(lVar5,0);
                  param_1[0x12] = uVar8;
                  uVar9 = FUN_02040db0(lVar5,0);
                  if ((uVar9 & 1) == 0) {
                    *param_1 = param_2;
                    return;
                  }
                }
              }
            }
            else {
              lVar7 = FUN_02041968(lVar6,0);
              if ((lVar7 == 0) ||
                 (lVar7 = FUN_02041968(lVar7,0), puVar2 = GreenroomComboComponent_TypeInfo,
                 puVar1 = System_Net_CloseExState_TypeInfo, lVar7 == 0)) goto LAB_01d1e6a8;
              do {
                uVar9 = FUN_02040db0(lVar7,0);
                if ((uVar9 & 1) == 0) goto LAB_01d1e5a0;
                lVar10 = FUN_02041968(lVar7,0);
                if (lVar10 == 0) goto LAB_01d1e6a8;
                uVar8 = FUN_02041434(lVar10,0);
                cVar3 = FUN_02040dc0(lVar10,0);
                if (cVar3 == '\x01') {
                  uVar4 = FUN_02041080(lVar10,0);
                }
                else {
                  uVar4 = 0;
                }
                uVar12 = FUN_02041418(lVar10,0);
                lVar13 = param_1[0xf];
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar11 == 0) || (FUN_02051bc8(lVar11,uVar8,uVar12,uVar4 & 1,0), lVar13 == 0))
                goto LAB_01d1e6a8;
                FUN_00c43b4c(lVar13,lVar11,*(undefined8 *)puVar1);
                uVar9 = FUN_02040db0(lVar10,0);
              } while ((uVar9 & 1) == 0);
            }
          }
        }
      }
    }
  }
  else {
    cVar3 = FUN_02040dc0(lVar6,0);
    if (cVar3 == '\x02') {
      *(undefined4 *)(param_1 + 2) = 0;
      goto LAB_01d1e0e8;
    }
  }
  thunk_FUN_00d48444(StringLiteral_7308);
  uVar8 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar12 = thunk_FUN_00d48444(System_Func<sbyte>_TypeInfo);
  FUN_0162d648(uVar8,uVar12,0);
LAB_01d1e588:
  uVar12 = thunk_FUN_00d48444(StringLiteral_2463);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar8,uVar12);
}


