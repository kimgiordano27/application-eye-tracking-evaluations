/*
FUNCTION_NAME: FUN_0369bf0c
ENTRY_POINT: 0369bf0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0369bf0c(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_04833f2f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__);
    DAT_04833f2f = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0369c1b4;
  fVar10 = (float)FUN_0369abd0();
  fVar14 = *(float *)(param_1 + 0xa0);
  uVar2 = FUN_0369c394(param_1);
  plVar8 = *(long **)(param_1 + 0x40);
  fVar13 = 0.0;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    fVar13 = *(float *)(param_1 + 0xa8);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0369bfd4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__,0
                         );
LAB_0369bfd4:
    fVar11 = (float)(*(code *)*puVar3)(plVar8,puVar3[1]);
    fVar12 = fVar11;
    if (1.0 < fVar11) {
      fVar12 = 1.0;
    }
    if (fVar11 < 0.0) {
      fVar12 = 0.0;
    }
    fVar13 = fVar13 * fVar12 + 0.0;
  }
  plVar8 = (long *)(param_1 + 0x68);
  if (*plVar8 == 0) goto LAB_0369c1b4;
  FUN_0406f8a4(*plVar8,0.0 <= fVar10,0);
  plVar9 = (long *)(param_1 + 0x60);
  if (*plVar9 == 0) goto LAB_0369c1b4;
  fVar12 = ABS(fVar10);
  if (1.0 < fVar12) {
    fVar12 = 1.0;
  }
  fVar14 = fVar14 * fVar12 + 0.0;
  lVar5 = param_1;
  lVar1 = 0;
  if (fVar10 >= 0.0) {
    lVar5 = 0;
    lVar1 = param_1;
  }
  FUN_0406f8a4(*plVar9,fVar10 < 0.0,0);
  fVar12 = *(float *)(param_1 + 0x9c);
  if (fVar14 <= fVar12) {
    fVar14 = fVar12;
  }
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_0369c1b4;
  fVar11 = fVar13 + fVar14;
  if (0.0 <= fVar10) {
    fVar12 = fVar11;
  }
  uVar4 = FUN_04070398(*(long *)(param_1 + 0x58),0);
  uVar4 = FUN_0369c41c(fVar12,param_1,uVar4);
  if ((fVar10 < 0.0) || (((uVar2 ^ 1) & 1) != 0)) {
    FUN_0369c5d4(0,uVar4,*(undefined8 *)(param_1 + 0x78));
    if (0.0 <= fVar10) {
      fVar12 = fVar14;
      if ((uVar2 & 1) != 0) goto LAB_0369c0f4;
      goto LAB_0369c0f8;
    }
LAB_0369c0cc:
    if (lVar5 == 0) goto LAB_0369c1b4;
    OVRPlugin_OVRP_1_6_0___cctor
              (*(undefined4 *)(param_1 + 0x9c),lVar5,*(undefined8 *)(param_1 + 0x78));
    fVar12 = -fVar14 - fVar13;
  }
  else {
    if ((uVar2 & 1) == 0) goto LAB_0369c1b4;
    FUN_0369c5d4(fVar14 - *(float *)(param_1 + 0x9c),uVar4,*(undefined8 *)(param_1 + 0x78));
    if (fVar10 < 0.0) goto LAB_0369c0cc;
LAB_0369c0f4:
    fVar12 = *(float *)(param_1 + 0x9c);
LAB_0369c0f8:
    OVRPlugin_OVRP_1_6_0___cctor(fVar13 + fVar12,lVar1,*(undefined8 *)(param_1 + 0x78));
    fVar12 = -*(float *)(param_1 + 0x9c);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar4 = FUN_04070398(*(long *)(param_1 + 0x50),0);
    uVar4 = FUN_0369c41c(fVar12,param_1,uVar4);
    fVar12 = 0.0;
    if (fVar10 < 0.0 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
      fVar12 = *(float *)(param_1 + 0x9c) - fVar14;
    }
    FUN_0369c5d4(fVar12,uVar4,*(undefined8 *)(param_1 + 0x70));
    if (0.0 <= fVar10) {
      fVar11 = *(float *)(param_1 + 0x9c);
    }
    else {
      plVar8 = plVar9;
      if ((uVar2 & 1) != 0) {
        fVar11 = fVar13 + *(float *)(param_1 + 0x9c);
      }
    }
    OVRPlugin_OVRP_1_6_0___cctor(fVar11,param_1,*(undefined8 *)(param_1 + 0x70));
    FUN_0369c6b0(fVar14,fVar13,param_1,*plVar8);
    return;
  }
LAB_0369c1b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


