/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 01f94b44
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin_OVRP_1_79_0__ovrp_QplCreateMarkerHandle
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long *unaff_x19;
  long unaff_x20;
  long lVar11;
  long *unaff_x22;
  long lVar12;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  uint unaff_w28;
  long *unaff_x29;
  
  do {
    uVar6 = FUN_01f7f404(param_1,param_2,param_3);
    if ((uVar6 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
LAB_01f94dac:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar6 = FUN_01f81644(unaff_x22,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = (**(code **)(*unaff_x22 + 0x288))(unaff_x22);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
        if ((*(byte *)(*unaff_x22 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(unaff_x22);
        }
        uVar6 = FUN_01f9451c();
      }
      if ((uVar6 & 1) == 0) goto LAB_01f94b98;
    }
    do {
      do {
        uVar10 = *(uint *)(unaff_x19 + 3);
        if (uVar10 <= unaff_w24) goto LAB_01f94d44;
        lVar12 = *unaff_x29;
        if (lVar12 != 0) {
          lVar7 = thunk_FUN_0124baac(lVar12,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar7 == 0) {
            uVar9 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar9,0);
          }
          uVar10 = *(uint *)(unaff_x19 + 3);
        }
        if (uVar10 <= unaff_w28) goto LAB_01f94d44;
        lVar7 = (long)(int)unaff_w28;
        unaff_x19[lVar7 + 4] = lVar12;
        unaff_w28 = unaff_w28 + 1;
        thunk_FUN_01286abc(unaff_x19 + lVar7 + 4,lVar12);
LAB_01f94b98:
        puVar3 = PTR_DAT_027c1390;
        unaff_w24 = unaff_w24 + 1;
        uVar10 = (uint)unaff_x19[3];
        if ((int)uVar10 <= (int)unaff_w24) {
          if (unaff_w28 == 1) {
            if (uVar10 == 0) goto LAB_01f94d44;
            goto OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize;
          }
          if (unaff_w28 == 0) {
            uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1c10);
            thunk_FUN_01279b34(PTR_DAT_027c1c18);
            uVar9 = thunk_FUN_0124bba8();
            FUN_01f88c80(uVar9,uVar8,0);
            goto LAB_01f94dec;
          }
          if (1 < (int)unaff_w28) {
            lVar12 = 0;
            uVar10 = 0;
            bVar2 = false;
            goto LAB_01f94c78;
          }
          uVar10 = 0;
          goto LAB_01f94a38;
        }
        if (uVar10 <= unaff_w24) goto LAB_01f94d44;
        unaff_x29 = unaff_x19 + (long)(int)unaff_w24 + 4;
        plVar5 = (long *)*unaff_x29;
        if (plVar5 == (long *)0x0) goto LAB_01f94dac;
        param_1 = (long *)(**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01220628(*unaff_x25);
        }
        uVar6 = FUN_01f7f404(param_1);
      } while ((uVar6 & 1) != 0);
      lVar12 = *unaff_x26;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar12 = *unaff_x26;
      }
      if (**(long **)(lVar12 + 0xb8) != unaff_x20) break;
      if (param_1 == (long *)0x0) goto LAB_01f94dac;
      uVar6 = FUN_01f8134c(param_1,0);
    } while ((uVar6 & 1) != 0);
    uVar9 = *unaff_x27;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    param_2 = FUN_01f7d8a0(uVar9,0);
    param_3 = 0;
    unaff_x22 = param_1;
  } while( true );
  while( true ) {
    lVar7 = unaff_x19[(long)(int)uVar10 + 4];
    lVar11 = unaff_x19[lVar12 + 5];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    iVar4 = FUN_01f94e14(lVar7,lVar11);
    if (iVar4 == 0) {
      bVar2 = true;
    }
    else if (iVar4 == 2) {
      bVar2 = false;
      uVar10 = (int)lVar12 + 1;
    }
    lVar12 = lVar12 + 1;
    if ((ulong)unaff_w28 - 1 == lVar12) break;
LAB_01f94c78:
    if (((uint)unaff_x19[3] <= uVar10) || ((unaff_x19[3] & 0xffffffffU) <= lVar12 + 1U))
    goto LAB_01f94d44;
  }
  if (bVar2) {
    uVar8 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
    thunk_FUN_01279b34(PTR_DAT_027bc458);
    uVar9 = thunk_FUN_0124bba8();
    FUN_01ee31d4(uVar9,uVar8,0);
LAB_01f94dec:
    uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1c08);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar9,uVar8);
  }
LAB_01f94a38:
  if (uVar10 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19 = unaff_x19 + (int)uVar10;
OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize:
    return unaff_x19[4];
  }
LAB_01f94d44:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


