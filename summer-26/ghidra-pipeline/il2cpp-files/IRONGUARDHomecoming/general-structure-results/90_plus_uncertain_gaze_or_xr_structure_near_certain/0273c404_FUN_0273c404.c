/*
FUNCTION_NAME: FUN_0273c404
ENTRY_POINT: 0273c404
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0273c898) */
/* WARNING: Removing unreachable block (ram,0x0273c884) */
/* WARNING: Removing unreachable block (ram,0x0273c8a0) */

void FUN_0273c404(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_048302a4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_048302a4 = 1;
  }
  puVar4 = Method_System_Configuration_ConfigurationElement_Reset__;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *param_3;
  iVar1 = *(int *)(*param_2 + 0x18);
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
        goto UnityEngine_UIElements_BaseField<Bounds>__ValidatedValue;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(param_3,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,
                        0xc);
UnityEngine_UIElements_BaseField<Bounds>__ValidatedValue:
  (*(code *)*puVar6)(param_3,(long)iVar1,puVar6[1]);
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_029da4a8(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x90))
  ;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = plVar7[3];
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_027406ec(&local_98,*param_2,*(undefined8 *)(lVar9 + 0xb8));
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_70 = local_88;
  while (uVar10 = FUN_02c74a2c(&local_80,
                               *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe0)),
        (uVar10 & 1) != 0) {
    uVar5 = FUN_02c74b34(&local_80,
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 200));
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xd8);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar5;
    }
    else {
      FUN_030ba904(lVar8,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  FUN_02c74a20(&local_80,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8));
  iVar1 = *(int *)(lVar8 + 0x18);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
    lVar9 = *(long *)(lVar11 + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
      lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
    }
    lVar9 = **(long **)(lVar9 + 0xb8);
    uVar10 = FUN_030ba614(lVar8,iVar1,*(undefined8 *)(lVar11 + 0xf8));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar10,uVar10 & 0xffffffff);
    }
    FUN_0271047c(lVar9,uVar10 & 0xffffffff,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x100));
  }
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0273c7dc;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_0273c7dc:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *param_3;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
        goto LAB_0273c844;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar4,0xd);
LAB_0273c844:
  (*(code *)*puVar6)(param_3,puVar6[1]);
  return;
}


