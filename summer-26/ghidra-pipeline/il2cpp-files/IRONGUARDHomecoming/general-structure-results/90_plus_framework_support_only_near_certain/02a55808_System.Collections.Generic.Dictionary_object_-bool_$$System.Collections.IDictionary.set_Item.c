/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-bool>$$System.Collections.IDictionary.set_Item
ENTRY_POINT: 02a55808
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02a55ab4) */
/* WARNING: Removing unreachable block (ram,0x02a55b48) */

void System_Collections_Generic_Dictionary<object,_bool>__System_Collections_IDictionary_set_Item
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar14;
  
  lVar9 = *unaff_x20;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == param_1) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02a55854;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02a55854:
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02a558c4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_02a558c4:
    uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar6 == (long *)0x0)
      goto System_Collections_Generic_Dictionary<object,_bool>__IsCompatibleKey;
      lVar9 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 == 0) goto LAB_02a55a80;
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02a5593c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_02a5593c:
    lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    if (lVar9 == 0) {
      lVar9 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_02a579b0(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68));
LAB_02a55b3c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar14 = *(long **)(unaff_x19 + 0x18);
    if (plVar14 == (long *)0x0) goto LAB_02a55b3c;
    lVar10 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_02a559c8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar14,lVar10,1);
LAB_02a559c8:
    (*(code *)*puVar5)(plVar14,lVar9,puVar5[1]);
    uVar12 = FUN_02a571bc();
    if ((uVar12 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(
                                Method_System_Linq_Enumerable_Select<int,_AnimatorTextureBaker_VertInfo>__
                                );
      FUN_034f6754(uVar7,uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7);
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02a55a9c;
    }
  }
LAB_02a55a80:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_02a55a9c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
System_Collections_Generic_Dictionary<object,_bool>__IsCompatibleKey:
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    return;
  }
  lVar9 = *(long *)(unaff_x19 + 0x10);
  thunk_FUN_01f3e6f0();
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x10), lVar9 != 0)) {
    lVar10 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01f3e6f0();
    if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
      iVar1 = *(int *)(lVar10 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = *(int *)(lVar9 + 0x18) / iVar1;
      }
      *(int *)(unaff_x19 + 0x24) = iVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


