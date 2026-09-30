/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.<>c$$.cctor
ENTRY_POINT: 06c17b10
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_<>c___cctor(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  int unaff_w19;
  int iVar13;
  int iVar14;
  uint unaff_w23;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  if (param_1 != 0) {
    if (unaff_w19 == 0) {
      lVar15 = FUN_05212a24(param_1,0,*unaff_x29);
      FUN_06c1558c(lVar15,unaff_w23 ^ 1,*(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x10));
      puVar3 = PTR_DAT_08e87b78;
      lVar6 = *unaff_x28;
      lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x18) == 0) {
          uVar7 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e87bf8,lVar15,
                               *(undefined8 *)PTR_DAT_08e82af0,0);
          lVar15 = *(long *)PTR_DAT_08e69670;
          iVar14 = *(int *)(lVar15 + 0xe0);
joined_r0x06c18040:
          if (iVar14 == 0) {
            thunk_FUN_03cd7500(lVar15);
          }
          FUN_085a48e4(uVar7,0);
          return;
        }
        if (lVar15 != 0) {
          iVar13 = 0;
          iVar14 = *(int *)(lVar15 + 0x10) + 0x4b;
          while( true ) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar6 = *unaff_x28;
            }
            lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
            if (lVar11 == 0) goto LAB_06c18310;
            if (*(int *)(lVar11 + 0x18) <= iVar13) break;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar11 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
              if (lVar11 == 0) goto LAB_06c18310;
            }
            lVar11 = FUN_05212a24(lVar11,iVar13,*(undefined8 *)puVar3);
            if ((lVar11 == 0) || (*(long *)(lVar11 + 0x30) == 0)) goto LAB_06c18310;
            lVar6 = *unaff_x28;
            iVar13 = iVar13 + 1;
            iVar14 = iVar14 + *(int *)(*(long *)(lVar11 + 0x30) + 0x10) + 7;
          }
          plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
          FUN_06f7c298(plVar5,iVar14,0);
          if (plVar5 != (long *)0x0) {
            if (unaff_w23 == 0) {
              lVar6 = FUN_06f7c2f0(plVar5,*(undefined8 *)PTR_DAT_08e87bf8,0);
              if (lVar6 == 0) goto LAB_06c18310;
              lVar15 = FUN_06f7c2f0(lVar6,lVar15,0);
              puVar2 = (undefined8 *)PTR_DAT_08e87d50;
            }
            else {
              lVar6 = FUN_06f7c2f0(plVar5,*(undefined8 *)PTR_DAT_08e87d58,0);
              if ((lVar6 == 0) || (lVar15 = FUN_06f7c2f0(lVar6,lVar15,0), lVar15 == 0))
              goto LAB_06c18310;
              lVar15 = FUN_06f7c2f0(lVar15,*(undefined8 *)PTR_DAT_08e87d60,0);
              lVar6 = *unaff_x28;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_03cd7500(lVar6);
                lVar6 = *unaff_x28;
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
              if ((lVar6 == 0) || (lVar15 == 0)) goto LAB_06c18310;
              lVar15 = FUN_06f85304(lVar15,*(int *)(lVar6 + 0x18) + -1,0);
              puVar2 = (undefined8 *)PTR_DAT_08e87d68;
            }
            if (lVar15 != 0) {
              FUN_06f7c2f0(lVar15,*puVar2,0);
              puVar4 = PTR_DAT_08e87bb8;
              iVar14 = 0;
              goto LAB_06c180e0;
            }
          }
        }
      }
    }
    else {
      plVar5 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,*(int *)(param_1 + 0x18) + -1);
      puVar4 = PTR_DAT_08e87d40;
      puVar3 = PTR_DAT_08e80b78;
      iVar14 = 0;
      uVar16 = 0;
      lVar15 = 0;
      while( true ) {
        lVar6 = *unaff_x28;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar6 = *unaff_x28;
        }
        lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar11 == 0) goto LAB_06c18310;
        if (*(int *)(lVar11 + 0x18) <= iVar14) break;
        if (lVar15 != 0) goto LAB_06c17e88;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar11 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
          if (lVar11 == 0) goto LAB_06c18310;
        }
        lVar15 = FUN_05212a24(lVar11,iVar14,*(undefined8 *)PTR_DAT_08e87b78);
        if ((lVar15 == 0) || (lVar6 = *(long *)(lVar15 + 0x18), lVar6 == 0)) goto LAB_06c18310;
        bVar1 = true;
        uVar10 = 0;
        while ((bVar1 && ((long)uVar10 < (long)*(int *)(lVar6 + 0x18)))) {
          lVar6 = *unaff_x28;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar6 = *unaff_x28;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar7 = FUN_05212a24(lVar6,uVar10 + 1 & 0xffffffff,*unaff_x29);
          lVar6 = *(long *)(lVar15 + 0x18);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          uVar17 = *(undefined8 *)(lVar6 + uVar10 * 8 + 0x20);
          uVar8 = FUN_06c185e4(uVar7,uVar17,&stack0x00000008);
          lVar6 = in_stack_00000008;
          if ((uVar8 & 1) == 0) {
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar16 = FUN_06c16d78(uVar17);
            uVar16 = FUN_06f74e30(*(undefined8 *)puVar4,uVar7,*(undefined8 *)puVar3,uVar16,0);
            bVar1 = false;
          }
          else {
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if ((in_stack_00000008 != 0) &&
               (lVar11 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*plVar5 + 0x40)),
               lVar11 == 0)) {
              uVar7 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
              FUN_03c8f9fc(uVar7,0);
            }
            if (*(uint *)(plVar5 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            plVar5[uVar10 + 4] = lVar6;
            thunk_FUN_03d233cc(plVar5 + uVar10 + 4,lVar6);
            bVar1 = true;
          }
          lVar6 = *(long *)(lVar15 + 0x18);
          uVar10 = uVar10 + 1;
          if (lVar6 == 0) goto LAB_06c18310;
        }
        if (!bVar1) {
          lVar15 = 0;
        }
        iVar14 = iVar14 + 1;
      }
      if (lVar15 == 0) {
        uVar10 = FUN_06f74e14(uVar16,0);
        lVar15 = *(long *)PTR_DAT_08e69670;
        iVar14 = *(int *)(lVar15 + 0xe0);
        uVar7 = *(undefined8 *)PTR_DAT_08e87d48;
        if ((uVar10 & 1) == 0) {
          uVar7 = uVar16;
        }
        goto joined_r0x06c18040;
      }
