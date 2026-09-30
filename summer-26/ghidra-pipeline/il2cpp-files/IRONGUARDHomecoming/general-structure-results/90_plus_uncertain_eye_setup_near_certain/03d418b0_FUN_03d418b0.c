/*
FUNCTION_NAME: FUN_03d418b0
ENTRY_POINT: 03d418b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 135
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03d41de4) */

void FUN_03d418b0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  
  if ((DAT_0483a15a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime_System_IConvertible_ToDecimal__);
    thunk_FUN_01efb3a4(Method_System_DateTime_System_IConvertible_ToInt32__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Range__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Sum__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04574850);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04574858);
    thunk_FUN_01efb3a4(PTR_DAT_04574860);
    thunk_FUN_01efb3a4(Method_UI_DamageTextsController_<Start>b__15_0__);
    thunk_FUN_01efb3a4(Method_System_DateTime_System_IConvertible_ToUInt32__);
    DAT_0483a15a = 1;
  }
  if (param_1 == 0) {
    return;
  }
  plVar7 = (long *)thunk_FUN_01ecaf38(param_1,0);
  puVar3 = PTR_DAT_04574860;
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x6d8))(plVar7,0x34,*(undefined8 *)(*plVar7 + 0x6e0));
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar12);
      lVar12 = *(long *)puVar3;
    }
    puVar4 = Method_System_DateTime_System_IConvertible_ToDecimal__;
    lVar15 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar15 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar12);
        lVar12 = *(long *)puVar3;
      }
      uVar16 = **(undefined8 **)(lVar12 + 0xb8);
      lVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_System_DateTime_System_IConvertible_ToInt32__);
      FUN_02e6c3f4(lVar15,uVar16,*(undefined8 *)PTR_DAT_04574858,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar7 = lVar15;
      thunk_FUN_01f51358(plVar7,lVar15);
    }
    plVar7 = (long *)FUN_022fbdd0(uVar8,lVar15,*(undefined8 *)puVar4);
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)Method_System_Linq_Enumerable_Range__) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03d41aa0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)Method_System_Linq_Enumerable_Range__,0);
LAB_03d41aa0:
      plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
      puVar6 = Method_System_Linq_Enumerable_Sum__;
      puVar5 = Method_UI_DamageTextsController_<Start>b__15_0__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03d41b20;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_03d41b20:
        uVar13 = (*(code *)*puVar9)(plVar7,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_03d41d74;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03d41d5c;
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03d41b7c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar6,0);
LAB_03d41b7c:
        plVar10 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar11 = (long *)(**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
        uVar8 = *(undefined8 *)puVar5;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_03579868(uVar8,0);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar8,uVar8);
        }
        uVar13 = (**(code **)(*plVar11 + 0x298))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x2a0));
        if ((uVar13 & 1) == 0) {
          lVar12 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = FUN_035841e4(lVar12,0);
          if ((uVar13 & 1) == 0) {
            lVar12 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar13 = FUN_035846d4(lVar12,0);
            if ((uVar13 & 1) != 0) {
              uVar8 = (**(code **)(*plVar10 + 0x2e8))
                                (plVar10,param_1,*(undefined8 *)(*plVar10 + 0x2f0));
              FUN_03d418b0(uVar8,param_2,param_3);
            }
          }
        }
        else if ((param_3 == 0) ||
                (uVar13 = (**(code **)(param_3 + 0x18))
                                    (*(undefined8 *)(param_3 + 0x40),plVar10,
                                     *(undefined8 *)(param_3 + 0x28)), (uVar13 & 1) != 0)) {
          plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                      (plVar10,param_1,*(undefined8 *)(*plVar10 + 0x2f0));
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)Method_System_DateTime_System_IConvertible_ToUInt32__ + 0x130
                             );
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Method_System_DateTime_System_IConvertible_ToUInt32__)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar10);
            }
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *(long *)(param_2 + 0x10);
          lVar15 = *(long *)PTR_DAT_04574850;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = *(uint *)(param_2 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar2 + 1;
            plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
            *plVar11 = (long)plVar10;
            thunk_FUN_01f51358(plVar11,plVar10);
          }
          else {
            FUN_030f2bb4(param_2,plVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03d41d5c:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03d41d90;
    }
  }
LAB_03d41d74:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03d41d90:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
  return;
}


