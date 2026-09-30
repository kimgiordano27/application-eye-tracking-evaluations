/*
FUNCTION_NAME: UniGLTF.GltfDeserializer$$Deserialize_gltf_accessors__sparse_values
ENTRY_POINT: 02f5e484
PROGRAM: vrlegs-libil2cpp.so
SCORE: 138
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f5e6d8) */
/* WARNING: Removing unreachable block (ram,0x02f5e4c4) */
/* WARNING: Removing unreachable block (ram,0x02f5e6cc) */
/* WARNING: Removing unreachable block (ram,0x02f5e594) */
/* WARNING: Removing unreachable block (ram,0x02f5e57c) */
/* WARNING: Removing unreachable block (ram,0x02f5e678) */
/* WARNING: Removing unreachable block (ram,0x02f5e680) */
/* WARNING: Removing unreachable block (ram,0x02f5e69c) */
/* WARNING: Removing unreachable block (ram,0x02f5e6a8) */

void UniGLTF_GltfDeserializer__Deserialize_gltf_accessors__sparse_values(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint uVar9;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  do {
                    /* try { // try from 02f5e48c to 0305e493 has its CatchHandler @ 02f5e7b8 */
                    /* try { // try from 02f5e494 to 0305e583 has its CatchHandler @ 02f5dca8 */
    (**(code **)(*param_1 + 0x3a8))(param_1,unaff_x23[2],*(undefined8 *)(*param_1 + 0x3b0));
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x22,0);
    }
    do {
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02f5e37c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec();
LAB_02f5e37c:
      uVar6 = (*(code *)*puVar4)();
      if ((uVar6 & 1) == 0) {
        plVar3 = (long *)thunk_FUN_01a89d6c();
        if (plVar3 == (long *)0x0) goto LAB_02f5e570;
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_02f5e548;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_02f5e530;
      }
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_02f5e3dc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec();
LAB_02f5e3dc:
      unaff_x23 = (long *)(*(code *)*puVar4)();
      if (unaff_x23 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x29 + 0x130);
        if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(unaff_x23);
        }
      }
      uVar6 = FUN_02f5dc14();
    } while ((uVar6 & 1) == 0);
    lVar5 = *unaff_x25;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *unaff_x25;
    }
    unaff_x22 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    in_stack_00000018._4_1_ = '\0';
    FUN_027e0bd8(unaff_x22,(long)&stack0x00000018 + 4,0);
    lVar5 = *unaff_x25;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *unaff_x25;
    }
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    param_1 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_02f5e530:
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02f5e564;
    }
  }
LAB_02f5e548:
  puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*unaff_x24,0);
LAB_02f5e564:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_02f5e570:
  FUN_027e2830(0x2ee,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *unaff_x25;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  in_stack_00000018._4_1_ = '\0';
  FUN_027e0bd8(uVar8,(long)&stack0x00000018 + 4,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *unaff_x25;
  }
  plVar3 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar2 = (**(code **)(*plVar3 + 0x3c8))(plVar3,*(undefined8 *)(*plVar3 + 0x3d0));
  if (iVar2 == 0) {
    uVar9 = 2;
  }
  else {
    lVar5 = *unaff_x25;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *unaff_x25;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03cf21f8 + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cf21f8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
    }
    uVar9 = 6;
  }
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
  }
  if (uVar9 < 7) {
                    /* WARNING: Could not recover jumptable at 0x02f5e28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(unaff_x26 + (ulong)uVar9 * 2) * 4 + 0x2f5e15c))();
    return;
  }
  return;
}


