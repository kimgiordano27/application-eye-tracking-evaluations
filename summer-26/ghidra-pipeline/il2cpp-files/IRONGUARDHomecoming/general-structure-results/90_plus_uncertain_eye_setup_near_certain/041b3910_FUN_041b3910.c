/*
FUNCTION_NAME: FUN_041b3910
ENTRY_POINT: 041b3910
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x041b3db8) */
/* WARNING: Removing unreachable block (ram,0x041b3e5c) */

void FUN_041b3910(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_04840d8a & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458ea58);
    thunk_FUN_01efb3a4(PTR_DAT_0458ea60);
    thunk_FUN_01efb3a4(PTR_DAT_0458ea68);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Pop__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a548);
    thunk_FUN_01efb3a4(PTR_DAT_0458a550);
    thunk_FUN_01efb3a4(PTR_DAT_0458ea70);
    thunk_FUN_01efb3a4(PTR_DAT_0458ea78);
    thunk_FUN_01efb3a4(PTR_DAT_0458ea80);
    thunk_FUN_01efb3a4(PTR_DAT_0458ea88);
    thunk_FUN_01efb3a4(PTR_DAT_0458ea90);
    thunk_FUN_01efb3a4(PTR_DAT_0458ea00);
    DAT_04840d8a = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uVar8 = FUN_041ee4a8(param_2,0);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(param_1 + 0x440) != 0) {
      FUN_0422f1cc(*(long *)(param_1 + 0x440),0);
      lVar13 = FUN_04224ea4(param_1,0);
      if (lVar13 != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x430) != 0) {
        FUN_030f35d0(&local_78,*(long *)(param_1 + 0x430),*(undefined8 *)PTR_DAT_0458ea80);
        puVar3 = PTR_DAT_0458ea60;
        puVar2 = PTR_DAT_0458a550;
        while (uVar8 = FUN_02c7ab6c(&local_78,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
          FUN_0234cd54(local_68,*(undefined8 *)(param_1 + 0x438),*(undefined8 *)puVar2);
        }
        FUN_02c7ab68(&local_78,*(undefined8 *)PTR_DAT_0458ea58);
        lVar13 = *(long *)(param_1 + 0x430);
        if (lVar13 != 0) {
          iVar19 = *(int *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (iVar19 < 1) {
            return;
          }
          FUN_0358d1e4(*(undefined8 *)(lVar13 + 0x10),0,iVar19,0);
          return;
        }
      }
    }
  }
  else if (param_2 != (long *)0x0) {
    lVar13 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_041b3b20;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(param_2,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0)
    ;
LAB_041b3b20:
    plVar10 = (long *)(*(code *)*puVar9)(param_2,puVar9[1]);
    puVar7 = PTR_DAT_0458ea90;
    puVar6 = PTR_DAT_0458ea70;
    puVar5 = PTR_DAT_0458ea00;
    puVar4 = PTR_DAT_0458a548;
    puVar3 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar19 = 0;
    do {
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_041b3bb4;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_041b3bb4:
      uVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_041b3dac;
        lVar13 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 == 0) goto LAB_041b3d84;
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_041b3d6c;
      }
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_041b3c10;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_041b3c10:
      uVar11 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      lVar13 = *(long *)(param_1 + 0x430);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (iVar19 < *(int *)(lVar13 + 0x18)) {
        lVar13 = FUN_030f28e4(lVar13,iVar19,*(undefined8 *)puVar7);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0412f898(lVar13,uVar11,0);
        if (*(long *)(param_1 + 0x430) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(param_1 + 0x440);
        uVar11 = FUN_030f28e4(*(long *)(param_1 + 0x430),iVar19,*(undefined8 *)puVar7);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0422f130(lVar13,iVar19,uVar11,0);
      }
      else {
        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
        FUN_041b3034(lVar13,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0412f898(lVar13,uVar11,0);
        FUN_0234c89c(lVar13,*(undefined8 *)(param_1 + 0x438),*(undefined8 *)puVar4);
        lVar12 = *(long *)(param_1 + 0x430);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)puVar6;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          plVar15 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *plVar15 = lVar13;
          thunk_FUN_01f51358(plVar15,lVar13);
        }
        else {
          FUN_030f2bb4(lVar12,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x440) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0422f074(*(long *)(param_1 + 0x440),lVar13,0);
      }
      iVar19 = iVar19 + 1;
    } while( true );
  }
  goto LAB_041b3e34;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_041b3d6c:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_041b3da0;
    }
  }
LAB_041b3d84:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_041b3da0:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_041b3dac:
  puVar2 = PTR_DAT_0458ea90;
  lVar13 = *(long *)(param_1 + 0x430);
  if (lVar13 != 0) {
    iVar18 = *(int *)(lVar13 + 0x18) + -1;
    if (iVar18 < iVar19) {
LAB_041b3dd4:
      FUN_041b3fc4(param_1);
      return;
    }
    do {
      lVar13 = FUN_030f28e4(lVar13,iVar18,*(undefined8 *)puVar2);
      if (lVar13 == 0) break;
      FUN_0422f8ec(lVar13,0);
      iVar18 = iVar18 + -1;
      if (iVar18 < iVar19) goto LAB_041b3dd4;
      lVar13 = *(long *)(param_1 + 0x430);
    } while (lVar13 != 0);
  }
LAB_041b3e34:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


