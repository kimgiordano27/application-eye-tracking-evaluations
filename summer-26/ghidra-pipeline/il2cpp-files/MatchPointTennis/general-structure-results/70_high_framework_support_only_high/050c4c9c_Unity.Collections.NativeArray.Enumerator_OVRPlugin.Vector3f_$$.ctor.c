/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 050c4c9c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050c4df4) */
/* WARNING: Removing unreachable block (ram,0x050c4f18) */

void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>___ctor
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_04447ba8(PTR_DAT_09f27f18);
    FUN_04447ba8(PTR_DAT_09f27988);
    FUN_04447ba8(PTR_DAT_09f1fa18);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_04482014(param_4);
    }
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  if (param_2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar6 = thunk_FUN_0448520c();
    uVar7 = thunk_FUN_044adef4(PTR_DAT_09f27f20);
    FUN_07996cc8(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar6,param_4);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1fa18 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_04fe0520(param_2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
  if (0 < *(int *)(param_2 + 0x18)) {
    FUN_05bae95c(&local_68,param_2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18));
    puVar1 = PTR_DAT_09f27988;
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
    do {
      do {
        uVar4 = FUN_0768d020(&local_50,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x58));
        plVar2 = local_40;
        if ((uVar4 & 1) == 0) goto LAB_050c4eac;
        if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar9 = *local_40;
        lVar8 = *(long *)puVar1;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar8) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_050c4dcc;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_044822ac(local_40,lVar8,0);
LAB_050c4dcc:
        uVar6 = (*(code *)*puVar5)(plVar2,puVar5[1]);
        iVar3 = FUN_078b1e74(uVar6,param_3,1,0);
      } while (iVar3 != 0);
      lVar9 = *plVar2;
      lVar8 = *(long *)puVar1;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_050c4e48;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar2,lVar8,1);
LAB_050c4e48:
      lVar8 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    } while (lVar8 == 0);
    lVar9 = *(long *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar6 = FUN_07a4ce38(uVar6,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar6,uVar6);
    }
    FUN_07442978(lVar9,uVar6,lVar8,*(undefined8 *)PTR_DAT_09f27f18);
LAB_050c4eac:
    FUN_0768d01c(&local_50,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x60));
  }
  return;
}


