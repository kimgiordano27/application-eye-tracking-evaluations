/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-bool>$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains
ENTRY_POINT: 029d8670
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x029d89ec) */
/* WARNING: Removing unreachable block (ram,0x029d8a3c) */

void System_Collections_Generic_Dictionary<Guid,_bool>__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<TKey,TValue>>_Contains
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long *unaff_x19;
  uint uVar9;
  long unaff_x22;
  long lVar10;
  undefined1 auVar11 [16];
  
  piVar8 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_029d879c;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_029d879c:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = 0;
  uVar9 = 0;
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_029d8810;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_029d8810:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_029d89e0;
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_029d89b8;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_029d8894;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar5,0);
LAB_029d8894:
    auVar11 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (lVar10 == 0) {
      lVar10 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
      lVar10 = FUN_01f08890(lVar10,4);
LAB_029d8940:
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else if (uVar9 == *(uint *)(lVar10 + 0x18)) {
      if ((int)(uVar9 + 0x40000000) < 0) {
        FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910();
      }
      lVar5 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = FUN_01f08890(lVar5,uVar9 << 1);
      FUN_0358d498(lVar10,0,lVar5,0,uVar9,0);
      lVar10 = lVar5;
      goto LAB_029d8940;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    pauVar4 = (undefined1 (*) [16])(lVar10 + (long)(int)uVar9 * 0x10 + 0x20);
    *pauVar4 = auVar11;
    thunk_FUN_01f51358(pauVar4,0);
    uVar9 = uVar9 + 1;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_029d89d4;
    }
  }
LAB_029d89b8:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d89d4:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_029d89e0:
  *unaff_x19 = lVar10;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = uVar9;
  return;
}


