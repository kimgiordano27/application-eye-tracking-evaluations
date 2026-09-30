/*
FUNCTION_NAME: FUN_01230060
ENTRY_POINT: 01230060
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_01230060(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 local_78;
  long local_58;
  
  if ((DAT_0377646f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_6684);
    thunk_FUN_00d48444(StringLiteral_4493);
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    DAT_0377646f = 1;
  }
  local_78 = 0;
  if (param_1[4] == 0) goto LAB_01230584;
  iVar6 = FUN_027ee018(param_1[4],0);
  if (iVar6 != 2) {
LAB_01230418:
    if (param_1[0xb] != 0) {
      FUN_0275301c(param_1[0xb],0);
    }
    return;
  }
  if (((param_1[2] != 0) && (lVar8 = *(long *)(param_1[2] + 0x3f8), lVar8 != 0)) &&
     (plVar9 = (long *)FUN_02748b64(lVar8,0), plVar9 != (long *)0x0)) {
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_4493) {
          puVar10 = (undefined8 *)(lVar8 + (long)(*piVar14 + 0x13) * 0x10 + 0x138);
          goto LAB_0123016c;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_4493,0x13);
LAB_0123016c:
    fVar18 = (float)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (param_1 != (long *)0x0) {
      fVar19 = (float)(**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
      if (fVar18 - fVar19 <= 0.0) goto LAB_01230418;
      puVar10 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x108);
      (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_58);
      puVar5 = StringLiteral_6684;
      puVar4 = Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__;
      if (local_58 == 0) {
        return;
      }
      lVar8 = param_1[0xb];
      if (lVar8 == 0) {
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
        if (lVar8 == 0) goto LAB_01230584;
        FUN_0274e248(lVar8,0);
        lVar11 = FUN_0274ded0(lVar8,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar5);
        }
        if (lVar11 == 0) goto LAB_01230584;
        FUN_00ac1158(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x60),
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
        param_1[0xb] = lVar8;
      }
      if (lVar8 != 0) {
        lVar8 = FUN_0274a95c(lVar8,0);
        if (lVar8 == 0) {
          if ((param_1[2] == 0) || (lVar8 = *(long *)(param_1[2] + 0x3f8), lVar8 == 0))
          goto LAB_01230584;
          FUN_02751e94(lVar8,param_1[0xb],0);
        }
        uVar20 = (**(code **)(*param_1 + 0x1f8))
                           (param_1,0xffffffff,*(undefined8 *)(*param_1 + 0x200));
        if (DAT_03775509 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775509 = '\x01';
        }
        fVar18 = (fVar18 - fVar19) / (float)uVar20;
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar3 = UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo;
        iVar6 = -0x7fffffff;
        if ((float)(int)fVar18 != INFINITY) {
          iVar6 = (int)fVar18 + 1;
        }
        if (param_1[0xb] != 0) {
          iVar7 = FUN_02752820(param_1[0xb],0);
          if (iVar7 < iVar6) {
            if (param_1[0xb] == 0) goto LAB_01230584;
            iVar7 = FUN_02752820(param_1[0xb],0);
            if (0 < iVar6 - iVar7) {
              iVar16 = 0;
              do {
                lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                if (lVar8 == 0) goto LAB_01230584;
                FUN_0274e248(lVar8,0);
                plVar9 = (long *)FUN_0274adf4(lVar8,0);
                uVar12 = FUN_0281d760(0,0);
                if (plVar9 == (long *)0x0) goto LAB_01230584;
                lVar13 = *plVar9;
                lVar11 = *(long *)puVar3;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar15 != 0) {
                  piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == lVar11) {
                      puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x15) * 0x10 + 0x138);
                      goto LAB_012303b4;
                    }
                    uVar15 = uVar15 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar15 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar11,0x15);
LAB_012303b4:
                (*(code *)*puVar10)(plVar9,uVar12,puVar10[1]);
                if (param_1[0xb] == 0) goto LAB_01230584;
                FUN_02751e94(param_1[0xb],lVar8,0);
                iVar16 = iVar16 + 1;
              } while (iVar16 != iVar6 - iVar7);
            }
          }
          puVar10 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x108);
          (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_58);
          if (local_58 == 0) {
            uVar17 = 0xffffffff;
          }
          else {
            uVar17 = *(uint *)(local_58 + 0x20);
          }
          if (param_1[0xb] != 0) {
            local_78 = *(undefined8 *)(param_1[0xb] + 0x360);
            iVar6 = FUN_02752884(&local_78,0);
            if (iVar6 < 1) {
              return;
            }
            iVar7 = 0;
            while (param_1[0xb] != 0) {
              local_78 = *(undefined8 *)(param_1[0xb] + 0x360);
              lVar8 = FUN_027527ac(&local_78,iVar7,0);
              if (lVar8 == 0) break;
              plVar9 = (long *)FUN_0274adf4(lVar8,0);
              auVar21 = FUN_0281d9e8(uVar20,0);
              if (plVar9 == (long *)0x0) break;
              lVar13 = *plVar9;
              lVar11 = *(long *)puVar3;
              uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar15 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar11) {
                    puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x17) * 0x10 + 0x138);
                    goto LAB_0123051c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar11,0x17);
LAB_0123051c:
              uVar1 = uVar17 + 1;
              (*(code *)*puVar10)(plVar9,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar10[1]);
              lVar11 = *(long *)puVar5;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar11 = *(long *)puVar5;
              }
              uVar2 = uVar1;
              if ((int)uVar1 < 0) {
                uVar2 = uVar17 + 2;
              }
              FUN_02750a5c(lVar8,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x50),
                           uVar1 - (uVar2 & 0xfffffffe) == 1,0);
              iVar7 = iVar7 + 1;
              uVar17 = uVar1;
              if (iVar7 == iVar6) {
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01230584:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


