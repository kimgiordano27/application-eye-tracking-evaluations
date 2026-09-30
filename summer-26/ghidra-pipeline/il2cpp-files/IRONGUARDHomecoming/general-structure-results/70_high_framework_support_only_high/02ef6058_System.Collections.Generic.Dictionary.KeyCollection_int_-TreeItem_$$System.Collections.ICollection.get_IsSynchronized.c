/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<int,-TreeItem>$$System.Collections.ICollection.get_IsSynchronized
ENTRY_POINT: 02ef6058
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ef62c0) */
/* WARNING: Removing unreachable block (ram,0x02ef6378) */

void System_Collections_Generic_Dictionary_KeyCollection<int,_TreeItem>__System_Collections_ICollection_get_IsSynchronized
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x27;
  long unaff_x29;
  
  lVar4 = thunk_FUN_01f117cc();
  FUN_039dcb20();
  if (unaff_x23 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02ef60dc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02ef60dc:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02ef614c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_02ef614c:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_02ef62b4;
        lVar4 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 == 0) goto LAB_02ef628c;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_02ef6274;
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02ef61c4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar8,0);
LAB_02ef61c4:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar10 = FUN_02ef644c();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar10 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar10 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar4,iVar1,0);
          if ((uVar10 & 1) == 0) {
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_039dcb94();
          }
        }
      }
      else {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar4,iVar1,0);
      }
    } while( true );
  }
LAB_02ef6364:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_02ef6274:
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto 
      System_Collections_Generic_Dictionary_KeyCollection<int,_ulong>__System_Collections_Generic_ICollection<TKey>_Contains
      ;
    }
  }
LAB_02ef628c:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);

  System_Collections_Generic_Dictionary_KeyCollection<int,_ulong>__System_Collections_Generic_ICollection<TKey>_Contains
  :
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_02ef62b4:
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) goto LAB_02ef6364;
    uVar10 = 0;
    do {
      uVar7 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32();
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02ef6364;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        FUN_02ef263c();
      }
      uVar10 = uVar10 + 1;
    } while (unaff_x21 != uVar10);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


