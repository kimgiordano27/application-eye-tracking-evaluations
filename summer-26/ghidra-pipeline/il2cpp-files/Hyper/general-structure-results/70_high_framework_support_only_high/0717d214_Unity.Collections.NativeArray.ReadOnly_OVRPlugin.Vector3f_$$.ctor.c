/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 0717d214
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>___ctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 uVar7;
  long unaff_x21;
  
  uVar2 = FUN_0a17cd28();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      uVar2 = FUN_0723c1d8();
      puVar1 = PTR_DAT_0ac44a00;
      if ((uVar2 & 1) == 0) {
        plVar3 = (long *)thunk_FUN_04983e64();
        if (plVar3 != (long *)0x0) {
          lVar5 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0717d3f0;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar1,1);
LAB_0717d3f0:
          (*(code *)*puVar4)(plVar3,puVar4[1]);
        }
        lVar5 = *(long *)(unaff_x21 + 0x28);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
        }
        if (*(long *)(unaff_x21 + 0x10) != 0) {
          FUN_0723be38();
          return;
        }
      }
      else {
        uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
        if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        plVar3 = (long *)FUN_08d895f0(uVar7,0);
        if (plVar3 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          puVar4 = (undefined8 *)PTR_DAT_0ac44a08;
          goto FUN_0717d334;
        }
      }
    }
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
    if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    plVar3 = (long *)FUN_08d895f0(uVar7,0);
    if (plVar3 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      puVar4 = (undefined8 *)PTR_DAT_0ac44a18;
FUN_0717d334:
      uVar7 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac44a10,uVar7,*puVar4,0);
      if (*(int *)(*(long *)PTR_DAT_0ac0a4a0 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac0a4a0);
      }
      FUN_0a137afc(uVar7,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


