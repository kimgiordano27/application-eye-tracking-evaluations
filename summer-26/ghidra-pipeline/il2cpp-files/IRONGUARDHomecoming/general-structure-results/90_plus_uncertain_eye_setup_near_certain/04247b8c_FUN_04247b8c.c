/*
FUNCTION_NAME: FUN_04247b8c
ENTRY_POINT: 04247b8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04247f9c) */

void FUN_04247b8c(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_0484134c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a2e8);
    thunk_FUN_01efb3a4(PTR_DAT_0458dc90);
    thunk_FUN_01efb3a4(PTR_DAT_0458dcd8);
    thunk_FUN_01efb3a4(PTR_DAT_0458dc48);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_0484134c = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if ((param_4 == 0) || (*(long *)(param_3 + 0x48) == 0)) {
LAB_04247fa4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  fVar13 = *(float *)(param_4 + 0xc0);
  fVar14 = *(float *)(param_4 + 0xc4);
  uVar12 = *(undefined4 *)(param_4 + 200);
  fVar11 = (float)FUN_042260f4(*(long *)(param_3 + 0x48),0);
  if (*(long *)(param_3 + 0x48) == 0) goto LAB_04247fa4;
  FUN_042260f4(*(long *)(param_3 + 0x48),0);
  uVar1 = FUN_040ff91c(fVar13 - fVar11,fVar14 - param_2,uVar12,param_3,1,0);
  if ((int)uVar1 < 0) goto LAB_04247d9c;
  lVar2 = FUN_040fe968(param_3,0);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x40), lVar2 == 0)) goto LAB_04247fa4;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar2 = lVar2 + (ulong)uVar1 * 0x30;
  uStack_78 = *(undefined8 *)(lVar2 + 0x28);
  local_80 = *(undefined8 *)(lVar2 + 0x20);
  uStack_68 = *(undefined8 *)(lVar2 + 0x38);
  local_70 = *(undefined8 *)(lVar2 + 0x30);
  uStack_58 = *(undefined8 *)(lVar2 + 0x48);
  local_60 = *(undefined8 *)(lVar2 + 0x40);
  if ((int)local_80 == 0x26afb9) {
LAB_04247d9c:
    if (*(int *)(param_3 + 0x54) == -1) {
      return;
    }
    *(undefined4 *)(param_3 + 0x54) = 0xffffffff;
    uVar3 = **(undefined8 **)
              (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_0458dcd8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_041936e0(param_4,uVar3,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar5,*(undefined8 *)(param_3 + 0x48),0);
    plVar6 = *(long **)(param_3 + 0x48);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x198))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x1a0));
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    lVar2 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar2) goto LAB_04247e68;
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
  }
  else {
    if (*(int *)(param_3 + 0x54) == -1) {
      *(int *)(param_3 + 0x54) = (int)local_80;
      uVar3 = FUN_040dc63c(&local_80,0);
      uVar4 = FUN_040fe968(param_3,0);
      uVar4 = FUN_040dc530(&local_80,uVar4,0);
      if (*(int *)(*(long *)PTR_DAT_0458dc48 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)PTR_DAT_0458dc48);
      }
      plVar5 = (long *)FUN_041930f8(param_4,uVar3,uVar4,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar5,*(undefined8 *)(param_3 + 0x48),0);
      plVar6 = *(long **)(param_3 + 0x48);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar6 + 0x198))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x1a0));
      lVar2 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04247f8c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_04247f8c:
      (*(code *)*puVar7)(plVar5,puVar7[1]);
      return;
    }
    if (*(int *)(param_3 + 0x54) != (int)local_80) goto LAB_04247d9c;
    uVar3 = FUN_040dc63c(&local_80,0);
    uVar4 = FUN_040fe968(param_3,0);
    uVar4 = FUN_040dc530(&local_80,uVar4,0);
    if (*(int *)(*(long *)PTR_DAT_0458dc90 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)PTR_DAT_0458dc90);
    }
    plVar5 = (long *)FUN_041933fc(param_4,uVar3,uVar4,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar5,*(undefined8 *)(param_3 + 0x48),0);
    plVar6 = *(long **)(param_3 + 0x48);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x198))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x1a0));
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    lVar2 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar2) goto LAB_04247e68;
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar5,lVar2,0);
LAB_04247e74:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
  return;
LAB_04247e68:
  puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
  goto LAB_04247e74;
}


