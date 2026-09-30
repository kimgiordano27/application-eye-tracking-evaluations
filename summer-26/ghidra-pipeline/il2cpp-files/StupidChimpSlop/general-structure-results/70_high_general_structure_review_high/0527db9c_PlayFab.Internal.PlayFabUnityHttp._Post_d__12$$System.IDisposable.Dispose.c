/*
FUNCTION_NAME: PlayFab.Internal.PlayFabUnityHttp.<Post>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 0527db9c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void PlayFab_Internal_PlayFabUnityHttp_<Post>d__12__System_IDisposable_Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  
  puVar1 = PTR_DAT_06646730;
  lVar3 = FUN_0319da5c();
  puVar2 = UnityEngine_Rendering_ListPool<Type>_TypeInfo;
  if ((lVar3 == 0) || (uVar8 = *(ulong *)(lVar3 + 0x18), uVar8 == 0)) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05ea2aa8(*(undefined8 *)puVar2);
    FUN_05edd364();
    return;
  }
  if (1 < (int)uVar8) {
    plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,1);
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0527dd18;
    if ((*(long *)(lVar3 + 0x20) == 0) ||
       (lVar5 = thunk_FUN_05ee6e70(*(long *)(lVar3 + 0x20),0), plVar4 == (long *)0x0))
    goto LAB_0527dd14;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar7,0);
    }
    if ((int)plVar4[3] == 0) goto LAB_0527dd18;
    plVar4[4] = lVar5;
    thunk_FUN_02dc1ef0(plVar4 + 4,lVar5);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05ea312c();
    uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
  }
  if ((int)uVar8 != 0) {
    plVar4 = (long *)(unaff_x19 + 0x20);
    *plVar4 = *(long *)(lVar3 + 0x20);
    thunk_FUN_02dc1ef0(plVar4);
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x50), lVar3 != 0)) {
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(lVar3 + 0x10);
      thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x40));
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         ((lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x50), lVar3 != 0 &&
          (lVar3 = *(long *)(lVar3 + 0x1a0), lVar3 != 0)))) {
        *(float *)(unaff_x19 + 0x48) = (float)*(int *)(lVar3 + 0x60);
        return;
      }
    }
LAB_0527dd14:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
LAB_0527dd18:
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


