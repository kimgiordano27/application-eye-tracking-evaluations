/*
FUNCTION_NAME: DG.Tweening.TweenCallback<Vector3>$$BeginInvoke
ENTRY_POINT: 026d6efc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long DG_Tweening_TweenCallback<Vector3>__BeginInvoke(int param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_3__;
  if ((DAT_04830186 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_3__);
    DAT_04830186 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_048301a4 == '\0') {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_3__);
    DAT_048301a4 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 4) == '\0') {
    lVar3 = 0;
  }
  else {
    if (param_1 < 1) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_4__
                                );
      uVar4 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_5__
                                );
      FUN_034efd98(uVar7,uVar8,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,param_2);
    }
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xe8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xe8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xe8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xe8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(param_2 + 0x20);
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0xe0) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      lVar3 = thunk_FUN_01f117cc();
      lVar6 = *(long *)(param_2 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar5 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
        uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
        lVar5 = *(long *)(param_2 + 0x20);
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xf0);
      if ((uVar1 & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      FUN_02e631d0(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xf8));
      lVar5 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xe8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar3;
      lVar5 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xe8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      thunk_FUN_01f51358(*(long *)(lVar5 + 0xb8) + 8,lVar3);
    }
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar3 = FUN_02e931e8(lVar3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x100));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(int *)(lVar3 + 0x24) = param_1;
  }
  return lVar3;
}


