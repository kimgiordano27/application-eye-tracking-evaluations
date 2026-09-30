/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_state_sessions_get
ENTRY_POINT: 078f903c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x078f9270) */
/* WARNING: Removing unreachable block (ram,0x078f9240) */
/* WARNING: Removing unreachable block (ram,0x078f9244) */
/* WARNING: Removing unreachable block (ram,0x078f9594) */
/* WARNING: Removing unreachable block (ram,0x078f9254) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_state_sessions_get(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int *unaff_x19;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  long unaff_x21;
  long *plVar10;
  long unaff_x22;
  undefined8 *puVar11;
  long unaff_x23;
  long *plVar12;
  long unaff_x24;
  undefined8 *puVar13;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  char *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined1 *in_stack_00000040;
  undefined4 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  char cStack0000000000000074;
  undefined8 uStack0000000000000078;
  int iStack0000000000000084;
  long lStack0000000000000088;
  int iStack0000000000000094;
  undefined4 *in_stack_00000098;
  
  iStack0000000000000084 = 0;
  puVar11 = *(undefined8 **)(unaff_x22 + 0xab0);
  uStack0000000000000078 = 0;
                    /* catch() { ... } // from try @ 078f8fac with catch @ 078f9048
                       catch() { ... } // from try @ 078f9038 with catch @ 078f9048 */
  plVar12 = *(long **)(unaff_x23 + 0xa90);
                    /* try { // try from 078f904c to 079f904f has its CatchHandler @ 078f9058 */
  cStack0000000000000074 = '\0';
                    /* try { // try from 078f9050 to 079f905b has its CatchHandler @ 078f8dc8 */
  plVar10 = *(long **)(unaff_x21 + 0xb88);
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 078f904c with catch @ 078f9058
                        */
  iStack0000000000000094 = *unaff_x19;
  uStack0000000000000058 = 0;
  lStack0000000000000088 = *(long *)(unaff_x19 + 8);
  puVar13 = *(undefined8 **)(unaff_x24 + 0xa88);
  if (iStack0000000000000094 == 0) {
    iVar3 = 0;
    goto LAB_078f943c;
  }
  if (lStack0000000000000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uStack0000000000000078 = *(undefined8 *)(lStack0000000000000088 + 0x40);
  in_stack_00000010 = (undefined1 *)&stack0x00000094;
  in_stack_00000020 = &stack0x00000078;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000074;
  cStack0000000000000074 = '\0';
  FUN_067b43ac(uStack0000000000000078,&stack0x00000074,0);
  if (lStack0000000000000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar9 = *(long **)(in_stack_00000098 + 10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar9;
  lVar7 = *(long *)(lStack0000000000000088 + 0x38);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0848b5c8) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_078f911c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_0848b5c8,0xc);
LAB_078f911c:
  uStack0000000000000068 = (*(code *)*puVar1)(plVar9,puVar1[1]);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_0577e7a8(lVar7,uStack0000000000000068,*(undefined8 *)(in_stack_00000098 + 10),
               *(undefined8 *)Unity_Properties_TypeConverter<double,_string>_TypeInfo);
  if (lStack0000000000000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lStack0000000000000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar3 = 4;
  if (*(int *)(*(long *)(lStack0000000000000088 + 0x38) + 0x20) < 2) {
    iVar3 = 5;
  }
  if ((iStack0000000000000094 < 0) && (*in_stack_00000018 != '\0')) {
    thunk_FUN_03a98474(*in_stack_00000020,0);
  }
  if (iVar3 != 5) {
    if (iVar3 == 4) goto LAB_078f9548;
    if (iVar3 != 0) {
      return;
    }
  }
  iStack0000000000000084 = 0;
  if (lStack0000000000000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uStack0000000000000078 = *(undefined8 *)(lStack0000000000000088 + 0x40);
  in_stack_00000010 = (undefined1 *)&stack0x00000094;
  in_stack_00000020 = &stack0x00000078;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000074;
  cStack0000000000000074 = '\0';
  FUN_067b43ac(uStack0000000000000078,&stack0x00000074,0);
  if (lStack0000000000000088 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lStack0000000000000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iStack0000000000000084 = *(int *)(*(long *)(lStack0000000000000088 + 0x38) + 0x20);
  if ((iStack0000000000000094 < 0) && (*in_stack_00000018 != '\0')) {
    thunk_FUN_03a98474(*in_stack_00000020,0);
  }
  while (iStack0000000000000084 != 0) {
    if (lStack0000000000000088 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000078 = *(undefined8 *)(lStack0000000000000088 + 0x40);
    in_stack_00000010 = (undefined1 *)&stack0x00000094;
    in_stack_00000020 = &stack0x00000078;
    in_stack_00000008 = 0;
    in_stack_00000018 = &stack0x00000074;
    cStack0000000000000074 = '\0';
    FUN_067b43ac(uStack0000000000000078,&stack0x00000074,0);
    if (lStack0000000000000088 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lStack0000000000000088 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar9 = (long *)FUN_0577ef34(*(long *)(lStack0000000000000088 + 0x38),*puVar11);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar12) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_078f93e8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(plVar9,*plVar12,0);
LAB_078f93e8:
    uVar2 = (*(code *)*puVar1)(plVar9,0,puVar1[1]);
    *(undefined8 *)(in_stack_00000098 + 0xe) = uVar2;
    thunk_FUN_03afed3c();
    iVar3 = iStack0000000000000094;
    if ((iStack0000000000000094 < 0) && (*in_stack_00000018 != '\0')) {
      thunk_FUN_03a98474(*in_stack_00000020,0);
      iVar3 = iStack0000000000000094;
    }
LAB_078f943c:
    in_stack_00000010 = (undefined1 *)&stack0x00000094;
    in_stack_00000018 = (char *)&stack0x00000088;
    in_stack_00000008 = 0;
    in_stack_00000020 = &stack0x00000078;
    in_stack_00000028 = &stack0x00000074;
    in_stack_00000030 = &stack0x00000098;
    in_stack_00000038 = (undefined1 *)&stack0x00000068;
    in_stack_00000040 = (undefined1 *)&stack0x00000084;
    if (iVar3 == 0) {
      iStack0000000000000094 = -1;
      uStack0000000000000060 = *(undefined8 *)(in_stack_00000098 + 0x10);
      *(undefined8 *)(in_stack_00000098 + 0x10) = 0;
      *in_stack_00000098 = 0xffffffff;
LAB_078f950c:
      iVar3 = 0xd;
      FUN_0666e9a8(&stack0x00000060,0);
    }
    else {
      if (lStack0000000000000088 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = FUN_078f8668(lStack0000000000000088,*(undefined8 *)(in_stack_00000098 + 0xe));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uStack0000000000000060 = FUN_067c4bec(lVar4,0);
      uVar5 = FUN_0666e8e0(&stack0x00000060,0);
      if ((uVar5 & 1) != 0) goto LAB_078f950c;
      iStack0000000000000094 = 0;
      *in_stack_00000098 = 0;
      *(undefined8 *)(in_stack_00000098 + 0x10) = uStack0000000000000060;
      thunk_FUN_03afed3c(in_stack_00000098 + 0x10,0);
      puVar8 = in_stack_00000098;
      lVar4 = *plVar10;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar4,extraout_x1,in_stack_00000098);
      }
      iVar3 = 10;
      FUN_043e5990(puVar8 + 2,&stack0x00000060,in_stack_00000098,*puVar13);
    }
    FUN_03a548d0(&stack0x00000008);
    if ((iVar3 != 0xd) && (iVar3 != 0)) {
      return;
    }
    *(undefined8 *)(in_stack_00000098 + 0xe) = 0;
    thunk_FUN_03afed3c(in_stack_00000098 + 0xe,0);
  }
LAB_078f9548:
  puVar8 = in_stack_00000098 + 2;
  *in_stack_00000098 = 0xfffffffe;
  if (*(int *)(*plVar10 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(puVar8,0);
  return;
}


