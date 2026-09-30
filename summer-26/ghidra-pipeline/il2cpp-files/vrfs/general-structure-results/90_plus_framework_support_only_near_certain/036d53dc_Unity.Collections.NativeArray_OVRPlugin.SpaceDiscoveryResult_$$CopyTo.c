/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 036d53dc
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d53ac) */
/* WARNING: Removing unreachable block (ram,0x036d5584) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x21;
  long lVar11;
  
  puVar4 = PTR_DAT_06e636c0;
  if (param_2 != 1) {
    plVar7 = (long *)thunk_FUN_015d0480();
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x036d556c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar4,0);
code_r0x036d556c:
      (*(code *)*puVar5)(plVar7,puVar5[1]);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar7 = (long *)__cxa_begin_catch(param_1);
  lVar11 = *plVar7;
  __cxa_end_catch();
  puVar4 = PTR_DAT_06e636c0;
  plVar7 = (long *)thunk_FUN_015d0480();
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036d50a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar4,0);
LAB_036d50a8:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0164c380(lVar11);
  }
  lVar11 = FUN_036f0df8();
  if ((lVar11 == 0) || (plVar7 = (long *)FUN_03fbacb0(lVar11,0), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar11 = *plVar7;
  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_036d5138;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d5138:
  plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
  puVar3 = PTR_DAT_06e2c7d8;
  puVar2 = PTR_DAT_06ddc938;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar8 = *plVar7;
    lVar11 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar11) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036d51b0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar7,lVar11,0);
LAB_036d51b0:
    uVar9 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_015d0480(plVar7,*(undefined8 *)puVar4);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar9 == 0) goto LAB_036d531c;
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar7;
    lVar11 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar11) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_036d5210;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar7,lVar11,1);
LAB_036d5210:
    plVar6 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
    if (plVar6 != (long *)0x0) {
      lVar11 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar11 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar6);
      }
    }
    lVar11 = FUN_036f0df8();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar6 = (long *)FUN_03fbac38(lVar11,plVar6[0x10],0);
    if (plVar6 == (long *)0x0) {
      if ((unaff_x21 == 0) || (uVar9 = FUN_036f0830(), (uVar9 & 1) == 0)) {
        FUN_01fbafc0();
      }
    }
    else {
      lVar11 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar11 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036d5338;
    }
  }
LAB_036d531c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar4,0);
LAB_036d5338:
  (*(code *)*puVar5)(plVar7,puVar5[1]);
  return;
}


