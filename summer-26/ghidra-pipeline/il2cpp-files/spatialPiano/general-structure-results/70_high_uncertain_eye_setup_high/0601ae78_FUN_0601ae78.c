/*
FUNCTION_NAME: FUN_0601ae78
ENTRY_POINT: 0601ae78
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


void FUN_0601ae78(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  
  if ((DAT_06bc5367 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_54__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_55__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_31__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_34__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_4__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_40__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_51__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_52__);
    DAT_06bc5367 = 1;
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
  if (param_2 != 0) {
    uVar3 = FUN_05f2b2d0(param_2,0);
    plVar4 = (long *)thunk_FUN_02f45174(uVar3,*(undefined8 *)puVar1);
    if (plVar4 == (long *)0x0) {
LAB_0601b0c4:
      uVar2 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      FUN_060158a0(param_1,uVar2);
      return;
    }
    if (param_1[0x1c] != 0) {
      uVar5 = FUN_037524bc(param_1[0x1c],plVar4,
                           *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_54__);
      if ((uVar5 & 1) == 0) goto LAB_0601b0c4;
      if (param_1[0x1c] != 0) {
        FUN_0375268c(param_1[0x1c],plVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_55__);
        lVar7 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0601afbc;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar1,0);
LAB_0601afbc:
        lVar7 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        uVar3 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
        FUN_04477a3c(uVar3,param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_51__,0);
        if (lVar7 != 0) {
          FUN_0447a8e4(lVar7,uVar3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_4__);
          lVar7 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_0601b068;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar1,1);
LAB_0601b068:
          lVar7 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          uVar3 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_31__);
          FUN_04477a3c(uVar3,param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_52__,0);
          if (lVar7 != 0) {
            FUN_0447a8e4(lVar7,uVar3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_40__);
            goto LAB_0601b0c4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


