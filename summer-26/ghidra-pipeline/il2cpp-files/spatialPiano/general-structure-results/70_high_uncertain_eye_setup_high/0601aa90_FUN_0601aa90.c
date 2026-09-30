/*
FUNCTION_NAME: FUN_0601aa90
ENTRY_POINT: 0601aa90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_0601aa90(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  
  if ((DAT_06bc5366 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_53__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_54__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_31__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_34__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_36__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_38__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_4__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_40__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_51__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_52__);
    DAT_06bc5366 = 1;
  }
  if (*(char *)((long)param_1 + 0x72) != '\0') {
LAB_0601ab4c:
    uVar6 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    FUN_060158a0(param_1,uVar6);
    return;
  }
  if (param_2 != 0) {
    uVar7 = FUN_05f2b0f0(param_2,0);
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
    plVar8 = (long *)thunk_FUN_02f45174(uVar7,*(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    if (plVar8 == (long *)0x0) goto LAB_0601ab4c;
    if (param_1[0x1c] != 0) {
      uVar9 = FUN_037524bc(param_1[0x1c],plVar8,
                           *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_54__);
      if ((uVar9 & 1) != 0) goto LAB_0601ab4c;
      if (param_1[0x1c] != 0) {
        FUN_03752f3c(param_1[0x1c],plVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_53__);
        lVar11 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0601ac34;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,0);
LAB_0601ac34:
        lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_34__;
        uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
        puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_51__;
        FUN_04477a3c(uVar7,param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_51__,0);
        if (lVar11 != 0) {
          FUN_0447a8e4(lVar11,uVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_4__);
          lVar11 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_0601ace0;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,1);
LAB_0601ace0:
          lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_31__;
          uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_31__);
          puVar5 = Method_OVRPlugin_<>c_<_cctor>b__837_52__;
          FUN_04477a3c(uVar7,param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_52__,0);
          if (lVar11 != 0) {
            FUN_0447a8e4(lVar11,uVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_40__);
            lVar11 = *plVar8;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0601ad88;
                }
                uVar9 = uVar9 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,0);
LAB_0601ad88:
            lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
            FUN_04477a3c(uVar7,param_1,*(undefined8 *)puVar4,0);
            if (lVar11 != 0) {
              FUN_0447a8a8(lVar11,uVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_38__);
              lVar11 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                    goto LAB_0601ae24;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar10 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,1);
LAB_0601ae24:
              lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
              uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
              FUN_04477a3c(uVar7,param_1,*(undefined8 *)puVar5,0);
              if (lVar11 != 0) {
                FUN_0447a8a8(lVar11,uVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_36__);
                goto LAB_0601ab4c;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


