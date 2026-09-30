/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 036406b0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03640aa0) */
/* WARNING: Removing unreachable block (ram,0x03640aa4) */
/* WARNING: Removing unreachable block (ram,0x03640ac4) */

void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar14;
  
  if (unaff_w19 != 0) goto LAB_036407e0;
  if (*(char *)(unaff_x20 + 0x18) == '\0') {
    plVar8 = (long *)FUN_0410bfd8(unaff_x29 + -0x60,*unaff_x28);
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065dec68) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0364081c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065dec68,0);
LAB_0364081c:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined4 *)(unaff_x29 + -0xe4) = 0;
      puVar3 = PTR_DAT_065dec70;
      puVar2 = PTR_DAT_065c8d08;
      do {
        lVar7 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03640890;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0);
LAB_03640890:
        uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_03640a88;
          lVar7 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar12 == 0) goto LAB_03640a60;
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_03640a48;
        }
        lVar7 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_036408ec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0);
LAB_036408ec:
        (*(code *)*puVar9)(unaff_x29 + -0x40,plVar8,puVar9[1]);
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
          puVar9 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
          uVar6 = *puVar9;
          *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
          (*(code *)puVar9[2])(uVar6,puVar9,unaff_x29 + -0xa0,unaff_x29 + -0x18);
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          puVar9 = unaff_x24;
          if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
            puVar9 = (undefined8 *)*unaff_x24;
          }
          puVar10 = *(undefined8 **)(lVar7 + 0x50);
          uVar6 = *puVar10;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
          (*(code *)puVar10[2])(uVar6);
          *(undefined4 *)(unaff_x29 + -0xe4) = 1;
        }
        else {
          memset(unaff_x25,0,unaff_x23);
          memcpy(unaff_x24,unaff_x25,unaff_x23);
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          puVar9 = unaff_x24;
          if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
            puVar9 = (undefined8 *)*unaff_x24;
          }
          puVar10 = *(undefined8 **)(lVar7 + 0x50);
          uVar6 = *puVar10;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
          (*(code *)puVar10[2])(uVar6);
        }
      } while( true );
    }
    goto LAB_03640ab0;
  }
  bVar4 = false;
  goto LAB_036406c0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03640a48:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03640a7c;
    }
  }
LAB_03640a60:
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065c8a48,0);
LAB_03640a7c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03640a88:
  bVar4 = (*(uint *)(unaff_x29 + -0xe4) & 0xff) != 0;
LAB_036406c0:
  puVar9 = (undefined8 *)PTR_DAT_065dec88;
  puVar3 = PTR_DAT_065dec80;
  puVar2 = PTR_DAT_065dec78;
  uVar6 = FUN_0410be30(unaff_x29 + -0x60,*(undefined8 *)PTR_DAT_065dec58);
  lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  if (!bVar4) {
    puVar9 = (undefined8 *)puVar3;
  }
  if (!bVar4) {
    unaff_x22 = 0;
  }
  FUN_05af3a9c(lVar7,*puVar9,uVar6,0);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  if (lVar11 == 0) {
LAB_03640ab0:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar6 = *puVar9;
  *(bool *)(unaff_x29 + -0x1c) = lVar7 == 0;
  *(undefined1 *)(unaff_x29 + -0x20) = uVar1;
  *(long *)(unaff_x29 + -0x40) = unaff_x22;
  *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x1c;
  *(long *)(unaff_x29 + -0x30) = lVar7;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
  (*(code *)puVar9[2])(uVar6,puVar9,lVar11,unaff_x29 + -0x40,unaff_x29 + -0xd8);
  uVar14 = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar6 = *(undefined8 *)(unaff_x29 + -0xd8);
  puVar9 = *(undefined8 **)(unaff_x29 + -0xe0);
  puVar9[2] = *(undefined8 *)(unaff_x29 + -200);
  puVar9[1] = uVar14;
  *puVar9 = uVar6;
LAB_036407e0:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


