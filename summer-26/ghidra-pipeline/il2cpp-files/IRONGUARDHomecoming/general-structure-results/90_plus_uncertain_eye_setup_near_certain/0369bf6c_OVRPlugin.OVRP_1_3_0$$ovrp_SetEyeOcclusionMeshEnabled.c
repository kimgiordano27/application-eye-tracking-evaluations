/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_SetEyeOcclusionMeshEnabled
ENTRY_POINT: 0369bf6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_OVRP_1_3_0__ovrp_SetEyeOcclusionMeshEnabled(uint param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s10;
  float unaff_s11;
  float fVar11;
  
  plVar7 = *(long **)(unaff_x19 + 0x40);
  fVar10 = 0.0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    fVar10 = *(float *)(unaff_x19 + 0xa8);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0369bfd4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__,0
                         );
LAB_0369bfd4:
    fVar8 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
    fVar9 = fVar8;
    if (1.0 < fVar8) {
      fVar9 = 1.0;
    }
    if (fVar8 < 0.0) {
      fVar9 = 0.0;
    }
    fVar10 = fVar10 * fVar9 + 0.0;
  }
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_0369c1b4;
  FUN_0406f8a4(*(long *)(unaff_x19 + 0x68),0.0 <= unaff_s8,0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0369c1b4;
  fVar9 = ABS(unaff_s8);
  if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  fVar9 = unaff_s10 * fVar9 + unaff_s11;
  lVar4 = unaff_x19;
  lVar1 = 0;
  if (unaff_s8 >= 0.0) {
    lVar4 = 0;
    lVar1 = unaff_x19;
  }
  FUN_0406f8a4(*(long *)(unaff_x19 + 0x60),unaff_s8 < 0.0,0);
  fVar8 = *(float *)(unaff_x19 + 0x9c);
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0369c1b4;
  fVar11 = fVar10 + fVar9;
  if (0.0 <= unaff_s8) {
    fVar8 = fVar11;
  }
  FUN_04070398(*(long *)(unaff_x19 + 0x58),0);
  uVar3 = FUN_0369c41c(fVar8);
  if ((unaff_s8 < 0.0) || (((param_1 ^ 1) & 1) != 0)) {
    FUN_0369c5d4(0,uVar3,*(undefined8 *)(unaff_x19 + 0x78));
    if (0.0 <= unaff_s8) {
      fVar8 = fVar9;
      if ((param_1 & 1) != 0) goto LAB_0369c0f4;
      goto LAB_0369c0f8;
    }
LAB_0369c0cc:
    if (lVar4 == 0) goto LAB_0369c1b4;
    OVRPlugin_OVRP_1_6_0___cctor
              (*(undefined4 *)(unaff_x19 + 0x9c),lVar4,*(undefined8 *)(unaff_x19 + 0x78));
    fVar8 = -fVar9 - fVar10;
  }
  else {
    if ((param_1 & 1) == 0) goto LAB_0369c1b4;
    FUN_0369c5d4(fVar9 - *(float *)(unaff_x19 + 0x9c),uVar3,*(undefined8 *)(unaff_x19 + 0x78));
    if (unaff_s8 < 0.0) goto LAB_0369c0cc;
LAB_0369c0f4:
    fVar8 = *(float *)(unaff_x19 + 0x9c);
LAB_0369c0f8:
    OVRPlugin_OVRP_1_6_0___cctor(fVar10 + fVar8,lVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar8 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_04070398(*(long *)(unaff_x19 + 0x50),0);
    uVar3 = FUN_0369c41c(fVar8);
    fVar8 = 0.0;
    if (unaff_s8 < 0.0 && ((param_1 ^ 0xffffffff) & 1) == 0) {
      fVar8 = *(float *)(unaff_x19 + 0x9c) - fVar9;
    }
    FUN_0369c5d4(fVar8,uVar3,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      fVar11 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((param_1 & 1) != 0) {
      fVar11 = fVar10 + *(float *)(unaff_x19 + 0x9c);
    }
    OVRPlugin_OVRP_1_6_0___cctor(fVar11);
    FUN_0369c6b0(fVar9,fVar10);
    return;
  }
LAB_0369c1b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


