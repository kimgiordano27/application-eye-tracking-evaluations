/*
FUNCTION_NAME: FUN_06b2ddac
ENTRY_POINT: 06b2ddac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_06b2ddac(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  if ((DAT_076e35e0 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Array_Resize<OVRPlugin_Vector3f>__);
    thunk_FUN_032e1da0(Method_System_Array_Resize<OvrAvatarEntity_PrimitiveRenderData>__);
    thunk_FUN_032e1da0(Method_System_Array_Resize<OvrAvatarManager_LoadRequest>__);
    thunk_FUN_032e1da0(Method_System_Array_Reverse<byte>__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    DAT_076e35e0 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uVar4 = FUN_06a7dfec(param_4,0);
  puVar1 = PTR_DAT_072794f0;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_4 + 0x1f8) != 0) {
      FUN_041e3694(&local_a8,*(long *)(param_4 + 0x1f8),
                   *(undefined8 *)Method_System_Array_Reverse<byte>__);
      puVar1 = Method_System_Array_Resize<OvrAvatarEntity_PrimitiveRenderData>__;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
      while (uVar4 = FUN_052d44b4(&local_90,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
        if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(long *)(local_80 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06be9a98(*(long *)(local_80 + 0x10),0,0);
      }
LAB_06b2e1f0:
      FUN_052d44b0(&local_90,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__);
      return;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_4 + 0x1d0);
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06be9890(uVar9,0,0);
    if ((uVar4 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_4 + 0x1f0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_06be9890(uVar9,0,0);
      if ((uVar4 & 1) == 0) {
        lVar10 = FUN_06bb0054(0);
      }
      else {
        if (*(long *)(param_4 + 0x1f0) == 0) goto LAB_06b2e24c;
        lVar10 = FUN_06a2a790(*(long *)(param_4 + 0x1f0),0);
      }
    }
    else {
      if (*(long *)(param_4 + 0x1d0) == 0) goto LAB_06b2e24c;
      lVar10 = *(long *)(*(long *)(param_4 + 0x1d0) + 0x20);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06bece64(lVar10,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (lVar10 != 0) {
      lVar10 = FUN_06be6b04(lVar10,0);
      lVar5 = FUN_06be6b04(param_4,0);
      if ((lVar5 != 0) && (fVar11 = (float)FUN_06bf4868(lVar5,0), lVar10 != 0)) {
        fVar15 = param_3;
        fVar19 = param_2;
        fVar12 = (float)FUN_06bf4868(lVar10,0);
        fVar11 = fVar11 - fVar12;
        param_3 = param_3 - fVar15;
        if (DAT_076cd827 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07279c00);
          DAT_076cd827 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar4 = (ulong)(uint)DAT_013a01c0;
        fVar15 = SQRT(param_3 * param_3 + fVar11 * fVar11 + 0.0);
        if (fVar15 <= DAT_013a01c0) {
          if (DAT_076cd829 == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_072795b0);
            DAT_076cd829 = '\x01';
          }
          pfVar8 = *(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
          fVar12 = *pfVar8;
          fVar17 = pfVar8[1];
          fVar18 = pfVar8[2];
        }
        else {
          fVar12 = fVar11 / fVar15;
          fVar17 = 0.0 / fVar15;
          fVar18 = param_3 / fVar15;
        }
        fVar13 = (float)FUN_06bf4ce0(lVar10,0);
        if (*(long *)(param_4 + 0x1f8) != 0) {
          fVar19 = param_3 * param_3 + fVar11 * fVar11 + (param_2 - fVar19) * (param_2 - fVar19);
          fVar11 = (float)uVar4;
          FUN_041e3694(&local_a8,*(long *)(param_4 + 0x1f8),
                       *(undefined8 *)Method_System_Array_Reverse<byte>__);
          puVar2 = Method_System_Array_Resize<OvrAvatarEntity_PrimitiveRenderData>__;
          uStack_88 = uStack_a0;
          local_90 = local_a8;
          local_80 = local_98;
          while (uVar6 = FUN_052d44b4(&local_90,*(undefined8 *)puVar2), lVar10 = local_80,
                (uVar6 & 1) != 0) {
            if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            fVar14 = acosf(fVar18 * fVar11 + fVar12 * fVar13 + fVar17 * fVar15);
            uVar6 = (ulong)(uint)*(float *)(lVar10 + 0x18);
            if ((*(float *)(lVar10 + 0x18) <= fVar14) ||
               (fVar19 < *(float *)(lVar10 + 0x1c) * *(float *)(lVar10 + 0x1c))) {
              bVar3 = false;
            }
            else {
              bVar3 = fVar19 < *(float *)(lVar10 + 0x20) * *(float *)(lVar10 + 0x20);
            }
            uVar9 = *(undefined8 *)(lVar10 + 0x10);
            uVar16 = uVar4;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              uVar16 = uVar4;
            }
            uVar7 = FUN_06be9890(uVar9,0,0);
            uVar4 = uVar16;
            if ((uVar7 & 1) != 0) {
              lVar5 = *(long *)(lVar10 + 0x10);
              if (bVar3) {
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar4 = FUN_06be9adc(lVar5,0);
                if ((uVar4 & 1) == 0) {
                  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06be9a98(*(long *)(lVar10 + 0x10),1,0);
                }
              }
              else {
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar4 = FUN_06be9adc(lVar5,0);
                if ((uVar4 & 1) != 0) {
                  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06be9a98(*(long *)(lVar10 + 0x10),0,0);
                }
              }
              if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar7 = FUN_06be9adc(*(long *)(lVar10 + 0x10),0);
              uVar4 = uVar16;
              if ((uVar7 & 1) != 0) {
                if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                lVar10 = FUN_06be99dc(*(long *)(lVar10 + 0x10),0);
                lVar5 = FUN_06be6b04(param_4,0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar9 = FUN_06bf4c64(lVar5,0);
                uVar4 = (ulong)(uint)fVar18;
                FUN_06bddf48(fVar12,fVar17,(ulong)(uint)fVar18,uVar9,uVar6,uVar16,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                FUN_06bf4a88(lVar10,0);
              }
            }
          }
          goto LAB_06b2e1f0;
        }
      }
    }
  }
LAB_06b2e24c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


