/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 036403a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03640aa0) */
/* WARNING: Removing unreachable block (ram,0x03640aa4) */
/* WARNING: Removing unreachable block (ram,0x036406a8) */
/* WARNING: Removing unreachable block (ram,0x03640ac4) */
/* WARNING: Removing unreachable block (ram,0x03640ab8) */

void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar15;
  
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  memset(unaff_x25,0,unaff_x23);
  FUN_0335dba0(unaff_x29 + -0x40);
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x30);
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x38);
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02ce0978();
  }
  puVar2 = PTR_DAT_065dc7d0;
  lVar6 = thunk_FUN_02cea894();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28))();
  iVar5 = FUN_0410c03c(unaff_x29 + -0x60,*unaff_x26);
  if (iVar5 == 1) {
    plVar7 = (long *)FUN_0410bfd8(unaff_x29 + -0x60,*(undefined8 *)puVar2);
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065dec68) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto 
            System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
            ;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065dec68,0);
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar3 = PTR_DAT_065dec70;
      puVar2 = PTR_DAT_065c8d08;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03640520;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_03640520:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_0364069c;
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_03640674;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0364065c;
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0364057c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_0364057c:
        (*(code *)*puVar8)(unaff_x29 + -0x40,plVar7,puVar8[1]);
        *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x38);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x40);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x30);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30))
                  (unaff_x29 + -0x40,unaff_x29 + -0x80);
        *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x38);
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x40);
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x30);
        puVar8 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
        uVar9 = *puVar8;
        *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
        (*(code *)puVar8[2])(uVar9,puVar8,unaff_x29 + -0xa0,unaff_x29 + -0x18);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar12 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
        puVar8 = unaff_x24;
        if (-1 < *(int *)(*(long *)(lVar12 + 0x10) + 0x28)) {
          puVar8 = (undefined8 *)*unaff_x24;
        }
        puVar10 = *(undefined8 **)(lVar12 + 0x50);
        uVar9 = *puVar10;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        (*(code *)puVar10[2])(uVar9,puVar10,lVar6,unaff_x29 + -0x18);
      } while( true );
    }
    goto LAB_03640ab0;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\0') {
    plVar7 = (long *)FUN_0410bfd8(unaff_x29 + -0x60,*(undefined8 *)puVar2);
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065dec68) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0364081c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065dec68,0);
LAB_0364081c:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined4 *)(unaff_x29 + -0xe4) = 0;
      puVar3 = PTR_DAT_065dec70;
      puVar2 = PTR_DAT_065c8d08;
      do {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03640890;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_03640890:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03640a88;
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_03640a60;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03640a48;
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_036408ec;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_036408ec:
        (*(code *)*puVar8)(unaff_x29 + -0x40,plVar7,puVar8[1]);
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
          puVar8 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
          uVar9 = *puVar8;
          *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
          (*(code *)puVar8[2])(uVar9,puVar8,unaff_x29 + -0xa0,unaff_x29 + -0x18);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar12 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          puVar8 = unaff_x24;
          if (-1 < *(int *)(*(long *)(lVar12 + 0x10) + 0x28)) {
            puVar8 = (undefined8 *)*unaff_x24;
          }
          puVar10 = *(undefined8 **)(lVar12 + 0x50);
          uVar9 = *puVar10;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
          (*(code *)puVar10[2])(uVar9,puVar10,lVar6,unaff_x29 + -0x18);
          *(undefined4 *)(unaff_x29 + -0xe4) = 1;
        }
        else {
          memset(unaff_x25,0,unaff_x23);
          memcpy(unaff_x24,unaff_x25,unaff_x23);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar12 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          puVar8 = unaff_x24;
          if (-1 < *(int *)(*(long *)(lVar12 + 0x10) + 0x28)) {
            puVar8 = (undefined8 *)*unaff_x24;
          }
          puVar10 = *(undefined8 **)(lVar12 + 0x50);
          uVar9 = *puVar10;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
          (*(code *)puVar10[2])(uVar9,puVar10,lVar6,unaff_x29 + -0x18);
        }
      } while( true );
    }
    goto LAB_03640ab0;
  }
  bVar4 = false;
  goto LAB_036406c0;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0364065c:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03640690;
    }
  }
LAB_03640674:
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_03640690:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0364069c:
  lVar12 = 0;
  goto LAB_03640780;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03640a48:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03640a7c;
    }
  }
LAB_03640a60:
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_03640a7c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03640a88:
  bVar4 = (*(uint *)(unaff_x29 + -0xe4) & 0xff) != 0;
LAB_036406c0:
  puVar8 = (undefined8 *)PTR_DAT_065dec88;
  puVar3 = PTR_DAT_065dec80;
  puVar2 = PTR_DAT_065dec78;
  uVar9 = FUN_0410be30(unaff_x29 + -0x60,*(undefined8 *)PTR_DAT_065dec58);
  lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  if (!bVar4) {
    puVar8 = (undefined8 *)puVar3;
  }
  if (!bVar4) {
    lVar6 = 0;
  }
  FUN_05af3a9c(lVar12,*puVar8,uVar9,0);
LAB_03640780:
  lVar11 = *(long *)(unaff_x20 + 0x20);
  if (lVar11 != 0) {
    puVar8 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
    uVar9 = *puVar8;
    *(bool *)(unaff_x29 + -0x1c) = lVar12 == 0;
    *(undefined1 *)(unaff_x29 + -0x20) = uVar1;
    *(long *)(unaff_x29 + -0x40) = lVar6;
    *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x1c;
    *(long *)(unaff_x29 + -0x30) = lVar12;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
    (*(code *)puVar8[2])(uVar9,puVar8,lVar11,unaff_x29 + -0x40,unaff_x29 + -0xd8);
    uVar15 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar9 = *(undefined8 *)(unaff_x29 + -0xd8);
    puVar8 = *(undefined8 **)(unaff_x29 + -0xe0);
    puVar8[2] = *(undefined8 *)(unaff_x29 + -200);
    puVar8[1] = uVar15;
    *puVar8 = uVar9;
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_03640ab0:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


