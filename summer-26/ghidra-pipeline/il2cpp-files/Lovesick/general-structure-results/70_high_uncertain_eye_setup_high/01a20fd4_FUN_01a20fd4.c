/*
FUNCTION_NAME: FUN_01a20fd4
ENTRY_POINT: 01a20fd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01a20fd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_54;
  
  if ((DAT_0377aa0d & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8975);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_54__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<AudioReverbFilter>__);
    thunk_FUN_00d48444(Method_System_String_Compare__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<Expression>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2598);
    thunk_FUN_00d48444(StringLiteral_11555);
    thunk_FUN_00d48444(StringLiteral_4227);
    DAT_0377aa0d = 1;
  }
  puVar5 = StringLiteral_8975;
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_b0 = 0;
  local_98 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0129a9f4(*(long *)(param_1 + 0x38),*(undefined8 *)StringLiteral_8975);
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_0129a9f4(*(long *)(param_1 + 0x40),*(undefined8 *)puVar5);
      puVar5 = StringLiteral_2598;
      plVar12 = *(long **)(param_1 + 0x28);
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_2598) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_01a21108;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_2598,0);
LAB_01a21108:
        plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_4227) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_01a21170;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_4227,0);
LAB_01a21170:
          plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
          if (plVar12 != (long *)0x0) {
            lVar8 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_11555) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_01a211dc;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_11555,1);
LAB_01a211dc:
            puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_54__;
            puVar3 = Method_System_String_Compare__;
            puVar2 = Method_UnityEngine_GameObject_AddComponent<AudioReverbFilter>__;
            puVar1 = System_Collections_Generic_IList<Expression>_TypeInfo;
            (*(code *)*puVar7)(&local_d0,plVar12,puVar7[1]);
            uStack_68 = CONCAT44(uStack_c4,uStack_c8);
            local_60 = CONCAT44(uStack_bc,local_c0);
            local_70 = local_d0;
            while (uVar10 = FUN_012b69b4(&local_70,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
              uVar6 = FUN_00bf9134(&local_70,*(undefined8 *)puVar1);
              plVar12 = *(long **)(param_1 + 0x28);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar9 = *plVar12;
              lVar8 = *(long *)puVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar8) {
                    puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                    goto LAB_01a21294;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)FUN_00d59724(plVar12,lVar8,7);
LAB_01a21294:
              uVar10 = (*(code *)*puVar7)(plVar12,uVar6,&local_90,puVar7[1]);
              if ((uVar10 & 1) != 0) {
                uStack_c8 = uStack_88;
                local_d0 = local_90;
                uStack_bc = uStack_7c;
                uStack_b8 = local_78;
                uStack_c4 = uStack_84;
                local_c0 = uStack_80;
                if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uStack_dc = CONCAT44(local_78,uStack_7c);
                uStack_e8 = uStack_88;
                local_f0 = local_90;
                uStack_e4 = uStack_84;
                uStack_e0 = uStack_80;
                local_54 = uVar6;
                FUN_01299e64(*(long *)(param_1 + 0x38),&local_54,&local_f0,*(undefined8 *)puVar4);
              }
              plVar12 = *(long **)(param_1 + 0x28);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar9 = *plVar12;
              lVar8 = *(long *)puVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar8) {
                    puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                    goto LAB_01a21340;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)FUN_00d59724(plVar12,lVar8,8);
LAB_01a21340:
              uVar10 = (*(code *)*puVar7)(plVar12,uVar6,&local_b0,puVar7[1]);
              if ((uVar10 & 1) != 0) {
                uStack_c8 = uStack_a8;
                local_d0 = local_b0;
                uStack_bc = uStack_9c;
                uStack_b8 = local_98;
                uStack_c4 = uStack_a4;
                local_c0 = uStack_a0;
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uStack_fc = CONCAT44(local_98,uStack_9c);
                uStack_108 = uStack_a8;
                local_110 = local_b0;
                uStack_104 = uStack_a4;
                uStack_100 = uStack_a0;
                local_54 = uVar6;
                FUN_01299e64(*(long *)(param_1 + 0x40),&local_54,&local_110,*(undefined8 *)puVar4);
              }
            }
            FUN_012b69b0(&local_70,*(undefined8 *)puVar2);
            lVar8 = *(long *)(param_1 + 0x18);
            if (lVar8 != 0) {
              (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


