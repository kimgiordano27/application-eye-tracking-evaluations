/*
FUNCTION_NAME: UnityEngine.Gizmos$$DrawRay
ENTRY_POINT: 03584104
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Gizmos__DrawRay(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  undefined8 *unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  long unaff_x22;
  float fVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fStack0000000000000000;
  float fStack0000000000000004;
  ulong uStack0000000000000008;
  
  FUN_01ab69ac();
  *(undefined1 *)(unaff_x22 + 0x6e) = 1;
  puVar2 = OVRVirtualKeyboard_InputSource_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  _fStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (*(long *)(unaff_x21 + 0x368) == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  else {
    lVar3 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    uVar14 = *(undefined4 *)(lVar3 + 0x1598);
    uVar13 = *(undefined4 *)(lVar3 + 0x159c);
    uVar11 = *(undefined4 *)(lVar3 + 0x15a0);
    uVar12 = *(undefined4 *)(lVar3 + 0x15a4);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567e14(uVar14,uVar13,uVar11,uVar12);
    lVar3 = *(long *)(unaff_x21 + 0x368);
    if (lVar3 == 0) {
LAB_035842c4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar4 = 0;
      lVar5 = 0x194;
      do {
        if ((long)*(int *)(unaff_x21 + 0x328) < (long)uVar4) {
          bVar6 = true;
        }
        else {
          lVar7 = *(long *)(lVar3 + 0x38);
          if (lVar7 == 0) goto LAB_035842c4;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_035842c0;
          bVar6 = *(int *)(unaff_x21 + 0x330) < *(int *)(lVar7 + lVar5 + -0x130);
        }
        if ((bVar6 & unaff_w20 & 1) != 0) break;
        if ((unaff_w20 & 1) == 0) {
          lVar7 = *(long *)(lVar3 + 0x38);
          if (lVar7 == 0) goto LAB_035842c4;
LAB_03584214:
          if (*(uint *)(lVar7 + 0x18) <= uVar4) {
LAB_035842c0:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar7 = lVar7 + lVar5;
          if (*(float *)(lVar7 + -0x54) <= fStack0000000000000000) {
            fStack0000000000000000 = *(float *)(lVar7 + -0x54);
          }
          if (*(float *)(lVar7 + -0x44) <= fStack0000000000000004) {
            fStack0000000000000004 = *(float *)(lVar7 + -0x44);
          }
          uVar9 = *(ulong *)(lVar7 + -0x50);
          uStack0000000000000008 =
               uStack0000000000000008 ^
               (uStack0000000000000008 ^ uVar9) &
               ~CONCAT44(-(uint)((float)(uVar9 >> 0x20) < (float)(uStack0000000000000008 >> 0x20)),
                         -(uint)((float)uVar9 < (float)uStack0000000000000008));
        }
        else {
          lVar7 = *(long *)(lVar3 + 0x38);
          if (lVar7 == 0) goto LAB_035842c4;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_035842c0;
          if (*(char *)(lVar7 + lVar5) != '\0') goto LAB_03584214;
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x178;
      } while ((long)uVar4 < (long)*(int *)(lVar3 + 0x18));
    }
    *(undefined4 *)(unaff_x19 + 1) = 0;
    *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
    fVar8 = (float)(uStack0000000000000008 >> 0x20);
    fVar10 = (float)((ulong)_fStack0000000000000000 >> 0x20);
    *unaff_x19 = CONCAT44((fVar8 + fVar10) * 0.5,
                          ((float)uStack0000000000000008 + (float)_fStack0000000000000000) * 0.5);
    *(ulong *)((long)unaff_x19 + 0xc) =
         CONCAT44((fVar8 - fVar10) * 0.5,
                  ((float)uStack0000000000000008 - (float)_fStack0000000000000000) * 0.5);
  }
  return;
}


