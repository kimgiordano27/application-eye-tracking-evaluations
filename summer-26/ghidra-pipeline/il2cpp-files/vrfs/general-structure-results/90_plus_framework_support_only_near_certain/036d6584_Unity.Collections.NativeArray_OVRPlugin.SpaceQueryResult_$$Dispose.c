/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 036d6584
PROGRAM: vrfs-libil2cpp.so
SCORE: 111
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if ((DAT_07239921 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e34bf8);
    thunk_FUN_0159f088(PTR_DAT_06dd0a58);
    thunk_FUN_0159f088(PTR_DAT_06da1768);
    thunk_FUN_0159f088(PTR_DAT_06e00590);
    thunk_FUN_0159f088(PTR_DAT_06e08538);
    thunk_FUN_0159f088(PTR_DAT_06e36d08);
    thunk_FUN_0159f088(PTR_DAT_06da2888);
    DAT_07239921 = 1;
  }
  puVar2 = PTR_DAT_06e34bf8;
  if (param_2 == 0) goto LAB_036d683c;
  if (*(long *)(param_2 + 0x88) == 0) {
    if (param_4 == 0) goto LAB_036d683c;
LAB_036d66a8:
    plVar9 = (long *)FUN_036d8b4c(param_1,*(undefined8 *)(param_4 + 0x68));
    puVar2 = PTR_DAT_06da2888;
    if (plVar9 == (long *)0x0) {
      plVar9 = *(long **)(param_4 + 0x68);
      if (plVar9 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        FUN_01fbaf30(param_1,*(undefined8 *)puVar2,uVar4,param_4,0);
        return;
      }
      goto LAB_036d683c;
    }
  }
  else {
    if (param_4 == 0) goto LAB_036d683c;
    uVar8 = *(undefined8 *)(param_4 + 0x68);
    uVar4 = FUN_03fc4050(*(long *)(param_2 + 0x88),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar2);
    }
    uVar5 = FUN_047562e8(uVar8,uVar4,0);
    if ((uVar5 & 1) == 0) goto LAB_036d66a8;
    plVar9 = *(long **)(param_2 + 0x88);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06dd0a58 + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dd0a58))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar9);
      }
    }
    FUN_036cf930(param_1,plVar9);
  }
  *(undefined8 *)(param_2 + 0x60) = plVar9;
  thunk_FUN_01656ef8((undefined8 *)(param_2 + 0x60),plVar9);
  if (plVar9 == (long *)0x0) {
LAB_036d683c:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if ((*(byte *)(plVar9 + 0xe) >> 2 & 1) != 0) {
    FUN_01fbafc0(param_1,*(undefined8 *)PTR_DAT_06e08538,param_2,0);
  }
  puVar2 = PTR_DAT_06e00590;
  FUN_036d6848(param_1,plVar9,param_2,*(undefined8 *)(param_4 + 0x58),
               *(undefined8 *)(param_4 + 0x60),4);
  uVar4 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode
                    (param_1,*(undefined8 *)(param_4 + 0x50));
  puVar7 = (undefined8 *)(param_2 + 0xb8);
  *puVar7 = uVar4;
  uVar4 = thunk_FUN_01656ef8(puVar7,uVar4);
  iVar3 = FUN_036d7f44(uVar4,param_2,param_3,*puVar7);
  *(int *)(param_2 + 0x90) = iVar3;
  if (iVar3 == 3) {
    iVar3 = FUN_036f2cf8(plVar9,0);
    puVar7 = (undefined8 *)PTR_DAT_06e36d08;
    if (iVar3 == 3) goto LAB_036d6820;
  }
  else {
    if ((iVar3 != 1) || (lVar6 = FUN_03fc53ec(plVar9,0), lVar6 == 0)) goto LAB_036d6820;
    lVar6 = FUN_03fc53ec(plVar9,0);
    if ((lVar6 == 0) || (plVar9 = *(long **)(lVar6 + 0x80), plVar9 == (long *)0x0))
    goto LAB_036d683c;
    uVar5 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    puVar7 = (undefined8 *)PTR_DAT_06da1768;
    if ((uVar5 & 1) != 0) goto LAB_036d6820;
  }
  uVar4 = FUN_0474aec4(*puVar7,0);
  FUN_01fbaf30(param_1,*(undefined8 *)puVar2,uVar4,param_2,0);
LAB_036d6820:
  *(undefined4 *)(param_2 + 0x5c) = 4;
  return;
}


