/*
FUNCTION_NAME: FUN_02a55798
ENTRY_POINT: 02a55798
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02a55ab4) */
/* WARNING: Removing unreachable block (ram,0x02a55b48) */

void FUN_02a55798(long param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined8 local_48;
  
  if ((DAT_04830f1e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830f1e = 1;
  }
  local_48 = 0;
  if (param_2 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02a55854;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);
LAB_02a55854:
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02a558c4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_02a558c4:
      uVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar7 == (long *)0x0)
        goto System_Collections_Generic_Dictionary<object,_bool>__IsCompatibleKey;
        lVar10 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_02a55a80;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_02a55a68;
      }
      lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02a5593c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_02a5593c:
      auVar16 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      lVar10 = auVar16._0_8_;
      lVar11 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      if (lVar10 == 0) {
        lVar10 = *(long *)(lVar11 + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_02a579b0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68));
LAB_02a55b3c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar15 = *(long **)(param_1 + 0x18);
      if (plVar15 == (long *)0x0) goto LAB_02a55b3c;
      lVar11 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar12 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_02a559c8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar15,lVar11,1);
LAB_02a559c8:
      uVar5 = (*(code *)*puVar6)(plVar15,lVar10,puVar6[1]);
      uVar13 = FUN_02a571bc(param_1,lVar10,uVar5,auVar16._8_8_,0,0,&local_48,
                            *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90));
      if ((uVar13 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar8 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_System_Linq_Enumerable_Select<int,_AnimatorTextureBaker_VertInfo>__
                                  );
        FUN_034f6754(uVar8,uVar9,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8,param_3);
      }
    } while( true );
  }
  goto LAB_02a55b40;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_02a55a68:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02a55a9c;
    }
  }
LAB_02a55a80:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_02a55a9c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
System_Collections_Generic_Dictionary<object,_bool>__IsCompatibleKey:
  if (*(int *)(param_1 + 0x24) != 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  thunk_FUN_01f3e6f0();
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) {
    lVar11 = *(long *)(param_1 + 0x10);
    thunk_FUN_01f3e6f0();
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      iVar1 = *(int *)(lVar11 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = *(int *)(lVar10 + 0x18) / iVar1;
      }
      *(int *)(param_1 + 0x24) = iVar2;
      return;
    }
  }
LAB_02a55b40:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


