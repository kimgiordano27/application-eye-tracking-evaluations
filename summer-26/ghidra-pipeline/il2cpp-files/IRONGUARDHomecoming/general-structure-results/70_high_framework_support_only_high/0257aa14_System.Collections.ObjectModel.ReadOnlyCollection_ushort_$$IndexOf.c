/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<ushort>$$IndexOf
ENTRY_POINT: 0257aa14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_ObjectModel_ReadOnlyCollection<ushort>__IndexOf(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long in_x9;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  size_t unaff_x19;
  void *unaff_x21;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  memset((void *)(param_1 - in_x9),0,unaff_x19);
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x18;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x10;
  if (*(int *)(unaff_x23 + 0x10) == 1) goto LAB_0257ab28;
  uVar1 = 0;
  if (*(int *)(unaff_x23 + 0x10) == 0) {
    *(undefined4 *)(unaff_x23 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x23 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0);
    }
    *(undefined8 *)(unaff_x23 + 0x50) = *(undefined8 *)(*(long *)(unaff_x23 + 0x48) + 0x10);
    thunk_FUN_01f51358((undefined8 *)(unaff_x23 + 0x50));
    lVar2 = *(long *)(unaff_x29 + -0x10);
    uVar5 = 0;
    *(undefined4 *)(lVar2 + 0x58) = 0;
    do {
      puVar3 = (undefined8 *)(lVar2 + 0x50);
      plVar7 = (long *)*puVar3;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((int)*(uint *)(plVar7 + 3) <= (int)uVar5) {
        *puVar3 = 0;
        thunk_FUN_01f51358(puVar3,0);
        uVar1 = 0;
        break;
      }
      if (*(uint *)(plVar7 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy(unaff_x21,
             (void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar5 + 0x20),
             unaff_x19);
      memcpy((void *)(param_1 - in_x9),unaff_x21,unaff_x19);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
      lVar2 = *(long *)(lVar4 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
      }
      FUN_01f09244(lVar2,*(undefined8 *)(lVar4 + 0x28));
      *(undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x60) = *(undefined8 *)(unaff_x29 + -0xa0);
      thunk_FUN_01f51358();
      unaff_x23 = *(long *)(unaff_x29 + -0x10);
LAB_0257ab28:
      plVar7 = *(long **)(unaff_x23 + 0x60);
      *(undefined4 *)(unaff_x23 + 0x10) = 0xfffffffd;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar2 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0257ab8c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_0257ab8c:
      uVar6 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if ((uVar6 & 1) != 0) {
        plVar7 = *(long **)(*(long *)(unaff_x29 + -0x10) + 0x60);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar2 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 == 0) goto LAB_0257ac34;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_0257ac1c;
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x10));
      puVar3 = (undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x60);
      *puVar3 = 0;
      thunk_FUN_01f51358(puVar3,0);
      lVar2 = *(long *)(unaff_x29 + -0x10);
      uVar5 = *(int *)(lVar2 + 0x58) + 1;
      *(uint *)(lVar2 + 0x58) = uVar5;
    } while( true );
  }
  goto LAB_0257ac94;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_0257ac1c:
    if (*(long *)(piVar8 + -2) == *(long *)Method_System_DateTime_IsLeapYear__) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto 
      System_Collections_ObjectModel_ReadOnlyCollection<ushort>__System_Collections_ICollection_get_SyncRoot
      ;
    }
  }
LAB_0257ac34:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)Method_System_DateTime_IsLeapYear__,0);

  System_Collections_ObjectModel_ReadOnlyCollection<ushort>__System_Collections_ICollection_get_SyncRoot
  :
  (*(code *)*puVar3)(unaff_x29 + -0xa0,plVar7,puVar3[1]);
  uVar10 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar9 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar12 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar14 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x80);
  lVar2 = *(long *)(unaff_x29 + -0x10);
  uVar1 = 1;
  *(undefined8 *)(unaff_x29 + -0x48) = uVar10;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar9;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar12;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar11;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar14;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar13;
  *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x70);
  *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(unaff_x29 + -0x70);
  *(undefined8 *)(lVar2 + 0x3c) = uVar14;
  *(undefined8 *)(lVar2 + 0x34) = uVar13;
  *(undefined8 *)(lVar2 + 0x2c) = uVar12;
  *(undefined8 *)(lVar2 + 0x24) = uVar11;
  *(undefined8 *)(lVar2 + 0x1c) = uVar10;
  *(undefined8 *)(lVar2 + 0x14) = uVar9;
  *(undefined4 *)(lVar2 + 0x10) = 1;
LAB_0257ac94:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


