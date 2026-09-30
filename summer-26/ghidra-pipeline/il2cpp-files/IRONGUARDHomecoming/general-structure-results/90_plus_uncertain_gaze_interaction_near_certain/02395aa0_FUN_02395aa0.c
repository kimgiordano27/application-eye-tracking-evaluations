/*
FUNCTION_NAME: FUN_02395aa0
ENTRY_POINT: 02395aa0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02396010) */
/* WARNING: Removing unreachable block (ram,0x02395c64) */
/* WARNING: Removing unreachable block (ram,0x023960ac) */
/* WARNING: Removing unreachable block (ram,0x023960a4) */

void FUN_02395aa0(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                 undefined8 param_5,long param_6)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  long local_78;
  
  if (*(long *)(param_6 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<OVRHand>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Renderer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<SkinnedMeshRenderer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Slider>__);
    if (*(long *)(param_6 + 0x38) == 0) {
      FUN_01ecafa0(param_6);
    }
  }
  local_78 = 0;
  if (param_3 == (long *)0x0) {
LAB_02395b70:
    iVar16 = 0;
  }
  else {
    lVar6 = FUN_04224ea4(param_3,0);
    if (lVar6 == 0) {
      param_3 = (long *)0x0;
      goto LAB_02395b70;
    }
    iVar16 = 0;
    plVar7 = param_3;
    do {
      local_78 = plVar7[0x6f];
      iVar16 = iVar16 + 1;
      plVar7 = (long *)FUN_042319e8(&local_78,0);
    } while (plVar7 != (long *)0x0);
  }
  iVar15 = 0;
  plVar7 = param_4;
  plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  while (iVar3 = iVar16,
        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__ =
             (undefined *)plVar2,
        plVar4 = (long *)Method_UnityEngine_Component_GetComponentInChildren<Slider>__,
        plVar7 != (long *)0x0) {
    local_78 = plVar7[0x6f];
    iVar15 = iVar15 + 1;
    plVar7 = (long *)FUN_042319e8(&local_78,0);
    plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  }
  for (; Method_UnityEngine_Component_GetComponentInChildren<Slider>__ = (undefined *)plVar4,
      iVar15 < iVar16; iVar16 = iVar16 + -1) {
    plVar7 = (long *)FUN_032b9ee8(param_1,param_2,param_5,0,**(undefined8 **)(param_6 + 0x38));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar7,param_3,0);
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*param_3 + 0x198))(param_3,plVar7,*(undefined8 *)(*param_3 + 0x1a0));
    lVar6 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *plVar2) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02395c4c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*plVar2,0);
LAB_02395c4c:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (param_3 == (long *)0x0) goto LAB_023960a0;
    local_78 = param_3[0x6f];
    param_3 = (long *)FUN_042319e8(&local_78,0);
    iVar3 = iVar15;
    plVar4 = (long *)Method_UnityEngine_Component_GetComponentInChildren<Slider>__;
  }
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = FUN_0414dc14(iVar15,0);
  puVar5 = Method_UnityEngine_Component_GetComponentInChildren<OVRHand>__;
  if (iVar3 < iVar15) {
    if (lVar6 == 0) goto LAB_023960a0;
    do {
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar13 = *(long *)puVar5;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_023960a0;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = param_4;
        thunk_FUN_01f51358(puVar8,param_4);
      }
      else {
        FUN_030f2bb4(lVar6,param_4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      if (param_4 == (long *)0x0) goto LAB_023960a0;
      local_78 = param_4[0x6f];
      iVar15 = iVar15 + -1;
      param_4 = (long *)FUN_042319e8(&local_78,0);
    } while (iVar3 < iVar15);
  }
  if (param_3 == param_4) {
    if (lVar6 == 0) {
LAB_023960a0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    do {
      plVar7 = (long *)FUN_032b9ee8(param_1,param_2,param_5,0,**(undefined8 **)(param_6 + 0x38));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar7,param_3,0);
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*param_3 + 0x198))(param_3,plVar7,*(undefined8 *)(*param_3 + 0x1a0));
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *plVar2) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02395e38;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*plVar2,0);
LAB_02395e38:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar6 == 0) goto LAB_023960a0;
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar13 = *(long *)puVar5;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_023960a0;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = param_4;
        thunk_FUN_01f51358(puVar8,param_4);
      }
      else {
        FUN_030f2bb4(lVar6,param_4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      if (param_3 == (long *)0x0) goto LAB_023960a0;
      local_78 = param_3[0x6f];
      param_3 = (long *)FUN_042319e8(&local_78,0);
      if (param_4 == (long *)0x0) goto LAB_023960a0;
      local_78 = param_4[0x6f];
      param_4 = (long *)FUN_042319e8(&local_78,0);
    } while (param_3 != param_4);
  }
  puVar5 = Method_UnityEngine_Component_GetComponentInChildren<SkinnedMeshRenderer>__;
  iVar16 = *(int *)(lVar6 + 0x18);
  do {
    iVar16 = iVar16 + -1;
    if (iVar16 < 0) {
      if (*(int *)(*plVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0414dcf4(lVar6,0);
      return;
    }
    plVar7 = (long *)FUN_032b9ee8(param_1,param_2,param_5,0,
                                  *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x20));
    uVar9 = FUN_030f28e4(lVar6,iVar16,*(undefined8 *)puVar5);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar9,uVar9);
    }
    FUN_041d4560(plVar7,uVar9,0);
    plVar10 = (long *)FUN_030f28e4(lVar6,iVar16,*(undefined8 *)puVar5);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar10 + 0x198))(plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x1a0));
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *plVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02395ff8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*plVar2,0);
LAB_02395ff8:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  } while( true );
}


