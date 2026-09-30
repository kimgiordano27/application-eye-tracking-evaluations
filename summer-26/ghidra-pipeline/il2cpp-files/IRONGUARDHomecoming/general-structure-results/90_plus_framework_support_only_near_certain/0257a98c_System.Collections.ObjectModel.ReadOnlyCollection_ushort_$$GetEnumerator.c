/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<ushort>$$GetEnumerator
ENTRY_POINT: 0257a98c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Collections_ObjectModel_ReadOnlyCollection<ushort>__GetEnumerator
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x19;
  ulong uVar11;
  long unaff_x20;
  void *__dest;
  void *__s;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  bVar1 = *(byte *)(unaff_x20 + 0xe23);
  *(undefined8 *)(unaff_x29 + -0x18) = param_3;
  *(long *)(unaff_x29 + -0x10) = param_2;
  if ((bVar1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime_IsLeapYear__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    *(undefined1 *)(unaff_x20 + 0xe23) = 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  uVar7 = *(uint *)(lVar2 + 0xfc);
  uVar11 = (ulong)uVar7;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
    uVar7 = *(uint *)(lVar2 + 0xfc);
  }
  lVar2 = (long)&stack0x00000000 - ((ulong)(uVar7 + 0x10) + 0xf & 0x1fffffff0);
  uVar8 = uVar11 + 0xf & 0x1fffffff0;
  __dest = (void *)(lVar2 - uVar8);
  __s = (void *)((long)__dest - uVar8);
  memset(__s,0,uVar11);
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x18;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x10;
  if (*(int *)(param_2 + 0x10) == 1) goto LAB_0257ab28;
  uVar3 = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0);
    }
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(*(long *)(param_2 + 0x48) + 0x10);
    thunk_FUN_01f51358((undefined8 *)(param_2 + 0x50));
    lVar4 = *(long *)(unaff_x29 + -0x10);
    uVar7 = 0;
    *(undefined4 *)(lVar4 + 0x58) = 0;
    do {
      puVar5 = (undefined8 *)(lVar4 + 0x50);
      plVar9 = (long *)*puVar5;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((int)*(uint *)(plVar9 + 3) <= (int)uVar7) {
        *puVar5 = 0;
        thunk_FUN_01f51358(puVar5,0);
        uVar3 = 0;
        break;
      }
      if (*(uint *)(plVar9 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy(__dest,(void *)((long)plVar9 +
                            (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar7 + 0x20),uVar11);
      memcpy(__s,__dest,uVar11);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
      }
      FUN_01f09244(lVar4,*(undefined8 *)(lVar6 + 0x28),lVar2,__s,0,unaff_x29 + -0xa0);
      *(undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x60) = *(undefined8 *)(unaff_x29 + -0xa0);
      thunk_FUN_01f51358();
      param_2 = *(long *)(unaff_x29 + -0x10);
LAB_0257ab28:
      plVar9 = *(long **)(param_2 + 0x60);
      *(undefined4 *)(param_2 + 0x10) = 0xfffffffd;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0257ab8c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_0257ab8c:
      uVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if ((uVar8 & 1) != 0) {
        plVar9 = *(long **)(*(long *)(unaff_x29 + -0x10) + 0x60);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar2 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar11 == 0) goto LAB_0257ac34;
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_0257ac1c;
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x10));
      puVar5 = (undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x60);
      *puVar5 = 0;
      thunk_FUN_01f51358(puVar5,0);
      lVar4 = *(long *)(unaff_x29 + -0x10);
      uVar7 = *(int *)(lVar4 + 0x58) + 1;
      *(uint *)(lVar4 + 0x58) = uVar7;
    } while( true );
  }
  goto LAB_0257ac94;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar10 = piVar10 + 4;
    if (uVar11 == 0) break;
LAB_0257ac1c:
    if (*(long *)(piVar10 + -2) == *(long *)Method_System_DateTime_IsLeapYear__) {
      puVar5 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
      goto 
      System_Collections_ObjectModel_ReadOnlyCollection<ushort>__System_Collections_ICollection_get_SyncRoot
      ;
    }
  }
LAB_0257ac34:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)Method_System_DateTime_IsLeapYear__,0);

  System_Collections_ObjectModel_ReadOnlyCollection<ushort>__System_Collections_ICollection_get_SyncRoot
  :
  (*(code *)*puVar5)(unaff_x29 + -0xa0,plVar9,puVar5[1]);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x98);
  uVar12 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar15 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar14 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar17 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar16 = *(undefined8 *)(unaff_x29 + -0x80);
  lVar2 = *(long *)(unaff_x29 + -0x10);
  uVar3 = 1;
  *(undefined8 *)(unaff_x29 + -0x48) = uVar13;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar12;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar15;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar14;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar17;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar16;
  *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x70);
  *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(unaff_x29 + -0x70);
  *(undefined8 *)(lVar2 + 0x3c) = uVar17;
  *(undefined8 *)(lVar2 + 0x34) = uVar16;
  *(undefined8 *)(lVar2 + 0x2c) = uVar15;
  *(undefined8 *)(lVar2 + 0x24) = uVar14;
  *(undefined8 *)(lVar2 + 0x1c) = uVar13;
  *(undefined8 *)(lVar2 + 0x14) = uVar12;
  *(undefined4 *)(lVar2 + 0x10) = 1;
LAB_0257ac94:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


