/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$get_Current
ENTRY_POINT: 036409a0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03640aa0) */
/* WARNING: Removing unreachable block (ram,0x03640aa4) */
/* WARNING: Removing unreachable block (ram,0x03640ac4) */

void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__get_Current(undefined1 param_1 [16])

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar13;
  
  uVar13 = param_1._8_8_;
  uVar6 = param_1._0_8_;
code_r0x036409a0:
  *(undefined8 *)(unaff_x29 + -0x98) = uVar13;
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x30);
  puVar7 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
  uVar6 = *puVar7;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
  (*(code *)puVar7[2])(uVar6,puVar7,unaff_x29 + -0xa0,unaff_x29 + -0x18);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  puVar7 = unaff_x24;
  if (-1 < *(int *)(*(long *)(lVar10 + 0x10) + 0x28)) {
    puVar7 = (undefined8 *)*unaff_x24;
  }
  puVar8 = *(undefined8 **)(lVar10 + 0x50);
  uVar6 = *puVar8;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
  (*(code *)puVar8[2])(uVar6);
  *(undefined4 *)(unaff_x29 + -0xe4) = 1;
  do {
    lVar10 = *unaff_x26;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03640890;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c();
LAB_03640890:
    uVar11 = (*(code *)*puVar7)();
    if ((uVar11 & 1) == 0) {
      if (unaff_x26 == (long *)0x0) goto LAB_03640a88;
      lVar10 = *unaff_x26;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_03640a60;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      goto LAB_03640a48;
    }
    lVar10 = *unaff_x26;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x19) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036408ec;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c();
LAB_036408ec:
    (*(code *)*puVar7)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x30);
    iVar5 = FUN_05b065a0(unaff_x29 + -0xc0,0);
    if (iVar5 == 1) break;
    memset(unaff_x25,0,unaff_x23);
    memcpy(unaff_x24,unaff_x25,unaff_x23);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar7 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x10) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
    }
    puVar8 = *(undefined8 **)(lVar10 + 0x50);
    uVar6 = *puVar8;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    (*(code *)puVar8[2])(uVar6);
  } while( true );
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30))
            (unaff_x29 + -0x40,unaff_x29 + -0xc0);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x38);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x40);
  goto code_r0x036409a0;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03640a48:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03640a7c;
    }
  }
LAB_03640a60:
  puVar7 = (undefined8 *)FUN_02ce0a7c();
LAB_03640a7c:
  (*(code *)*puVar7)();
LAB_03640a88:
  puVar7 = (undefined8 *)PTR_DAT_065dec88;
  puVar3 = PTR_DAT_065dec80;
  puVar2 = PTR_DAT_065dec78;
  bVar4 = (*(uint *)(unaff_x29 + -0xe4) & 0xff) == 0;
  uVar6 = FUN_0410be30(unaff_x29 + -0x60,*(undefined8 *)PTR_DAT_065dec58);
  lVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  if (bVar4) {
    puVar7 = (undefined8 *)puVar3;
  }
  if (bVar4) {
    unaff_x22 = 0;
  }
  FUN_05af3a9c(lVar10,*puVar7,uVar6,0);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if (lVar9 != 0) {
    puVar7 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
    uVar6 = *puVar7;
    *(bool *)(unaff_x29 + -0x1c) = lVar10 == 0;
    *(undefined1 *)(unaff_x29 + -0x20) = uVar1;
    *(long *)(unaff_x29 + -0x40) = unaff_x22;
    *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x1c;
    *(long *)(unaff_x29 + -0x30) = lVar10;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
    (*(code *)puVar7[2])(uVar6,puVar7,lVar9,unaff_x29 + -0x40,unaff_x29 + -0xd8);
    uVar13 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar6 = *(undefined8 *)(unaff_x29 + -0xd8);
    puVar7 = *(undefined8 **)(unaff_x29 + -0xe0);
    puVar7[2] = *(undefined8 *)(unaff_x29 + -200);
    puVar7[1] = uVar13;
    *puVar7 = uVar6;
    if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


