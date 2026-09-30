/*
FUNCTION_NAME: System.Array$$Reverse<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 036e7bb4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036e7e00) */
/* WARNING: Removing unreachable block (ram,0x036e7e10) */

void System_Array__Reverse<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *plVar6;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
code_r0x036e7bb4:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_036e7ba4;
LAB_036e7bbc:
  puVar1 = (undefined8 *)FUN_02e759c0(unaff_x25,param_3,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x25,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      plVar6 = *(long **)(unaff_x29 + -0x18);
      if (plVar6 == (long *)0x0) goto LAB_036e7d7c;
      lVar3 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_036e7d54;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    plVar6 = *(long **)(unaff_x29 + -0x18);
    if (plVar6 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      goto LAB_036e7e78;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02e7568c(lVar3);
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_036e7c5c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    lVar3 = FUN_02e759c0(plVar6,lVar3,0);
LAB_036e7c5c:
    lVar3 = *(long *)(lVar3 + 8);
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar6,unaff_x29 + -0x10);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_x24 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      goto LAB_036e7e78;
    }
    lVar3 = *unaff_x24;
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar4 + 0x20)) {
          lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 + 0x138;
          goto LAB_036e7b84;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    lVar3 = FUN_02e759c0();
LAB_036e7b84:
    lVar3 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar3 + 8),lVar4);
    (**(code **)(lVar3 + 8))();
    unaff_x25 = *(long **)(unaff_x29 + -0x18);
    if (unaff_x25 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      goto LAB_036e7e78;
    }
    param_1 = *unaff_x25;
    param_3 = *unaff_x27;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_036e7bbc;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_036e7ba4:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x036e7bb4;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06a2ef10) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_036e7d70;
    }
  }
LAB_036e7d54:
  puVar1 = (undefined8 *)FUN_02e759c0(plVar6,*(long *)PTR_DAT_06a2ef10,0);
LAB_036e7d70:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
LAB_036e7d7c:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_036e7e78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


