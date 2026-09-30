/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0717d198
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  FUN_04947ee4(PTR_DAT_0ac44a10);
  FUN_04947ee4(PTR_DAT_0ac44a18);
  FUN_04947ee4(PTR_DAT_0ac44a20);
  *(undefined1 *)(unaff_x22 + 0x83d) = 1;
  if (unaff_x20 == (long *)0x0) {
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
    if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    plVar4 = (long *)FUN_08d895f0(uVar7,0);
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      puVar5 = (undefined8 *)PTR_DAT_0ac44a20;
FUN_0717d334:
      uVar7 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac44a10,uVar7,*puVar5,0);
      if (*(int *)(*(long *)PTR_DAT_0ac0a4a0 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac0a4a0);
      }
      FUN_0a137afc(uVar7,0);
      return;
    }
  }
  else {
    lVar2 = *(long *)PTR_DAT_0ac09788;
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2))
    {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar3 = FUN_0a17cd28();
      if ((uVar3 & 1) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
        if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        plVar4 = (long *)FUN_08d895f0(uVar7,0);
        if (plVar4 == (long *)0x0) goto LAB_0717d440;
        uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        puVar5 = (undefined8 *)PTR_DAT_0ac44a18;
        goto FUN_0717d334;
      }
    }
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      uVar3 = FUN_0723c1d8();
      puVar1 = PTR_DAT_0ac44a00;
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_04983e64();
        if (plVar4 != (long *)0x0) {
          lVar2 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0717d3f0;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(plVar4,*(long *)puVar1,1);
LAB_0717d3f0:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
        }
        lVar2 = *(long *)(unaff_x21 + 0x28);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
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
        plVar4 = (long *)FUN_08d895f0(uVar7,0);
        if (plVar4 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
          puVar5 = (undefined8 *)PTR_DAT_0ac44a08;
          goto FUN_0717d334;
        }
      }
    }
  }
LAB_0717d440:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


