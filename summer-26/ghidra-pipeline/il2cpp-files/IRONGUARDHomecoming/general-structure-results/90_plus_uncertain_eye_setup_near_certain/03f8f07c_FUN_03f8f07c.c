/*
FUNCTION_NAME: FUN_03f8f07c
ENTRY_POINT: 03f8f07c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03f8f48c) */

undefined1  [16] FUN_03f8f07c(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_0483b6d7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04581b10);
    thunk_FUN_01efb3a4(PTR_DAT_04581d28);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__)
    ;
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6d7 = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
  ;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  if (param_2 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar15 = *(undefined8 *)
              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
    ;
    plVar7 = (long *)thunk_FUN_01f116d0(param_2,uVar15);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2,uVar15);
    }
  }
  puVar3 = Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__;
  puVar4 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  lVar8 = *(long *)Method_System_DBNull_System_IConvertible_ToDecimal__;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar4;
  }
  uStack_68 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
  local_70 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar15 = FUN_03f8f560(param_4);
  uVar6 = FUN_03f8f694(plVar7);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  lVar8 = UnityEngine_Rendering_CommandBuffer__ClearRandomWriteTargets(uVar6);
  *param_3 = lVar8;
  thunk_FUN_01f51358(param_3,lVar8);
  if ((*param_3 != 0) && (lVar8 = FUN_03f8a108(), plVar7 != (long *)0x0)) {
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03f8f220;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03f8f220:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar10 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
    puVar5 = PTR_DAT_04581b10;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar10;
      lVar11 = *(long *)puVar3;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03f8f298;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_03f8f298:
      uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar13 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)puVar2);
        if (plVar10 == (long *)0x0) goto LAB_03f8f420;
        lVar12 = *plVar10;
        lVar11 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_03f8f3f8;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_03f8f3e0;
      }
      lVar12 = *plVar10;
      lVar11 = *(long *)puVar3;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03f8f2f8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,1);
LAB_03f8f2f8:
      auVar16 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(0,auVar16._8_8_,auVar16._0_8_);
      }
      auVar16 = FUN_03fa041c(*(long *)(param_1 + 0x10),uVar15,auVar16._0_8_,&local_78,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03f8a150(&local_70,auVar16._0_8_,auVar16._8_8_);
      if ((auVar16._0_8_ & 0xff) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)puVar5;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = local_78;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar8,local_78,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
LAB_03f8f484:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03f8f3e0:
    if (*(long *)(piVar14 + -2) == lVar11) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03f8f414;
    }
  }
LAB_03f8f3f8:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_03f8f414:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_03f8f420:
  uVar15 = thunk_FUN_01ecaf38(plVar7,0);
  uVar13 = FUN_03f8f794(uVar15,uVar15);
  if ((uVar13 & 1) != 0) {
    if (lVar8 == 0) goto LAB_03f8f484;
    FUN_030f4404(lVar8,*(undefined8 *)PTR_DAT_04581d28);
  }
  auVar16._8_8_ = uStack_68;
  auVar16._0_8_ = local_70;
  return auVar16;
}


