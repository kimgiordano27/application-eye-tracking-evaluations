/*
FUNCTION_NAME: <PrivateImplementationDetails>$$ComputeStringHash
ENTRY_POINT: 02f436b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f43878) */
/* WARNING: Removing unreachable block (ram,0x02f4354c) */
/* WARNING: Removing unreachable block (ram,0x02f43840) */

long * <PrivateImplementationDetails>__ComputeStringHash(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long *unaff_x21;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  puVar1 = PTR_DAT_03cbed08;
  if (param_2 == 1) {
    plVar7 = (long *)__cxa_begin_catch(param_1);
    lVar15 = *plVar7;
    __cxa_end_catch();
    puVar5 = (undefined8 *)PTR_DAT_03cfffe8;
    puVar1 = PTR_DAT_03cbed08;
    plVar7 = (long *)thunk_FUN_01a89d6c();
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02f43464;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar1,0);
LAB_02f43464:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
    puVar1 = PTR_DAT_03d23cb8;
    if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar15);
    }
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = (**(code **)(*in_stack_00000008 + 0x298))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x2a0));
    lVar15 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d23df8,uVar3);
    (**(code **)(*in_stack_00000008 + 0x368))
              (in_stack_00000008,lVar15,0,*(undefined8 *)(*in_stack_00000008 + 0x370));
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar1;
    }
    plVar7 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x38);
    thunk_FUN_01a4b338();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar7 + 0x318))(plVar7);
    lVar9 = 0;
    iVar12 = 5;
  }
  else {
    plVar7 = (long *)thunk_FUN_01a89d6c();
    if (plVar7 != (long *)0x0) {
      lVar15 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar15 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x02f437f8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar1,0);
code_r0x02f437f8:
      (*(code *)*puVar5)(plVar7,puVar5[1]);
    }
    lVar15 = 0;
    if (param_2 != 1) {
      if (in_stack_00000038._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar7 = (long *)__cxa_begin_catch(param_1);
    lVar9 = *plVar7;
    __cxa_end_catch();
    iVar12 = 0;
    plVar7 = unaff_x21;
    puVar5 = (undefined8 *)PTR_DAT_03cfffe8;
  }
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar9);
  }
  if ((iVar12 == 5) || (iVar12 == 0)) {
    if (lVar15 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar7 = (long *)FUN_01ab6a94(*puVar5,*(undefined4 *)(lVar15 + 0x18));
    puVar2 = PTR_DAT_03d23de8;
    puVar1 = PTR_DAT_03d229e0;
    if (0 < *(int *)(lVar15 + 0x18)) {
      uVar14 = 0;
      do {
        plVar4 = (long *)thunk_FUN_01a89d6c(unaff_x21,*(undefined8 *)puVar1);
        if (plVar4 == (long *)0x0) {
LAB_02f42c94:
          plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
          lVar9 = *(long *)PTR_DAT_03d229f0;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar9);
            lVar9 = *(long *)PTR_DAT_03d229f0;
          }
          if (plVar4 == (long *)0x0) goto LAB_02f43558;
          lVar9 = **(long **)(lVar9 + 0xb8);
          if ((lVar9 != 0) &&
             (lVar8 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
          goto LAB_02f43560;
          if ((int)plVar4[3] == 0) goto LAB_02f4355c;
          plVar4[4] = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar9);
        }
        else {
          lVar8 = *plVar4;
          lVar9 = *(long *)puVar1;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar9) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02f42c7c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01a472ec(plVar4,lVar9,0);
LAB_02f42c7c:
          lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if (lVar9 == 0) goto LAB_02f42c94;
          plVar4 = (long *)0x0;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar14) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar9 = *(long *)(lVar15 + (long)(int)uVar14 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_02f43558;
        uVar13 = *(undefined8 *)(lVar9 + 0xd8);
        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        FUN_02f2d730(lVar8,lVar9,uVar13,unaff_x21,plVar4,0);
        if (plVar7 == (long *)0x0) goto LAB_02f43558;
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_02f43560:
          uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar13,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar14) goto LAB_02f4355c;
        plVar7[(long)(int)uVar14 + 4] = lVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (plVar7 + (long)(int)uVar14 + 4,lVar8);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < *(int *)(lVar15 + 0x18));
    }
    puVar1 = PTR_DAT_03d23cb8;
    if (in_stack_00000018 != (long *)0x0) {
      lVar15 = *(long *)PTR_DAT_03d23cb8;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar15 = *(long *)puVar1;
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x68);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x60);
      uVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
      lVar15 = *in_stack_00000018;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cca1a0) {
            puVar5 = (undefined8 *)(lVar15 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_02f42fbc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
      (*(code *)*puVar5)(in_stack_00000018,uVar13,plVar7,puVar5[1]);
    }
  }
  return plVar7;
}


