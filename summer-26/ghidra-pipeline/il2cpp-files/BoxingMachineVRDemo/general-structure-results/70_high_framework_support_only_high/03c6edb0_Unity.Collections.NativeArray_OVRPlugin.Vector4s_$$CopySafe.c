/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 03c6edb0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6ef8c) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe
               (long param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  char cStack000000000000000c;
  
  if ((DAT_06b74c2e & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06769b70);
    DAT_06b74c2e = 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    cStack000000000000000c = '\0';
    FUN_0506ac34(param_1,&stack0x0000000c,0);
    puVar1 = PTR_DAT_06769b70;
    iVar6 = *(int *)(param_1 + 0x18);
    uVar7 = 10000;
    if (param_4 != 2) {
      uVar7 = 60000;
    }
    if ((0 < iVar6 && param_2 < *(uint *)(param_1 + 0x1c)) ||
       (uVar7 < param_2 - *(uint *)(param_1 + 0x1c))) {
      lVar3 = *(long *)PTR_DAT_06769b70;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar1;
        iVar6 = *(int *)(param_1 + 0x18);
      }
      if (0 < iVar6) {
        iVar9 = 1;
        if (param_4 == 1) {
          iVar9 = 2;
        }
        iVar10 = 8;
        if (0x4000 < param_5) {
          iVar10 = 9;
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
        if (param_4 == 2) {
          iVar9 = iVar10;
        }
        iVar9 = iVar9 + 1;
        do {
          iVar9 = iVar9 + -1;
          if (iVar9 < 1) {
            if (*(uint *)(param_1 + 0x1c) < 0xffffc567) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) + 15000;
            }
            break;
          }
          lVar8 = *(long *)(param_1 + 0x10);
          uVar7 = iVar6 - 1;
          *(uint *)(param_1 + 0x18) = uVar7;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          puVar4 = (undefined8 *)(lVar8 + (ulong)uVar7 * 8 + 0x20);
          plVar11 = (long *)*puVar4;
          *puVar4 = 0;
          thunk_FUN_02dd37b4(puVar4,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar5 = FUN_04fa51f0(lVar3,0);
          if ((uVar5 & 1) != 0) {
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar2 = (**(code **)(*plVar11 + 0x158))(plVar11,*(undefined8 *)(*plVar11 + 0x160));
            FUN_04fb6e20(lVar3,uVar2,(int)plVar11[3],param_3,0);
          }
          iVar6 = *(int *)(param_1 + 0x18);
        } while (0 < iVar6);
      }
    }
    if (cStack000000000000000c != '\0') {
      thunk_FUN_02d6ec70(param_1,0);
    }
  }
  return;
}


