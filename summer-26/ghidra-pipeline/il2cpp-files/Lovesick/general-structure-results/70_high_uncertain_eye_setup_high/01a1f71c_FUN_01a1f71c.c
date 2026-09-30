/*
FUNCTION_NAME: FUN_01a1f71c
ENTRY_POINT: 01a1f71c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01a1f71c(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  uint local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0377a9fa & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<AudioReverbFilter>__);
    thunk_FUN_00d48444(Method_System_String_Compare__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<Expression>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2598);
    thunk_FUN_00d48444(StringLiteral_11555);
    thunk_FUN_00d48444(StringLiteral_4227);
    thunk_FUN_00d48444(StringLiteral_3629);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_PredictiveParser_ExpectSingleChar__)
    ;
    DAT_0377a9fa = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_c4 = 0;
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 != 0) {
    lVar10 = *(long *)Method_UnityEngine_InputSystem_Utilities_PredictiveParser_ExpectSingleChar__;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(lVar12 + 0x18) = 0;
      plVar2 = (long *)StringLiteral_2598;
    }
    else {
      iVar1 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      plVar2 = (long *)StringLiteral_2598;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
        plVar2 = (long *)StringLiteral_2598;
      }
    }
    StringLiteral_2598 = (undefined *)plVar2;
    if (param_2 != (long *)0x0) {
      lVar12 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *plVar2) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01a1f890;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(param_2,*plVar2,0);
LAB_01a1f890:
      plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
      puVar5 = StringLiteral_4227;
      if (plVar9 != (long *)0x0) {
        lVar12 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_4227) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
              goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_4227,0);
OVRPlugin__GetAdaptiveGPUPerformanceScale:
        plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
        if (plVar9 != (long *)0x0) {
          lVar12 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar7 != 0) {
            piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_11555) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_01a1f964;
              }
              uVar7 = uVar7 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_11555,1);
LAB_01a1f964:
          puVar4 = Method_System_String_Compare__;
          puVar3 = System_Collections_Generic_IList<Expression>_TypeInfo;
          (*(code *)*puVar8)(&local_e0,plVar9,puVar8[1]);
          uStack_78 = CONCAT44(uStack_d4,uStack_d8);
          local_70 = CONCAT44(uStack_cc,local_d0);
          local_80 = local_e0;
          while (uVar7 = FUN_012b69b4(&local_80,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
            uVar6 = FUN_00bf9134(&local_80,*(undefined8 *)puVar3);
            lVar12 = *param_2;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *plVar2) {
                  puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                  goto LAB_01a1fa14;
                }
                uVar7 = uVar7 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_00d59724(param_2,*plVar2,7);
LAB_01a1fa14:
            uVar7 = (*(code *)*puVar8)(param_2,uVar6,&local_a0,puVar8[1]);
            if ((uVar7 & 1) != 0) {
              lVar12 = *param_2;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar7 != 0) {
                piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *plVar2) {
                    puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                    goto LAB_01a1fa7c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_00d59724(param_2,*plVar2,8);
LAB_01a1fa7c:
              uVar7 = (*(code *)*puVar8)(param_2,uVar6,&local_c0,puVar8[1]);
              if ((uVar7 & 1) != 0) {
                lVar12 = *param_2;
                uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar7 != 0) {
                  piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *plVar2) {
                      puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_01a1fae0;
                    }
                    uVar7 = uVar7 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(param_2,*plVar2,0);
LAB_01a1fae0:
                plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar12 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar7 != 0) {
                  piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
                      puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto LAB_01a1fb44;
                    }
                    uVar7 = uVar7 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar5,1);
LAB_01a1fb44:
                uVar7 = (*(code *)*puVar8)(plVar9,uVar6,&local_c4,puVar8[1]);
                if ((uVar7 & 1) != 0) {
                  uStack_ec = CONCAT44(local_88,uStack_8c);
                  uStack_d8 = uStack_b8;
                  local_e0 = local_c0;
                  uStack_cc = uStack_ac;
                  uStack_c8 = local_a8;
                  uStack_d4 = uStack_b4;
                  local_d0 = uStack_b0;
                  uStack_f8 = uStack_98;
                  local_100 = local_a0;
                  uStack_f4 = uStack_94;
                  uStack_f0 = uStack_90;
                  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uStack_13c = local_c4;
                  uStack_124 = CONCAT44(local_a8,uStack_ac);
                  uStack_128 = uStack_b0;
                  uStack_130 = uStack_b8;
                  local_12c = uStack_b4;
                  uStack_138 = local_c0;
                  uStack_10c = uStack_90;
                  uStack_114 = uStack_98;
                  local_110 = uStack_94;
                  uStack_11c = local_a0;
                  local_140 = uVar6;
                  uStack_108 = uStack_ec;
                  FUN_00bfe630(*(long *)(param_1 + 0x28),&local_140,
                               *(undefined8 *)StringLiteral_3629);
                }
              }
            }
          }
          FUN_012b69b0(&local_80,
                       *(undefined8 *)
                        Method_UnityEngine_GameObject_AddComponent<AudioReverbFilter>__);
          *(undefined4 *)(param_1 + 0x20) = 1;
          FUN_01a1fcc4(param_1);
          lVar12 = *(long *)(param_1 + 0x18);
          if (lVar12 != 0) {
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


