/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$<.ctor>b__0
ENTRY_POINT: 01bf7c8c
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01bf80e8) */
/* WARNING: Removing unreachable block (ram,0x01bf8118) */
/* WARNING: Removing unreachable block (ram,0x01bf8168) */

undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>__<_ctor>b__0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long *plVar13;
  undefined8 uVar14;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_0185dba8();
      goto LAB_01bf7e94;
    }
    in_ZR = *(long *)(in_x10 + 2) == unaff_x24;
    in_x10 = in_x10 + 4;
  }
  puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_01bf7e94:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_037f3298;
  puVar2 = PTR_DAT_037f2c78;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  do {
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01bf7f04;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar6,lVar9,0);
LAB_01bf7f04:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar3 = PTR_DAT_037f3288;
    if ((uVar11 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01861ac0(plVar6,*(undefined8 *)PTR_DAT_037f3288);
      if (plVar6 == (long *)0x0) goto LAB_01bf80dc;
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_01bf80b4;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_01bf7f64;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar6,lVar9,1);
LAB_01bf7f64:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar13 = *(long **)(unaff_x21 + 0x28);
    uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar14 = FUN_02bddb5c(uVar14,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar9 = (**(code **)(*plVar13 + 0x508))(plVar13,uVar7,uVar14);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0185daa4(lVar10);
    }
    if (lVar9 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = thunk_FUN_01861ac0(lVar9,lVar10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar9,lVar10);
      }
    }
    lVar9 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
      thunk_FUN_0188fd20();
    }
    else {
      FUN_0270a444();
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_01bf80d0;
    }
  }
LAB_01bf80b4:
  puVar5 = (undefined8 *)FUN_0185dba8(plVar6,*(long *)puVar3,0);
LAB_01bf80d0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_01bf80dc:
  if (unaff_x22 != 0) {
    uVar7 = FUN_0270bdd0();
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


