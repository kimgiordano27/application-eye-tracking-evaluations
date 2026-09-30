/*
FUNCTION_NAME: System.Security.Cryptography.KeyedHashAlgorithm$$Dispose
ENTRY_POINT: 02e12c74
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow
*/


void System_Security_Cryptography_KeyedHashAlgorithm__Dispose
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  plVar14 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff0126 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__);
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Key__);
    thunk_FUN_01ad9084(StringLiteral_4578);
    thunk_FUN_01ad9084(StringLiteral_4579);
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Entry__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0126 = 1;
  }
  uVar11 = *(undefined8 *)(param_4 + 0x30);
  if (*(int *)(*plVar14 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar11,0);
  if ((uVar4 & 1) != 0) {
    FUN_02e12ff8(param_4);
    lVar12 = *(long *)(param_4 + 0x30);
    if (lVar12 == 0) {
LAB_02e12fe4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar17 = *(long *)(lVar12 + 0x80);
    if ((lVar17 == 0) || (*(long *)(lVar17 + 0x18) == 0)) {
      FUN_02e151c8(lVar12);
      lVar17 = *(long *)(lVar12 + 0x80);
      if (lVar17 == 0) goto LAB_02e12fe4;
    }
    puVar3 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__;
    puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    uVar1 = *(uint *)(lVar17 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      uVar15 = 0;
      do {
        if (uVar1 <= uVar9) {
LAB_02e12fe8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar12 = *(long *)(lVar17 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_02e12fe4;
        uVar11 = *(undefined8 *)(lVar12 + 0x18);
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar11,0);
        if ((uVar4 & 1) != 0) {
          lVar7 = *(long *)(lVar12 + 0x20);
          if (lVar7 == 0) goto LAB_02e12fe4;
          iVar16 = 0;
          while (plVar14 = (long *)
                           Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
                iVar16 < *(int *)(lVar7 + 0x18)) {
            plVar14 = *(long **)(param_4 + 0x80);
            lVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                        Method_System_Resources_ResourceReader_ResourceEnumerator_get_Entry__
                                      );
            FUN_02bd6644(lVar7,*(undefined8 *)
                                Method_System_Resources_ResourceReader_ResourceEnumerator_get_Key__)
            ;
            if (plVar14 == (long *)0x0) goto LAB_02e12fe4;
            if ((lVar7 != 0) &&
               (lVar5 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar14 + 0x40)), lVar5 == 0)) {
              uVar11 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar11,0);
            }
            if (*(uint *)(plVar14 + 3) <= uVar15) goto LAB_02e12fe8;
            plVar14[(long)(int)uVar15 + 4] = lVar7;
            thunk_FUN_01b4f09c(plVar14 + (long)(int)uVar15 + 4,lVar7);
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(puVar2);
              DAT_03fed257 = '\x01';
            }
            lVar7 = *(long *)(lVar12 + 0x20);
            if (lVar7 == 0) goto LAB_02e12fe4;
            puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            uVar11 = *puVar8;
            fVar23 = *(float *)(puVar8 + 1);
            if (iVar16 == *(int *)(lVar7 + 0x18) + -1) {
              lVar7 = *(long *)(lVar12 + 0x18);
            }
            else {
              lVar7 = FUN_02b59714(lVar7,iVar16 + 1,*(undefined8 *)StringLiteral_4579);
              if (lVar7 == 0) goto LAB_02e12fe4;
              lVar7 = *(long *)(lVar7 + 0x10);
            }
            if (lVar7 == 0) goto LAB_02e12fe4;
            fVar18 = (float)FUN_03928280(lVar7,0);
            iVar6 = *(int *)(param_4 + 0x24);
            if (0 < iVar6) {
              iVar13 = 0;
              fVar21 = (float)uVar11;
              fVar22 = (float)((ulong)uVar11 >> 0x20);
              fVar24 = param_2 - fVar22;
              fVar25 = param_3 - fVar23;
              do {
                lVar7 = *(long *)(param_4 + 0x80);
                fVar19 = ((float)iVar13 + 1.0) / (float)iVar6;
                fVar20 = fVar19;
                if (1.0 < fVar19) {
                  fVar20 = 1.0;
                }
                if (fVar19 < 0.0) {
                  fVar20 = 0.0;
                }
                if (lVar7 == 0) goto LAB_02e12fe4;
                if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_02e12fe8;
                lVar7 = *(long *)(lVar7 + (long)(int)uVar15 * 8 + 0x20);
                if (lVar7 == 0) goto LAB_02e12fe4;
                lVar10 = *(long *)(lVar7 + 0x10);
                lVar5 = *(long *)puVar3;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_02e12fe4;
                uVar1 = *(uint *)(lVar7 + 0x18);
                fVar19 = fVar25 * fVar20;
                param_2 = fVar22 + fVar24 * fVar20;
                param_3 = fVar23 + fVar19;
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar1 * 0xc;
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  *(ulong *)(lVar10 + 0x20) = CONCAT44(param_2,fVar21 + (fVar18 - fVar21) * fVar20);
                  *(float *)(lVar10 + 0x28) = param_3;
                  param_2 = fVar19;
                }
                else {
                  FUN_02bd6ed8(lVar7,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                iVar6 = *(int *)(param_4 + 0x24);
                iVar13 = iVar13 + 1;
              } while (iVar13 < iVar6);
            }
            lVar7 = *(long *)(lVar12 + 0x20);
            uVar15 = uVar15 + 1;
            iVar16 = iVar16 + 1;
            if (lVar7 == 0) goto LAB_02e12fe4;
          }
        }
        uVar1 = *(uint *)(lVar17 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
  }
  return;
}


