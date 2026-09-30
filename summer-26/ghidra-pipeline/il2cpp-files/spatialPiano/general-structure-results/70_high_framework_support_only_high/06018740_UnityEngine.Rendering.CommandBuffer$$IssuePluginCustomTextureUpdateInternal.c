/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$IssuePluginCustomTextureUpdateInternal
ENTRY_POINT: 06018740
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_7;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


void UnityEngine_Rendering_CommandBuffer__IssuePluginCustomTextureUpdateInternal
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x22;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_06018760;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
LAB_06018760:
  lVar3 = (*(code *)*puVar2)();
  uVar4 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_32__);
  FUN_04477a3c();
  if (lVar3 != 0) {
    FUN_0447a8e4(lVar3,uVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_41__);
    plVar7 = *(long **)(unaff_x19 + 0xa8);
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_06018810;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*unaff_x22,1);
LAB_06018810:
      lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      uVar4 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_33__);
      FUN_04477a3c();
      if (lVar3 != 0) {
        FUN_0447a8e4(lVar3,uVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_39__);
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
        plVar7 = *(long **)(unaff_x19 + 0xb0);
        if (plVar7 == (long *)0x0) {
LAB_060189cc:
          *(undefined1 *)(unaff_x19 + 0xd8) = 0;
          return;
        }
        lVar3 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_060188c4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_02f421d0(plVar7,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__,0);
LAB_060188c4:
        lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        uVar4 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
        FUN_04477a3c();
        if (lVar3 != 0) {
          FUN_0447a8e4(lVar3,uVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_4__);
          plVar7 = *(long **)(unaff_x19 + 0xb0);
          if (plVar7 != (long *)0x0) {
            lVar3 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_06018974;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar1,1);
LAB_06018974:
            lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
            uVar4 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_31__);
            FUN_04477a3c();
            if (lVar3 != 0) {
              FUN_0447a8e4(lVar3,uVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_40__);
              goto LAB_060189cc;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


