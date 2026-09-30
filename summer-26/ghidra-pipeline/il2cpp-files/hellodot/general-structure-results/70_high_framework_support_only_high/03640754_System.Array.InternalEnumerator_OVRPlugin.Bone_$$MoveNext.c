/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$MoveNext
ENTRY_POINT: 03640754
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

void System_Array_InternalEnumerator<OVRPlugin_Bone>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  int *in_x10;
  int *piVar13;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar14;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0364081c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_02ce0a7c();
LAB_0364081c:
  plVar7 = (long *)(*(code *)*puVar6)();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined4 *)(unaff_x29 + -0xe4) = 0;
  puVar3 = PTR_DAT_065dec70;
  puVar2 = PTR_DAT_065c8d08;
  do {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03640890;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_03640890:
    uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_03640a88;
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_03640a60;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_036408ec;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_036408ec:
    (*(code *)*puVar6)(unaff_x29 + -0x40,plVar7,puVar6[1]);
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x30);
    iVar5 = FUN_05b065a0(unaff_x29 + -0xc0,0);
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30))
                (unaff_x29 + -0x40,unaff_x29 + -0xc0);
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x30);
      puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
      uVar8 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
      (*(code *)puVar6[2])(uVar8,puVar6,unaff_x29 + -0xa0,unaff_x29 + -0x18);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      puVar6 = unaff_x24;
      if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
        puVar6 = (undefined8 *)*unaff_x24;
      }
      puVar9 = *(undefined8 **)(lVar11 + 0x50);
      uVar8 = *puVar9;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
      (*(code *)puVar9[2])(uVar8);
      *(undefined4 *)(unaff_x29 + -0xe4) = 1;
    }
    else {
      memset(unaff_x25,0,unaff_x23);
      memcpy(unaff_x24,unaff_x25,unaff_x23);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      puVar6 = unaff_x24;
      if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
        puVar6 = (undefined8 *)*unaff_x24;
      }
      puVar9 = *(undefined8 **)(lVar11 + 0x50);
      uVar8 = *puVar9;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
      (*(code *)puVar9[2])(uVar8);
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03640a7c;
    }
  }
LAB_03640a60:
  puVar6 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_03640a7c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_03640a88:
  puVar6 = (undefined8 *)PTR_DAT_065dec88;
  puVar3 = PTR_DAT_065dec80;
  puVar2 = PTR_DAT_065dec78;
  bVar4 = (*(uint *)(unaff_x29 + -0xe4) & 0xff) == 0;
  uVar8 = FUN_0410be30(unaff_x29 + -0x60,*(undefined8 *)PTR_DAT_065dec58);
  lVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  if (bVar4) {
    puVar6 = (undefined8 *)puVar3;
  }
  if (bVar4) {
    unaff_x22 = 0;
  }
  FUN_05af3a9c(lVar11,*puVar6,uVar8,0);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  if (lVar10 != 0) {
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
    uVar8 = *puVar6;
    *(bool *)(unaff_x29 + -0x1c) = lVar11 == 0;
    *(undefined1 *)(unaff_x29 + -0x20) = uVar1;
    *(long *)(unaff_x29 + -0x40) = unaff_x22;
    *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x1c;
    *(long *)(unaff_x29 + -0x30) = lVar11;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
    (*(code *)puVar6[2])(uVar8,puVar6,lVar10,unaff_x29 + -0x40,unaff_x29 + -0xd8);
    uVar14 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar8 = *(undefined8 *)(unaff_x29 + -0xd8);
    puVar6 = *(undefined8 **)(unaff_x29 + -0xe0);
    puVar6[2] = *(undefined8 *)(unaff_x29 + -200);
    puVar6[1] = uVar14;
    *puVar6 = uVar8;
    if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


