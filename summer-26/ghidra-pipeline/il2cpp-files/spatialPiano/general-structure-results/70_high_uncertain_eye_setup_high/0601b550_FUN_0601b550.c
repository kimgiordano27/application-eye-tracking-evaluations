/*
FUNCTION_NAME: FUN_0601b550
ENTRY_POINT: 0601b550
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_0601b550(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_06bc5369 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_54__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_55__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    FUN_02f08768(PTR_DAT_067c8fa8);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_31__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_34__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_4__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_40__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_51__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_52__);
    DAT_06bc5369 = 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if ((uVar3 & 1) == 0) {
    if (param_2 != 0) {
      uVar4 = FUN_05f2c188(param_2,0);
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
      plVar5 = (long *)thunk_FUN_02f45174(uVar4,*(undefined8 *)
                                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__)
      ;
      if (plVar5 == (long *)0x0) goto LAB_0601b7bc;
      if (param_1[0x1c] != 0) {
        uVar3 = FUN_037524bc(param_1[0x1c],plVar5,
                             *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_54__);
        if ((uVar3 & 1) == 0) goto LAB_0601b7bc;
        if (param_1[0x1c] != 0) {
          FUN_0375268c(param_1[0x1c],plVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_55__)
          ;
          lVar8 = *plVar5;
          lVar7 = *(long *)puVar1;
          uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0601b6b4;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_02f421d0(plVar5,lVar7,0);
LAB_0601b6b4:
          lVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          uVar4 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
          FUN_04477a3c(uVar4,param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_51__,0);
          if (lVar7 != 0) {
            FUN_0447a8e4(lVar7,uVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_4__);
            lVar8 = *plVar5;
            lVar7 = *(long *)puVar1;
            uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar3 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_0601b760;
                }
                uVar3 = uVar3 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_02f421d0(plVar5,lVar7,1);
LAB_0601b760:
            lVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            uVar4 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_31__);
            FUN_04477a3c(uVar4,param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_52__,0);
            if (lVar7 != 0) {
              FUN_0447a8e4(lVar7,uVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_40__);
              goto LAB_0601b7bc;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_0601b7bc:
  if ((((*(char *)((long)param_1 + 0x71) == '\0') && (*(char *)((long)param_1 + 0x75) == '\0')) &&
      ((int)param_1[0xf] == 2)) &&
     (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= *(float *)(param_1 + 0x10))) {
                    /* WARNING: Could not recover jumptable at 0x0601b844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  FUN_060158a0(param_1,uVar2);
  return;
}


