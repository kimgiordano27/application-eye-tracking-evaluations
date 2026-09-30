/*
FUNCTION_NAME: FUN_03f7e0d4
ENTRY_POINT: 03f7e0d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_16;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03f7e748) */
/* WARNING: Removing unreachable block (ram,0x03f7e5ac) */
/* WARNING: Removing unreachable block (ram,0x03f7e6bc) */

void FUN_03f7e0d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined4 local_64;
  
  puVar2 = Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
  if ((DAT_0483b601 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_045816b0);
    thunk_FUN_01efb3a4(PTR_DAT_045816b8);
    thunk_FUN_01efb3a4(PTR_DAT_045816c0);
    thunk_FUN_01efb3a4(PTR_DAT_045816c8);
    thunk_FUN_01efb3a4(StringLiteral_3506);
    thunk_FUN_01efb3a4(PTR_DAT_045816d0);
    thunk_FUN_01efb3a4(PTR_DAT_045816d8);
    thunk_FUN_01efb3a4(PTR_DAT_045816e0);
    thunk_FUN_01efb3a4(StringLiteral_3509);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04581680);
    thunk_FUN_01efb3a4(PTR_DAT_04581688);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04581690);
    thunk_FUN_01efb3a4(PTR_DAT_04581698);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_RemoveFirst<ParameterInfo>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_045816e8);
    thunk_FUN_01efb3a4(PTR_DAT_045816f0);
    thunk_FUN_01efb3a4(PTR_DAT_045816f8);
    DAT_0483b601 = 1;
  }
  puVar3 = PTR_DAT_045816b0;
  lVar7 = *(long *)puVar2;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar7 = *(long *)puVar2;
  }
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  uVar8 = FUN_022e39c4(*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20),*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_045816f0;
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ea2c(*(undefined8 *)puVar3,0);
    return;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
  if (lVar7 != 0) {
    local_64 = *(undefined4 *)(lVar7 + 0x20);
    uVar9 = FUN_035683d0(&local_64,0);
    uVar9 = FUN_03405678(uVar9,*(undefined8 *)PTR_DAT_045816e8,0);
    lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar7 != 0) {
      FUN_02ee8778(&local_98,lVar7,*(undefined8 *)PTR_DAT_045816d0);
      puVar5 = PTR_DAT_045816c0;
      puVar4 = PTR_DAT_04581690;
      puVar1 = PTR_DAT_04581688;
      puVar3 = PTR_DAT_04581680;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      do {
        uVar8 = FUN_02c7a3f0(&local_80,*(undefined8 *)puVar5);
        plVar6 = local_70;
        if ((uVar8 & 1) == 0) {
          FUN_02c7a3ec(&local_80,*(undefined8 *)PTR_DAT_045816b8);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar9,0);
          return;
        }
        lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3509);
        FUN_02ee7c10(lVar7,*(undefined8 *)PTR_DAT_045816d8);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04581698) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03f7e388;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)PTR_DAT_04581698,0);
LAB_03f7e388:
        plVar11 = (long *)(*(code *)*puVar10)(plVar6,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03f7e3e8;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_03f7e3e8:
        plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar14 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03f7e448;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03f7e448:
          uVar8 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if ((uVar8 & 1) == 0) goto LAB_03f7e534;
          lVar14 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03f7e4a4;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_03f7e4a4:
          plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar14 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_03f7e508;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar4,1);
LAB_03f7e508:
          uVar8 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        } while ((uVar8 & 1) != 0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02ee8df4(lVar7,plVar12,*(undefined8 *)StringLiteral_3506);
LAB_03f7e534:
        if (plVar11 != (long *)0x0) {
          lVar14 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03f7e594;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01ecb238(plVar11,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                 ,0);
LAB_03f7e594:
          (*(code *)*puVar10)(plVar11,puVar10[1]);
        }
        if (*(int *)(*(long *)
                      Method_System_Dynamic_Utils_CollectionExtensions_RemoveFirst<ParameterInfo>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03f83d08(lVar7,0);
        uVar13 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_045816f8,plVar6,uVar13,0);
        uVar9 = FUN_03405678(uVar9,uVar13,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


