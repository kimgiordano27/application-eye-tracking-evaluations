/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<ushort>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0257aba8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_ObjectModel_ReadOnlyCollection<ushort>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  size_t unaff_x19;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  do {
    (*(code *)**(undefined8 **)(param_1 + 8))(param_2);
    puVar2 = (undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x60);
    *puVar2 = 0;
    thunk_FUN_01f51358(puVar2,0);
    lVar5 = *(long *)(unaff_x29 + -0x10);
    uVar1 = *(int *)(lVar5 + 0x58) + 1;
    *(uint *)(lVar5 + 0x58) = uVar1;
    puVar2 = (undefined8 *)(lVar5 + 0x50);
    plVar7 = (long *)*puVar2;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((int)*(uint *)(plVar7 + 3) <= (int)uVar1) {
      *puVar2 = 0;
      thunk_FUN_01f51358(puVar2,0);
      uVar3 = 0;
      goto LAB_0257ac94;
    }
    if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    memcpy(unaff_x21,
           (void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20),
           unaff_x19);
    memcpy(unaff_x22,unaff_x21,unaff_x19);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
    }
    FUN_01f09244(lVar5,*(undefined8 *)(lVar4 + 0x28));
    *(undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x60) = *(undefined8 *)(unaff_x29 + -0xa0);
    thunk_FUN_01f51358();
    plVar7 = *(long **)(*(long *)(unaff_x29 + -0x10) + 0x60);
    *(undefined4 *)(*(long *)(unaff_x29 + -0x10) + 0x10) = 0xfffffffd;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0257ab8c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0257ab8c:
    uVar6 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      plVar7 = *(long **)(*(long *)(unaff_x29 + -0x10) + 0x60);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0257ac34;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    param_2 = *(undefined8 *)(unaff_x29 + -0x10);
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)Method_System_DateTime_IsLeapYear__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto 
      System_Collections_ObjectModel_ReadOnlyCollection<ushort>__System_Collections_ICollection_get_SyncRoot
      ;
    }
  }
LAB_0257ac34:
  puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)Method_System_DateTime_IsLeapYear__,0);

  System_Collections_ObjectModel_ReadOnlyCollection<ushort>__System_Collections_ICollection_get_SyncRoot
  :
  (*(code *)*puVar2)(unaff_x29 + -0xa0,plVar7,puVar2[1]);
  uVar10 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar9 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar12 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar14 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x80);
  lVar5 = *(long *)(unaff_x29 + -0x10);
  uVar3 = 1;
  *(undefined8 *)(unaff_x29 + -0x48) = uVar10;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar9;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar12;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar11;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar14;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar13;
  *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x70);
  *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(unaff_x29 + -0x70);
  *(undefined8 *)(lVar5 + 0x3c) = uVar14;
  *(undefined8 *)(lVar5 + 0x34) = uVar13;
  *(undefined8 *)(lVar5 + 0x2c) = uVar12;
  *(undefined8 *)(lVar5 + 0x24) = uVar11;
  *(undefined8 *)(lVar5 + 0x1c) = uVar10;
  *(undefined8 *)(lVar5 + 0x14) = uVar9;
  *(undefined4 *)(lVar5 + 0x10) = 1;
LAB_0257ac94:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