LAB_06c17e88:
      if (*(long *)(lVar15 + 0x10) != 0) {
        plVar9 = (long *)FUN_0702dc3c(*(long *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x20),plVar5
                                      ,0);
        plVar12 = *(long **)(lVar15 + 0x10);
        if (plVar12 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar12 + 0x408))(plVar12,*(undefined8 *)(*plVar12 + 0x410));
          uVar16 = *(undefined8 *)PTR_DAT_08e81430;
          if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
          }
          uVar16 = FUN_0710fcf0(uVar16,0);
          uVar10 = FUN_0711a11c(uVar7,uVar16,0);
          if ((uVar10 & 1) != 0) {
            if ((plVar9 == (long *)0x0) ||
               (uVar10 = (**(code **)(*plVar9 + 0x138))(plVar9,0,*(undefined8 *)(*plVar9 + 0x140)),
               (uVar10 & 1) != 0)) {
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar7 = *(undefined8 *)PTR_DAT_08e87d78;
            }
            else {
              uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
              uVar7 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar7,0);
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
              }
            }
            FUN_085a3c50(uVar7,0);
          }
          lVar6 = *unaff_x28;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar6 = *unaff_x28;
          }
          lVar11 = **(long **)(lVar6 + 0xb8);
          if (lVar11 == 0) {
            return;
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar11 = **(long **)(*unaff_x28 + 0xb8);
            if (lVar11 == 0) goto LAB_06c18310;
          }
          (**(code **)(lVar11 + 0x18))
                    (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar15 + 0x28),plVar5,
                     *(undefined8 *)(lVar11 + 0x28));
          return;
        }
      }
    }
  }
LAB_06c18310:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06c180e0:
  lVar15 = *unaff_x28;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar15 = *unaff_x28;
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (lVar15 == 0) goto LAB_06c18310;
  if (*(int *)(lVar15 + 0x18) <= iVar14) {
    uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar7,0);
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    puVar3 = PTR_DAT_08e87bc8;
    uVar7 = **(undefined8 **)(*(long *)PTR_DAT_08e87bc8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar10 = FUN_085e285c(uVar7,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
      FUN_06c14f7c(**(long **)(*(long *)puVar3 + 0xb8),1,1);
      return;
    }
    goto LAB_06c18310;
  }
  lVar15 = FUN_06f7c2f0(plVar5,*(undefined8 *)puVar4,0);
  lVar6 = *unaff_x28;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar6);
    lVar6 = *unaff_x28;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (((lVar6 == 0) || (lVar6 = FUN_05212a24(lVar6,iVar14,*(undefined8 *)puVar3), lVar6 == 0)) ||
     (lVar15 == 0)) goto LAB_06c18310;
  FUN_06f7c2f0(lVar15,*(undefined8 *)(lVar6 + 0x30),0);
  iVar14 = iVar14 + 1;
  goto LAB_06c180e0;
}


