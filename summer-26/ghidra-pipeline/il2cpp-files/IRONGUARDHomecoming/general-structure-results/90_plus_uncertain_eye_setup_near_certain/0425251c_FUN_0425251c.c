/*
FUNCTION_NAME: FUN_0425251c
ENTRY_POINT: 0425251c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0425296c) */
/* WARNING: Removing unreachable block (ram,0x04252850) */
/* WARNING: Removing unreachable block (ram,0x04252898) */
/* WARNING: Removing unreachable block (ram,0x042528a4) */
/* WARNING: Removing unreachable block (ram,0x04252978) */
/* WARNING: Removing unreachable block (ram,0x042526b8) */
/* WARNING: Removing unreachable block (ram,0x04252964) */

bool FUN_0425251c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined8 uVar13;
  
  if ((DAT_048413cd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458b5d0);
    DAT_048413cd = 1;
  }
  puVar2 = PTR_DAT_0458b5d0;
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (param_1 == (long *)0x0) {
LAB_04252960:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar4 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  UnityEngine_UIElements_Vector4Field___ctor(iVar4 == 1,0);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_04252960;
  iVar4 = FUN_0409fc88(lVar5,0);
  if (iVar4 == 7) {
    uVar6 = FUN_0403cf50(0);
    uVar7 = FUN_0405cdfc(0);
    FUN_0403d654(0,0);
    FUN_0405ce24(0,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar2;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x50);
    uVar8 = FUN_035b51f0(uVar13,0,0);
    if ((uVar8 & 1) != 0) {
      FUN_04036e24(uVar13,0);
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar2;
    }
    (**(code **)(*param_1 + 0x2b8))
              (param_1,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),
               *(undefined8 *)(*param_1 + 0x2c0));
    uVar8 = FUN_035b51f0(uVar13,0,0);
    if ((uVar8 & 1) != 0) {
      FUN_04036ec0(uVar13,0);
    }
    iVar4 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    FUN_0403d654(uVar6,0);
    FUN_0405ce24(uVar7,0);
    return 0 < iVar4;
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  plVar9 = (long *)FUN_04253088(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10));
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar5);
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar4 = FUN_0409fc88(lVar5,0);
  if (iVar4 != 0xc) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar4 = FUN_0409fc88(lVar5,0);
    if (iVar4 != 8) {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar4 = FUN_0409fc88(lVar5,0);
      if (iVar4 != 0xe) {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar4 = FUN_0409fc88(lVar5,0);
        bVar3 = iVar4 == 0xd;
        goto LAB_042527c4;
      }
    }
  }
  bVar3 = true;
LAB_042527c4:
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x58);
  uVar8 = FUN_035b51f0(uVar6,0,0);
  if ((uVar8 & 1) != 0) {
    FUN_04036e24(uVar6,0);
  }
  uVar11 = 1;
  if (bVar3) {
    uVar11 = 2;
  }
  FUN_041f45fc(param_1,plVar9,uVar11,0);
  uVar8 = FUN_035b51f0(uVar6,0,0);
  if ((uVar8 & 1) != 0) {
    FUN_04036ec0(uVar6,0);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = FUN_041d3f88(plVar9,0);
  if ((uVar8 & 1) == 0) {
    bVar3 = false;
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0421dd10(lVar5,0x800,0);
    bVar3 = true;
  }
  lVar5 = *plVar9;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar10 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_04252904;
      }
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_04252904:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return bVar3;
}


