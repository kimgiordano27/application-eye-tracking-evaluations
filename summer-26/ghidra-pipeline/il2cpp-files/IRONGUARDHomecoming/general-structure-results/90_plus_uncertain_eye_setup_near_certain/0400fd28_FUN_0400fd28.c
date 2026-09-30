/*
FUNCTION_NAME: FUN_0400fd28
ENTRY_POINT: 0400fd28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x040100cc) */

void FUN_0400fd28(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((DAT_0483bc78 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045858d0);
    thunk_FUN_01efb3a4(PTR_DAT_045858d8);
    thunk_FUN_01efb3a4(PTR_DAT_04585800);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045858e0);
    thunk_FUN_01efb3a4(PTR_DAT_045858e8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_045856d8);
    thunk_FUN_01efb3a4(PTR_DAT_045858f0);
    thunk_FUN_01efb3a4(PTR_DAT_045858f8);
    DAT_0483bc78 = 1;
  }
  if (((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (lVar5 = FUN_02338a14(*(long *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_04585800),
     puVar1 = PTR_DAT_045858f8, lVar5 != 0)) {
    *(undefined1 *)(lVar5 + 0x38) = 1;
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_045858d0;
    lVar12 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar13 = **(undefined8 **)(lVar5 + 0xb8);
      lVar12 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045858d8);
      FUN_02e6c0a0(lVar12,uVar13,*(undefined8 *)PTR_DAT_045858f0,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar6 = lVar12;
      thunk_FUN_01f51358(plVar6,lVar12);
    }
    plVar6 = (long *)FUN_0230b6f4(uVar11,lVar12,*(undefined8 *)puVar2);
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_045858e0) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0400feec;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)PTR_DAT_045858e0,0);
LAB_0400feec:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar4 = PTR_DAT_045858e8;
      puVar3 = PTR_DAT_045856d8;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0400ff6c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_0400ff6c:
        uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 == 0) goto UnityEngine_UI_Dropdown_<>c__DisplayClass63_0__<Show>b__0;
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_04010064;
        }
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0400ffc8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_0400ffc8:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
              goto LAB_0401002c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,9);
LAB_0401002c:
        (*(code *)*puVar7)(plVar8,param_2,0,puVar7[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_04010064:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04010098;
    }
  }
UnityEngine_UI_Dropdown_<>c__DisplayClass63_0__<Show>b__0:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_04010098:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


