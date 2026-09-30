/*
FUNCTION_NAME: FUN_0201f128
ENTRY_POINT: 0201f128
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0201f52c) */

long FUN_0201f128(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_64 [4];
  
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if ((DAT_0378099e & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MedleyHourglassTarget>_get_Count__);
    thunk_FUN_00d48444(Method_System_Collections_Queue_Peek__);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_Datums_AnimationCurveDatumProperty_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_0378099e = 1;
  }
  lVar7 = *(long *)puVar6;
  local_64[0] = '\0';
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar6;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  local_64[0] = '\0';
  FUN_017d75a8(uVar12,local_64,0);
  local_70 = param_2[2];
  uStack_78 = param_2[1];
  local_80 = *param_2;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uStack_98 = uStack_78;
  local_a0 = local_80;
  local_90 = local_70;
  lVar7 = FUN_0201f5e0(&local_a0);
  if ((lVar7 == 0) && ((param_3 & 1) != 0)) {
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar6;
    }
    if (**(int **)(lVar7 + 0xb8) == 0) {
      lVar7 = 0;
    }
    else {
      local_70 = param_2[2];
      uStack_78 = param_2[1];
      local_80 = *param_2;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      uVar5 = *(undefined4 *)(param_1 + 0x48);
      uVar13 = *(undefined8 *)(param_1 + 0x50);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<MedleyHourglassTarget>_get_Count__
                                );
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      local_b0 = local_70;
      FUN_017b46ec(lVar7,0);
      *(undefined8 *)(lVar7 + 0x40) = uVar1;
      *(undefined8 *)(lVar7 + 0x48) = uVar3;
      *(undefined8 *)(lVar7 + 0x50) = uVar14;
      *(undefined4 *)(lVar7 + 0x58) = uVar5;
      *(undefined8 *)(lVar7 + 0x28) = uStack_b8;
      *(undefined8 *)(lVar7 + 0x20) = local_c0;
      *(undefined8 *)(lVar7 + 0x30) = local_b0;
      *(undefined8 *)(lVar7 + 0x38) = uVar4;
      *(undefined8 *)(lVar7 + 0x60) = uVar13;
      *(undefined8 *)(lVar7 + 0x68) = uVar2;
      lVar8 = *(long *)puVar6;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *(long *)puVar6;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar8 = *(long *)puVar6;
          lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        *(long *)(lVar9 + 0x10) = lVar7;
        *(long *)(lVar7 + 0x18) = lVar9;
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *(long *)puVar6;
      }
      lVar9 = *(long *)(lVar8 + 0xb8);
      *(long *)(lVar9 + 0x18) = lVar7;
      iVar11 = *(int *)(lVar9 + 0x10) + 1;
      *(int *)(lVar9 + 0x10) = iVar11;
      if (9 < iVar11) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar8 = *(long *)puVar6;
          lVar9 = *(long *)(lVar8 + 0xb8);
          iVar11 = *(int *)(lVar9 + 0x10);
        }
        if (iVar11 == 10) {
          FUN_0201f8f4();
        }
        else {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar8);
            lVar9 = *(long *)(*(long *)puVar6 + 0xb8);
          }
          local_d0 = param_2[2];
          uStack_d8 = param_2[1];
          local_e0 = *param_2;
          local_80 = local_e0;
          uStack_78 = uStack_d8;
          local_70 = local_d0;
          if (*(long *)(lVar9 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0129a054(*(long *)(lVar9 + 8),&local_e0,lVar7,
                       *(undefined8 *)Method_System_Collections_Queue_Peek__);
        }
      }
      lVar8 = *(long *)puVar6;
      iVar11 = *(int *)(lVar8 + 0xe0);
      if (iVar11 == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *(long *)puVar6;
        iVar11 = *(int *)(lVar8 + 0xe0);
      }
      piVar10 = *(int **)(lVar8 + 0xb8);
      if (*(long *)(piVar10 + 8) == 0) {
        if (iVar11 == 0) {
          thunk_FUN_00d32864(lVar8);
          piVar10 = *(int **)(*(long *)puVar6 + 0xb8);
        }
        *(long *)(piVar10 + 8) = lVar7;
      }
      else {
        if (iVar11 == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar8 = *(long *)puVar6;
          piVar10 = *(int **)(lVar8 + 0xb8);
        }
        iVar11 = piVar10[4];
        if (*piVar10 < iVar11) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar8);
            lVar8 = *(long *)puVar6;
            piVar10 = *(int **)(lVar8 + 0xb8);
            iVar11 = piVar10[4];
          }
          lVar9 = *(long *)(piVar10 + 8);
          if (iVar11 < 10) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
          else {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar8);
              piVar10 = *(int **)(*(long *)puVar6 + 0xb8);
            }
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            local_f0 = *(undefined8 *)(lVar9 + 0x30);
            uStack_f8 = *(undefined8 *)(lVar9 + 0x28);
            local_100 = *(undefined8 *)(lVar9 + 0x20);
            local_80 = local_100;
            uStack_78 = uStack_f8;
            local_70 = local_f0;
            if (*(long *)(piVar10 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0129de0c(*(long *)(piVar10 + 2),&local_100,
                         *(undefined8 *)
                          Unity_XR_CoreUtils_Datums_AnimationCurveDatumProperty_TypeInfo);
          }
          lVar8 = *(long *)(lVar9 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          *(undefined8 *)(lVar8 + 0x18) = 0;
          lVar9 = *(long *)puVar6;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar9 = *(long *)puVar6;
          }
          lVar9 = *(long *)(lVar9 + 0xb8);
          *(long *)(lVar9 + 0x20) = lVar8;
          *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
        }
      }
    }
  }
  if (local_64[0] != '\0') {
    thunk_FUN_00d56f10(uVar12,0);
  }
  return lVar7;
}


