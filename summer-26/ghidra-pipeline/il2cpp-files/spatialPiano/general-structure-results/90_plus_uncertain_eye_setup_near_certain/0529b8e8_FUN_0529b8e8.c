/*
FUNCTION_NAME: FUN_0529b8e8
ENTRY_POINT: 0529b8e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0529b8e8(long param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_118;
  undefined8 *puStack_110;
  ulong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if ((DAT_06bbaced & 1) == 0) {
    FUN_02f08768(
                UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                );
    FUN_02f08768(UnityEngine_SendMouseEvents_HitInfo___TypeInfo);
    FUN_02f08768(System_Net_Sockets_Socket_WSABUF___TypeInfo);
    FUN_02f08768(TMPro_TMP_InputField_ContentType___TypeInfo);
    FUN_02f08768(TMPro_TMP_Text_TextProcessingElement___TypeInfo);
    FUN_02f08768(OVRPlugin_Vector3f___TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
    DAT_06bbaced = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0.0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_d0 = 0;
  uVar9 = FUN_0529b844(param_1);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x118) == 0) {
LAB_0529bc44:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar8 = FUN_0529b618();
    if (iVar8 == 0) {
      if (*(char *)(param_1 + 0x158) == '\0') {
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(param_1 + 200);
      }
    }
    else {
      fVar23 = *(float *)(param_1 + 0x128);
      if (*(int *)(*(long *)OVRPlugin_Vector3f___TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar15 = *(long *)TMPro_TMP_Text_TextProcessingElement___TypeInfo;
      lVar14 = *(long *)(lVar15 + 0x20);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_02f41e9c();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_02f41e9c();
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar14 = *(long *)(lVar15 + 0x20);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_02f41e9c();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_02f41e9c();
      }
      plVar10 = (long *)**(long **)(lVar14 + 0xb8);
      if (plVar10 == (long *)0x0) goto LAB_0529bc44;
      fVar23 = fVar23 * fVar23;
      (**(code **)(*plVar10 + 0x198))(&local_f8,plVar10,param_1,*(undefined8 *)(*plVar10 + 0x1a0));
      uStack_98 = uStack_f0;
      local_a0 = local_f8;
      local_90 = local_e8;
      FUN_037d833c(&local_118,&local_a0,*(undefined8 *)TMPro_TMP_InputField_ContentType___TypeInfo);
      local_c0 = local_118;
      puVar4 = System_Net_Sockets_Socket_WSABUF___TypeInfo;
      puVar3 = UnityEngine_SendMouseEvents_HitInfo___TypeInfo;
      fVar2 = DAT_011b0508;
      fVar1 = DAT_011b0124;
      local_118 = 0;
      uVar20 = 0x7f7fffff;
      uStack_b8 = puStack_110;
      uStack_a8 = uStack_100;
      uStack_b0 = local_108;
      uVar9 = local_108;
      fVar22 = DAT_011b0124;
      puStack_110 = &local_c0;
      fVar17 = 3.4028235e+38;
      uVar11 = uVar20;
      lVar15 = 0;
      while (lVar14 = lVar15, uVar19 = uVar11, fVar24 = fVar17,
            uVar11 = FUN_04bbfe84(&local_c0,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
        lVar12 = FUN_04bbfd2c(&local_c0,*(undefined8 *)puVar4);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar13 = FUN_0529a1dc(lVar12,param_1,&local_e0);
        fVar18 = (float)uVar9;
        fVar25 = (float)uVar20;
        fVar17 = fVar24;
        uVar11 = uVar19;
        lVar15 = lVar14;
        if ((uVar13 & 1) != 0) {
          if (*(long *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          fVar5 = (float)local_e0;
          fVar6 = local_e0._4_4_;
          fVar21 = (float)local_d8;
          fVar16 = (float)FUN_060ffbe4(*(long *)(param_1 + 0x130),0);
          fVar7 = local_c8;
          fVar21 = fVar21 - fVar18;
          fVar18 = fVar21 * fVar21;
          uVar20 = (ulong)(uint)fVar18;
          fVar25 = fVar18 + (fVar5 - fVar16) * (fVar5 - fVar16) +
                            (fVar6 - fVar25) * (fVar6 - fVar25);
          uVar9 = (ulong)(uint)fVar21;
          if (fVar25 <= fVar24) {
            if (*(long *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            fVar17 = local_d8._4_4_;
            fVar5 = (float)local_d0;
            fVar6 = local_d0._4_4_;
            fVar16 = (float)FUN_060fdda4(*(long *)(param_1 + 0x130),0);
            fVar17 = (float)NEON_fminnm(ABS(fVar7 * fVar22 +
                                            fVar6 * fVar21 + fVar17 * fVar16 + fVar5 * fVar18),
                                        0x3f800000);
            uVar20 = 0;
            if (fVar17 <= fVar2) {
              fVar17 = acosf(fVar17);
              uVar20 = (ulong)(uint)((fVar17 + fVar17) * fVar1);
            }
            uVar9 = (ulong)(uint)fVar23;
            fVar17 = fVar25;
            uVar11 = uVar20;
            lVar15 = lVar12;
            if ((ABS(fVar25 - fVar24) < fVar23) &&
               (fVar17 = fVar24, uVar11 = uVar19, lVar15 = lVar14, (float)uVar20 < (float)uVar19)) {
              fVar17 = fVar25;
              uVar11 = uVar20;
              lVar15 = lVar12;
            }
          }
        }
      }
      FUN_04bc0140(&local_c0,
                   *(undefined8 *)
                    UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                  );
    }
  }
  else {
    lVar14 = *(long *)(param_1 + 0x140);
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
  return lVar14;
}


