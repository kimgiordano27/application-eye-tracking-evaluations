/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 036402d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 170
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03640aa0) */
/* WARNING: Removing unreachable block (ram,0x03640aa4) */
/* WARNING: Removing unreachable block (ram,0x036406a8) */
/* WARNING: Removing unreachable block (ram,0x03640ac4) */
/* WARNING: Removing unreachable block (ram,0x03640ab8) */

void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 *puVar14;
  long unaff_x21;
  long unaff_x23;
  ulong __n;
  undefined8 *__dest;
  void *__s;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar15;
  
  puVar14 = *(undefined8 **)(unaff_x19 + 0xc50);
  if ((*(byte *)(unaff_x23 + 0x84d) & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec58);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc7d0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec60);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec50);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec68);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec88);
    *(undefined1 *)(unaff_x23 + 0x84d) = 1;
  }
  puVar2 = PTR_DAT_065dec60;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10) + 0xfc);
  uVar12 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(&stack0x00000000 + -uVar12);
  __s = (void *)((long)__dest - uVar12);
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
  memset(__s,0,__n);
  FUN_0335dba0(unaff_x29 + -0x40,param_2,*puVar14);
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x30);
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x38);
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02ce0978();
  }
  puVar3 = PTR_DAT_065dc7d0;
  lVar6 = thunk_FUN_02cea894();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28))();
  iVar5 = FUN_0410c03c(unaff_x29 + -0x60,*(undefined8 *)puVar2);
  if (iVar5 == 1) {
    plVar7 = (long *)FUN_0410bfd8(unaff_x29 + -0x60,*(undefined8 *)puVar3);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065dec68) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto 
            System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
            ;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065dec68,0);
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset:
      plVar7 = (long *)(*(code *)*puVar14)(plVar7,puVar14[1]);
      puVar3 = PTR_DAT_065dec70;
      puVar2 = PTR_DAT_065c8d08;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03640520;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_03640520:
        uVar12 = (*(code *)*puVar14)(plVar7,puVar14[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_0364069c;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_03640674;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0364065c;
        }
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0364057c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_0364057c:
        (*(code *)*puVar14)(unaff_x29 + -0x40,plVar7,puVar14[1]);
        *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x38);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x40);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x30);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30))
                  (unaff_x29 + -0x40,unaff_x29 + -0x80);
        *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x38);
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x40);
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x30);
        puVar14 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
        uVar8 = *puVar14;
        *(undefined8 **)(unaff_x29 + -0x18) = __dest;
        (*(code *)puVar14[2])(uVar8,puVar14,unaff_x29 + -0xa0,unaff_x29 + -0x18,__dest);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
        puVar14 = __dest;
        if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
          puVar14 = (undefined8 *)*__dest;
        }
        puVar9 = *(undefined8 **)(lVar11 + 0x50);
        uVar8 = *puVar9;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar14;
        (*(code *)puVar9[2])(uVar8,puVar9,lVar6,unaff_x29 + -0x18);
      } while( true );
    }
    goto LAB_03640ab0;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    plVar7 = (long *)FUN_0410bfd8(unaff_x29 + -0x60,*(undefined8 *)puVar3);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065dec68) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0364081c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065dec68,0);
LAB_0364081c:
      plVar7 = (long *)(*(code *)*puVar14)(plVar7,puVar14[1]);
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
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03640890;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_03640890:
        uVar12 = (*(code *)*puVar14)(plVar7,puVar14[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03640a88;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_03640a60;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_03640a48;
        }
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_036408ec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar14 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_036408ec:
        (*(code *)*puVar14)(unaff_x29 + -0x40,plVar7,puVar14[1]);
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
          puVar14 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
          uVar8 = *puVar14;
          *(undefined8 **)(unaff_x29 + -0x18) = __dest;
          (*(code *)puVar14[2])(uVar8,puVar14,unaff_x29 + -0xa0,unaff_x29 + -0x18,__dest);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          puVar14 = __dest;
          if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
            puVar14 = (undefined8 *)*__dest;
          }
          puVar9 = *(undefined8 **)(lVar11 + 0x50);
          uVar8 = *puVar9;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar14;
          (*(code *)puVar9[2])(uVar8,puVar9,lVar6,unaff_x29 + -0x18);
          *(undefined4 *)(unaff_x29 + -0xe4) = 1;
        }
        else {
          memset(__s,0,__n);
          memcpy(__dest,__s,__n);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          puVar14 = __dest;
          if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
            puVar14 = (undefined8 *)*__dest;
          }
          puVar9 = *(undefined8 **)(lVar11 + 0x50);
          uVar8 = *puVar9;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar14;
          (*(code *)puVar9[2])(uVar8,puVar9,lVar6,unaff_x29 + -0x18);
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
LAB_0364065c:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03640690;
    }
  }
LAB_03640674:
  puVar14 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_03640690:
  (*(code *)*puVar14)(plVar7,puVar14[1]);
LAB_0364069c:
  lVar11 = 0;
  goto LAB_03640780;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03640a48:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03640a7c;
    }
  }
LAB_03640a60:
  puVar14 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_03640a7c:
  (*(code *)*puVar14)(plVar7,puVar14[1]);
LAB_03640a88:
  bVar4 = (*(uint *)(unaff_x29 + -0xe4) & 0xff) != 0;
LAB_036406c0:
  puVar14 = (undefined8 *)PTR_DAT_065dec88;
  puVar3 = PTR_DAT_065dec80;
  puVar2 = PTR_DAT_065dec78;
  uVar8 = FUN_0410be30(unaff_x29 + -0x60,*(undefined8 *)PTR_DAT_065dec58);
  lVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  if (!bVar4) {
    puVar14 = (undefined8 *)puVar3;
  }
  if (!bVar4) {
    lVar6 = 0;
  }
  FUN_05af3a9c(lVar11,*puVar14,uVar8,0);
LAB_03640780:
  lVar10 = *(long *)(param_1 + 0x20);
  if (lVar10 != 0) {
    puVar14 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
    uVar1 = *(undefined1 *)(param_1 + 0x18);
    uVar8 = *puVar14;
    *(bool *)(unaff_x29 + -0x1c) = lVar11 == 0;
    *(undefined1 *)(unaff_x29 + -0x20) = uVar1;
    *(long *)(unaff_x29 + -0x40) = lVar6;
    *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x1c;
    *(long *)(unaff_x29 + -0x30) = lVar11;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
    (*(code *)puVar14[2])(uVar8,puVar14,lVar10,unaff_x29 + -0x40,unaff_x29 + -0xd8);
    uVar15 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar8 = *(undefined8 *)(unaff_x29 + -0xd8);
    puVar14 = *(undefined8 **)(unaff_x29 + -0xe0);
    puVar14[2] = *(undefined8 *)(unaff_x29 + -200);
    puVar14[1] = uVar15;
    *puVar14 = uVar8;
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


